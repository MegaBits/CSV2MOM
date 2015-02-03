//
//  MBDQuestGiver.h
//  MegaBits
//
//  Created by Andrew Hart on 26/01/2015.
//  Copyright (c) 2015 MegaBits. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "MBDObject.h"

@class MBDQuest;

@interface MBDQuestGiver : MBDObject

@property (nonatomic, retain) MBDQuest *quests;

@end
