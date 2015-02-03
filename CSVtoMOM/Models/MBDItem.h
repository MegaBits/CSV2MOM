//
//  MBDItem.h
//  MegaBits
//
//  Created by Andrew Hart on 26/01/2015.
//  Copyright (c) 2015 MegaBits. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "MBDQuestGiver.h"


@interface MBDItem : MBDQuestGiver

@property (nonatomic, retain) NSNumber * categoryType;
@property (nonatomic, retain) NSString * conditions;
@property (nonatomic, retain) NSString * mediaName;
@property (nonatomic, retain) NSString * modifications;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * rarityType;
@property (nonatomic, retain) NSString * skillRequirements;
@property (nonatomic, retain) NSString * summary;

@end
