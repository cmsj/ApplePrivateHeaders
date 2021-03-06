/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/Versions/A/BiomePubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BPSSubscription;

@interface BPSSubscriptionStatus : NSObject {

	long long _state;
	BPSSubscription* _subscription;

}

@property (assign,nonatomic) long long state;                             //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) BPSSubscription * subscription;              //@synthesize subscription=_subscription - In the implementation block
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)setSubscription:(BPSSubscription *)arg1 ;
-(BPSSubscription *)subscription;
-(id)initWithState:(long long)arg1 subscription:(id)arg2 ;
@end

