/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSColor;


@protocol AKStrokedAnnotationProtocol <NSObject>
@property (assign) double strokeWidth; 
@property (retain) NSColor * strokeColor; 
@property (getter=isDashed) char dashed; 
@property (assign) long long brushStyle; 
@property (assign) char hasShadow; 
@required
-(void)setHasShadow:(char)arg1;
-(double)strokeWidth;
-(NSColor *)strokeColor;
-(void)setStrokeColor:(id)arg1;
-(void)setStrokeWidth:(double)arg1;
-(char)hasShadow;
-(void)setDashed:(char)arg1;
-(char)isDashed;
-(long long)brushStyle;
-(void)setBrushStyle:(long long)arg1;

@end
