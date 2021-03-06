/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/LAUIAuthenticationViewControllerDelegate.h>
#import <libobjc.A.dylib/PreferencesViewController.h>

@protocol InlineAuthorizationViewControllerDelegate;
@class LAUIAuthenticationViewController, NSString, NSObject;

@interface InlineAuthorizationViewController : NSViewController <LAUIAuthenticationViewControllerDelegate, PreferencesViewController> {

	LAUIAuthenticationViewController* _laViewController;
	NSString* _title;
	NSString* _subtitle;
	NSString* _subtitleNoTouchID;
	NSString* _dfrMessage;
	NSObject*<InlineAuthorizationViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) NSObject*<InlineAuthorizationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double minimumPaneHeight; 
+(id)viewControllerForPasswordsAuthorization;
+(id)viewControllerForCreditCardsAuthorization;
-(NSObject*<InlineAuthorizationViewControllerDelegate>)delegate;
-(void)setDelegate:(NSObject*<InlineAuthorizationViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)cancelAuthentication;
-(void)focusDefaultViewWithHostWindow:(id)arg1 ;
-(void)attemptAuthorization;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 subtitleNoTouchID:(id)arg3 dfrMessage:(id)arg4 ;
-(void)_processAuthenticationResult:(char)arg1 error:(id)arg2 ;
@end

