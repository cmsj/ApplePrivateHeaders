/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CMCapture/CMCapture-Structs.h>
@class NSObject;

@interface BWDeferredContainerManagerBase : NSObject {

	opaque_pthread_rwlock_t _lock;
	NSObject*<OS_dispatch_queue> _timerQueue;

}
+(void)initialize;
-(void)dealloc;
-(int)deleteContainerForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 ;
-(id)initWithQueuePriority:(unsigned)arg1 ;
-(id)_containerURLForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 exists:(char*)arg3 isDirectory:(char*)arg4 ;
-(char)_insertUniqueManifestIntoTimeSortedArray:(id)arg1 manifestArray:(id)arg2 ;
-(id)manifestsForApplicationID:(id)arg1 err:(int*)arg2 ;
-(id)manifestForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 err:(int*)arg3 ;
@end

