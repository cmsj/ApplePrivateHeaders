/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@protocol SiriUIBuddySubviewController, SiriUIBuddyDelegate, MBSecondPartyHost;
@class NSViewController, SiriUIBuddyEnableSiriController, SiriUIBuddyChooseLanguageController, SiriUIBuddyChooseVoiceController, SiriUIBuddyVoiceTriggerController, SiriUIBuddyVoiceTriggerIntroController, SiriUIBuddyVoiceTriggerOutroController, SiriUIBuddyImproveSiriController, OBTemplateView, NSString, NSDictionary, NSLayoutConstraint, AFVoiceInfo, SiriUIOrbView;

@interface SiriUIBuddyController : NSViewController {

	long long _state;
	NSViewController*<SiriUIBuddySubviewController> _currentPanelController;
	SiriUIBuddyEnableSiriController* _enableSiriController;
	SiriUIBuddyChooseLanguageController* _chooseLanguageController;
	SiriUIBuddyChooseVoiceController* _chooseVoiceController;
	SiriUIBuddyVoiceTriggerController* _voiceTriggerController;
	SiriUIBuddyVoiceTriggerIntroController* _voiceTriggerIntroController;
	SiriUIBuddyVoiceTriggerOutroController* _voiceTriggerOutroController;
	SiriUIBuddyImproveSiriController* _improveSiriController;
	OBTemplateView* _templateView;
	char _enableSiri;
	char _skippedVoiceTrigger;
	NSString* _userChosenSiriLanguageCode;
	NSString* _effectiveSiriLanguageCode;
	id<SiriUIBuddyDelegate> _delegate;
	id<MBSecondPartyHost> _host;
	NSDictionary* _userInfo;
	NSLayoutConstraint* _viewHeightConstraint;
	AFVoiceInfo* _userChosenVoice;
	SiriUIOrbView* _orbView;

}

@property (retain) NSDictionary * userInfo;                                //@synthesize userInfo=_userInfo - In the implementation block
@property (__weak) NSLayoutConstraint * viewHeightConstraint;              //@synthesize viewHeightConstraint=_viewHeightConstraint - In the implementation block
@property (readonly) char siriEnabled; 
@property (readonly) char siriPreviouslyEnabled; 
@property (readonly) char siriNewlyEnabled; 
@property (readonly) char dataSharingPreviouslySpecified; 
@property (assign) char enableSiri;                                        //@synthesize enableSiri=_enableSiri - In the implementation block
@property (assign) char skippedVoiceTrigger;                               //@synthesize skippedVoiceTrigger=_skippedVoiceTrigger - In the implementation block
@property (retain) NSString * userChosenSiriLanguageCode;                  //@synthesize userChosenSiriLanguageCode=_userChosenSiriLanguageCode - In the implementation block
@property (retain) AFVoiceInfo * userChosenVoice;                          //@synthesize userChosenVoice=_userChosenVoice - In the implementation block
@property (retain) NSString * effectiveSiriLanguageCode;                   //@synthesize effectiveSiriLanguageCode=_effectiveSiriLanguageCode - In the implementation block
@property (readonly) OBTemplateView * templateView; 
@property (__weak,readonly) SiriUIOrbView * orbView;                       //@synthesize orbView=_orbView - In the implementation block
@property (__weak,readonly) id<MBSecondPartyHost> host;                    //@synthesize host=_host - In the implementation block
@property (__weak) id<SiriUIBuddyDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
+(void)initialize;
+(id)_stateMachineDispatchQueue;
-(NSDictionary *)userInfo;
-(id<SiriUIBuddyDelegate>)delegate;
-(void)setDelegate:(id<SiriUIBuddyDelegate>)arg1 ;
-(id<MBSecondPartyHost>)host;
-(void)setState:(long long)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillAppear;
-(OBTemplateView *)templateView;
-(long long)initialState;
-(char)siriEnabled;
-(NSLayoutConstraint *)viewHeightConstraint;
-(id)initWithHost:(id)arg1 userInfo:(id)arg2 ;
-(SiriUIOrbView *)orbView;
-(NSString *)effectiveSiriLanguageCode;
-(void)updateOnBoardingKitTemplate;
-(void)moveToPreviousPanel;
-(void)moveToNextPanel;
-(void)setLoadingSpinnerHidden:(char)arg1 ;
-(char)enableSiri;
-(char)_mbuaIsSiriEnabled;
-(char)siriPreviouslyEnabled;
-(long long)_mbuaGetDataSharingOptInStatus;
-(id)_configurationRecognitionLanguageCodes;
-(void)_mbuaSetEnablementLanguages:(id)arg1 ;
-(void)didOpenLid:(id)arg1 ;
-(void)didCloseLid:(id)arg1 ;
-(char)dataSharingPreviouslySpecified;
-(char)siriNewlyEnabled;
-(char)_mbuaRandomVoice;
-(char)_mbuaRequiresVoiceSelection;
-(char)shouldShowState:(long long)arg1 ;
-(char)skippedVoiceTrigger;
-(void)currentPaneWillExit;
-(id)enableSiriController;
-(id)chooseLanguageController;
-(id)chooseVoiceController;
-(id)voiceTriggerIntroController;
-(id)voiceTriggerController;
-(id)voiceTriggerOutroController;
-(id)improveSiriController;
-(NSString *)userChosenSiriLanguageCode;
-(void)setUserChosenSiriLanguageCode:(NSString *)arg1 ;
-(void)setEffectiveSiriLanguageCode:(NSString *)arg1 ;
-(void)setEnableSiri:(char)arg1 ;
-(void)setSkippedVoiceTrigger:(char)arg1 ;
-(void)setViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(AFVoiceInfo *)userChosenVoice;
-(void)setUserChosenVoice:(AFVoiceInfo *)arg1 ;
@end

