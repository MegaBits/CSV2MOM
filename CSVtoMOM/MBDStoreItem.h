//
//  MBDStoreItem.h
//  CSVtoMOM
//
//  Created by Patrick Perini on 10/24/14.
//  Copyright (c) 2014 MegaBits. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "MBDItem.h"


@interface MBDStoreItem : MBDItem

@property (nonatomic, retain) NSNumber * cost;
@property (nonatomic, retain) NSNumber * storeIndex;

@end
