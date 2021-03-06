/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/Versions/A/SPOwner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NWPathEvaluator, NSObject;

@interface SPNetworkMonitor : NSObject {

	char _cachedIsNetworkUp;
	NWPathEvaluator* _evaluator;
	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,retain) NWPathEvaluator * evaluator;                             //@synthesize evaluator=_evaluator - In the implementation block
@property (nonatomic,copy) id block;                                                  //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (assign,nonatomic) char cachedIsNetworkUp;                                  //@synthesize cachedIsNetworkUp=_cachedIsNetworkUp - In the implementation block
-(id)block;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)stopMonitoring;
-(NWPathEvaluator *)evaluator;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setBlock:(id)arg1 ;
-(char)isNetworkUp;
-(char)isMonitoring;
-(void)startMonitoringWithCallback:(/*^block*/id)arg1 ;
-(void)setEvaluator:(NWPathEvaluator *)arg1 ;
-(void)notifyNetworkStateChange;
-(char)cachedIsNetworkUp;
-(void)setCachedIsNetworkUp:(char)arg1 ;
@end

