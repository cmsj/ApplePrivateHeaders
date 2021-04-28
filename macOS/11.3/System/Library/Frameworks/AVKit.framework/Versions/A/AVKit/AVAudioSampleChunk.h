/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface AVAudioSampleChunk : NSObject {

	NSMutableArray* _backing;
	float* _samples;
	unsigned long long _channels;
	unsigned long long _samplesPerChannel;

}

@property (getter=isFull,readonly) char full; 
@property (readonly) unsigned long long channels;                       //@synthesize channels=_channels - In the implementation block
@property (readonly) unsigned long long samplesPerChannel;              //@synthesize samplesPerChannel=_samplesPerChannel - In the implementation block
@property (readonly) float* samples; 
-(void)dealloc;
-(float*)samples;
-(unsigned long long)channels;
-(id)initWithChannels:(unsigned long long)arg1 samplesPerChannel:(unsigned long long)arg2 ;
-(char)isFull;
-(unsigned long long)remainingBytes;
-(void)appendBytes:(const void*)arg1 ofLength:(unsigned long long)arg2 toChannel:(unsigned long long)arg3 ;
-(unsigned long long)samplesPerChannel;
@end
