/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/Versions/A/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class STHourglassView, NSImageView, NSTextField, NSButton, NSView, STPasscodeField, NSLayoutConstraint, NSBox, NSStackView, NSString, CNContactStore, STManagementState;

@interface STBlockingViewController : NSViewController {

	char _changePolicyButtonHidden;
	char _fullScreenBehavior;
	char _showingPolicyOptions;
	/*^block*/id _okButtonHandler;
	/*^block*/id _addContactHandler;
	STHourglassView* _hourglassView;
	NSImageView* _hourglassImageView;
	NSImageView* _communicationLimitView;
	NSTextField* _titleLabel;
	NSTextField* _messageLabel;
	NSButton* _okButton;
	NSButton* _ignoreLimitButton;
	NSButton* _askForMoreTimeButton;
	NSButton* _enterScreenTimePasscodeButton;
	NSButton* _addContactButton;
	NSView* _passcodeContainerView;
	STPasscodeField* _passcodeField;
	NSTextField* _passcodeErrorLabel;
	NSButton* _oneMoreMinuteButton;
	NSLayoutConstraint* _oneMoreMinuteButtonWidthConstraint;
	NSButton* _ignoreFor15MinutesButton;
	NSButton* _ignoreForTodayButton;
	NSBox* _horizontalDivider;
	NSTextField* _sendRequestLabel;
	NSButton* _sendRequestButton;
	NSButton* _approveFor15MinutesButton;
	NSButton* _approveForHourButton;
	NSButton* _approveForTodayButton;
	NSButton* _cancelButton;
	NSStackView* _optionsStackView;
	NSLayoutConstraint* _stackViewBottomConstraint;
	NSLayoutConstraint* _stackViewTopConstraint;
	long long _policy;
	NSString* _categoryIdentifier;
	NSString* _bundleIdentifier;
	NSString* _webDomain;
	NSString* _formattedContactHandle;
	CNContactStore* _contactStore;
	STManagementState* _managementState;

}

