//
//  MBDTrainer.h
//  MegaBits
//
//  Created by Andrew Hart on 26/01/2015.
//  Copyright (c) 2015 MegaBits. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "MBDQuestGiver.h"

@class MBDMonster;

@interface MBDTrainer : MBDQuestGiver

@property (nonatomic, retain) NSString * battlePhrases;
@property (nonatomic, retain) NSNumber * diurnalityType;
@property (nonatomic, retain) NSString * headName;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * outfitName;
@property (nonatomic, retain) NSString * possibleForenames;
@property (nonatomic, retain) NSNumber * rarityType;
@property (nonatomic, retain) NSString * region;
@property (nonatomic, retain) NSString * tradePhrases;
@property (nonatomic, retain) NSSet *possibleMonsters;
@end

@interface MBDTrainer (CoreDataGeneratedAccessors)

- (void)addPossibleMonstersObject:(MBDMonster *)value;
- (void)removePossibleMonstersObject:(MBDMonster *)value;
- (void)addPossibleMonsters:(NSSet *)values;
- (void)removePossibleMonsters:(NSSet *)values;

@end
