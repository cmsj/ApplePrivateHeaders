/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, CoalesceableBookmarksOperation, OS_dispatch_queue, BookmarksOperationCoalescingTimerDelegate;
@class NSObject, NSOperation;

@interface BookmarksOperationCoalescingTimer : NSObject {

	NSObject*<OS_dispatch_source> _coalescingDispatchSource;
	NSOperation*<CoalesceableBookmarksOperation> _currentOperation;
	NSObject*<OS_dispatch_queue> _queue;
	id<BookmarksOperationCoalescingTimerDelegate> _delegate;

}

@property (nonatomic,readonly) NSOperation*<CoalesceableBookmarksOperation> currentOperation;              //@synthesize currentOperation=_currentOperation - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                         //@synthesize queue=_queue - In the implementation block
@property (__weak) id<BookmarksOperationCoalescingTimerDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<BookmarksOperationCoalescingTimerDelegate>)delegate;
-(void)setDelegate:(id<BookmarksOperationCoalescingTimerDelegate>)arg1 ;
-(void)start;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSOperation*<CoalesceableBookmarksOperation>)currentOperation;
-(void)coalesceCurrentOperationWithOperation:(id)arg1 ;
-(id)initWithOperation:(id)arg1 queue:(id)arg2 ;
@end

