/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue, __NSCFURLSessionConnectionDelegate, OS_dispatch_data;
@class NSURLSessionTask, NSObject, NSURLResponse;

@interface __NSCFURLSessionConnection : NSObject <NSCopying> {

	NSURLSessionTask* _task;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<__NSCFURLSessionConnectionDelegate> _delegate;
	NSURLResponse* _cacheResponse;
	NSObject*<OS_dispatch_data> _cacheData;
	unsigned long long _cacheDataMax;
	long long _maxCacheEntrySize;

}
-(id)initWithTask:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(void)expectedProgressTargetChanged;
-(void)setPriorityHint:(float)arg1 incremental:(char)arg2 ;
-(void)setPoolPriority:(long long)arg1 ;
-(void)setIsDownload:(char)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)resume;
-(void)cancel;
-(void)suspend;
-(void)setBytesPerSecondLimit:(long long)arg1 ;
-(void)setTLSMinimumSupportedProtocolVersion:(unsigned short)arg1 ;
-(void)setTLSMaximumSupportedProtocolVersion:(unsigned short)arg1 ;
@end

