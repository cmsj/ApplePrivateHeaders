/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, AFAnalyticsTurnBasedInstrumentationContext, SAUIAssistantUtteranceView;

@interface SiriInstrumentationManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _currentInvocationSource;
	int _lastSiriUIStateSnapShot;
	AFAnalyticsTurnBasedInstrumentationContext* _currentInstrumentationTurnContext;
	SAUIAssistantUtteranceView* _assistantUtteranceViewSnapShot;

}

@property (retain) AFAnalyticsTurnBasedInstrumentationContext * currentInstrumentationTurnContext;              //@synthesize currentInstrumentationTurnContext=_currentInstrumentationTurnContext - In the implementation block
@property (retain) SAUIAssistantUtteranceView * assistantUtteranceViewSnapShot;                                 //@synthesize assistantUtteranceViewSnapShot=_assistantUtteranceViewSnapShot - In the implementation block
@property (assign) int lastSiriUIStateSnapShot;                                                                 //@synthesize lastSiriUIStateSnapShot=_lastSiriUIStateSnapShot - In the implementation block
@property (assign) int currentInvocationSource;                                                                 //@synthesize currentInvocationSource=_currentInvocationSource - In the implementation block
+(id)sharedManager;
-(id)_init;
-(void)emitUIStateTransitionEventWithFromState:(int)arg1 toState:(int)arg2 ;
-(void)emitFinalSpeechTranscriptionEventWith:(id)arg1 ;
-(void)emitPartialSpeechTranscriptionEventWith:(id)arg1 ;
-(void)emitDialogOutputEventWith:(id)arg1 canUseServerTTS:(char)arg2 spokenDialogOutput:(id)arg3 displayedDialogOutput:(id)arg4 ;
-(void)snapshotCurrentAssistantUtteranceView:(id)arg1 ;
-(void)emitUUFRPresentedEventWith:(id)arg1 dialogIdentifier:(id)arg2 dialogPhase:(id)arg3 ;
-(void)emitInvocationEventForVoiceTriggerEnrollment;
-(void)emitInvocationEventUsingRequestOptions:(id)arg1 ;
-(AFAnalyticsTurnBasedInstrumentationContext *)currentInstrumentationTurnContext;
-(void)emitInvocationEventForGuideButtonPressed;
-(void)setAssistantUtteranceViewSnapShot:(SAUIAssistantUtteranceView *)arg1 ;
-(void)setCurrentInstrumentationTurnContext:(AFAnalyticsTurnBasedInstrumentationContext *)arg1 ;
-(void)setCurrentInvocationSource:(int)arg1 ;
-(int)currentInvocationSource;
-(id)_startNewTurnWithLastTurn:(id)arg1 ;
-(void)_emitInstrumentation:(id)arg1 ;
-(void)setLastSiriUIStateSnapShot:(int)arg1 ;
-(int)lastSiriUIStateSnapShot;
-(unsigned)audioDevice:(unsigned)arg1 propertyUInt32:(unsigned)arg2 ;
-(SAUIAssistantUtteranceView *)assistantUtteranceViewSnapShot;
-(void)clearCurrentInstrumentationTurnContext;
-(void)setInvocationSourceForWaveformGlyphButtonPressed;
-(void)emitInvocationEventForTapToEdit:(id)arg1 ;
-(void)emitUIStateTransitionToDismissedStateWithDismissalReason:(int)arg1 ;
-(void)emitUUFRPresentedEventWith:(id)arg1 dialogPhase:(id)arg2 ;
-(void)emitPunchOutInvocationWithSiriViewController:(id)arg1 ;
-(void)emitPunchOutEventWithURL:(id)arg1 appID:(id)arg2 previousTurnIdentifier:(id)arg3 ;
-(void)emitTextToSpeechBeginEvent;
-(void)emitTextToSpeechEndEvent;
@end
