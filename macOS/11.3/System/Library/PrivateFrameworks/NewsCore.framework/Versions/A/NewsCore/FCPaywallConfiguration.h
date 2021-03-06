/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, FCSubscriptionButtonConfiguration, FCPaywallVisualSpecConfiguration, FCPaywallTopOffsetConfiguration;

@interface FCPaywallConfiguration : NSObject <NSCopying> {

	char _externalOverridesEnabled;
	unsigned long long _paywallType;
	NSString* _title;
	NSString* _descriptionTrial;
	NSString* _descriptionNonTrial;
	NSString* _learnMoreTitle;
	NSURL* _learnMoreURL;
	NSString* _offersLinkTitle;
	NSURL* _offersLinkURL;
	unsigned long long _offersLinkTargetType;
	FCSubscriptionButtonConfiguration* _subscriptionButtonConfig;
	FCPaywallVisualSpecConfiguration* _visualSpecConfig;
	FCPaywallTopOffsetConfiguration* _paywallTopOffsetConfig;

}

@property (assign,nonatomic) unsigned long long paywallType;                                            //@synthesize paywallType=_paywallType - In the implementation block
@property (nonatomic,copy) NSString * title;                                                            //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * learnMoreTitle;                                                   //@synthesize learnMoreTitle=_learnMoreTitle - In the implementation block
@property (nonatomic,copy) NSURL * learnMoreURL;                                                        //@synthesize learnMoreURL=_learnMoreURL - In the implementation block
@property (nonatomic,copy) NSString * offersLinkTitle;                                                  //@synthesize offersLinkTitle=_offersLinkTitle - In the implementation block
@property (nonatomic,copy) NSURL * offersLinkURL;                                                       //@synthesize offersLinkURL=_offersLinkURL - In the implementation block
@property (assign,nonatomic) unsigned long long offersLinkTargetType;                                   //@synthesize offersLinkTargetType=_offersLinkTargetType - In the implementation block
@property (nonatomic,retain) FCPaywallVisualSpecConfiguration * visualSpecConfig;                       //@synthesize visualSpecConfig=_visualSpecConfig - In the implementation block
@property (nonatomic,retain) FCSubscriptionButtonConfiguration * subscriptionButtonConfig;              //@synthesize subscriptionButtonConfig=_subscriptionButtonConfig - In the implementation block
@property (nonatomic,copy) NSString * descriptionTrial;                                                 //@synthesize descriptionTrial=_descriptionTrial - In the implementation block
@property (nonatomic,copy) NSString * descriptionNonTrial;                                              //@synthesize descriptionNonTrial=_descriptionNonTrial - In the implementation block
@property (nonatomic,readonly) char externalOverridesEnabled;                                           //@synthesize externalOverridesEnabled=_externalOverridesEnabled - In the implementation block
@property (nonatomic,readonly) FCPaywallTopOffsetConfiguration * paywallTopOffsetConfig;                //@synthesize paywallTopOffsetConfig=_paywallTopOffsetConfig - In the implementation block
+(id)defaultPaywallTitle;
+(id)defaultPaywallDescription;
+(id)defaultPaywallTopOffsetConfiguration;
+(id)defaultSmallPaywallTitle;
+(id)defaultAudioPaywallTitle;
+(id)defaultAudioPaywallDescription;
+(id)defaultArticleHardPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultArticleSharedHardPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultArticleSoftPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultArticleSharedSoftPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultChannelSoftPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultMagazineFeedSoftPaywallSmallPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultMagazineFeedSoftPaywallMediumPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultMagazineFeedSoftPaywallLargePaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultMagazineFeedVideoSoftPaywallSmallPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultMagazineFeedVideoSoftPaywallLargePaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultPDFHardPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultAudioArticleHardPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultAudioArticleSharedHardPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultAudioArticleSoftPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultAudioArticleSharedSoftPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultAudioFeedSoftPaywallSmallPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultAudioFeedSoftPaywallLargePaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultDeferredPaywallTopOffsetConfiguration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSURL *)learnMoreURL;
-(NSString *)learnMoreTitle;
-(void)setLearnMoreTitle:(NSString *)arg1 ;
-(void)setLearnMoreURL:(NSURL *)arg1 ;
-(id)initWithConfigDictionary:(id)arg1 ;
-(id)initWithPaywallType:(unsigned long long)arg1 title:(id)arg2 descriptionTrial:(id)arg3 descriptionNonTrial:(id)arg4 learnMoreTitle:(id)arg5 learnMoreURL:(id)arg6 offersLinkTitle:(id)arg7 offersLinkURL:(id)arg8 offersLinkTargetType:(unsigned long long)arg9 externalOverridesEnabled:(char)arg10 subscriptionButtonConfig:(id)arg11 visualSpecConfig:(id)arg12 paywallTopOffsetConfig:(id)arg13 ;
-(NSString *)descriptionTrial;
-(NSString *)descriptionNonTrial;
-(NSString *)offersLinkTitle;
-(NSURL *)offersLinkURL;
-(unsigned long long)offersLinkTargetType;
-(unsigned long long)paywallType;
-(char)externalOverridesEnabled;
-(FCSubscriptionButtonConfiguration *)subscriptionButtonConfig;
-(FCPaywallVisualSpecConfiguration *)visualSpecConfig;
-(void)setPaywallType:(unsigned long long)arg1 ;
-(void)setDescriptionTrial:(NSString *)arg1 ;
-(void)setDescriptionNonTrial:(NSString *)arg1 ;
-(void)setOffersLinkTitle:(NSString *)arg1 ;
-(void)setOffersLinkURL:(NSURL *)arg1 ;
-(void)setOffersLinkTargetType:(unsigned long long)arg1 ;
-(void)setSubscriptionButtonConfig:(FCSubscriptionButtonConfiguration *)arg1 ;
-(void)setVisualSpecConfig:(FCPaywallVisualSpecConfiguration *)arg1 ;
-(FCPaywallTopOffsetConfiguration *)paywallTopOffsetConfig;
@end

