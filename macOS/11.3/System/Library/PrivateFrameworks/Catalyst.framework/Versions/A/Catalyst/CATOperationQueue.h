/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Versions/A/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperationQueue.h>

@protocol CATOperationQueueDelegate;
@interface CATOperationQueue : NSOperationQueue {

	id<CATOperationQueueDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CATOperationQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)currentQueue;
+(id)mainQueue;
+(id)backgroundQueue;
-(id)description;
-(void)addOperation:(id)arg1 ;
-(id<CATOperationQueueDelegate>)delegate;
-(void)setDelegate:(id<CATOperationQueueDelegate>)arg1 ;
-(void)addOperations:(id)arg1 waitUntilFinished:(char)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setUnderlyingQueue:(id)arg1 ;
-(void)startObserving:(id)arg1 ;
-(void)stopObserving:(id)arg1 ;
-(void)delegateWillAddOperation:(id)arg1 ;
-(void)delegateOperationDidFinish:(id)arg1 ;
@end

