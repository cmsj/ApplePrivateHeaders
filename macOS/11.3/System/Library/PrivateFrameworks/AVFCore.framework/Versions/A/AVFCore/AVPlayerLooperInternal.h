/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AVCallbackCancellation;
#import <AVFCore/AVFCore-Structs.h>
@class AVQueuePlayer, AVPlayerItem, NSMutableArray, NSObject, NSError, AVWeakReference;

@interface AVPlayerLooperInternal : NSObject {

	AVQueuePlayer* loopingPlayer;
	AVPlayerItem* loopingItem;
	NSMutableArray* loopingItemCopies;
	SCD_Struct_CM5 loopRange;
	long long loopCount;
	NSObject*<OS_dispatch_queue> ivarAccessQueue;
	long long playerOriginalActionAtItemEnd;
	SCD_Struct_CM3 forwardPlaybackStartTime;
	AVPlayerItem* lastEnqueuedLoopingItem;
	char waitingForLastLoopingCopyToFinish;
	long long status;
	NSError* error;
	id<AVCallbackCancellation> playerCurrentItemKVOInvoker;
	NSMutableArray* loopingItemStatusKVOInvokers;
	AVWeakReference* weakReference;
	char listeningForItemFailedToPlayToEndTime;

}
@end

