/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/Versions/A/FileProviderDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FPCancellable.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, NSMutableArray;

@interface FPDActionOperationQueue : NSObject <FPCancellable> {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _maxLength;
	NSMutableArray* _fifo;
	NSObject*<OS_dispatch_semaphore> _enqueueSema;
	NSObject*<OS_dispatch_semaphore> _dequeueSema;
	char _finishedEnqueuing;
	char _cancelled;

}
-(void)cancel;
-(void)enqueue:(id)arg1 ;
-(id)dequeue;
-(void)dumpStateTo:(id)arg1 ;
-(id)initWithMoveInfo:(id)arg1 ;
-(void)finishedEnqueuing;
@end

