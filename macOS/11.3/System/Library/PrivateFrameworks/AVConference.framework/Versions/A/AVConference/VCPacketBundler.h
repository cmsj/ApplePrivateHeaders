/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCPacketBundler : NSObject {

	char* _buffer;
	unsigned _bufferSize;
	unsigned _maxPacketSize;
	opaque_pthread_mutex_t _mutex;
	unsigned _packetsPerBundle;
	int _payload;
	unsigned _timestamp;
	unsigned _encodedBufferSize;
	unsigned _accessUnitDataSectionSize;
	unsigned _bundledPackets;
	char _currentBundleVoiceActivity;
	char _lastBundleVoiceActivity;
	tagAccessUnitHeaderInfo _accessUnitHeaderInfo;
	int _bundlingScheme;
	char _allowLargePackets;
	char _isFull;
	int _operatingMode;
	unsigned char _priority;

}

@property (assign,nonatomic) unsigned maxPacketSize; 
@property (assign,nonatomic) char allowLargePackets;                    //@synthesize allowLargePackets=_allowLargePackets - In the implementation block
@property (assign,nonatomic) int payload;                               //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) unsigned timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) int bundlingScheme;                        //@synthesize bundlingScheme=_bundlingScheme - In the implementation block
@property (nonatomic,readonly) unsigned packetsPerBundle; 
@property (nonatomic,readonly) char* encodedBuffer; 
@property (nonatomic,readonly) unsigned encodedBufferSize; 
@property (nonatomic,readonly) unsigned bundledPackets;                 //@synthesize bundledPackets=_bundledPackets - In the implementation block
@property (nonatomic,readonly) char isFull;                             //@synthesize isFull=_isFull - In the implementation block
@property (nonatomic,readonly) char isTalkSpurtStart; 
@property (nonatomic,readonly) unsigned char priority;                  //@synthesize priority=_priority - In the implementation block
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(unsigned)timestamp;
-(unsigned char)priority;
-(void)setPayload:(int)arg1 ;
-(int)payload;
-(void)setTimestamp:(unsigned)arg1 ;
-(char)isFull;
-(void)setBundlingScheme:(int)arg1 ;
-(char)setPacketsPerBundle:(unsigned)arg1 ;
-(void)resetBuffer;
-(unsigned)packetsPerBundle;
-(unsigned)maxPacketSize;
-(unsigned)bundledPackets;
-(void)setAllowLargePackets:(char)arg1 ;
-(void)initLock;
-(char)reallocateBufferWithMaxPacketSize:(unsigned)arg1 maxPacketCount:(unsigned)arg2 ;
-(void)releaseBundleBuffer;
-(unsigned)bundleBufferSizeWidthMaxPacketSize:(unsigned)arg1 maxPacketCount:(unsigned)arg2 ;
-(char*)encodedBufferForRFC3640;
-(unsigned)encodedBufferSizeForRFC3640;
-(unsigned)accessUnitHeaderSectionSize;
-(char*)accessUnitDataSectionHead;
-(unsigned)accessUnitHeaderSectionSizeMaximum;
-(char)bundleAudioLegacy:(void*)arg1 numInputBytes:(unsigned)arg2 payloadType:(int)arg3 timestamp:(unsigned)arg4 ;
-(char)bundleAudioRFC3640:(void*)arg1 numInputBytes:(unsigned)arg2 payloadType:(int)arg3 timestamp:(unsigned)arg4 ;
-(char)_copyInputBytes:(void*)arg1 numInputBytes:(unsigned)arg2 payloadType:(int)arg3 timestamp:(unsigned)arg4 ;
-(void)updatePriority:(unsigned char)arg1 ;
-(id)initWithOperatingMode:(int)arg1 ;
-(char)allocateBundleBuffer:(unsigned)arg1 ;
-(void)setMaxPacketSize:(unsigned)arg1 ;
-(char*)encodedBuffer;
-(unsigned)encodedBufferSize;
-(char)isTalkSpurtStart;
-(char)bundleAudio:(void*)arg1 numInputBytes:(unsigned)arg2 payloadType:(int)arg3 timestamp:(unsigned)arg4 voiceActivity:(char)arg5 priority:(unsigned char)arg6 ;
-(char)allowLargePackets;
-(int)bundlingScheme;
@end
