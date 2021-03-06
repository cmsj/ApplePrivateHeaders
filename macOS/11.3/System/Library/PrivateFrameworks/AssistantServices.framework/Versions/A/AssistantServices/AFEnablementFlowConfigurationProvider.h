/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AFSettingsConnection;

@interface AFEnablementFlowConfigurationProvider : NSObject {

	AFSettingsConnection* _settingsConnection;

}

@property (nonatomic,retain) AFSettingsConnection * settingsConnection;              //@synthesize settingsConnection=_settingsConnection - In the implementation block
+(id)_createConfigurationForParameters:(id)arg1 ;
+(char)_enablementFlowParticipatingInVoiceSelectionExperiment:(long long)arg1 ;
+(void)_emitVoiceSelectionExperimentLoggingForConfigurationParameters:(id)arg1 didEnable:(char)arg2 ;
+(void)_emitEnablementFlowLoggingForConfigurationParameters:(id)arg1 didEnable:(char)arg2 ;
-(id)init;
-(void)_resolveIfNewUserWithParameters:(id)arg1 forRecognitionLanguages:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_resolveVoiceSelection:(id)arg1 forRecognitionLanguages:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_storedRecognitionLanguageCode;
-(id)_storedVoiceInfo;
-(void)configurationForEnablementFlow:(long long)arg1 recognitionLanguageCodes:(id)arg2 completion:(/*^block*/id)arg3 ;
-(AFSettingsConnection *)settingsConnection;
-(void)setSettingsConnection:(AFSettingsConnection *)arg1 ;
@end

