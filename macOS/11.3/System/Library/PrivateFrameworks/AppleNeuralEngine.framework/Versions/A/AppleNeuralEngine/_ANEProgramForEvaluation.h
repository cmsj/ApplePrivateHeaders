/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/Versions/A/AppleNeuralEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class _ANEDeviceController, NSObject;

@interface _ANEProgramForEvaluation : NSObject {

	char _queueDepth;
	_ANEDeviceController* _controller;
	unsigned long long _programHandle;
	unsigned long long _intermediateBufferHandle;
	NSObject*<OS_dispatch_semaphore> _requestsInFlight;
	long long _currentAsyncRequestsInFlight;

}

@property (nonatomic,readonly) _ANEDeviceController * controller;                              //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic) unsigned long long programHandle;                                 //@synthesize programHandle=_programHandle - In the implementation block
@property (assign,nonatomic) unsigned long long intermediateBufferHandle;                      //@synthesize intermediateBufferHandle=_intermediateBufferHandle - In the implementation block
@property (nonatomic,readonly) char queueDepth;                                                //@synthesize queueDepth=_queueDepth - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> requestsInFlight;              //@synthesize requestsInFlight=_requestsInFlight - In the implementation block
@property (assign,nonatomic) long long currentAsyncRequestsInFlight;                           //@synthesize currentAsyncRequestsInFlight=_currentAsyncRequestsInFlight - In the implementation block
+(id)new;
+(id)programWithHandle:(unsigned long long)arg1 intermediateBufferHandle:(unsigned long long)arg2 queueDepth:(char)arg3 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(_ANEDeviceController *)controller;
-(unsigned long long)intermediateBufferHandle;
-(id)initWithHandle:(unsigned long long)arg1 intermediateBufferHandle:(unsigned long long)arg2 queueDepth:(char)arg3 ;
-(unsigned long long)programHandle;
-(char)queueDepth;
-(NSObject*<OS_dispatch_semaphore>)requestsInFlight;
-(long long)currentAsyncRequestsInFlight;
-(void)setCurrentAsyncRequestsInFlight:(long long)arg1 ;
-(char)processRequest:(id)arg1 qos:(unsigned)arg2 qIndex:(unsigned long long)arg3 modelStringID:(unsigned long long)arg4 options:(id)arg5 error:(id*)arg6 ;
-(void)setProgramHandle:(unsigned long long)arg1 ;
-(void)setIntermediateBufferHandle:(unsigned long long)arg1 ;
@end

