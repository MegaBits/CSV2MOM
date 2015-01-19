//
//  MBDItem.h
//  CSVtoMOM
//
//  Created by Patrick Perini on 10/24/14.
//  Copyright (c) 2014 MegaBits. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "MBDObject.h"


@interface MBDItem : MBDObject

@property (nonatomic, retain) NSNumber * categoryType;
@property (nonatomic, retain) NSString * conditions;
@property (nonatomic, retain) NSNumber * itemUseScenarioType;
@property (nonatomic, retain) NSString * mediaName;
@property (nonatomic, retain) NSString * modifications;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * rarityType;
@property (nonatomic, retain) NSString * summary;
@property (nonatomic, retain) NSNumber * wearableCategoryType;

@end
