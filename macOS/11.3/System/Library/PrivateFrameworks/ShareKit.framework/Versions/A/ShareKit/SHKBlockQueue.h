/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ShareKit.framework/Versions/A/ShareKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ShareKit/ShareKit-Structs.h>
@class NSMutableArray, NSObject;

@interface SHKBlockQueue : NSObject {

	NSMutableArray* _blockUUIDTuples;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _maxSize;

}

@property (assign) unsigned long long maxSize;              //@synthesize maxSize=_maxSize - In the implementation block
-(unsigned long long)size;
-(id)description;
-(id)init;
-(id)initWithQueue:(id)arg1 ;
-(unsigned long long)maxSize;
-(void)setMaxSize:(unsigned long long)arg1 ;
-(id)initWithMaxSize:(unsigned long long)arg1 ;
-(void)addBlock:(/*^block*/id)arg1 ;
-(id)initWithMaxSize:(unsigned long long)arg1 queue:(id)arg2 ;
-(void)addBlock:(/*^block*/id)arg1 uuid:(id)arg2 ;
-(/*^block*/id)removeBlockWithUUID:(id)arg1 ;
-(void)removeAndExecuteBlockWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)removeAndExecuteBlockWithUUID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)removeAndExecuteBlockWithUUID:(id)arg1 size:(CGSize)arg2 completionBlock:(/*^block*/id)arg3 ;
-(/*^block*/id)removeBlock;
-(void)removeAndExecuteBlock;
@end

