/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class NSMutableString, NSString, SMWelcomeController, NSTimer;

@interface SMRestartController : NSViewController {

	NSMutableString* _paneStory;
	unsigned long long _remainingSeconds;
	NSString* _countdownText;
	NSString* _postRestartText;
	SMWelcomeController* _parentController;
	unsigned long long _paneID;
	NSTimer* _restartTimer;

}

@property (retain) SMWelcomeController * parentController;              //@synthesize parentController=_parentController - In the implementation block
@property (assign) unsigned long long paneID;                           //@synthesize paneID=_paneID - In the implementation block
@property (retain) NSString * countdownText;                            //@synthesize countdownText=_countdownText - In the implementation block
@property (retain) NSString * postRestartText;                          //@synthesize postRestartText=_postRestartText - In the implementation block
@property (retain) NSTimer * restartTimer;                              //@synthesize restartTimer=_restartTimer - In the implementation block
@property (retain) NSMutableString * paneStory;                         //@synthesize paneStory=_paneStory - In the implementation block
@property (assign) unsigned long long remainingSeconds;                 //@synthesize remainingSeconds=_remainingSeconds - In the implementation block
-(void)viewWillAppear;
-(void)viewDidAppear;
-(void)setRemainingSeconds:(unsigned long long)arg1 ;
-(unsigned long long)remainingSeconds;
-(void)setParentController:(SMWelcomeController *)arg1 ;
-(SMWelcomeController *)parentController;
-(id)initWithParentController:(id)arg1 ;
-(void)setPaneID:(unsigned long long)arg1 ;
-(unsigned long long)paneID;
-(void)setPaneStory:(NSMutableString *)arg1 ;
-(void)setPostRestartText:(NSString *)arg1 ;
-(void)restartConfirmationTimerDidFire:(id)arg1 ;
-(void)setRestartTimer:(NSTimer *)arg1 ;
-(void)setCountdownText:(NSString *)arg1 ;
-(void)restartNow:(id)arg1 ;
-(NSTimer *)restartTimer;
-(NSMutableString *)paneStory;
-(NSString *)countdownText;
-(NSString *)postRestartText;
@end

