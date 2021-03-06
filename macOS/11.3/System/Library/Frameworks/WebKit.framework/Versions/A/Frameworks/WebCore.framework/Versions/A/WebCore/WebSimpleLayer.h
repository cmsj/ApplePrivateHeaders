/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface WebSimpleLayer : CALayer {

	char _isRenderingInContext;

}

@property (nonatomic,readonly) char isRenderingInContext;              //@synthesize isRenderingInContext=_isRenderingInContext - In the implementation block
-(void)display;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(id)actionForKey:(id)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)renderInContext:(CGContextRef)arg1 ;
-(char)isRenderingInContext;
@end

