/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCOperationThrottler.h>

@protocol FCOperationThrottler
@property (assign) char suspended; 
@required
-(void)setSuspended:(char)arg1;
-(char)suspended;
-(void)tickle;
-(void)tickleWithCompletion:(/*^block*/id)arg1;

@end


@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;
@class NSObject;

@interface FCOperationThrottler : NSObject <FCOperationThrottler> {

	NSObject*<OS_dispatch_source> _dispatchSource;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_group> _handlerSynchronizationGroup;
	char _suspended;

}

@property (assign) char suspended;              //@synthesize suspended=_suspended - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setSuspended:(char)arg1 ;
-(char)suspended;
-(id)initWithDelegate:(id)arg1 ;
-(void)tickle;
-(id)initWithDelegate:(id)arg1 updateQueue:(id)arg2 ;
-(void)tickleWithCompletion:(/*^block*/id)arg1 ;
-(void)addCompletionForCurrentOperation:(/*^block*/id)arg1 ;
@end

