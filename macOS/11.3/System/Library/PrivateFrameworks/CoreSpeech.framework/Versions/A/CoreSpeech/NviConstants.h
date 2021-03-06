/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreSpeech/CoreSpeech-Structs.h>
@interface NviConstants : NSObject
+(unsigned)inputRecordingNumberOfChannels;
+(float)inputRecordingSampleRate;
+(unsigned)inputRecordingSampleByteDepth;
+(unsigned)inputRecordingSampleBitDepth;
+(unsigned)inputRecordingFramesPerPacket;
+(unsigned)inputRecordingBytesPerPacket;
+(unsigned)inputRecordingBytesPerFrame;
+(unsigned)numChannelsForNviDirectionality;
+(unsigned)nviDirectionalityStartingChannelId;
+(unsigned)nviDirectionalityEndingChannelId;
+(AudioStreamBasicDescription)monoChannelLpcmASBD;
+(AudioStreamBasicDescription)allChannelsLpcmInterleavedASBD;
+(AudioStreamBasicDescription)allChannelsLpcmNonInterleavedASBD;
+(AudioStreamBasicDescription)nviDirectionalityLpcmNonInterleavedASBD;
+(AudioStreamBasicDescription)nviDirectionalityLpcmInterleavedASBD;
+(id)nviLogsRootDir;
@end

