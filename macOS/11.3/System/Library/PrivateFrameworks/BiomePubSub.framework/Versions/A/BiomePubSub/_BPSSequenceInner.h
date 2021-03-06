/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/Versions/A/BiomePubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiomePubSub/BiomePubSub-Structs.h>
#import <BiomePubSub/BPSSubscription.h>

@protocol BPSSubscriber;
@class NSArray, NSEnumerator;

@interface _BPSSequenceInner : BPSSubscription {

	os_unfair_lock_s _lock;
	char _recursion;
	id<BPSSubscriber> _downstream;
	NSArray* _sequence;
	long long _pendingDemand;
	id _next;
	NSEnumerator* _enumerator;

}

@property (nonatomic,retain) id<BPSSubscriber> downstream;              //@synthesize downstream=_downstream - In the implementation block
@property (nonatomic,retain) NSArray * sequence;                        //@synthesize sequence=_sequence - In the implementation block
@property (assign,nonatomic) long long pendingDemand;                   //@synthesize pendingDemand=_pendingDemand - In the implementation block
@property (assign,nonatomic) char recursion;                            //@synthesize recursion=_recursion - In the implementation block
@property (nonatomic,retain) id next;                                   //@synthesize next=_next - In the implementation block
@property (nonatomic,retain) NSEnumerator * enumerator;                 //@synthesize enumerator=_enumerator - In the implementation block
-(NSEnumerator *)enumerator;
-(void)cancel;
-(NSArray *)sequence;
-(id)next;
-(void)setSequence:(NSArray *)arg1 ;
-(void)setNext:(id)arg1 ;
-(id<BPSSubscriber>)downstream;
-(void)setEnumerator:(NSEnumerator *)arg1 ;
-(long long)pendingDemand;
-(void)setPendingDemand:(long long)arg1 ;
-(char)recursion;
-(void)setRecursion:(char)arg1 ;
-(void)setDownstream:(id<BPSSubscriber>)arg1 ;
-(void)requestDemand:(long long)arg1 ;
-(id)upstreamSubscriptions;
-(id)initWithDownstream:(id)arg1 sequence:(id)arg2 ;
@end

