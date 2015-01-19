//
//  MBCSVParser.m
//  CSVtoMOM
//
//  Created by Patrick Perini on 7/17/14.
//  Copyright (c) 2014 MegaBits. All rights reserved.
//

#import "MBCSVParser.h"
#import <MagicalRecord/CoreData+MagicalRecord.h>
#import <MagicalRecord/MagicalRecord.h>
#import "MBDCondition.h"
#import "MBDMove.h"
#import "MBDMonster.h"
#import "MBDTrainer.h"
#import "MBDStoreItem.h"
#import "MBDAbility.h"
#import "MBDModification.h"

CHCSVParserOptions MBCSVParserOptions = (CHCSVParserOptions)(CHCSVParserOptionsRecognizesBackslashesAsEscapes | CHCSVParserOptionsSanitizesFields);
#define doItLive continue
NSString *const MBCSVJSONColumnIndicators[1024] = {
    @"conditions",
    @"moves",
    @"abilities",
    @"phrases",
    @"names",
    @"monsters",
    nil
};

@implementation MBCSVParser

+ (void)main
{
    [MagicalRecord setupCoreDataStackWithStoreNamed: @"WorldData"];
    NSArray *classes = @[
        [MBDCondition class],
        [MBDAbility class],
        [MBDMove class],
        [MBDMonster class],
        [MBDTrainer class],
        [MBDStoreItem class],
        [MBDModification class]
    ];
    
    for (Class class in classes)
    {
        [class MR_truncateAll];
        [self loadCSVForClass: class];
    }
    
    [[NSManagedObjectContext MR_defaultContext] MR_saveToPersistentStoreAndWait];    
}

+ (void)loadCSVForClass:(Class)class
{
    NSURL *csvFileURL = [[NSBundle mainBundle] URLForResource: NSStringFromClass(class) withExtension: @"csv"];
    NSMutableArray *csvRows = [[NSArray arrayWithContentsOfCSVURL: csvFileURL options: MBCSVParserOptions] mutableCopy];
    
    NSArray *csvColumns = [csvRows firstObject];
    [csvRows removeObjectAtIndex: 0];
    
    for (NSArray *csvRow in csvRows)
    {
        NSManagedObject *instance = [class MR_createEntity];
        for (NSString *csvColumn in csvColumns)
        {
            if (![instance respondsToSelector: NSSelectorFromString(csvColumn)])
                continue;
            
            NSInteger columnIndex = [csvColumns indexOfObject: csvColumn];
            id csvValue = [csvRow objectAtIndex: columnIndex];
            
            if ([[[[instance entity] relationshipsByName] allKeys] containsObject: csvColumn])
            {
                NSRelationshipDescription *relationshipDescription = [[[instance entity] relationshipsByName] objectForKey: csvColumn];
                Class relationshipClass = NSClassFromString([[relationshipDescription destinationEntity] managedObjectClassName]);
                
                BOOL isValid = [self value: csvValue isValidForColumn: csvColumn];
                if (!isValid) {
                    NSLog(@"\n\n🚫 Invalid value for column name: %@\n%@ 🚫\n\n", csvColumn, csvValue);
                }
                
                if (relationshipDescription.isToMany)
                {
                    NSArray *csvValues = [NSJSONSerialization JSONObjectWithData: [csvValue dataUsingEncoding: NSUTF8StringEncoding] options: 0 error: nil];
                    for (NSString *relationshipInstanceKey in csvValues)
                    {
                        NSManagedObject *relationshipInstance = [relationshipClass MR_findFirstByAttribute: @"uuid" withValue: relationshipInstanceKey];
                        if (!relationshipInstance)
                            doItLive;
                        
                        [[instance mutableSetValueForKey: csvColumn] addObject: relationshipInstance];
                    }
                }
                else
                {
                    [instance setValue: [relationshipClass MR_findFirstByAttribute: @"uuid" withValue: csvValue]
                                forKey: csvColumn];
                }
            }
            else // attribute
            {
                // coerce type
                NSAttributeDescription *attributeDescription = [[[instance entity] attributesByName] objectForKey: csvColumn];
                switch (attributeDescription.attributeType)
                {
                    case NSInteger16AttributeType:
                    case NSInteger32AttributeType:
                    case NSInteger64AttributeType:
                    {
                        [instance setValue: @([csvValue integerValue])
                                    forKey: csvColumn];
                        break;
                    }
                        
                    case NSDecimalAttributeType:
                    case NSDoubleAttributeType:
                    case NSFloatAttributeType:
                    {
                        [instance setValue: @([csvValue doubleValue])
                                    forKey: csvColumn];
                        break;
                    }
                        
                    case NSBooleanAttributeType:
                    {
                        [instance setValue: @([csvValue boolValue])
                                    forKey: csvColumn];
                        break;
                    }
                        
                    default:
                    {
                        [instance setValue: csvValue
                                    forKey: csvColumn];
                    }
                }
            }
        }
    }
}

+ (BOOL)value:(id)value isValidForColumn:(NSString *)columnName {
    if (!value) {
        return YES;
    }
    
    NSString *columnID = MBCSVJSONColumnIndicators[0];
    for (NSInteger columnIDIndex = 1; columnID != nil; columnIDIndex++) {
        if ([[columnName lowercaseString] rangeOfString: columnID].location != NSNotFound) {
            
            // Found JSON column. Check for validity.
            if (![value isKindOfClass: [NSString class]]) {
                return NO;
            }
            
            NSError *error;
            id jsonObject = [NSJSONSerialization JSONObjectWithData: [value dataUsingEncoding: NSUTF8StringEncoding]
                                                            options: 0
                                                              error: &error];
            if (!jsonObject) {
                return NO;
            }
            else {
                return  YES;
            }
        }
        
        columnID = MBCSVJSONColumnIndicators[columnIDIndex];
    }
    
    return YES;
}

@end
