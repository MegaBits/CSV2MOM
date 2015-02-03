//
//  MBDStoreItem.h
//  MegaBits
//
//  Created by Andrew Hart on 26/01/2015.
//  Copyright (c) 2015 MegaBits. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "MBDItem.h"


@interface MBDStoreItem : MBDItem

@property (nonatomic, retain) NSNumber * cost;
@property (nonatomic, retain) NSNumber * storeIndex;

@end
