/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface NSDocumentControllerMainThreadUnblockerEntry : NSObject {

	/*^block*/id unblocker;
	NSMutableArray* pendingInterrupters;
	NSMutableArray* pendingInterrupterCompletionBlocks;
	NSObject*<OS_dispatch_queue> queue;
	char waitingForInterrupterCompletion;
	char suspended;

}

@property (assign) char suspended; 
+(id)entryWithUnblocker:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(void)setSuspended:(char)arg1 ;
-(char)suspended;
-(void)_invokeInterrupter:(/*^block*/id)arg1 ;
-(void)enqueueBlockingInterrupter:(/*^block*/id)arg1 ;
-(void)whenPendingInterruptersHaveCompletedInvokeBlock:(/*^block*/id)arg1 ;
-(void)transferBlockingInterruptersToUnblocker:(id)arg1 ;
@end

