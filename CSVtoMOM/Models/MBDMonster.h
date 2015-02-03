//
//  MBDMonster.h
//  MegaBits
//
//  Created by Andrew Hart on 26/01/2015.
//  Copyright (c) 2015 MegaBits. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "MBDQuestGiver.h"

@class MBDAbility, MBDMove, MBDTrainer;

@interface MBDMonster : MBDQuestGiver

@property (nonatomic, retain) NSNumber * baseAccuracy;
@property (nonatomic, retain) NSNumber * baseAttack;
@property (nonatomic, retain) NSNumber * baseCritRate;
@property (nonatomic, retain) NSNumber * baseDefense;
@property (nonatomic, retain) NSNumber * baseEnergy;
@property (nonatomic, retain) NSNumber * baseHealth;
@property (nonatomic, retain) NSNumber * baseSpeed;
@property (nonatomic, retain) NSNumber * diurnalityType;
@property (nonatomic, retain) NSNumber * elementalSubtype;
@property (nonatomic, retain) NSNumber * elementalType;
@property (nonatomic, retain) NSNumber * encyclopediaIndex;
@property (nonatomic, retain) NSString * mediaName;
@property (nonatomic, retain) NSString * modifications;
@property (nonatomic, retain) NSNumber * movementType;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * rarityIndex;
@property (nonatomic, retain) NSNumber * rarityType;
@property (nonatomic, retain) NSString * region;
@property (nonatomic, retain) NSString * spriteSize;
@property (nonatomic, retain) NSString * summary;
@property (nonatomic, retain) MBDMove *baseMove;
@property (nonatomic, retain) NSSet *learnableMoves;
@property (nonatomic, retain) NSSet *possibleAbilities;
@property (nonatomic, retain) NSSet *possibleDefaultMoves;
@property (nonatomic, retain) NSSet *possibleTrainers;
@end

@interface MBDMonster (CoreDataGeneratedAccessors)

- (void)addLearnableMovesObject:(MBDMove *)value;
- (void)removeLearnableMovesObject:(MBDMove *)value;
- (void)addLearnableMoves:(NSSet *)values;
- (void)removeLearnableMoves:(NSSet *)values;

- (void)addPossibleAbilitiesObject:(MBDAbility *)value;
- (void)removePossibleAbilitiesObject:(MBDAbility *)value;
- (void)addPossibleAbilities:(NSSet *)values;
- (void)removePossibleAbilities:(NSSet *)values;

- (void)addPossibleDefaultMovesObject:(MBDMove *)value;
- (void)removePossibleDefaultMovesObject:(MBDMove *)value;
- (void)addPossibleDefaultMoves:(NSSet *)values;
- (void)removePossibleDefaultMoves:(NSSet *)values;

- (void)addPossibleTrainersObject:(MBDTrainer *)value;
- (void)removePossibleTrainersObject:(MBDTrainer *)value;
- (void)addPossibleTrainers:(NSSet *)values;
- (void)removePossibleTrainers:(NSSet *)values;

@end
