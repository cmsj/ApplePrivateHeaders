/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UniversalAccess.framework/Versions/A/UniversalAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UniversalAccess/UAOnboardingViewController.h>

@protocol WelcomeViewControllerDelegate;
@class UAOnboardingWelcomeCategoryViewController, NSButton, UAOnboardingWelcomeFeature;

@interface UAOnboardingWelcomeViewController : UAOnboardingViewController {

	UAOnboardingWelcomeCategoryViewController* _visionCategoryViewController;
	UAOnboardingWelcomeCategoryViewController* _hearingCategoryViewController;
	UAOnboardingWelcomeCategoryViewController* _motorCategoryViewController;
	UAOnboardingWelcomeCategoryViewController* _cognitiveCategoryViewController;
	id<WelcomeViewControllerDelegate> _delegate;
	NSButton* __visionButtonOverlay;
	NSButton* __motorButtonOverlay;
	NSButton* __hearingButtonOverlay;
	NSButton* __cognitiveButtonOverlay;

}

@property (nonatomic,retain) NSButton * _visionButtonOverlay;                                                          //@synthesize _visionButtonOverlay=__visionButtonOverlay - In the implementation block
@property (nonatomic,retain) NSButton * _motorButtonOverlay;                                                           //@synthesize _motorButtonOverlay=__motorButtonOverlay - In the implementation block
@property (nonatomic,retain) NSButton * _hearingButtonOverlay;                                                         //@synthesize _hearingButtonOverlay=__hearingButtonOverlay - In the implementation block
@property (nonatomic,retain) NSButton * _cognitiveButtonOverlay;                                                       //@synthesize _cognitiveButtonOverlay=__cognitiveButtonOverlay - In the implementation block
@property (nonatomic,retain) UAOnboardingWelcomeFeature * feature; 
@property (nonatomic,retain) UAOnboardingWelcomeCategoryViewController * visionCategoryViewController;                 //@synthesize visionCategoryViewController=_visionCategoryViewController - In the implementation block
@property (nonatomic,retain) UAOnboardingWelcomeCategoryViewController * hearingCategoryViewController;                //@synthesize hearingCategoryViewController=_hearingCategoryViewController - In the implementation block
@property (nonatomic,retain) UAOnboardingWelcomeCategoryViewController * motorCategoryViewController;                  //@synthesize motorCategoryViewController=_motorCategoryViewController - In the implementation block
@property (nonatomic,retain) UAOnboardingWelcomeCategoryViewController * cognitiveCategoryViewController;              //@synthesize cognitiveCategoryViewController=_cognitiveCategoryViewController - In the implementation block
@property (assign,nonatomic,__weak) id<WelcomeViewControllerDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
-(id<WelcomeViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WelcomeViewControllerDelegate>)arg1 ;
-(void)_setup;
-(void)viewDidLoad;
-(id)initWithFeature:(id)arg1 ;
-(void)updateCheckmarksForCompletedCategories:(id)arg1 ;
-(NSButton *)_visionButtonOverlay;
-(UAOnboardingWelcomeCategoryViewController *)visionCategoryViewController;
-(void)addButtonOverlay:(id)arg1 toViewController:(id)arg2 ;
-(NSButton *)_motorButtonOverlay;
-(UAOnboardingWelcomeCategoryViewController *)motorCategoryViewController;
-(NSButton *)_hearingButtonOverlay;
-(UAOnboardingWelcomeCategoryViewController *)hearingCategoryViewController;
-(NSButton *)_cognitiveButtonOverlay;
-(UAOnboardingWelcomeCategoryViewController *)cognitiveCategoryViewController;
-(void)_visionButtonPressed;
-(void)_motorButtonPressed;
-(void)_hearingButtonPresed;
-(void)_cognitiveButtonPressed;
-(void)setVisionCategoryViewController:(UAOnboardingWelcomeCategoryViewController *)arg1 ;
-(void)setHearingCategoryViewController:(UAOnboardingWelcomeCategoryViewController *)arg1 ;
-(void)setMotorCategoryViewController:(UAOnboardingWelcomeCategoryViewController *)arg1 ;
-(void)setCognitiveCategoryViewController:(UAOnboardingWelcomeCategoryViewController *)arg1 ;
-(void)set_visionButtonOverlay:(NSButton *)arg1 ;
-(void)set_motorButtonOverlay:(NSButton *)arg1 ;
-(void)set_hearingButtonOverlay:(NSButton *)arg1 ;
-(void)set_cognitiveButtonOverlay:(NSButton *)arg1 ;
@end
