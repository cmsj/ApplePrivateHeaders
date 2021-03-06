/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSKit.framework/Versions/A/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPObject.h>
#import <TSKit/TSPCopying.h>

@class TSUColor, NSString;

@interface TSKAnnotationAuthor : TSPObject <TSPCopying> {

	TSUColor* mColor;
	char _isPublicAuthor;
	NSString* _name;
	NSString* _publicID;

}

@property (nonatomic,copy) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * publicID;                                                //@synthesize publicID=_publicID - In the implementation block
@property (assign,nonatomic) char isPublicAuthor;                                              //@synthesize isPublicAuthor=_isPublicAuthor - In the implementation block
@property (nonatomic,readonly) char hasPublicID; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,retain) TSUColor * storageColor; 
@property (nonatomic,readonly) TSUColor * popoverAuthorLabelColor; 
@property (nonatomic,readonly) TSUColor * popoverButtonTintColor; 
@property (nonatomic,readonly) TSUColor * textMarkupColor; 
@property (nonatomic,readonly) TSUColor * textHighlightColor; 
@property (nonatomic,readonly) TSUColor * textHighlightOverlappingDuplicateColor; 
@property (nonatomic,readonly) TSUColor * cellViolatorColor; 
@property (nonatomic,readonly) TSUColor * flagStrokeColor; 
@property (nonatomic,readonly) TSUColor * flagPressedColor; 
@property (nonatomic,readonly) TSUColor * changeAdornmentsColor; 
@property (nonatomic,readonly) TSUColor * flagFillColor; 
@property (nonatomic,readonly) TSUColor * popoverColor; 
@property (nonatomic,readonly) TSUColor * sidebarDecoratorLineColor; 
@property (nonatomic,readonly) TSUColor * sidebarHoverColor; 
@property (nonatomic,readonly) TSUColor * sidebarSelectedColor; 
@property (nonatomic,readonly) TSUColor * sidebarUsernameColor; 
@property (nonatomic,readonly) TSUColor * sidebarChangeBarColor; 
@property (nonatomic,readonly) TSUColor * sidebarSelectedBorderColor; 
@property (nonatomic,readonly) TSUColor * gradientStartColor; 
@property (nonatomic,readonly) TSUColor * gradientEndColor; 
@property (nonatomic,readonly) TSUColor * indicatorLightColor; 
@property (nonatomic,readonly) TSUColor * indicatorDarkColor; 
@property (nonatomic,readonly) NSString * authorColorName; 
@property (nonatomic,readonly) NSString * menuSwatchColorForAuthor; 
@property (nonatomic,readonly) char showAuthorComments; 
+(unsigned long long)presetColorCount;
+(id)authorStorageColorForIndex:(unsigned long long)arg1 ;
+(id)authorTextMarkupColorForIndex:(unsigned long long)arg1 ;
+(id)defaultAuthorName;
+(id)normalizedAuthorNameForAuthorName:(id)arg1 ;
+(id)p_publicIDFromSeed:(id)arg1 privateID:(id)arg2 ;
+(unsigned long long)p_authorColorIndexWithColor:(id)arg1 forIndicator:(char)arg2 ;
+(id)authorColorForIndex:(unsigned long long)arg1 forKey:(id)arg2 ;
+(id)indicatorLightColorForIndex:(unsigned long long)arg1 ;
+(id)indicatorDarkColorForIndex:(unsigned long long)arg1 ;
+(id)localizedAuthorColorNameForIndex:(unsigned long long)arg1 ;
+(id)p_authorColorDictionaryForAuthorIndex:(unsigned long long)arg1 ;
+(id)authorMenuSwatchColorForIndex:(unsigned long long)arg1 ;
+(unsigned long long)authorColorIndexClosestToImportedFloatingCommentColor:(id)arg1 ;
+(id)indicatorLightColorByAuthorColor:(id)arg1 ;
+(id)indicatorDarkColorByLightColor:(id)arg1 ;
+(id)authorNameExplanatoryStringWithUseExplanation:(char)arg1 withSettingsExplanation:(char)arg2 ;
+(void)enumerateAnnotationsInDocument:(id)arg1 withAuthor:(id)arg2 usingHitBlock:(/*^block*/id)arg3 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)displayName;
-(void)setPublicID:(NSString *)arg1 ;
-(NSString *)publicID;
-(TSUColor *)gradientStartColor;
-(TSUColor *)gradientEndColor;
-(id)copyWithContext:(id)arg1 ;
-(id)componentRootObject;
-(char)allowsImplicitComponentOwnership;
-(TSUColor *)storageColor;
-(unsigned long long)p_authorColorIndex;
-(void)setStorageColor:(TSUColor *)arg1 ;
-(id)initWithContext:(id)arg1 name:(id)arg2 color:(id)arg3 ;
-(TSUColor *)textMarkupColor;
-(TSUColor *)textHighlightColor;
-(TSUColor *)cellViolatorColor;
-(TSUColor *)flagStrokeColor;
-(TSUColor *)flagPressedColor;
-(TSUColor *)changeAdornmentsColor;
-(TSUColor *)flagFillColor;
-(TSUColor *)popoverColor;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(char)isPublicAuthor;
-(char)matchesAuthor:(id)arg1 ;
-(id)initWithContext:(id)arg1 name:(id)arg2 color:(id)arg3 privateID:(id)arg4 ;
-(id)initWithContext:(id)arg1 name:(id)arg2 color:(id)arg3 publicID:(id)arg4 isPublicAuthor:(char)arg5 ;
-(void)setIsPublicAuthor:(char)arg1 ;
-(char)hasPublicID;
-(char)isPreferredOver:(id)arg1 ;
-(char)matchesPrivateID:(id)arg1 ;
-(TSUColor *)popoverButtonTintColor;
-(TSUColor *)popoverAuthorLabelColor;
-(TSUColor *)textHighlightOverlappingDuplicateColor;
-(TSUColor *)sidebarDecoratorLineColor;
-(TSUColor *)sidebarHoverColor;
-(TSUColor *)sidebarSelectedColor;
-(TSUColor *)sidebarUsernameColor;
-(TSUColor *)sidebarChangeBarColor;
-(TSUColor *)sidebarSelectedBorderColor;
-(TSUColor *)indicatorLightColor;
-(TSUColor *)indicatorDarkColor;
-(NSString *)authorColorName;
-(id)themeFilenameForAuthor;
-(NSString *)menuSwatchColorForAuthor;
-(char)showAuthorComments;
@end

