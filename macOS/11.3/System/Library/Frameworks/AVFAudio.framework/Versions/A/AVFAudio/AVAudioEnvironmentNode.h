/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVFAudio.framework/Versions/A/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <AVFAudio/AVAudioNode.h>
#import <AVFAudio/AVAudioMixing.h>

@class AVAudioEnvironmentDistanceAttenuationParameters, AVAudioEnvironmentReverbParameters, NSArray, NSString;

@interface AVAudioEnvironmentNode : AVAudioNode <AVAudioMixing>

@property (assign,nonatomic) long long outputType; 
@property (assign,nonatomic) float outputVolume; 
@property (nonatomic,readonly) unsigned long long nextAvailableInputBus; 
@property (assign,nonatomic) AVAudio3DPoint listenerPosition; 
@property (assign,nonatomic) AVAudio3DVectorOrientation listenerVectorOrientation; 
@property (assign,nonatomic) AVAudio3DAngularOrientation listenerAngularOrientation; 
@property (nonatomic,readonly) AVAudioEnvironmentDistanceAttenuationParameters * distanceAttenuationParameters; 
@property (nonatomic,readonly) AVAudioEnvironmentReverbParameters * reverbParameters; 
@property (nonatomic,readonly) NSArray * applicableRenderingAlgorithms; 
@property (assign,nonatomic) float volume; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(long long)outputType;
-(float)outputVolume;
-(void)setOutputVolume:(float)arg1 ;
-(void)setListenerPosition:(AVAudio3DPoint)arg1 ;
-(void)setListenerVectorOrientation:(AVAudio3DVectorOrientation)arg1 ;
-(void)setOutputType:(long long)arg1 ;
-(unsigned long long)nextAvailableInputBus;
-(void)didAttachToEngine:(id)arg1 ;
-(void)didDetachFromEngine:(id)arg1 error:(id*)arg2 ;
-(NSArray *)applicableRenderingAlgorithms;
-(AVAudio3DPoint)listenerPosition;
-(AVAudio3DVectorOrientation)listenerVectorOrientation;
-(void)setListenerAngularOrientation:(AVAudio3DAngularOrientation)arg1 ;
-(AVAudio3DAngularOrientation)listenerAngularOrientation;
-(AVAudioEnvironmentDistanceAttenuationParameters *)distanceAttenuationParameters;
-(AVAudioEnvironmentReverbParameters *)reverbParameters;
@end

