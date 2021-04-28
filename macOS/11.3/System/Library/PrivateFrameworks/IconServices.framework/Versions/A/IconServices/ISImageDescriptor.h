/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ISImageDescriptor.h>

@protocol ISImageDescriptor <NSObject,NSCopying>
@end

#import <libobjc.A.dylib/NSCopying.h>

@class IFColor, NSUUID, NSString;

@interface ISImageDescriptor : NSObject <NSSecureCoding, ISImageDescriptor, NSCopying> {

	CGSize _size;
	double _scale;
	unsigned long long _variantOptions;
	unsigned long long _badgeOptions;
	unsigned long long _backgroundStyle;
	char _ignoreCache;
	IFColor* _tintColor;

}

@property (readonly) CGSize sanitizedSize; 
@property (readonly) double sanitizedScale; 
@property (readonly) NSUUID * digest; 
@property (assign) char ignoreCache;                                          //@synthesize ignoreCache=_ignoreCache - In the implementation block
@property (assign,nonatomic) CGSize size;                                     //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double scale;                                    //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) unsigned long long variantOptions;               //@synthesize variantOptions=_variantOptions - In the implementation block
@property (assign,nonatomic) unsigned long long badgeOptions;                 //@synthesize badgeOptions=_badgeOptions - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundStyle;              //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (assign,nonatomic) unsigned long long shape; 
@property (nonatomic,readonly) double continuousCornerRadius; 
@property (assign,nonatomic) char shouldApplyMask; 
@property (assign,nonatomic) char drawBorder; 
@property (assign,nonatomic) char drawBadge; 
@property (assign,nonatomic) char templateVariant; 
@property (assign,nonatomic) char selectedVariant; 
@property (nonatomic,retain) IFColor * tintColor;                             //@synthesize tintColor=_tintColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)imageDescriptorWithIconVariant:(int)arg1 options:(int)arg2 ;
+(char)supportsSecureCoding;
+(id)icnsImageDescriptors;
+(id)imageDescriptorNamed:(id)arg1 ;
-(char)shouldApplyMask;
-(unsigned long long)variantOptions;
-(double)continuousCornerRadius;
-(char)drawBadge;
-(void)setDrawBadge:(char)arg1 ;
-(CGSize)sanitizedSize;
-(double)sanitizedScale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)templateVariant;
-(char)selectedVariant;
-(void)setSize:(CGSize)arg1 ;
-(double)scale;
-(IFColor *)tintColor;
-(void)setTintColor:(IFColor *)arg1 ;
-(void)setScale:(double)arg1 ;
-(unsigned long long)backgroundStyle;
-(void)setBackgroundStyle:(unsigned long long)arg1 ;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(unsigned long long)shape;
-(NSUUID *)digest;
-(id)_recipe;
-(void)setShape:(unsigned long long)arg1 ;
-(void)setVariantOptions:(unsigned long long)arg1 ;
-(char)ignoreCache;
-(void)setIgnoreCache:(char)arg1 ;
-(void)setBadgeOptions:(unsigned long long)arg1 ;
-(void)setSelectedVariant:(char)arg1 ;
-(void)setTemplateVariant:(char)arg1 ;
-(void)setShouldApplyMask:(char)arg1 ;
-(void)setDrawBorder:(char)arg1 ;
-(char)drawBorder;
-(unsigned long long)badgeOptions;
@end
