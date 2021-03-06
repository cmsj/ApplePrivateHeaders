/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VCAudioPayloadConfig;

@interface VCAudioTier : NSObject {

	unsigned networkBitrate;
	unsigned audioCodecBitrate;
	unsigned packetsPerBundle;
	unsigned redNumPayloads;
	unsigned redMaxDelay20ms;
	VCAudioPayloadConfig* payloadConfig;
	int _operatingMode;
	char _bundlingAppliedByCodec;

}

@property (readonly) unsigned networkBitrate; 
@property (readonly) unsigned audioCodecBitrate; 
@property (readonly) unsigned packetsPerBundle; 
@property (readonly) unsigned redNumPayloads; 
@property (readonly) unsigned redMaxDelay20ms; 
@property (readonly) VCAudioPayloadConfig * payloadConfig; 
+(id)newAudioTierForPayloadConfig:(id)arg1 operatingMode:(int)arg2 audioCodecBitrate:(unsigned)arg3 packetsPerBundle:(unsigned)arg4 redNumPayloads:(unsigned)arg5 headerSize:(unsigned)arg6 ;
+(char)bundlingAppliedByCodecForPayload:(int)arg1 operatingMode:(int)arg2 ;
-(id)description;
-(char)isEqualTo:(id)arg1 ;
-(unsigned)redNumPayloads;
-(unsigned)redMaxDelay20ms;
-(unsigned)packetsPerBundle;
-(unsigned)networkBitrate;
-(unsigned)audioCodecBitrate;
-(VCAudioPayloadConfig *)payloadConfig;
-(id)initWithNetworkBitrate:(unsigned)arg1 operatingMode:(int)arg2 audioCodecBitrate:(unsigned)arg3 packetsPerBundle:(unsigned)arg4 redNumPayloads:(unsigned)arg5 payloadConfig:(id)arg6 ;
@end

