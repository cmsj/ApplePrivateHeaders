/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSColor.h>

@interface NSCalibratedRGBColor : NSColor {

	double redComponent;
	double greenComponent;
	double blueComponent;
	double alphaComponent;
	CGColorRef _cachedCGColor;

}
+(id)newWithCoder:(id)arg1 zone:(NSZone*)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)set;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)type;
-(CGColorRef)CGColor;
-(void)setStroke;
-(double)alphaComponent;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(id)colorUsingColorSpace:(id)arg1 ;
-(double)redComponent;
-(double)greenComponent;
-(double)blueComponent;
-(id)colorUsingType:(long long)arg1 ;
-(long long)numberOfComponents;
-(void)getComponents:(double*)arg1 ;
-(id)colorSpace;
-(void)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4 ;
-(id)colorSpaceName;
-(void)setFill;
-(void)getHue:(double*)arg1 saturation:(double*)arg2 brightness:(double*)arg3 alpha:(double*)arg4 ;
-(CGColorRef)_createCGColorWithAlpha:(double)arg1 ;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(id)colorUsingColorSpaceName:(id)arg1 device:(id)arg2 ;
-(char)isUniform;
-(void)_setAsSystemColor;
-(double)hueComponent;
-(double)saturationComponent;
-(double)brightnessComponent;
-(id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 ;
@end

