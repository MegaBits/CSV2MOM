//
//  MBDMove.h
//  CSVtoMOM
//
//  Created by Patrick Perini on 10/24/14.
//  Copyright (c) 2014 MegaBits. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "MBDObject.h"

@class MBDMonster;

@interface MBDMove : MBDObject

@property (nonatomic, retain) NSString * attackerDeferredConditions;
@property (nonatomic, retain) NSString * attackerImmediateConditions;
@property (nonatomic, retain) NSNumber * damageRate;
@property (nonatomic, retain) NSString * defenderDeferredConditions;
@property (nonatomic, retain) NSString * defenderImmediateConditions;
@property (nonatomic, retain) NSNumber * elementalType;
@property (nonatomic, retain) NSNumber * energyCost;
@property (nonatomic, retain) NSNumber * hitRate;
@property (nonatomic, retain) NSNumber * maxHitCount;
@property (nonatomic, retain) NSString * mediaName;
@property (nonatomic, retain) NSNumber * minHitCount;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * summary;
@property (nonatomic, retain) NSSet *monstersWithMoveAsBase;
@property (nonatomic, retain) NSSet *monstersWithMoveAsPossibleDefault;
@property (nonatomic, retain) NSSet *possibleMonsters;
@end

@interface MBDMove (CoreDataGeneratedAccessors)

- (void)addMonstersWithMoveAsBaseObject:(MBDMonster *)value;
- (void)removeMonstersWithMoveAsBaseObject:(MBDMonster *)value;
- (void)addMonstersWithMoveAsBase:(NSSet *)values;
- (void)removeMonstersWithMoveAsBase:(NSSet *)values;

- (void)addMonstersWithMoveAsPossibleDefaultObject:(MBDMonster *)value;
- (void)removeMonstersWithMoveAsPossibleDefaultObject:(MBDMonster *)value;
- (void)addMonstersWithMoveAsPossibleDefault:(NSSet *)values;
- (void)removeMonstersWithMoveAsPossibleDefault:(NSSet *)values;

- (void)addPossibleMonstersObject:(MBDMonster *)value;
- (void)removePossibleMonstersObject:(MBDMonster *)value;
- (void)addPossibleMonsters:(NSSet *)values;
- (void)removePossibleMonsters:(NSSet *)values;

@end
