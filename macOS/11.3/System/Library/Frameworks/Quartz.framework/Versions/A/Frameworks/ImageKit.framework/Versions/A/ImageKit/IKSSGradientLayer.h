/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSColor;

@interface IKSSGradientLayer : CALayer {

	NSColor* _middleGradientColor;
	NSColor* _borderGradientColor;

}

@property (retain) NSColor * middleGradientColor;              //@synthesize middleGradientColor=_middleGradientColor - In the implementation block
@property (retain) NSColor * borderGradientColor;              //@synthesize borderGradientColor=_borderGradientColor - In the implementation block
-(NSColor *)middleGradientColor;
-(void)setMiddleGradientColor:(NSColor *)arg1 ;
-(NSColor *)borderGradientColor;
-(void)setBorderGradientColor:(NSColor *)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
@end

