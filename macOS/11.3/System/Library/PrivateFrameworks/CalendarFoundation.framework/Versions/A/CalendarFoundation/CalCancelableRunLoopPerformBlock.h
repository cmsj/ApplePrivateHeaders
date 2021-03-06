/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/Versions/A/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarFoundation/CalCancelable.h>

@class NSRunLoop;

@interface CalCancelableRunLoopPerformBlock : NSObject <CalCancelable> {

	NSRunLoop* _runLoop;
	/*^block*/id _block;

}

@property (nonatomic,readonly) NSRunLoop * runLoop;              //@synthesize runLoop=_runLoop - In the implementation block
@property (nonatomic,copy) id block;                             //@synthesize block=_block - In the implementation block
-(void)performAfterDelay:(double)arg1 ;
-(id)block;
-(void)cancel;
-(NSRunLoop *)runLoop;
-(void)setBlock:(id)arg1 ;
-(void)_performBlock:(/*^block*/id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 inRunLoop:(id)arg2 ;
@end

