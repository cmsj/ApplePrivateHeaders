/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/SVSPagerViewControllerDelegate.h>
#import <libobjc.A.dylib/SVSTranscriptStackViewControllerDataSource.h>
#import <libobjc.A.dylib/SVSTranscriptStackViewControllerDelegate.h>
#import <SiriUI/SiriUIPresentation.h>

@protocol SiriUIPresentationDataSource, SiriUIPresentationDelegate, AFUIDebugControlling;
@class AFUIStateMachine, NSDate, SVSErrorMessageViewController, SVSPagerViewController, NSViewController, SVSSirilandView, NSString;

@interface SVSSirilandViewController : NSViewController <SVSPagerViewControllerDelegate, SVSTranscriptStackViewControllerDataSource, SVSTranscriptStackViewControllerDelegate, SiriUIPresentation> {

	AFUIStateMachine* _stateMachine;
	char _userInteractionDidOccurSinceActivation;
	long long _currentRequestSource;
	char _passcodeUnlockViewIsShowing;
	double _passcodeUnlockViewStartShowingTime;
	char _emergencyCallViewIsShowing;
	double _emergencyCallViewStartShowingTime;
	char _showingError;
	char _airplaneModeEnabled;
	char _noMicrophone;
	char _noSound;
	char _speechPowerExceededMinimumThreshold;
	char _speechPowerLevelChanged;
	NSDate* _lastRequestDate;
	id<SiriUIPresentationDataSource> _dataSource;
	id<SiriUIPresentationDelegate> _delegate;
	SVSErrorMessageViewController* _siriUnavailableViewController;
	SVSPagerViewController* _pagerViewController;
	id<AFUIDebugControlling> _debugController;
	double _lastPresentationTime;
	NSViewController* _presentedViewControllerForDebugController;

}

