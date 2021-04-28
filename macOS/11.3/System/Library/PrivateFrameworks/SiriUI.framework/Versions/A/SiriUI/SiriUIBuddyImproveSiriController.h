/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <SiriUI/SiriUIBuddySubviewController.h>

@class SiriUIBuddyController, NSButton, NSString, NSArray;

@interface SiriUIBuddyImproveSiriController : NSViewController <SiriUIBuddySubviewController> {

	SiriUIBuddyController* _parentController;
	NSButton* _optInButton;
	NSButton* _optOutButton;

}

@property (__weak) SiriUIBuddyController * parentController;               //@synthesize parentController=_parentController - In the implementation block
@property (__weak) NSButton * optInButton;                                 //@synthesize optInButton=_optInButton - In the implementation block
@property (__weak) NSButton * optOutButton;                                //@synthesize optOutButton=_optOutButton - In the implementation block
@property (readonly) long long layoutStyle; 
@property (readonly) NSString * templateTitle; 
@property (readonly) NSString * templateBodyText; 
@property (readonly) NSArray * privacyBundleIdentifiers; 
@property (readonly) NSString * templateAlternateButtonTitle; 
@property (readonly) id templateAlternateActionBlock; 
-(void)viewDidLoad;
-(void)viewWillAppear;
-(void)viewDidAppear;
-(long long)layoutStyle;
-(NSArray *)privacyBundleIdentifiers;
-(void)setParentController:(SiriUIBuddyController *)arg1 ;
-(SiriUIBuddyController *)parentController;
-(NSString *)templateTitle;
-(NSString *)templateBodyText;
-(id)initWithParentController:(id)arg1 ;
-(void)willExitPane;
-(NSButton *)optInButton;
-(NSButton *)optOutButton;
-(void)_syncButtonStates;
-(void)mbuaSetDataSharingOptInStatus:(long long)arg1 ;
-(void)optInButtonPressed:(id)arg1 ;
-(void)optOutButtonPressed:(id)arg1 ;
-(void)setOptInButton:(NSButton *)arg1 ;
-(void)setOptOutButton:(NSButton *)arg1 ;
@end
