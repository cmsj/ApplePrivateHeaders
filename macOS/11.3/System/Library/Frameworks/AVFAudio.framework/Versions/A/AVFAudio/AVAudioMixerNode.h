/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVFAudio.framework/Versions/A/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVAudioNode.h>
#import <AVFAudio/AVAudioMixing.h>

@class NSString;

@interface AVAudioMixerNode : AVAudioNode <AVAudioMixing>

@property (assign,nonatomic) float outputVolume; 
@property (nonatomic,readonly) unsigned long long nextAvailableInputBus; 
@property (assign,nonatomic) float volume; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(float)outputVolume;
-(void)setOutputVolume:(float)arg1 ;
-(unsigned long long)nextAvailableInputBus;
-(void)didAttachToEngine:(id)arg1 ;
-(void)setInputVolume:(float)arg1 bus:(unsigned long long)arg2 ;
-(void)setInputPan:(float)arg1 bus:(unsigned long long)arg2 ;
-(void)inputConnected:(unsigned long long)arg1 ;
@end
