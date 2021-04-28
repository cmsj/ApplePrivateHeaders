/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/Versions/A/ProactiveEventTracker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PETReservoirSamplingLogStore <NSObject>
@required
-(char)lock;
-(void)unlock;
-(unsigned long long)currentLength;
-(/*function pointer*/void**)remap:(unsigned long long*)arg1;
-(/*function pointer*/void**)headerMap:(unsigned long long*)arg1;
-(char)changeLength:(unsigned long long)arg1;
-(char)appendData:(id)arg1 andReturnMapPointer:(*)arg2;
-(char)attemptToRecreate;

@end
