/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AppKit/NSView.h>

@interface AKSignatureBaselineView : NSView {

	double _baselinePercent;

}

@property (assign,nonatomic) double baselinePercent;              //@synthesize baselinePercent=_baselinePercent - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(char)opaque;
-(void)_commonInit;
-(char)_isRTL;
-(double)scaleFactor;
-(void)setBaselinePercent:(double)arg1 ;
-(void)_drawBaselineInContext:(CGContextRef)arg1 ;
-(double)baselinePercent;
@end
