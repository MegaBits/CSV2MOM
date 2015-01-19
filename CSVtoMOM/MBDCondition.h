//
//  MBDCondition.h
//  CSVtoMOM
//
//  Created by Patrick Perini on 10/24/14.
//  Copyright (c) 2014 MegaBits. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "MBDObject.h"


@interface MBDCondition : MBDObject

@property (nonatomic, retain) NSString * appliedSummary;
@property (nonatomic, retain) NSNumber * canMove;
@property (nonatomic, retain) NSNumber * canSwitch;
@property (nonatomic, retain) NSString * category;
@property (nonatomic, retain) NSNumber * elementalType;
@property (nonatomic, retain) NSString * finishedSummary;
@property (nonatomic, retain) NSNumber * hasVisual;
@property (nonatomic, retain) NSNumber * immune;
@property (nonatomic, retain) NSString * initializedSummary;
@property (nonatomic, retain) NSNumber * maxDuration;
@property (nonatomic, retain) NSString * mediaName;
@property (nonatomic, retain) NSNumber * minDuration;
@property (nonatomic, retain) NSString * targetProperty;

@end
