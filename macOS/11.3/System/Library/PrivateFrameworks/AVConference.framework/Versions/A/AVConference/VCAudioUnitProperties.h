/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCAudioUnitProperties : NSObject {

	unsigned _samplesPerFrame;
	AudioStreamBasicDescription _format;
	unsigned _audioUnitType;
	char _allowAudioRecording;
	int _operatingMode;
	unsigned _vpOperatingMode;
	int _deviceRole;
	char _isFarEndVersionInfoValid;
	VoiceIOFarEndVersionInfo _farEndVersionInfo;
	unsigned _remoteCodecType;
	double _remoteCodecSampleRate;
	char _enableDNNVAD;

}

@property (assign,nonatomic) unsigned samplesPerFrame;                                //@synthesize samplesPerFrame=_samplesPerFrame - In the implementation block
@property (assign,nonatomic) AudioStreamBasicDescription format;                      //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) unsigned audioUnitType;                                  //@synthesize audioUnitType=_audioUnitType - In the implementation block
@property (assign,nonatomic) char allowAudioRecording;                                //@synthesize allowAudioRecording=_allowAudioRecording - In the implementation block
@property (assign,nonatomic) int operatingMode;                                       //@synthesize operatingMode=_operatingMode - In the implementation block
@property (assign,nonatomic) int deviceRole;                                          //@synthesize deviceRole=_deviceRole - In the implementation block
@property (assign,nonatomic) unsigned vpOperatingMode;                                //@synthesize vpOperatingMode=_vpOperatingMode - In the implementation block
@property (nonatomic,readonly) char isFarEndVersionInfoValid;                         //@synthesize isFarEndVersionInfoValid=_isFarEndVersionInfoValid - In the implementation block
@property (assign,nonatomic) VoiceIOFarEndVersionInfo farEndVersionInfo; 
@property (assign,nonatomic) unsigned remoteCodecType;                                //@synthesize remoteCodecType=_remoteCodecType - In the implementation block
@property (assign,nonatomic) double remoteCodecSampleRate;                            //@synthesize remoteCodecSampleRate=_remoteCodecSampleRate - In the implementation block
@property (assign,nonatomic) char enableDNNVAD;                                       //@synthesize enableDNNVAD=_enableDNNVAD - In the implementation block
-(id)description;
-(AudioStreamBasicDescription)format;
-(void)setFormat:(AudioStreamBasicDescription)arg1 ;
-(void)setOperatingMode:(int)arg1 ;
-(int)operatingMode;
-(int)deviceRole;
-(char)allowAudioRecording;
-(void)setAudioUnitType:(unsigned)arg1 ;
-(void)setSamplesPerFrame:(unsigned)arg1 ;
-(void)setAllowAudioRecording:(char)arg1 ;
-(void)setDeviceRole:(int)arg1 ;
-(void)setVpOperatingMode:(unsigned)arg1 ;
-(double)remoteCodecSampleRate;
-(void)setRemoteCodecSampleRate:(double)arg1 ;
-(unsigned)remoteCodecType;
-(void)setRemoteCodecType:(unsigned)arg1 ;
-(VoiceIOFarEndVersionInfo)farEndVersionInfo;
-(void)setFarEndVersionInfo:(VoiceIOFarEndVersionInfo)arg1 ;
-(unsigned)audioUnitType;
-(unsigned)samplesPerFrame;
-(unsigned)vpOperatingMode;
-(char)isFarEndVersionInfoValid;
-(char)enableDNNVAD;
-(void)setEnableDNNVAD:(char)arg1 ;
@end

