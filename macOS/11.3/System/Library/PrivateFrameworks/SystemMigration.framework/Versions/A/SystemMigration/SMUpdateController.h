/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/SUOSUMacBuddyDelegate.h>

@class NSString, NSProgressIndicator, NSTextField, NSMutableString, SUOSUMacBuddyController, SMWelcomeController;

@interface SMUpdateController : NSViewController <SUOSUMacBuddyDelegate> {

	char _progressIsIndeterminate;
	NSString* _progressMessage;
	NSProgressIndicator* _progressBar;
	NSTextField* _progressTitle;
	NSMutableString* _paneStory;
	SUOSUMacBuddyController* _suController;
	SMWelcomeController* _parentController;
	unsigned long long _paneID;

}

@property (retain) SUOSUMacBuddyController * suController;              //@synthesize suController=_suController - In the implementation block
@property (retain) SMWelcomeController * parentController;              //@synthesize parentController=_parentController - In the implementation block
@property (assign) unsigned long long paneID;                           //@synthesize paneID=_paneID - In the implementation block
@property (assign) char progressIsIndeterminate;                        //@synthesize progressIsIndeterminate=_progressIsIndeterminate - In the implementation block
@property (retain) NSString * progressMessage;                          //@synthesize progressMessage=_progressMessage - In the implementation block
@property (__weak) NSProgressIndicator * progressBar;                   //@synthesize progressBar=_progressBar - In the implementation block
@property (__weak) NSTextField * progressTitle;                         //@synthesize progressTitle=_progressTitle - In the implementation block
@property (retain) NSMutableString * paneStory;                         //@synthesize paneStory=_paneStory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)viewWillAppear;
-(void)viewDidAppear;
-(NSProgressIndicator *)progressBar;
-(void)setProgressBar:(NSProgressIndicator *)arg1 ;
-(void)installDidBeginForUpdates:(id)arg1 progress:(id)arg2 ;
-(void)installDidFinishSuccessfullyForUpdates:(id)arg1 ;
-(void)installDidFinishWithError:(id)arg1 forUpdates:(id)arg2 ;
-(void)setParentController:(SMWelcomeController *)arg1 ;
-(SMWelcomeController *)parentController;
-(id)initWithParentController:(id)arg1 ;
-(void)setPaneID:(unsigned long long)arg1 ;
-(unsigned long long)paneID;
-(void)setPaneStory:(NSMutableString *)arg1 ;
-(NSMutableString *)paneStory;
-(void)setSuController:(SUOSUMacBuddyController *)arg1 ;
-(SUOSUMacBuddyController *)suController;
-(void)exitingThisPane;
-(void)setProgressIsIndeterminate:(char)arg1 ;
-(NSTextField *)progressTitle;
-(void)presentFailureAlertForError:(id)arg1 ;
-(void)setProgressMessage:(NSString *)arg1 ;
-(char)progressIsIndeterminate;
-(NSString *)progressMessage;
-(void)setProgressTitle:(NSTextField *)arg1 ;
@end