@property (retain) STHourglassView * hourglassView;                                                        //@synthesize hourglassView=_hourglassView - In the implementation block
@property (retain) NSImageView * hourglassImageView;                                                       //@synthesize hourglassImageView=_hourglassImageView - In the implementation block
@property (retain) NSImageView * communicationLimitView;                                                   //@synthesize communicationLimitView=_communicationLimitView - In the implementation block
@property (retain) NSTextField * titleLabel;                                                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (retain) NSTextField * messageLabel;                                                             //@synthesize messageLabel=_messageLabel - In the implementation block
@property (retain) NSButton * okButton;                                                                    //@synthesize okButton=_okButton - In the implementation block
@property (retain) NSButton * ignoreLimitButton;                                                           //@synthesize ignoreLimitButton=_ignoreLimitButton - In the implementation block
@property (retain) NSButton * askForMoreTimeButton;                                                        //@synthesize askForMoreTimeButton=_askForMoreTimeButton - In the implementation block
@property (retain) NSButton * enterScreenTimePasscodeButton;                                               //@synthesize enterScreenTimePasscodeButton=_enterScreenTimePasscodeButton - In the implementation block
@property (retain) NSButton * addContactButton;                                                            //@synthesize addContactButton=_addContactButton - In the implementation block
@property (retain) NSView * passcodeContainerView;                                                         //@synthesize passcodeContainerView=_passcodeContainerView - In the implementation block
@property (retain) STPasscodeField * passcodeField;                                                        //@synthesize passcodeField=_passcodeField - In the implementation block
@property (retain) NSTextField * passcodeErrorLabel;                                                       //@synthesize passcodeErrorLabel=_passcodeErrorLabel - In the implementation block
@property (retain) NSButton * oneMoreMinuteButton;                                                         //@synthesize oneMoreMinuteButton=_oneMoreMinuteButton - In the implementation block
@property (retain) NSLayoutConstraint * oneMoreMinuteButtonWidthConstraint;                                //@synthesize oneMoreMinuteButtonWidthConstraint=_oneMoreMinuteButtonWidthConstraint - In the implementation block
@property (retain) NSButton * ignoreFor15MinutesButton;                                                    //@synthesize ignoreFor15MinutesButton=_ignoreFor15MinutesButton - In the implementation block
@property (retain) NSButton * ignoreForTodayButton;                                                        //@synthesize ignoreForTodayButton=_ignoreForTodayButton - In the implementation block
@property (retain) NSBox * horizontalDivider;                                                              //@synthesize horizontalDivider=_horizontalDivider - In the implementation block
@property (retain) NSTextField * sendRequestLabel;                                                         //@synthesize sendRequestLabel=_sendRequestLabel - In the implementation block
@property (retain) NSButton * sendRequestButton;                                                           //@synthesize sendRequestButton=_sendRequestButton - In the implementation block
@property (retain) NSButton * approveFor15MinutesButton;                                                   //@synthesize approveFor15MinutesButton=_approveFor15MinutesButton - In the implementation block
@property (retain) NSButton * approveForHourButton;                                                        //@synthesize approveForHourButton=_approveForHourButton - In the implementation block
@property (retain) NSButton * approveForTodayButton;                                                       //@synthesize approveForTodayButton=_approveForTodayButton - In the implementation block
@property (retain) NSButton * cancelButton;                                                                //@synthesize cancelButton=_cancelButton - In the implementation block
@property (retain) NSStackView * optionsStackView;                                                         //@synthesize optionsStackView=_optionsStackView - In the implementation block
@property (retain) NSLayoutConstraint * stackViewBottomConstraint;                                         //@synthesize stackViewBottomConstraint=_stackViewBottomConstraint - In the implementation block
@property (retain) NSLayoutConstraint * stackViewTopConstraint;                                            //@synthesize stackViewTopConstraint=_stackViewTopConstraint - In the implementation block
@property (assign) long long policy;                                                                       //@synthesize policy=_policy - In the implementation block
@property (copy) NSString * categoryIdentifier;                                                            //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (copy) NSString * bundleIdentifier;                                                              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (copy) NSString * webDomain;                                                                     //@synthesize webDomain=_webDomain - In the implementation block
@property (copy) NSString * formattedContactHandle;                                                        //@synthesize formattedContactHandle=_formattedContactHandle - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                                //@synthesize contactStore=_contactStore - In the implementation block
@property (readonly) STManagementState * managementState;                                                  //@synthesize managementState=_managementState - In the implementation block
@property (readonly) char shouldAllowOneMoreMinute; 
@property (readonly) char shouldRequestMoreTime; 
@property (getter=isShowingPolicyOptions) char showingPolicyOptions;                                       //@synthesize showingPolicyOptions=_showingPolicyOptions - In the implementation block
@property (nonatomic,copy) id okButtonHandler;                                                             //@synthesize okButtonHandler=_okButtonHandler - In the implementation block
@property (assign,getter=isChangePolicyButtonHidden,nonatomic) char changePolicyButtonHidden;              //@synthesize changePolicyButtonHidden=_changePolicyButtonHidden - In the implementation block
@property (copy) id addContactHandler;                                                                     //@synthesize addContactHandler=_addContactHandler - In the implementation block
@property (assign) char fullScreenBehavior;                                                                //@synthesize fullScreenBehavior=_fullScreenBehavior - In the implementation block
+(id)newTranslucentBlockingViewController;
+(id)newOpaqueBlockingViewController;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSButton *)okButton;
-(void)viewDidLoad;
-(void)_updateButtons;
-(NSButton *)cancelButton;
-(void)setCancelButton:(NSButton *)arg1 ;
-(NSString *)webDomain;
-(long long)policy;
-(void)setPolicy:(long long)arg1 ;
-(NSString *)categoryIdentifier;
-(void)setCategoryIdentifier:(NSString *)arg1 ;
-(void)_sendRequest:(id)arg1 ;
-(NSTextField *)titleLabel;
-(void)_cancel:(id)arg1 ;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)setTitleLabel:(NSTextField *)arg1 ;
-(NSTextField *)messageLabel;
-(void)setOkButton:(NSButton *)arg1 ;
-(STManagementState *)managementState;
-(char)shouldRequestMoreTime;
-(void)setMessageLabel:(NSTextField *)arg1 ;
-(NSBox *)horizontalDivider;
-(void)setHorizontalDivider:(NSBox *)arg1 ;
-(void)loadViewIfNeeded;
-(void)updateAppearanceUsingPolicy:(long long)arg1 forWebpageURL:(id)arg2 ;
-(void)hideWithAnimation:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)showWithAnimation:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSLayoutConstraint *)stackViewBottomConstraint;
-(void)setStackViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSButton *)addContactButton;
-(void)setAddContactButton:(NSButton *)arg1 ;
-(NSStackView *)optionsStackView;
-(void)setStackViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSButton *)oneMoreMinuteButton;
-(NSButton *)enterScreenTimePasscodeButton;
-(void)setOneMoreMinuteButtonWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_contactStoreDidChange:(id)arg1 ;
-(char)isShowingPolicyOptions;
-(id)okButtonHandler;
-(NSButton *)ignoreFor15MinutesButton;
-(NSButton *)ignoreForTodayButton;
-(NSTextField *)sendRequestLabel;
-(NSButton *)sendRequestButton;
-(NSButton *)approveFor15MinutesButton;
-(NSButton *)approveForHourButton;
-(NSButton *)approveForTodayButton;
-(NSView *)passcodeContainerView;
-(NSLayoutConstraint *)stackViewTopConstraint;
-(void)_updateAddContactButton;
-(NSButton *)ignoreLimitButton;
-(NSButton *)askForMoreTimeButton;
-(char)isChangePolicyButtonHidden;
-(void)setShowingPolicyOptions:(char)arg1 ;
-(NSString *)formattedContactHandle;
-(void)setWebDomain:(NSString *)arg1 ;
-(void)setFormattedContactHandle:(NSString *)arg1 ;
-(void)_updateAppearanceForAskPending;
-(void)_updateAppearanceForBlockedContent:(id)arg1 messageFormatKey:(id)arg2 messageKey:(id)arg3 ;
-(NSImageView *)communicationLimitView;
-(STHourglassView *)hourglassView;
-(NSImageView *)hourglassImageView;
-(char)shouldAllowOneMoreMinute;
-(void)_ignoreLimitForAdditionalTime:(double)arg1 ;
-(id)_askForTimeResource;
-(NSLayoutConstraint *)oneMoreMinuteButtonWidthConstraint;
-(void)_updatePasscodeFieldAndLabelWithTimeoutDate:(id)arg1 attemptCount:(id)arg2 ;
-(STPasscodeField *)passcodeField;
-(void)_showAskForMoreTimeOptions:(id)arg1 ;
-(void)_showPasscodeApprovedOptions;
-(void)_enablePasscodeFieldWithAttemptCount:(id)arg1 ;
-(NSTextField *)passcodeErrorLabel;
-(void)_addContact;
-(id)addContactHandler;
-(id)_newContact;
-(id)_iCloudContainer;
-(void)setOkButtonHandler:(id)arg1 ;
-(void)_ok:(id)arg1 ;
-(void)setChangePolicyButtonHidden:(char)arg1 ;
-(void)updateAppearanceUsingPolicy:(long long)arg1 forCategoryIdentifier:(id)arg2 ;
-(void)updateAppearanceUsingPolicy:(long long)arg1 forBundleIdentifier:(id)arg2 ;
-(void)updateAppearanceUsingBlockedContactHandles:(id)arg1 contactNameByHandle:(id)arg2 forBundleIdentifier:(id)arg3 isApplicationCurrentlyLimited:(char)arg4 contactStore:(id)arg5 ;
-(void)updateAppearanceForContactEditing;
-(void)_showIgnoreLimitOptions:(id)arg1 ;
-(void)_ignoreLimitOptionClicked:(id)arg1 ;
-(void)_oneMoreMinute:(id)arg1 ;
-(void)_enterScreenTimePasscode:(id)arg1 ;
-(void)_back:(id)arg1 ;
-(void)_didFinishEnteringScreenTimePasscode:(id)arg1 ;
-(void)_addContact:(id)arg1 ;
-(void)setAddContactHandler:(id)arg1 ;
-(char)fullScreenBehavior;
-(void)setFullScreenBehavior:(char)arg1 ;
-(void)setHourglassView:(STHourglassView *)arg1 ;
-(void)setHourglassImageView:(NSImageView *)arg1 ;
-(void)setCommunicationLimitView:(NSImageView *)arg1 ;
-(void)setIgnoreLimitButton:(NSButton *)arg1 ;
-(void)setAskForMoreTimeButton:(NSButton *)arg1 ;
-(void)setEnterScreenTimePasscodeButton:(NSButton *)arg1 ;
-(void)setPasscodeContainerView:(NSView *)arg1 ;
-(void)setPasscodeField:(STPasscodeField *)arg1 ;
-(void)setPasscodeErrorLabel:(NSTextField *)arg1 ;
-(void)setOneMoreMinuteButton:(NSButton *)arg1 ;
-(void)setIgnoreFor15MinutesButton:(NSButton *)arg1 ;
-(void)setIgnoreForTodayButton:(NSButton *)arg1 ;
-(void)setSendRequestLabel:(NSTextField *)arg1 ;
-(void)setSendRequestButton:(NSButton *)arg1 ;
-(void)setApproveFor15MinutesButton:(NSButton *)arg1 ;
-(void)setApproveForHourButton:(NSButton *)arg1 ;
-(void)setApproveForTodayButton:(NSButton *)arg1 ;
-(void)setOptionsStackView:(NSStackView *)arg1 ;
@end

