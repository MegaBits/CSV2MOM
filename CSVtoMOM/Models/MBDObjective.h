//
//  MBDObjective.h
//  MegaBits
//
//  Created by Andrew Hart on 26/01/2015.
//  Copyright (c) 2015 MegaBits. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "MBDObject.h"


@interface MBDObjective : MBDObject

@property (nonatomic, retain) NSNumber * count;
@property (nonatomic, retain) NSString * requirement;
@property (nonatomic, retain) NSString * summary;

@end
