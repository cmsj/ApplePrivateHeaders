/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCMultiResolutionImage, FCMultiSizeVideo, NSURL, FCColor;

@interface FCPaywallVisualSpecConfiguration : NSObject <NSCopying> {

	FCMultiResolutionImage* _multiResolutionImage;
	FCMultiResolutionImage* _darkStyleMultiResolutionImage;
	FCMultiResolutionImage* _multiResolutionBadgeImage;
	FCMultiResolutionImage* _darkStyleMultiResolutionBadgeImage;
	FCMultiSizeVideo* _multiSizeVideo;
	NSURL* _videoURL;
	long long _videoWidth;
	long long _videoHeight;
	double _gradientPercentHeight;
	long long _textTopPadding;
	long long _badgeVerticalOffset;
	FCColor* _backgroundColor;
	FCColor* _darkStyleBackgroundColor;
	FCColor* _mastheadTextColor;
	FCColor* _largeTextColor;
	FCColor* _smallTextColor;
	FCColor* _offersTextColor;

}

@property (nonatomic,retain) FCMultiResolutionImage * multiResolutionImage;                            //@synthesize multiResolutionImage=_multiResolutionImage - In the implementation block
@property (nonatomic,retain) FCMultiResolutionImage * darkStyleMultiResolutionImage;                   //@synthesize darkStyleMultiResolutionImage=_darkStyleMultiResolutionImage - In the implementation block
@property (nonatomic,retain) FCMultiResolutionImage * multiResolutionBadgeImage;                       //@synthesize multiResolutionBadgeImage=_multiResolutionBadgeImage - In the implementation block
@property (nonatomic,retain) FCMultiResolutionImage * darkStyleMultiResolutionBadgeImage;              //@synthesize darkStyleMultiResolutionBadgeImage=_darkStyleMultiResolutionBadgeImage - In the implementation block
@property (nonatomic,retain) FCMultiSizeVideo * multiSizeVideo;                                        //@synthesize multiSizeVideo=_multiSizeVideo - In the implementation block
@property (nonatomic,retain) NSURL * videoURL;                                                         //@synthesize videoURL=_videoURL - In the implementation block
@property (assign,nonatomic) long long videoWidth;                                                     //@synthesize videoWidth=_videoWidth - In the implementation block
@property (assign,nonatomic) long long videoHeight;                                                    //@synthesize videoHeight=_videoHeight - In the implementation block
@property (nonatomic,retain) FCColor * backgroundColor;                                                //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) FCColor * darkStyleBackgroundColor;                                       //@synthesize darkStyleBackgroundColor=_darkStyleBackgroundColor - In the implementation block
@property (nonatomic,retain) FCColor * mastheadTextColor;                                              //@synthesize mastheadTextColor=_mastheadTextColor - In the implementation block
@property (nonatomic,retain) FCColor * largeTextColor;                                                 //@synthesize largeTextColor=_largeTextColor - In the implementation block
@property (nonatomic,retain) FCColor * smallTextColor;                                                 //@synthesize smallTextColor=_smallTextColor - In the implementation block
@property (nonatomic,retain) FCColor * offersTextColor;                                                //@synthesize offersTextColor=_offersTextColor - In the implementation block
@property (assign,nonatomic) double gradientPercentHeight;                                             //@synthesize gradientPercentHeight=_gradientPercentHeight - In the implementation block
@property (assign,nonatomic) long long textTopPadding;                                                 //@synthesize textTopPadding=_textTopPadding - In the implementation block
@property (assign,nonatomic) long long badgeVerticalOffset;                                            //@synthesize badgeVerticalOffset=_badgeVerticalOffset - In the implementation block
+(id)defaultPaywallVisualSpecConfiguration;
+(id)defaultMagazineFeedPaywallVisualSpecConfigurationSmall;
+(id)defaultMagazineFeedPaywallVisualSpecConfigurationMedium;
+(id)defaultMagazineFeedPaywallVisualSpecConfigurationLarge;
+(id)defaultAudioFeedPaywallVisualSpecConfigurationSmall;
+(id)defaultAudioFeedPaywallVisualSpecConfigurationLarge;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)setBackgroundColor:(FCColor *)arg1 ;
-(FCColor *)backgroundColor;
-(long long)videoWidth;
-(long long)videoHeight;
-(NSURL *)videoURL;
-(void)setVideoURL:(NSURL *)arg1 ;
-(void)setVideoWidth:(long long)arg1 ;
-(void)setVideoHeight:(long long)arg1 ;
-(id)initWithConfigDictionary:(id)arg1 ;
-(id)initWithMultiResolutionImage:(id)arg1 darkStyleMultiResolutionImage:(id)arg2 multiResolutionBadgeImage:(id)arg3 darkStyleMultiResolutionBadgeImage:(id)arg4 multiSizeVideo:(id)arg5 videoURL:(id)arg6 videoWidth:(long long)arg7 videoHeight:(long long)arg8 gradientPercentHeight:(double)arg9 textTopPadding:(long long)arg10 badgeVerticalOffset:(long long)arg11 backgroundColor:(id)arg12 darkStyleBackgroundColor:(id)arg13 mastheadTextColor:(id)arg14 largeTextColor:(id)arg15 smallTextColor:(id)arg16 offersTextColor:(id)arg17 ;
-(FCMultiResolutionImage *)multiResolutionImage;
-(FCMultiResolutionImage *)darkStyleMultiResolutionImage;
-(FCMultiResolutionImage *)multiResolutionBadgeImage;
-(FCMultiResolutionImage *)darkStyleMultiResolutionBadgeImage;
-(FCColor *)darkStyleBackgroundColor;
-(double)gradientPercentHeight;
-(long long)textTopPadding;
-(long long)badgeVerticalOffset;
-(void)setMultiResolutionImage:(FCMultiResolutionImage *)arg1 ;
-(void)setDarkStyleMultiResolutionImage:(FCMultiResolutionImage *)arg1 ;
-(void)setMultiResolutionBadgeImage:(FCMultiResolutionImage *)arg1 ;
-(void)setDarkStyleMultiResolutionBadgeImage:(FCMultiResolutionImage *)arg1 ;
-(FCMultiSizeVideo *)multiSizeVideo;
-(void)setMultiSizeVideo:(FCMultiSizeVideo *)arg1 ;
-(void)setGradientPercentHeight:(double)arg1 ;
-(void)setTextTopPadding:(long long)arg1 ;
-(void)setBadgeVerticalOffset:(long long)arg1 ;
-(void)setDarkStyleBackgroundColor:(FCColor *)arg1 ;
-(FCColor *)mastheadTextColor;
-(void)setMastheadTextColor:(FCColor *)arg1 ;
-(FCColor *)largeTextColor;
-(void)setLargeTextColor:(FCColor *)arg1 ;
-(FCColor *)smallTextColor;
-(void)setSmallTextColor:(FCColor *)arg1 ;
-(FCColor *)offersTextColor;
-(void)setOffersTextColor:(FCColor *)arg1 ;
@end

