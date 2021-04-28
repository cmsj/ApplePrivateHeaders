/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCHeadlineProviding, FCCardStyleProviding;
@class NSString, FCColor, NSDate;

@interface FCSpotlightOperationResult : NSObject {

	id<FCHeadlineProviding> _headline;
	NSString* _channelID;
	NSString* _eyebrowTitle;
	NSString* _titleText;
	NSString* _subTitleText;
	NSString* _ctaText;
	FCColor* _titleColor;
	NSDate* _publishDate;
	id<FCCardStyleProviding> _spotlightItemStyle;
	id<FCCardStyleProviding> _spotlightItemDarkStyle;

}

@property (nonatomic,readonly) id<FCHeadlineProviding> headline;                                  //@synthesize headline=_headline - In the implementation block
@property (nonatomic,copy,readonly) NSString * channelID;                                         //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,copy,readonly) NSString * eyebrowTitle;                                      //@synthesize eyebrowTitle=_eyebrowTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * titleText;                                         //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy,readonly) NSString * subTitleText;                                      //@synthesize subTitleText=_subTitleText - In the implementation block
@property (nonatomic,copy,readonly) NSString * ctaText;                                           //@synthesize ctaText=_ctaText - In the implementation block
@property (nonatomic,copy,readonly) FCColor * titleColor;                                         //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,copy,readonly) NSDate * publishDate;                                         //@synthesize publishDate=_publishDate - In the implementation block
@property (nonatomic,copy,readonly) id<FCCardStyleProviding> spotlightItemStyle;                  //@synthesize spotlightItemStyle=_spotlightItemStyle - In the implementation block
@property (nonatomic,copy,readonly) id<FCCardStyleProviding> spotlightItemDarkStyle;              //@synthesize spotlightItemDarkStyle=_spotlightItemDarkStyle - In the implementation block
-(FCColor *)titleColor;
-(NSString *)titleText;
-(id<FCHeadlineProviding>)headline;
-(NSString *)channelID;
-(NSDate *)publishDate;
-(id<FCCardStyleProviding>)spotlightItemStyle;
-(id<FCCardStyleProviding>)spotlightItemDarkStyle;
-(id)initWithSpotlightGroupConfig:(id)arg1 headline:(id)arg2 ;
-(NSString *)eyebrowTitle;
-(NSString *)subTitleText;
-(NSString *)ctaText;
@end
