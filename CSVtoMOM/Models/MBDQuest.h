//
//  MBDQuest.h
//  MegaBits
//
//  Created by Andrew Hart on 26/01/2015.
//  Copyright (c) 2015 MegaBits. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "MBDObject.h"

@class MBDQuestGiver;

@interface MBDQuest : MBDObject

@property (nonatomic, retain) NSString * closingCondition;
@property (nonatomic, retain) NSString * failureCondition;
@property (nonatomic, retain) NSString * introSummary;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * nextQuest;
@property (nonatomic, retain) NSString * objectives;
@property (nonatomic, retain) NSString * outroSummary;
@property (nonatomic, retain) NSString * rewards;
@property (nonatomic, retain) NSString * standInSummary;
@property (nonatomic, retain) MBDQuestGiver *questGivers;

@end
