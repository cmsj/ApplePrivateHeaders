/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCUserVectorManager.h>

@protocol FCUserVectorManager
@required
-(void)fetchUserVectorProvider:(/*^block*/id)arg1;

@end


@protocol FCContentContext, FCBundleSubscriptionProviderType;
@class FCAsyncSerialQueue, FCUserVector, FCSubscriptionList, NSDate;

@interface FCUserVectorManager : NSObject <FCUserVectorManager> {

	FCAsyncSerialQueue* _queue;
	FCUserVector* _userVector;
	id<FCContentContext> _contentContext;
	id<FCBundleSubscriptionProviderType> _bundleSubscriptionProvider;
	FCSubscriptionList* _subscriptionList;
	NSDate* _lastUpdated;

}

@property (nonatomic,retain) FCAsyncSerialQueue * queue;                                                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) FCUserVector * userVector;                                                    //@synthesize userVector=_userVector - In the implementation block
@property (nonatomic,retain) id<FCContentContext> contentContext;                                          //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,retain) id<FCBundleSubscriptionProviderType> bundleSubscriptionProvider;              //@synthesize bundleSubscriptionProvider=_bundleSubscriptionProvider - In the implementation block
@property (nonatomic,retain) FCSubscriptionList * subscriptionList;                                        //@synthesize subscriptionList=_subscriptionList - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdated;                                                         //@synthesize lastUpdated=_lastUpdated - In the implementation block
-(FCAsyncSerialQueue *)queue;
-(void)setQueue:(FCAsyncSerialQueue *)arg1 ;
-(void)setLastUpdated:(NSDate *)arg1 ;
-(NSDate *)lastUpdated;
-(FCSubscriptionList *)subscriptionList;
-(void)setContentContext:(id<FCContentContext>)arg1 ;
-(id)initWithContentContext:(id)arg1 bundleSubscriptionProvider:(id)arg2 subscriptionList:(id)arg3 ;
-(id<FCContentContext>)contentContext;
-(void)setSubscriptionList:(FCSubscriptionList *)arg1 ;
-(FCUserVector *)userVector;
-(id<FCBundleSubscriptionProviderType>)bundleSubscriptionProvider;
-(void)setUserVector:(FCUserVector *)arg1 ;
-(void)fetchUserVectorProvider:(/*^block*/id)arg1 ;
-(void)setBundleSubscriptionProvider:(id<FCBundleSubscriptionProviderType>)arg1 ;
@end

