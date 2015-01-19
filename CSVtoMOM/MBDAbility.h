//
//  MBDAbility.h
//  CSVtoMOM
//
//  Created by Patrick Perini on 10/24/14.
//  Copyright (c) 2014 MegaBits. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "MBDObject.h"

@class MBDMonster;

@interface MBDAbility : MBDObject

@property (nonatomic, retain) NSString * conditions;
@property (nonatomic, retain) NSSet *possibleMonsters;
@end

@interface MBDAbility (CoreDataGeneratedAccessors)

- (void)addPossibleMonstersObject:(MBDMonster *)value;
- (void)removePossibleMonstersObject:(MBDMonster *)value;
- (void)addPossibleMonsters:(NSSet *)values;
- (void)removePossibleMonsters:(NSSet *)values;

@end
