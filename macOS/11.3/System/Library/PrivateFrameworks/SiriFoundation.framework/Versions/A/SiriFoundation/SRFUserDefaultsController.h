/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriFoundation.framework/Versions/A/SiriFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSUserDefaultsController.h>

@class NSString, NSDictionary, NSDate;

@interface SRFUserDefaultsController : NSUserDefaultsController {

	char _preferBluetoothMicrophones;

}

@property (getter=isStatusMenuVisible) char statusMenuVisible; 
@property (readonly) NSString * effectiveMicrophoneIdentifier; 
@property (assign) char preferBluetoothMicrophones;                                                                    //@synthesize preferBluetoothMicrophones=_preferBluetoothMicrophones - In the implementation block
@property (readonly) NSString * preferredBluetoothMicrophoneIdentifier; 
@property (readonly) char isEffectiveMicrophoneInternal; 
@property (assign) NSDictionary * keyboardShortcutDictionary; 
@property (assign) NSDictionary * mostRecentCustomizedKeyboardShorcutDictionary; 
@property (assign,getter=isTypeToSiriEnabled,nonatomic) char typeToSiriEnabled; 
@property (assign,getter=isLockscreenEnabled,nonatomic) char lockscreenEnabled; 
@property (assign,getter=isVoiceTriggerUserEnabled,nonatomic) char voiceTriggerUserEnabled; 
@property (assign,nonatomic) double autoDismissDelay; 
@property (nonatomic,readonly) double autoDismissTextToSpeechTimeout; 
@property (assign,getter=isContinuousSpellCheckingEnabled,nonatomic) char continuousSpellCheckingEnabled; 
@property (getter=isGrammarCheckingEnabled) char grammarCheckingEnabled; 
@property (retain) NSDate * dyingWishForInvocationDate; 
@property (nonatomic,readonly) char designModeEnabled; 
@property (assign,nonatomic) char ignoreMicRequirement; 
+(id)sharedUserDefaultsController;
+(char)_canAccessUserDefaults;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)isContinuousSpellCheckingEnabled;
-(void)setContinuousSpellCheckingEnabled:(char)arg1 ;
-(char)isGrammarCheckingEnabled;
-(void)setGrammarCheckingEnabled:(char)arg1 ;
-(char)isLockscreenEnabled;
-(void)setTypeToSiriEnabled:(char)arg1 ;
-(char)forceThemisBExperience;
-(char)forceThemisAExperience;
-(char)isTypeToSiriEnabled;
-(char)forceVoiceTriggerAvailable;
-(char)isVoiceTriggerUserEnabled;
-(void)notifyUserDidSwitchOnVoiceTrigger;
-(void)setVoiceTriggerUserEnabled:(char)arg1 ;
-(char)forceSATEnrolled;
-(void)_notifyStatusMenuVisibleDidChange;
-(char)preferBluetoothMicrophones;
-(NSString *)preferredBluetoothMicrophoneIdentifier;
-(NSString *)effectiveMicrophoneIdentifier;
-(char)isStatusMenuVisible;
-(void)setStatusMenuVisible:(char)arg1 ;
-(char)isEffectiveMicrophoneInternal;
-(void)notifyVoiceTriggerSuppressionNoLongerHonored;
-(void)notifyInvocationSuppressionNoLongerHonored;
-(NSDictionary *)keyboardShortcutDictionary;
-(void)setKeyboardShortcutDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)mostRecentCustomizedKeyboardShorcutDictionary;
-(void)setMostRecentCustomizedKeyboardShorcutDictionary:(NSDictionary *)arg1 ;
-(void)setLockscreenEnabled:(char)arg1 ;
-(double)autoDismissDelay;
-(void)setAutoDismissDelay:(double)arg1 ;
-(double)autoDismissTextToSpeechTimeout;
-(char)autoDismissHidesCloseButton;
-(NSDate *)dyingWishForInvocationDate;
-(void)setDyingWishForInvocationDate:(NSDate *)arg1 ;
-(char)shouldSkipPausingMedia;
-(void)setSkipPausingMedia:(char)arg1 ;
-(char)forceVoiceTriggerDeviceTypeDistribution:(long long*)arg1 ;
-(char)designModeEnabled;
-(char)ignoreMicRequirement;
-(void)setIgnoreMicRequirement:(char)arg1 ;
-(void)setPreferBluetoothMicrophones:(char)arg1 ;
@end

