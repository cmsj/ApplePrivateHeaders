/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/Versions/A/BiomePubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiomePubSub/BiomePubSub-Structs.h>
#import <BiomePubSub/BPSSubscription.h>
#import <libobjc.A.dylib/BPSSubscriber.h>

@protocol BPSSubscriber;
@class BPSSubscription, NSMutableDictionary, NSMutableArray, NSString;

@interface _BPSFlatMapOuter : BPSSubscription <BPSSubscriber> {

	os_unfair_lock_s _outerLock;
	os_unfair_lock_s _lock;
	os_unfair_recursive_lock_s _downstreamLock;
	char _downstreamRecursive;
	char _innerRecursive;
	char _cancelledOrOperation;
	char _outerFinished;
	BPSSubscription* _outerSubscription;
	id<BPSSubscriber> _downstream;
	long long _downstreamDemand;
	NSMutableDictionary* _subscriptions;
	long long _nextInnerIndex;
	long long _pendingSubscriptions;
	NSMutableArray* _buffer;
	long long _maxPublishers;
	/*^block*/id _map;

}

@property (nonatomic,retain) BPSSubscription * outerSubscription;              //@synthesize outerSubscription=_outerSubscription - In the implementation block
@property (nonatomic,retain) id<BPSSubscriber> downstream;                     //@synthesize downstream=_downstream - In the implementation block
@property (assign,nonatomic) long long downstreamDemand;                       //@synthesize downstreamDemand=_downstreamDemand - In the implementation block
@property (assign,nonatomic) char downstreamRecursive;                         //@synthesize downstreamRecursive=_downstreamRecursive - In the implementation block
@property (assign,nonatomic) char innerRecursive;                              //@synthesize innerRecursive=_innerRecursive - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptions;              //@synthesize subscriptions=_subscriptions - In the implementation block
@property (assign,nonatomic) long long nextInnerIndex;                         //@synthesize nextInnerIndex=_nextInnerIndex - In the implementation block
@property (assign,nonatomic) long long pendingSubscriptions;                   //@synthesize pendingSubscriptions=_pendingSubscriptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * buffer;                          //@synthesize buffer=_buffer - In the implementation block
@property (assign,nonatomic) long long maxPublishers;                          //@synthesize maxPublishers=_maxPublishers - In the implementation block
@property (nonatomic,copy) id map;                                             //@synthesize map=_map - In the implementation block
@property (assign,nonatomic) char cancelledOrOperation;                        //@synthesize cancelledOrOperation=_cancelledOrOperation - In the implementation block
@property (assign,nonatomic) char outerFinished;                               //@synthesize outerFinished=_outerFinished - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)buffer;
-(void)cancel;
-(id)map;
-(NSMutableDictionary *)subscriptions;
-(void)setSubscriptions:(NSMutableDictionary *)arg1 ;
-(void)setBuffer:(NSMutableArray *)arg1 ;
-(void)setMap:(id)arg1 ;
-(id<BPSSubscriber>)downstream;
-(void)receiveCompletion:(id)arg1 ;
-(long long)receiveInput:(id)arg1 ;
-(void)setDownstream:(id<BPSSubscriber>)arg1 ;
-(void)requestDemand:(long long)arg1 ;
-(id)upstreamSubscriptions;
-(void)receiveSubscription:(id)arg1 ;
-(long long)maxPublishers;
-(BPSSubscription *)outerSubscription;
-(char)cancelledOrOperation;
-(void)setOuterSubscription:(BPSSubscription *)arg1 ;
-(long long)nextInnerIndex;
-(void)setNextInnerIndex:(long long)arg1 ;
-(long long)pendingSubscriptions;
-(void)setPendingSubscriptions:(long long)arg1 ;
-(void)setOuterFinished:(char)arg1 ;
-(void)setCancelledOrOperation:(char)arg1 ;
-(char)downstreamRecursive;
-(long long)downstreamDemand;
-(void)setDownstreamDemand:(long long)arg1 ;
-(void)setDownstreamRecursive:(char)arg1 ;
-(void)setInnerRecursive:(char)arg1 ;
-(char)outerFinished;
-(char)innerRecursive;
-(id)initWithDownstream:(id)arg1 maxPublishers:(long long)arg2 map:(/*^block*/id)arg3 ;
-(void)receiveInnerSubscription:(id)arg1 index:(long long)arg2 ;
-(long long)receiveInnerInput:(id)arg1 index:(long long)arg2 ;
-(void)receiveInnerCompletion:(id)arg1 index:(long long)arg2 ;
-(void)setMaxPublishers:(long long)arg1 ;
@end

