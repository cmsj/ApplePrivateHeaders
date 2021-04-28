/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSDrawables/TSDStroke.h>
#import <TSDrawables/TSDMutableStroke.h>
@class TSUColor, TSDStrokePattern;


@protocol TSDMutableStroke
@property (nonatomic,copy) TSUColor * color; 
@property (assign,nonatomic) double width; 
@property (assign,nonatomic) double actualWidth; 
@property (assign,nonatomic) int cap; 
@property (assign,nonatomic) int join; 
@property (assign,nonatomic) double miterLimit; 
@property (nonatomic,copy) TSDStrokePattern * pattern; 
@required
-(void)setWidth:(double)arg1;
-(double)width;
-(TSDStrokePattern *)pattern;
-(TSUColor *)color;
-(void)setColor:(id)arg1;
-(double)miterLimit;
-(void)setMiterLimit:(double)arg1;
-(void)setPattern:(id)arg1;
-(void)setJoin:(int)arg1;
-(int)cap;
-(void)setCap:(int)arg1;
-(int)join;
-(double)actualWidth;
-(void)setPropertiesFromStroke:(id)arg1;
-(void)setPatternPropertiesFromStroke:(id)arg1;
-(void)setActualWidth:(double)arg1;

@end


@class TSUColor, TSDStrokePattern;

@interface TSDMutableStroke : TSDStroke <TSDMutableStroke>

@property (assign,nonatomic) char dontClearBackground; 
@property (nonatomic,copy) TSUColor * color; 
@property (assign,nonatomic) double width; 
@property (assign,nonatomic) double actualWidth; 
@property (assign,nonatomic) int cap; 
@property (assign,nonatomic) int join; 
@property (assign,nonatomic) double miterLimit; 
@property (nonatomic,copy) TSDStrokePattern * pattern; 
+(id)stroke;
+(id)emptyStroke;
-(void)setDontClearBackground:(char)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setWidth:(double)arg1 ;
-(double)width;
-(TSDStrokePattern *)pattern;
-(TSUColor *)color;
-(void)setColor:(TSUColor *)arg1 ;
-(double)miterLimit;
-(void)setMiterLimit:(double)arg1 ;
-(void)setPattern:(TSDStrokePattern *)arg1 ;
-(void)setJoin:(int)arg1 ;
-(int)cap;
-(void)setCap:(int)arg1 ;
-(int)join;
-(double)actualWidth;
-(void)setPropertiesFromStroke:(id)arg1 ;
-(void)setPatternPropertiesFromStroke:(id)arg1 ;
-(void)setActualWidth:(double)arg1 ;
@end
