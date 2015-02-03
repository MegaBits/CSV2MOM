//
//  MBDModification.h
//  MegaBits
//
//  Created by Andrew Hart on 26/01/2015.
//  Copyright (c) 2015 MegaBits. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "MBDObject.h"


@interface MBDModification : MBDObject

@property (nonatomic, retain) NSString * pattern;
@property (nonatomic, retain) NSNumber * quantity;
@property (nonatomic, retain) NSString * resultingObject;

@end
