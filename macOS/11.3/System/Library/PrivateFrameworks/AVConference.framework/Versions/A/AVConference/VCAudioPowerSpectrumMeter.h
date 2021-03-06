/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCObject.h>
#import <libobjc.A.dylib/VCAudioPowerSpectrumProtocol.h>

@class NSString;

@interface VCAudioPowerSpectrumMeter : VCObject <VCAudioPowerSpectrumProtocol> {

	unsigned short _audioSpectrumBinCount;
	VCAudioPowerSpectrumMeterRealtimeContext* _realtimeContext;

}

@property (nonatomic,readonly) void* realtimeContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void*)realtimeContext;
-(id)initWithBinCount:(unsigned short)arg1 refreshRate:(double)arg2 delegate:(id)arg3 ;
-(void)registerNewAudioPowerSpectrumForStreamToken:(id)arg1 spectrumSource:(id)arg2 ;
-(void)releaseAudioPowerSpectrumForStreamToken:(id)arg1 ;
-(void)unregisterAllStreams;
@end

