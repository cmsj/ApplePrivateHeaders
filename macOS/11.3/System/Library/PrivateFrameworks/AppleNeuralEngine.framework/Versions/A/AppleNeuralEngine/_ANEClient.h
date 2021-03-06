/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/Versions/A/AppleNeuralEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _ANEDaemonConnection, NSArray;

@interface _ANEClient : NSObject {

	_ANEDaemonConnection* _conn;
	NSArray* _queues;

}

@property (nonatomic,readonly) _ANEDaemonConnection * conn;              //@synthesize conn=_conn - In the implementation block
@property (nonatomic,readonly) NSArray * queues;                         //@synthesize queues=_queues - In the implementation block
+(void)initialize;
+(id)sharedConnection;
+(id)sharedPrivateConnection;
+(id)sandboxExtensionForModel:(id)arg1 ;
-(void)dealloc;
-(_ANEDaemonConnection *)conn;
-(void)purgeCompiledModel:(id)arg1 ;
-(char)compiledModelExistsFor:(id)arg1 ;
-(char)evaluateWithModel:(id)arg1 options:(id)arg2 request:(id)arg3 qos:(unsigned)arg4 error:(id*)arg5 ;
-(char)evaluateRealTimeWithModel:(id)arg1 options:(id)arg2 request:(id)arg3 error:(id*)arg4 ;
-(char)loadModel:(id)arg1 options:(id)arg2 qos:(unsigned)arg3 error:(id*)arg4 ;
-(char)loadRealTimeModel:(id)arg1 options:(id)arg2 qos:(unsigned)arg3 error:(id*)arg4 ;
-(char)unloadModel:(id)arg1 options:(id)arg2 qos:(unsigned)arg3 error:(id*)arg4 ;
-(char)unloadRealTimeModel:(id)arg1 options:(id)arg2 qos:(unsigned)arg3 error:(id*)arg4 ;
-(id)initWithRestrictedAccessAllowed:(char)arg1 ;
-(NSArray *)queues;
-(char)doLoadModel:(id)arg1 options:(id)arg2 qos:(unsigned)arg3 error:(id*)arg4 ;
-(char)doEvaluateDirectWithModel:(id)arg1 options:(id)arg2 request:(id)arg3 qos:(unsigned)arg4 error:(id*)arg5 ;
-(char)doUnloadModel:(id)arg1 options:(id)arg2 qos:(unsigned)arg3 error:(id*)arg4 ;
-(char)compileModel:(id)arg1 options:(id)arg2 qos:(unsigned)arg3 error:(id*)arg4 ;
-(char)beginRealTimeTask;
-(char)endRealTimeTask;
-(char)echo:(id)arg1 ;
@end

