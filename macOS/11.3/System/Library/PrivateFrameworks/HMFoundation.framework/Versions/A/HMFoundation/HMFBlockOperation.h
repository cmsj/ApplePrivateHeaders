/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/Versions/A/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFOperation.h>

@class NSArray;

@interface HMFBlockOperation : HMFOperation {

	NSArray* _executionBlocks;

}

@property (copy,readonly) NSArray * executionBlocks;              //@synthesize executionBlocks=_executionBlocks - In the implementation block
+(id)blockOperationWithBlock:(/*^block*/id)arg1 ;
-(void)addExecutionBlock:(/*^block*/id)arg1 ;
-(void)main;
-(NSArray *)executionBlocks;
-(id)initWithTimeout:(double)arg1 ;
@end

