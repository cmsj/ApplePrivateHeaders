/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioTransportCommon.framework/Versions/A/AudioTransportCommon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioTransportCommon/AudioTransportCommon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ATCIOA2StreamFormat : NSObject <NSCopying> {

	unsigned _formatID;
	unsigned _formatFlags;
	unsigned _bytesPerPacket;
	unsigned _framesPerPacket;
	unsigned _bytesPerFrame;
	unsigned _channelsPerFrame;
	unsigned _bitsPerChannel;
	double _sampleRate;

}

@property (assign,nonatomic) double sampleRate;                      //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) unsigned formatID;                      //@synthesize formatID=_formatID - In the implementation block
@property (assign,nonatomic) unsigned formatFlags;                   //@synthesize formatFlags=_formatFlags - In the implementation block
@property (assign,nonatomic) unsigned bytesPerPacket;                //@synthesize bytesPerPacket=_bytesPerPacket - In the implementation block
@property (assign,nonatomic) unsigned framesPerPacket;               //@synthesize framesPerPacket=_framesPerPacket - In the implementation block
@property (assign,nonatomic) unsigned bytesPerFrame;                 //@synthesize bytesPerFrame=_bytesPerFrame - In the implementation block
@property (assign,nonatomic) unsigned channelsPerFrame;              //@synthesize channelsPerFrame=_channelsPerFrame - In the implementation block
@property (assign,nonatomic) unsigned bitsPerChannel;                //@synthesize bitsPerChannel=_bitsPerChannel - In the implementation block
+(id)aeaStreamFormatWithDictionary:(id)arg1 ;
+(id)aeaStreamFormatsWithRangedDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)sampleRate;
-(void)setSampleRate:(double)arg1 ;
-(id)initWithIOAudio2Dictionary:(id)arg1 ;
-(unsigned)formatID;
-(unsigned)formatFlags;
-(unsigned)bytesPerPacket;
-(unsigned)framesPerPacket;
-(unsigned)bytesPerFrame;
-(unsigned)channelsPerFrame;
-(unsigned)bitsPerChannel;
-(void)setFormatID:(unsigned)arg1 ;
-(void)setFormatFlags:(unsigned)arg1 ;
-(void)setBytesPerPacket:(unsigned)arg1 ;
-(void)setFramesPerPacket:(unsigned)arg1 ;
-(void)setBytesPerFrame:(unsigned)arg1 ;
-(void)setChannelsPerFrame:(unsigned)arg1 ;
-(void)setBitsPerChannel:(unsigned)arg1 ;
-(id)initWithSampleRate:(double)arg1 numChannels:(unsigned)arg2 commonPCMFormat:(unsigned)arg3 isInterleaved:(char)arg4 ;
-(id)initWithAudioStreamBasicDescription:(AudioStreamBasicDescription*)arg1 ;
-(AudioStreamBasicDescription)audioStreamBasicDescription;
-(unsigned)framesToBytes:(unsigned)arg1 ;
@end

