//
//  MBDAbility.h
//  MegaBits
//
//  Created by Andrew Hart on 26/01/2015.
//  Copyright (c) 2015 MegaBits. All rights reserved.
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
