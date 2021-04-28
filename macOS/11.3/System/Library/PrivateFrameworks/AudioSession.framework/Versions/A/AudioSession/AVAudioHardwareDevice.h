/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioSession.framework/Versions/A/AudioSession
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioSession/AudioSession-Structs.h>
#import <AudioSession/AVAudioHardwareClock.h>
#import <libobjc.A.dylib/AVAudioRouteDescribing.h>

@class NSArray, NSString;

@interface AVAudioHardwareDevice : AVAudioHardwareClock <AVAudioRouteDescribing>

@property (nonatomic,readonly) unsigned long long inputSafetyOffset; 
@property (nonatomic,readonly) unsigned long long outputSafetyOffset; 
@property (nonatomic,readonly) NSArray * inputStreams; 
@property (nonatomic,readonly) NSArray * outputStreams; 
@property (nonatomic,readonly) NSArray * inputPorts; 
@property (nonatomic,readonly) NSArray * outputPorts; 
@property (assign,nonatomic) AVAudioHardwareStereoPair defaultInputStereoChannels; 
@property (assign,nonatomic) AVAudioHardwareStereoPair defaultOutputStereoChannels; 
@property (nonatomic,copy,readonly) NSString * UID; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSArray *)inputStreams;
-(NSArray *)outputStreams;
-(id)controls;
-(char)canBeDefaultRoute:(unsigned)arg1 ;
-(NSString *)UID;
-(unsigned long long)inputSafetyOffset;
-(unsigned long long)outputSafetyOffset;
-(NSArray *)inputPorts;
-(NSArray *)outputPorts;
-(AVAudioHardwareStereoPair)defaultInputStereoChannels;
-(AVAudioHardwareStereoPair)defaultOutputStereoChannels;
-(void)setDefaultInputStereoChannels:(AVAudioHardwareStereoPair)arg1 ;
-(void)setDefaultOutputStereoChannels:(AVAudioHardwareStereoPair)arg1 ;
-(id)fakeDeviceDescription;
@end
