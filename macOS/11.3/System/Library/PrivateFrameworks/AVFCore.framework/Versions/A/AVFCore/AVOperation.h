/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, NSError;

@interface AVOperation : NSOperation {

	NSObject*<OS_dispatch_queue> _ivarAccessQueue;
	long long _status;
	NSError* _error;

}

@property (readonly) long long status; 
@property (readonly) NSError * error; 
+(void)initialize;
+(long long)statusOfOperations:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)init;
-(NSError *)error;
-(long long)status;
-(char)isFinished;
-(char)isExecuting;
-(char)isReady;
-(void)markAsFailedWithError:(id)arg1 ;
-(void)markAsCompleted;
-(char)evaluateDependenciesAndMarkAsExecuting;
-(void)markAsCancelled;
-(void)didEnterTerminalState;
-(char)_setStatus:(long long)arg1 error:(id)arg2 resultingStatus:(long long*)arg3 failureReason:(id*)arg4 ;
@end

