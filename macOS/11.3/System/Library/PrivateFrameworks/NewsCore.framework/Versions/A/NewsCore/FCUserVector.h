/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCUserVectorProvider.h>

@class NSURL, FCPersonalizationTreatment, NSOrderedSet, NSString, FCSubscriptionList;

@interface FCUserVector : NSObject <FCUserVectorProvider> {

	NSURL* _whitelistURL;
	NSURL* _modelURL;
	FCPersonalizationTreatment* _personalizationTreatment;
	NSOrderedSet* _bundleChannelIDs;
	NSString* _bundleChannelIDsVersion;
	FCSubscriptionList* _subscriptionList;

}

@property (nonatomic,retain) NSURL * whitelistURL;                                               //@synthesize whitelistURL=_whitelistURL - In the implementation block
@property (nonatomic,retain) NSURL * modelURL;                                                   //@synthesize modelURL=_modelURL - In the implementation block
@property (nonatomic,retain) FCPersonalizationTreatment * personalizationTreatment;              //@synthesize personalizationTreatment=_personalizationTreatment - In the implementation block
@property (nonatomic,retain) NSOrderedSet * bundleChannelIDs;                                    //@synthesize bundleChannelIDs=_bundleChannelIDs - In the implementation block
@property (nonatomic,retain) NSString * bundleChannelIDsVersion;                                 //@synthesize bundleChannelIDsVersion=_bundleChannelIDsVersion - In the implementation block
@property (nonatomic,retain) FCSubscriptionList * subscriptionList;                              //@synthesize subscriptionList=_subscriptionList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSURL *)modelURL;
-(void)setModelURL:(NSURL *)arg1 ;
-(void)setPersonalizationTreatment:(FCPersonalizationTreatment *)arg1 ;
-(FCPersonalizationTreatment *)personalizationTreatment;
-(id)bundleSubscribedVector;
-(NSString *)bundleChannelIDsVersion;
-(void)setBundleChannelIDsVersion:(NSString *)arg1 ;
-(FCSubscriptionList *)subscriptionList;
-(NSOrderedSet *)bundleChannelIDs;
-(void)setBundleChannelIDs:(NSOrderedSet *)arg1 ;
-(NSURL *)whitelistURL;
-(id)findVector:(id)arg1 closestToBins:(id)arg2 ;
-(id)subscribedBundleChannelIDs;
-(id)computePersonalizationVectorWithBaselineAggregate:(id)arg1 allAggregates:(id)arg2 options:(long long)arg3 ;
-(id)initWithWhitelistURL:(id)arg1 modelURL:(id)arg2 personalizationTreatment:(id)arg3 bundleChannelIDs:(id)arg4 bundleChannelIDsVersion:(id)arg5 subscriptionList:(id)arg6 ;
-(void)setWhitelistURL:(NSURL *)arg1 ;
-(void)setSubscriptionList:(FCSubscriptionList *)arg1 ;
@end

