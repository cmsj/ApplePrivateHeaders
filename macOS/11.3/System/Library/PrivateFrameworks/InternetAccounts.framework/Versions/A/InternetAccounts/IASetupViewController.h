/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class IAAccount, NSView;

@interface IASetupViewController : NSViewController {

	IAAccount* _account;
	NSView* _currentView;
	char _showCreateButton;
	char _showBackButton;
	char _inputValidForNext;
	char _authenticating;
	char _appWillQuitOnCancel;

}

@property (retain) IAAccount * account;                   //@synthesize account=_account - In the implementation block
@property (retain) NSView * currentView;                  //@synthesize currentView=_currentView - In the implementation block
@property (assign) char showCreateButton;                 //@synthesize showCreateButton=_showCreateButton - In the implementation block
@property (assign) char showBackButton;                   //@synthesize showBackButton=_showBackButton - In the implementation block
@property (assign) char inputValidForNext;                //@synthesize inputValidForNext=_inputValidForNext - In the implementation block
@property (assign) char authenticating;                   //@synthesize authenticating=_authenticating - In the implementation block
@property (assign) char appWillQuitOnCancel;              //@synthesize appWillQuitOnCancel=_appWillQuitOnCancel - In the implementation block
-(void)cancel;
-(void)next;
-(IAAccount *)account;
-(void)setAccount:(IAAccount *)arg1 ;
-(id)viewForAccount:(id)arg1 ;
-(void)back;
-(void)createWithCompletion:(/*^block*/id)arg1 ;
-(void)willDisplayInWindow:(id)arg1 ;
-(void)didUpdateCurrentView:(id)arg1 ;
-(NSView *)currentView;
-(void)setCurrentView:(NSView *)arg1 ;
-(char)showCreateButton;
-(void)setShowCreateButton:(char)arg1 ;
-(char)showBackButton;
-(void)setShowBackButton:(char)arg1 ;
-(char)inputValidForNext;
-(void)setInputValidForNext:(char)arg1 ;
-(char)authenticating;
-(void)setAuthenticating:(char)arg1 ;
-(char)appWillQuitOnCancel;
-(void)setAppWillQuitOnCancel:(char)arg1 ;
@end
