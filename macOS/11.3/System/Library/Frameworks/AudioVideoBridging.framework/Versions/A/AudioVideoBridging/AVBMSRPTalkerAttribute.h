/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/Versions/A/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioVideoBridging/AudioVideoBridging-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVBMACAddress;

@interface AVBMSRPTalkerAttribute : NSObject <NSCopying> {

	unsigned char _priority;
	unsigned char _rank;
	unsigned char _failureCode;
	unsigned short _vlanID;
	unsigned short _maximumFrameSize;
	unsigned short _maximumFramesPerInterval;
	unsigned _accumulatedLatency;
	AVBMACAddress* _destinationMAC;
	unsigned long long _streamID;
	unsigned long long _failureBridgeID;

}

@property (assign,nonatomic) unsigned long long streamID;                          //@synthesize streamID=_streamID - In the implementation block
@property (copy) AVBMACAddress * destinationMAC;                                   //@synthesize destinationMAC=_destinationMAC - In the implementation block
@property (assign,nonatomic) unsigned short vlanID;                                //@synthesize vlanID=_vlanID - In the implementation block
@property (assign,nonatomic) unsigned short maximumFrameSize;                      //@synthesize maximumFrameSize=_maximumFrameSize - In the implementation block
@property (assign,nonatomic) unsigned short maximumFramesPerInterval;              //@synthesize maximumFramesPerInterval=_maximumFramesPerInterval - In the implementation block
@property (assign,nonatomic) unsigned char priority;                               //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) unsigned char rank;                                   //@synthesize rank=_rank - In the implementation block
@property (assign,nonatomic) unsigned accumulatedLatency;                          //@synthesize accumulatedLatency=_accumulatedLatency - In the implementation block
@property (assign,nonatomic) unsigned long long failureBridgeID;                   //@synthesize failureBridgeID=_failureBridgeID - In the implementation block
@property (assign,nonatomic) unsigned char failureCode;                            //@synthesize failureCode=_failureCode - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(unsigned char)arg1 ;
-(unsigned char)priority;
-(void)setRank:(unsigned char)arg1 ;
-(unsigned char)rank;
-(unsigned long long)streamID;
-(void)setStreamID:(unsigned long long)arg1 ;
-(unsigned short)maximumFrameSize;
-(void)setMaximumFrameSize:(unsigned short)arg1 ;
-(unsigned char)failureCode;
-(void)setVlanID:(unsigned short)arg1 ;
-(unsigned short)vlanID;
-(AVBMACAddress *)destinationMAC;
-(unsigned)accumulatedLatency;
-(void)setDestinationMAC:(AVBMACAddress *)arg1 ;
-(void)setMaximumFramesPerInterval:(unsigned short)arg1 ;
-(void)setAccumulatedLatency:(unsigned)arg1 ;
-(void)setFailureBridgeID:(unsigned long long)arg1 ;
-(void)setFailureCode:(unsigned char)arg1 ;
-(unsigned short)maximumFramesPerInterval;
-(unsigned long long)failureBridgeID;
-(unsigned)bandwidthForTrafficClass:(unsigned char)arg1 ;
@end

