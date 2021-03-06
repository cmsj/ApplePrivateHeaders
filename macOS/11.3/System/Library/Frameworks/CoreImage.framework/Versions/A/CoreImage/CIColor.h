/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CIColor : NSObject <NSSecureCoding, NSCopying> {

	void* _priv;
	void** _pad[3];

}

@property (readonly) unsigned long long numberOfComponents; 
@property (readonly) const double* components; 
@property (readonly) double alpha; 
@property (readonly) CGColorSpaceRef colorSpace; 
@property (readonly) double red; 
@property (readonly) double green; 
@property (readonly) double blue; 
@property (readonly) NSString * stringRepresentation; 
+(id)colorWithSRGBRed:(double)arg1 green:(double)arg2 blue:(double)arg3 ;
+(id)colorWithSRGBRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(char)supportsSecureCoding;
+(id)redColor;
+(id)clearColor;
+(id)blackColor;
+(id)whiteColor;
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)greenColor;
+(id)blueColor;
+(id)grayColor;
+(id)cyanColor;
+(id)yellowColor;
+(id)magentaColor;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 ;
+(id)colorWithString:(id)arg1 ;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(CGColorSpaceRef)arg5 ;
-(id)initWithColor:(id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLType;
-(id)CA_addValue:(id)arg1 multipliedBy:(int)arg2 ;
-(id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2 ;
-(double)CA_distanceToValue:(id)arg1 ;
-(Object*)CA_copyRenderValue;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSString *)stringRepresentation;
-(const double*)components;
-(unsigned long long)numberOfComponents;
-(CGColorSpaceRef)colorSpace;
-(double)alpha;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(CGColorRef)cgColor;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(double)red;
-(double)green;
-(double)blue;
-(id)debugQuickLookObject;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 ;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(CGColorSpaceRef)arg5 ;
@end

