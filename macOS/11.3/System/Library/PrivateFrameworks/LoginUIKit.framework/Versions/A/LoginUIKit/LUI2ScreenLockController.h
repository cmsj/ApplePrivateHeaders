/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LUI2MultiWindowController, LUI2AuthHintViewController, LUI2ButtonViewController, LUI2MessageViewController, LUI2PasswordViewController, LUI2GenericMessageViewController, LUI2SpinnerViewController, LUI2StatusViewController, LUI2UserNameViewController, LUI2UserViewController, LUIPopoverController, NSView, LUI2BackgroundViewController;

@interface LUI2ScreenLockController : NSObject {

	char _enabledInternal;
	LUI2MultiWindowController* _multiWindowController;
	LUI2AuthHintViewController* _authHintViewController;
	LUI2ButtonViewController* _buttonViewController;
	LUI2MessageViewController* _messageViewController;
	LUI2PasswordViewController* _passwordViewController;
	LUI2GenericMessageViewController* _screenSharingMessageViewController;
	LUI2SpinnerViewController* _spinnerViewController;
	LUI2StatusViewController* _statusViewController;
	LUI2UserNameViewController* _userNameViewController;
	LUI2UserViewController* _userViewController;
	LUIPopoverController* _popover;
	NSView* _userViewAligner;
	NSView* _footer;

}

@property (assign) char enabledInternal;                                                                 //@synthesize enabledInternal=_enabledInternal - In the implementation block
@property (retain) LUIPopoverController * popover;                                                       //@synthesize popover=_popover - In the implementation block
@property (retain) NSView * userViewAligner;                                                             //@synthesize userViewAligner=_userViewAligner - In the implementation block
@property (retain) NSView * footer;                                                                      //@synthesize footer=_footer - In the implementation block
@property (readonly) LUI2MultiWindowController * multiWindowController;                                  //@synthesize multiWindowController=_multiWindowController - In the implementation block
@property (readonly) LUI2AuthHintViewController * authHintViewController;                                //@synthesize authHintViewController=_authHintViewController - In the implementation block
@property (readonly) LUI2BackgroundViewController * backgroundViewController; 
@property (readonly) LUI2ButtonViewController * buttonViewController;                                    //@synthesize buttonViewController=_buttonViewController - In the implementation block
@property (readonly) LUI2MessageViewController * messageViewController;                                  //@synthesize messageViewController=_messageViewController - In the implementation block
@property (readonly) LUI2PasswordViewController * passwordViewController;                                //@synthesize passwordViewController=_passwordViewController - In the implementation block
@property (readonly) LUI2GenericMessageViewController * screenSharingMessageViewController;              //@synthesize screenSharingMessageViewController=_screenSharingMessageViewController - In the implementation block
@property (readonly) LUI2SpinnerViewController * spinnerViewController;                                  //@synthesize spinnerViewController=_spinnerViewController - In the implementation block
@property (readonly) LUI2StatusViewController * statusViewController;                                    //@synthesize statusViewController=_statusViewController - In the implementation block
@property (readonly) LUI2UserNameViewController * userNameViewController;                                //@synthesize userNameViewController=_userNameViewController - In the implementation block
@property (readonly) LUI2UserViewController * userViewController;                                        //@synthesize userViewController=_userViewController - In the implementation block
@property (getter=isEnabled) char enabled; 
-(char)enabledInternal;
-(void)setEnabledInternal:(char)arg1 ;
-(LUI2UserViewController *)userViewController;
-(LUI2BackgroundViewController *)backgroundViewController;
-(void)shakePopover;
-(LUI2MultiWindowController *)multiWindowController;
-(LUI2AuthHintViewController *)authHintViewController;
-(LUI2ButtonViewController *)buttonViewController;
-(LUI2MessageViewController *)messageViewController;
-(LUI2GenericMessageViewController *)screenSharingMessageViewController;
-(LUI2UserNameViewController *)userNameViewController;
-(NSView *)userViewAligner;
-(void)setUserViewAligner:(NSView *)arg1 ;
-(void)_setupScreenLockController;
-(void)dealloc;
-(id)init;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)showPopover:(id)arg1 ;
-(LUIPopoverController *)popover;
-(void)setPopover:(LUIPopoverController *)arg1 ;
-(NSView *)footer;
-(void)setFooter:(NSView *)arg1 ;
-(void)hidePopover;
-(LUI2PasswordViewController *)passwordViewController;
-(LUI2StatusViewController *)statusViewController;
-(LUI2SpinnerViewController *)spinnerViewController;
-(id)currentPopover;
@end
