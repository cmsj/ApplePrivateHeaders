/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/Versions/A/QuickLookThumbnailingDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, _QLCacheThread, NSObject;

@interface QLDiskCacheQueryOperation : NSOperation {

	NSMutableDictionary* _thumbnailRequestBatch;
	long long _thumbnailRequestCount;
	_QLCacheThread* _cacheThread;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) NSMutableDictionary * thumbnailRequestBatch;              //@synthesize thumbnailRequestBatch=_thumbnailRequestBatch - In the implementation block
@property (assign) long long thumbnailRequestCount;                          //@synthesize thumbnailRequestCount=_thumbnailRequestCount - In the implementation block
@property (retain) _QLCacheThread * cacheThread;                             //@synthesize cacheThread=_cacheThread - In the implementation block
-(void)dealloc;
-(void)cancel;
-(void)main;
-(id)initWithCacheThread:(id)arg1 ;
-(_QLCacheThread *)cacheThread;
-(void)setCacheThread:(_QLCacheThread *)arg1 ;
-(NSMutableDictionary *)thumbnailRequestBatch;
-(long long)thumbnailRequestCount;
-(void)setThumbnailRequestCount:(long long)arg1 ;
-(void)setThumbnailRequestBatch:(NSMutableDictionary *)arg1 ;
-(char)appendThumbnailRequest:(id)arg1 ;
@end