@property (nonatomic,retain) SVSSirilandView * view; 
@property (getter=_siriUnavailableViewController,nonatomic,readonly) SVSErrorMessageViewController * siriUnavailableViewController;              //@synthesize siriUnavailableViewController=_siriUnavailableViewController - In the implementation block
@property (getter=_pagerViewController,nonatomic,readonly) SVSPagerViewController * pagerViewController;                                         //@synthesize pagerViewController=_pagerViewController - In the implementation block
@property (nonatomic,retain) id<AFUIDebugControlling> debugController;                                                                           //@synthesize debugController=_debugController - In the implementation block
@property (assign,nonatomic) double lastPresentationTime;                                                                                        //@synthesize lastPresentationTime=_lastPresentationTime - In the implementation block
@property (assign,nonatomic,__weak) NSViewController * presentedViewControllerForDebugController;                                                //@synthesize presentedViewControllerForDebugController=_presentedViewControllerForDebugController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SiriUIPresentationDataSource> dataSource;                                                                 //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUIPresentationDelegate> delegate;                                                                     //@synthesize delegate=_delegate - In the implementation block
-(id<SiriUIPresentationDelegate>)delegate;
-(void)setDelegate:(id<SiriUIPresentationDelegate>)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id<SiriUIPresentationDataSource>)dataSource;
-(void)reloadData;
-(void)setDataSource:(id<SiriUIPresentationDataSource>)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillAppear;
-(void)viewWillDisappear;
-(void)viewDidAppear;
-(id)viewController;
-(id)requestContext;
-(double)contentHeight;
-(void)acousticIDRequestWillStart;
-(void)acousticIDRequestDidFinishWithSuccess:(char)arg1 ;
-(void)conversation:(id)arg1 didRemoveItemsWithIdentifiers:(id)arg2 atIndexPaths:(id)arg3 parentItemIdentifiers:(id)arg4 ;
-(void)conversation:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 ;
-(void)conversation:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2 ;
-(double)lastPresentationTime;
-(id)_activeConversation;
-(id)_previousConversation;
-(char)canSaveConversations;
-(void)siriWillActivateFromSource:(long long)arg1 ;
-(void)siriDidActivateFromSource:(long long)arg1 ;
-(void)siriDidDeactivate;
-(void)siriWillShowPasscodeUnlockAndCancelRequest:(char)arg1 ;
-(void)siriWillShowPasscodeUnlock;
-(void)userInteractionDidOccur;
-(void)didReceiveDismissalAction:(/*^block*/id)arg1 ;
-(void)didReceiveHelpAction;
-(void)didReceiveReportBugAction;
-(void)didPresentCreateBugTemplateWithConfirm:(char)arg1 values:(id)arg2 ;
-(void)didChangeWindowHeight:(char)arg1 ;
-(void)siriDidStartSpeakingWithIdentifier:(id)arg1 ;
-(void)siriDidStopSpeakingWithIdentifier:(id)arg1 speechQueueIsEmpty:(char)arg2 ;
-(id)siriWillStartRequestWithOptions:(id)arg1 ;
-(void)siriRequestWillStart;
-(void)siriAudioRecordingDidChangePowerLevel:(float)arg1 ;
-(void)siriDidTransitionFromState:(long long)arg1 event:(long long)arg2 ;
-(void)siriSessionAvailabilityStateDidChange;
-(char)shouldBlockURLOpenOnTTS:(id)arg1 ;
-(void)startNewConversation;
-(void)speechRecordingDidEndForRequest:(id)arg1 onAVRecordRoute:(id)arg2 ;
-(void)speechRecordingDidCancelForRequest:(id)arg1 onAVRecordRoute:(id)arg2 ;
-(void)speechRecordingDidFailForRequest:(id)arg1 onAVRecordRoute:(id)arg2 withError:(id)arg3 ;
-(void)siriDidDetectMusic;
-(void)speechRecordingDidDetectSpeechStartpoint;
-(void)conversation:(id)arg1 didChangePresentationStateForItemsAtIndexPaths:(id)arg2 ;
-(void)siriDidFinishActionsForConversationItemWithIdentifier:(id)arg1 inConversation:(id)arg2 ;
-(char)shouldDeepFreezeSpeechForIdling;
-(double)idleTimerInterval;
-(char)shouldDismissForIdling;
-(void)minimumHeightDidChangeForSuggestionsViewController:(id)arg1 ;
-(double)statusViewHeightForSuggestionsViewController:(id)arg1 ;
-(void)pagerViewController:(id)arg1 didActivatePageViewController:(id)arg2 oldActivePageViewController:(id)arg3 ;
-(void)pagerViewControllerDidChangeTransitionState:(id)arg1 ;
-(id)_createTranscriptStackViewController;
-(id)_siriUnavailableViewController;
-(id)_pagerViewController;
-(void)inputDeviceChanged:(id)arg1 ;
-(void)_updateSiriAvailabilityAnimated:(char)arg1 ;
-(id)_previousTranscriptStackViewController;
-(id)_activeTranscriptStackViewController;
-(void)_updateConversationAvailability;
-(id)_conversationIdentifiers;
-(id)_identifierOfPreviousConversation;
-(id)_transcriptStackViewControllers;
-(id)conversationForTranscriptStackViewController:(id)arg1 ;
-(void)_speakText:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)_isUsingBuiltInSpeaker;
-(void)_speakText:(id)arg1 ;
-(void)_checkForGuideUpdatesIfNecessaryAsynchronously:(char)arg1 ;
-(id)_transcriptStackViewControllerForConversation:(id)arg1 ;
-(id)_freshTranscriptStackViewController;
-(void)_cancelRequest;
-(id<AFUIDebugControlling>)debugController;
-(char)_shouldEnableIdleTimerForRequestSource:(long long)arg1 andAVRecordRoute:(id)arg2 ;
-(void)_hideAcousticIDSpinner;
-(void)checkForNoSound;
-(char)hasNoMicrophone;
-(id)_conversationItemAtIndexPath:(id)arg1 forTranscriptStackViewController:(id)arg2 ;
-(id)microphoneErrorExplanation;
-(void)_checkGuideSupportedFeaturesAsynchronously:(char)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_checkGuideSupportedFeatures;
-(id)_topTranscriptViewController;
-(long long)siriStateForTranscriptStackViewController:(id)arg1 ;
-(id)domainObjectStoreForTranscriptStackViewController:(id)arg1 ;
-(double)contentWidthForTranscriptStackViewController:(id)arg1 ;
-(double)windowWidthForTranscriptStackViewController:(id)arg1 ;
-(void)transcriptStackViewControllerWillEnterSiriland:(id)arg1 ;
-(void)transcriptStackViewControllerDidExitSiriland:(id)arg1 ;
-(long long)initialDisplayTypeForTranscriptStackViewController:(id)arg1 ;
-(void)showHelpForTranscriptStackViewController:(id)arg1 ;
-(char)transcriptStackViewControllerCanShowHelp:(id)arg1 ;
-(void)transcriptStackViewControllerDidShowHelp:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 didHideVibrantView:(id)arg2 ;
-(void)transcriptStackViewControllerDidChangeContentHeight:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 didPresentConversationItemsWithIdentifiers:(id)arg2 ;
-(void)transcriptStackViewControllerWillBeginEditing:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 didCorrectRecognition:(id)arg2 correctionIdentifier:(id)arg3 forItemAtIndexPath:(id)arg4 userSelectionResults:(id)arg5 ;
-(void)transcriptStackViewController:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)cancelRequestForTranscriptStackViewController:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 speakText:(id)arg2 isPhonetic:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)stopSpeakingForTranscriptStackViewController:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 synthesizeSpeechWithPhoneticText:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)effectiveCoreLocationBundleForTranscriptStackViewController:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 openURL:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)transcriptStackViewControllerDidPunchout;
-(char)transcriptStackViewControllerShouldPreventUserInteraction:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 setStatusViewHidden:(char)arg2 ;
-(void)transcriptStackViewController:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)transcriptStackViewController:(id)arg1 willDismissViewController:(id)arg2 ;
-(void)transcriptStackViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)transcriptStackViewController:(id)arg1 didEditSpeechRecognized:(id)arg2 forInterval:(double)arg3 ;
-(void)transcriptStackViewController:(id)arg1 didScrollForInterval:(double)arg2 ;
-(void)transcriptStackViewController:(id)arg1 didShowSnippetWithIdentifier:(id)arg2 metricsContext:(id)arg3 forInterval:(double)arg4 ;
-(void)transcriptStackViewController:(id)arg1 stashSnippetControllerCard:(id)arg2 ;
-(void)siriWillHidePasscodeUnlock;
-(void)siriDidHidePasscodeUnlock;
-(id)_itemInPreviousConversationAtIndexPath:(id)arg1 ;
-(id)_itemInCurrentConversationAtIndexPath:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 setHelpButtonEmphasized:(char)arg2 ;
-(void)transcriptStackViewControllerPulseHelpButton:(id)arg1 ;
-(void)_presentRadarComposeController;
-(void)_handleDidShowEmergencyCallView:(id)arg1 ;
-(void)_handleWillLeaveEmergencyCallView:(id)arg1 ;
-(void)setDebugController:(id<AFUIDebugControlling>)arg1 ;
-(void)setLastPresentationTime:(double)arg1 ;
-(NSViewController *)presentedViewControllerForDebugController;
-(void)setPresentedViewControllerForDebugController:(NSViewController *)arg1 ;
@end

