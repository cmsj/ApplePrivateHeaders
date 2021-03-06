/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSHashTable;

@interface CSVoiceTriggerXPCServiceProxy : NSObject {

	char _isPhraseSpotterBypassed;
	char _isRaiseToSpeakBypassed;
	NSMutableSet* _activationAssertions;
	NSHashTable* _observers;

}

@property (nonatomic,retain) NSMutableSet * activationAssertions;              //@synthesize activationAssertions=_activationAssertions - In the implementation block
@property (assign,nonatomic) char isPhraseSpotterBypassed;                     //@synthesize isPhraseSpotterBypassed=_isPhraseSpotterBypassed - In the implementation block
@property (assign,nonatomic) char isRaiseToSpeakBypassed;                      //@synthesize isRaiseToSpeakBypassed=_isRaiseToSpeakBypassed - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                          //@synthesize observers=_observers - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSHashTable *)observers;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)enableVoiceTrigger:(char)arg1 withAssertion:(id)arg2 timestamp:(double)arg3 ;
-(void)setPhraseSpotterBypassing:(char)arg1 timeout:(double)arg2 ;
-(void)setRaiseToSpeakBypassing:(char)arg1 timeout:(double)arg2 ;
-(void)notifyVoiceTriggeredSiriSessionCancelled;
-(id)fetchVoiceTriggerStats;
-(NSMutableSet *)activationAssertions;
-(void)setActivationAssertions:(NSMutableSet *)arg1 ;
-(void)notifyServiceConnectionLost;
-(char)isPhraseSpotterBypassed;
-(void)setIsPhraseSpotterBypassed:(char)arg1 ;
-(char)isRaiseToSpeakBypassed;
-(void)setIsRaiseToSpeakBypassed:(char)arg1 ;
@end

