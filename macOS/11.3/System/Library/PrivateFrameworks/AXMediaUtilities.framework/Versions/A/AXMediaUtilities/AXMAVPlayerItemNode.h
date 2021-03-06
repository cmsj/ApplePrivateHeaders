/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/Versions/A/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMSourceNode.h>
#import <libobjc.A.dylib/AVPlayerItemLegibleOutputPushDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, AVPlayerItem, AXMVisionAnalysisOptions, NSString;

@interface AXMAVPlayerItemNode : AXMSourceNode <AVPlayerItemLegibleOutputPushDelegate> {

	NSObject*<OS_dispatch_queue> _avkit_queue;
	char _triggeringLegibilityEvents;
	AVPlayerItem* _targetPlayerItem;
	AXMVisionAnalysisOptions* _analysisOptions;

}

@property (assign,nonatomic,__weak) AVPlayerItem * targetPlayerItem;                                             //@synthesize targetPlayerItem=_targetPlayerItem - In the implementation block
@property (nonatomic,retain) AXMVisionAnalysisOptions * analysisOptions;                                         //@synthesize analysisOptions=_analysisOptions - In the implementation block
@property (getter=isTriggeringLegibilityEvents,nonatomic,readonly) char triggeringLegibilityEvents;              //@synthesize triggeringLegibilityEvents=_triggeringLegibilityEvents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)title;
+(char)isSupported;
-(void)outputSequenceWasFlushed:(id)arg1 ;
-(void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(SCD_Struct_AX7)arg4 ;
-(void)nodeInitialize;
-(AXMVisionAnalysisOptions *)analysisOptions;
-(void)setShouldProcessRemotely:(char)arg1 ;
-(id)axmDescription;
-(void)setAnalysisOptions:(AXMVisionAnalysisOptions *)arg1 ;
-(AVPlayerItem *)targetPlayerItem;
-(void)_mainQueue_endAutoTriggerOfLegibilityEvents;
-(void)setTargetPlayerItem:(AVPlayerItem *)arg1 ;
-(void)autoTriggerLegibilityEventsWithAVPlayerItem:(id)arg1 ;
-(void)endAutoTriggerOfLegibilityEvents;
-(char)isTriggeringLegibilityEvents;
@end

