/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class BWMotionDataPreserver;

@interface BWFrameRateGovernorNode : BWNode {

	char _dropsStillBracketFramesToMaintainConsistentFrameRate;
	char _dropsStartupFramesWithUnstableAE;
	char _preservesMotionDataFromDroppedFrames;
	SCD_Struct_Fi8 _lastEmittedPTS;
	SCD_Struct_Fi8 _lastEmittedStreamingFrameDuration;
	int _activeBracketSequenceRate;
	BWMotionDataPreserver* _motionDataPreserver;
	long long _frameCount;
	char _aeStableAfterStartStreaming;
	int _aeStableTimeoutFrameCount;
	int _ltmStableTimeoutFrameCount;
	int _numFramesSinceAEBecameStable;

}
+(void)initialize;
-(void)dealloc;
-(id)init;
-(id)nodeType;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(id)nodeSubType;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)setDropsStillBracketFramesToMaintainConsistentFrameRate:(char)arg1 ;
-(char)dropsStillBracketFramesToMaintainConsistentFrameRate;
-(void)setDropsStartupFramesWithUnstableAE:(char)arg1 ;
-(char)dropsStartupFramesWithUnstableAE;
-(void)setPreservesMotionDataFromDroppedFrames:(char)arg1 ;
-(char)preservesMotionDataFromDroppedFrames;
@end
