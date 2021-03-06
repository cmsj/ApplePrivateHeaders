/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSNumber, NSDictionary;

@interface SASStartSpeech : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * origin; 
@property (nonatomic,copy) NSString * audioDestination; 
@property (nonatomic,copy) NSString * audioSource; 
@property (assign,nonatomic) char clearContext; 
@property (assign,nonatomic) int codec; 
@property (nonatomic,copy) NSString * deviceIdentifier; 
@property (nonatomic,copy) NSString * deviceModel; 
@property (assign,nonatomic) char disableAutoEndpointing; 
@property (nonatomic,copy) NSString * dspStatus; 
@property (assign,nonatomic) char enablePartialResults; 
@property (nonatomic,copy) NSString * headsetAddress; 
@property (nonatomic,copy) NSString * headsetId; 
@property (nonatomic,copy) NSString * headsetName; 
@property (nonatomic,copy) NSNumber * isCarryDevice; 
@property (nonatomic,copy) NSString * motionActivity; 
@property (nonatomic,copy) NSNumber * motionConfidence; 
@property (nonatomic,copy) NSNumber * noiseReductionLevel; 
@property (nonatomic,copy) NSString * turnId; 
@property (nonatomic,copy) NSDictionary * voiceTriggerEventInfo; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)startSpeech;
+(id)startSpeechWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)deviceModel;
-(void)setDeviceModel:(NSString *)arg1 ;
-(void)setMotionActivity:(NSString *)arg1 ;
-(NSString *)origin;
-(void)setOrigin:(NSString *)arg1 ;
-(NSDictionary *)voiceTriggerEventInfo;
-(int)codec;
-(void)setCodec:(int)arg1 ;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSString *)turnId;
-(void)setTurnId:(NSString *)arg1 ;
-(NSString *)audioDestination;
-(void)setAudioDestination:(NSString *)arg1 ;
-(NSString *)audioSource;
-(void)setAudioSource:(NSString *)arg1 ;
-(char)clearContext;
-(void)setClearContext:(char)arg1 ;
-(char)disableAutoEndpointing;
-(void)setDisableAutoEndpointing:(char)arg1 ;
-(NSString *)dspStatus;
-(void)setDspStatus:(NSString *)arg1 ;
-(char)enablePartialResults;
-(void)setEnablePartialResults:(char)arg1 ;
-(NSString *)headsetAddress;
-(void)setHeadsetAddress:(NSString *)arg1 ;
-(NSString *)headsetId;
-(void)setHeadsetId:(NSString *)arg1 ;
-(NSString *)headsetName;
-(void)setHeadsetName:(NSString *)arg1 ;
-(NSNumber *)isCarryDevice;
-(void)setIsCarryDevice:(NSNumber *)arg1 ;
-(NSString *)motionActivity;
-(NSNumber *)motionConfidence;
-(void)setMotionConfidence:(NSNumber *)arg1 ;
-(NSNumber *)noiseReductionLevel;
-(void)setNoiseReductionLevel:(NSNumber *)arg1 ;
-(void)setVoiceTriggerEventInfo:(NSDictionary *)arg1 ;
@end

