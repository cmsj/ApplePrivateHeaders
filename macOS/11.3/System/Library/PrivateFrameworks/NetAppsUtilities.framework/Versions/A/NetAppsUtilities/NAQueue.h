/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/Versions/A/NetAppsUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NAQueueingStrategy;
@class NSMutableArray, NSArray;

@interface NAQueue : NSObject {

	NSMutableArray* _buffer;
	id<NAQueueingStrategy> _strategy;

}

@property (readonly) unsigned long long count; 
@property (readonly) NSArray * allObjects; 
+(id)priorityQueueWithComparator:(/*^block*/id)arg1 ;
+(id)boundedQueueWithCapacity:(unsigned long long)arg1 ;
+(id)boundedQueueWithCapacity:(unsigned long long)arg1 overflowHandler:(/*^block*/id)arg2 ;
-(id)init;
-(unsigned long long)count;
-(NSArray *)allObjects;
-(id)drain;
-(id)peek;
-(id)initWithStrategy:(id)arg1 ;
-(void)enqueue:(id)arg1 ;
-(id)dequeue;
-(void)dequeueObject:(id)arg1 ;
@end

