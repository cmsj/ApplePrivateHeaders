/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/Versions/A/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WFAQIScaleCategory : NSObject <NSCopying, NSSecureCoding> {

	NSString* _categoryName;
	NSString* _color;
	NSString* _glyph;
	NSString* _recommendation;
	unsigned long long _categoryNumber;
	unsigned long long _categoryIndex;
	NSString* _localizedCategoryDescription;
	NSRange _range;

}

@property (nonatomic,copy) NSString * categoryName;                              //@synthesize categoryName=_categoryName - In the implementation block
@property (nonatomic,copy) NSString * color;                                     //@synthesize color=_color - In the implementation block
@property (nonatomic,copy) NSString * glyph;                                     //@synthesize glyph=_glyph - In the implementation block
@property (nonatomic,copy) NSString * recommendation;                            //@synthesize recommendation=_recommendation - In the implementation block
@property (assign,nonatomic) unsigned long long categoryNumber;                  //@synthesize categoryNumber=_categoryNumber - In the implementation block
@property (assign,nonatomic) NSRange range;                                      //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) unsigned long long categoryIndex;                   //@synthesize categoryIndex=_categoryIndex - In the implementation block
@property (nonatomic,copy) NSString * localizedCategoryDescription;              //@synthesize localizedCategoryDescription=_localizedCategoryDescription - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(NSString *)color;
-(void)setColor:(NSString *)arg1 ;
-(NSString *)categoryName;
-(void)setCategoryName:(NSString *)arg1 ;
-(NSString *)glyph;
-(void)setGlyph:(NSString *)arg1 ;
-(NSString *)recommendation;
-(unsigned long long)categoryIndex;
-(unsigned long long)categoryNumber;
-(void)setCategoryNumber:(unsigned long long)arg1 ;
-(void)setCategoryIndex:(unsigned long long)arg1 ;
-(id)initWithCategoryIndex:(unsigned long long)arg1 localizedCategoryDescription:(id)arg2 ;
-(NSString *)localizedCategoryDescription;
-(void)setLocalizedCategoryDescription:(NSString *)arg1 ;
-(void)setRecommendation:(NSString *)arg1 ;
-(char)isEqualToScaleCategory:(id)arg1 ;
@end

