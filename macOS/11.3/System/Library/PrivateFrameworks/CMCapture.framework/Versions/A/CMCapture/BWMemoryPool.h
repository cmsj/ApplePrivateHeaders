/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CMCapture/CMCapture-Structs.h>
@class NSObject;

@interface BWMemoryPool : NSObject {

	unsigned long long _defaultCacheBufferSize;
	unsigned long long _writeCombineCacheBufferSize;
	NSObject*<OS_dispatch_queue> _queue;
	IOSurfaceRef _writeCombineCacheBuffer;
	IOSurfaceRef _defaultCacheBuffer;

}
+(void)initialize;
-(void)dealloc;
-(int)addMemoryPoolToPropertiesForCaptureStream:(id)arg1 ;
-(int)addMemoryPoolToPropertiesForCaptureDevice:(id)arg1 ;
-(int)removeMemoryPoolFromPropertiesForCaptureDevice:(id)arg1 ;
-(void)_discardMemory;
-(void)_ensureMemoryPool;
-(id)initWithDefaultCacheMemoryPoolSize:(long long)arg1 writeCombineCacheMemoryPoolSize:(long long)arg2 ;
-(void)ensureMemoryAsync;
-(void)ensureMemorySync;
-(void)discardMemory;
-(void)discardMemoryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addMemoryPoolToPixelBufferAttributes:(id)arg1 ;
-(id)newMTLBufferWithLength:(unsigned long long)arg1 forDevice:(id)arg2 ;
@end

