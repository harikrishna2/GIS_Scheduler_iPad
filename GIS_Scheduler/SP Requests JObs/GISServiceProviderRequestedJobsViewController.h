//
//  GISServiceProviderRequestedJobsViewController.h
//  GIS_Scheduler
//
//  Created by Paradigm on 14/08/14.
//  Copyright (c) 2014 Paradigm. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GISPopOverTableViewController.h"
#import "GISSchedulerSPJobsStore.h"
#import "GISBaseViewController.h"

@interface GISServiceProviderRequestedJobsViewController : GISBaseViewController<UIPopoverControllerDelegate,PopOverSelected_Protocol>
{
    NSMutableArray *chooseRequest_mutArray;
    NSMutableArray *serviceProviderName_mutArray;
    NSMutableArray *typeOfservice_mutArray;
    NSMutableArray *eventType_mutArray;
    NSMutableArray *noOfAttendees_mutArray;
    NSMutableArray *generalLoaction_mutArray;
    
    NSMutableArray *noOfAttendees_ID_mutArray;
    
    UIPopoverController *popover;
    int btnTag;
    
    IBOutlet UILabel *chooseRequest_ID_answer_label;
    IBOutlet UILabel *serviceProvider_answer_label;
    IBOutlet UILabel *startDate_answer_label;
    IBOutlet UILabel *endDate_answer_label;
    IBOutlet UILabel *startTime_answer_label;
    IBOutlet UILabel *endTime_answer_label;
    IBOutlet UILabel *typeOfService_answer_label;
    IBOutlet UILabel *eventType_answer_label;
    IBOutlet UILabel *noOfAttendees_answer_label;
    IBOutlet UILabel *generalLocation_answer_label;
    
    NSString *openToPublic_str;
    NSString *onGoing_str;
    NSString *recordBroadCast_str;
    
    NSString *startDate_str;
    NSString *endDate_str;
    NSString *startTime_str;
    NSString *endTime_str;
    NSMutableString *days_str;
    NSString *spType_ID_str;
    NSString *noOfExpAttendID_str;
    NSString *locationID_str;
    NSString *eventType_ID_str;
    NSString *SPID_str;
    
    NSMutableArray *daysArray;
    
    IBOutlet UIButton *openToPublic_YES_button;
    IBOutlet UIButton *openToPublic_NO_button;
    
    IBOutlet UIButton *onGoing_YES_button;
    IBOutlet UIButton *onGoing_NO_button;
    
    IBOutlet UIButton *recordBroadCast_YES_button;
    IBOutlet UIButton *recordBroadCast_NO_button;
    
    IBOutlet UIButton *monday_Button;
    IBOutlet UIButton *tuesday_Button;
    IBOutlet UIButton *wednesday_Button;
    IBOutlet UIButton *thursday_Button;
    IBOutlet UIButton *friday_Button;
    IBOutlet UIButton *saturday_Button;
    IBOutlet UIButton *sunday_Button;
    IBOutlet UIButton *search_button;
    
    IBOutlet UIImageView *monday_ImageView;
    IBOutlet UIImageView *tuesday_ImageView;
    IBOutlet UIImageView *wednesday_ImageView;
    IBOutlet UIImageView *thursday_ImageView;
    IBOutlet UIImageView *friday_ImageView;
    IBOutlet UIImageView *saturday_ImageView;
    IBOutlet UIImageView *sunday_ImageView;
    
    NSMutableDictionary *weekDays_dictionary_here;
    
    GISAppDelegate *appDelegate;
    
    GISSchedulerSPJobsStore *spJobsStore;
    NSMutableArray *SPJobsArray;
    NSString * ChooserequestID;
    
}
@property (strong, nonatomic) IBOutlet UILabel *openToPublicNoLabel;
@property (strong, nonatomic) IBOutlet UILabel *openToPublicYesLabel;
@property (strong, nonatomic) IBOutlet UILabel *openToPubliclabel;
@property (strong, nonatomic) IBOutlet UILabel *recordedNoLabel;
@property (strong, nonatomic) IBOutlet UILabel *recordedYesLabel;
@property (strong, nonatomic) IBOutlet UILabel *recordedLabel;
@property (strong, nonatomic) IBOutlet UILabel *onGoingNoLabel;
@property (strong, nonatomic) IBOutlet UILabel *onGoingYesLabel;
@property (strong, nonatomic) IBOutlet UILabel *onGoingLabel;
@property (strong, nonatomic) IBOutlet UILabel *sundayLabel;
@property (strong, nonatomic) IBOutlet UILabel *saturdayLabel;
@property (strong, nonatomic) IBOutlet UILabel *fridayLabel;
@property (strong, nonatomic) IBOutlet UILabel *thursdayLabel;
@property (strong, nonatomic) IBOutlet UILabel *wednesdayLAbel;
@property (strong, nonatomic) IBOutlet UILabel *tuesdayLabel;
@property (strong, nonatomic) IBOutlet UILabel *mondayLabel;
@property (strong, nonatomic) IBOutlet UILabel *chooseWeekaysLAbel;
@property (strong, nonatomic) IBOutlet UILabel *noofAttendees;
@property (strong, nonatomic) IBOutlet UILabel *eventTypeLabel;
@property (strong, nonatomic) IBOutlet UILabel *typeOfServiceLabel;
-(IBAction)pickerButton_pressed:(id)sender;
-(IBAction)radioButton_pressed:(id)sender;
-(IBAction)searchButton_pressed:(id)sender;
-(IBAction)weekDays_ButtonPressed:(id)sender;
@property (strong, nonatomic) IBOutlet UILabel *requestIDLabel;
@property (strong, nonatomic) IBOutlet UILabel *serviceProviderName;
@property (strong, nonatomic) IBOutlet UILabel *startDateLabel;
@property (strong, nonatomic) IBOutlet UILabel *endDateLabel;
@property (strong, nonatomic) IBOutlet UILabel *startTimeLabel;
@property (strong, nonatomic) IBOutlet UILabel *generalLocationLabel;

@end
