//
//  MBDModification.h
//  CSVtoMOM
//
//  Created by Patrick Perini on 10/24/14.
//  Copyright (c) 2014 MegaBits. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "MBDObject.h"


@interface MBDModification : MBDObject

@property (nonatomic, retain) NSString * pattern;
@property (nonatomic, retain) NSNumber * quantity;
@property (nonatomic, retain) NSString * resultingObject;

@end
