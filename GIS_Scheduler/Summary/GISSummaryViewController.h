//
//  GISSummaryViewController.h
//  GIS_Scheduler
//
//  Created by Anand on 18/08/14.
//  Copyright (c) 2014 Paradigm. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GISAppDelegate.h"

#import "GISChooseRequestDetailsObject.h"

@interface GISSummaryViewController : UIViewController
{
    GISAppDelegate *appDelegate;
}

@property(nonatomic,strong)GISChooseRequestDetailsObject *chooseRequestDetailsObj;
@property (strong, nonatomic) NSString *buildingNameString;
@property (strong, nonatomic) NSArray *buildingNameArray;
@property (strong, nonatomic) NSArray *generalLocationArray;
@property (strong, nonatomic) NSString *generalLocationId_string;
@property (strong, nonatomic) NSString *generalLocationValue_string;

@property (strong, nonatomic) NSArray *eventTypeArray;
@property (strong, nonatomic) NSArray *dresscodeArray;

@end