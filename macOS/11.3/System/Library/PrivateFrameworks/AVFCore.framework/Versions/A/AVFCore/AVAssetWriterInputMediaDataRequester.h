/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, AVWeakReference;

@interface AVAssetWriterInputMediaDataRequester : NSObject {

	NSObject*<OS_dispatch_queue> _requestQueue;
	/*^block*/id _requestBlock;
	NSObject*<OS_dispatch_queue> _ivarAccessQueue;
	AVWeakReference* _weakReferenceToDelegate;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> requestQueue;                  //@synthesize requestQueue=_requestQueue - In the implementation block
@property (__weak) id<AVAssetWriterInputMediaDataRequesterDelegate> delegate; 
-(void)dealloc;
-(id)init;
-(id<AVAssetWriterInputMediaDataRequesterDelegate>)delegate;
-(void)setDelegate:(id<AVAssetWriterInputMediaDataRequesterDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(id)initWithRequestQueue:(id)arg1 requestBlock:(/*^block*/id)arg2 ;
-(void)requestMediaDataIfNecessary;
-(void)_collectUncollectables_invokedFromDeallocAndFinalize;
@end

