//
//  MBViewController.m
//  CSVtoMOM
//
//  Created by Patrick Perini on 7/17/14.
//  Copyright (c) 2014 MegaBits. All rights reserved.
//

#import "MBViewController.h"
#import "MBCSVParser.h"

@implementation MBViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    [MBCSVParser main];
    exit(0);
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
