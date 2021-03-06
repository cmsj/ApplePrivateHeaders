/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/Versions/A/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class BRQueryItem, NSObject, NSProgress;

@interface BRQueryItemProgressObserver : NSObject {

	BRQueryItem* _item;
	NSObject*<OS_dispatch_queue> _queue;
	id _subscriber;
	NSProgress* _progress;
	char _started;
	char _isUpload;
	/*^block*/id _progressHandler;

}

@property (nonatomic,copy) id progressHandler;                  //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,readonly) BRQueryItem * item;              //@synthesize item=_item - In the implementation block
-(void)dealloc;
-(id)description;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BRQueryItem *)item;
-(void)stop;
-(void)setQueue:(id)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(void)_stopObserving;
-(void)setProgressHandler:(id)arg1 ;
-(void)_subscribe;
-(id)progressHandler;
@end

