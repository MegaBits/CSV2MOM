//
//  MBDObject.h
//  CSVtoMOM
//
//  Created by Patrick Perini on 10/24/14.
//  Copyright (c) 2014 MegaBits. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface MBDObject : NSManagedObject

@property (nonatomic, retain) NSString * uuid;

@end