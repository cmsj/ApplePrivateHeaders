/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSDrawables/TSDImageAdjustments.h>

@interface TSDMutableImageAdjustments : TSDImageAdjustments

@property (assign,nonatomic) double exposure; 
@property (assign,nonatomic) double saturation; 
@property (assign,nonatomic) double contrast; 
@property (assign,nonatomic) double highlights; 
@property (assign,nonatomic) double shadows; 
@property (assign,nonatomic) double sharpness; 
@property (assign,nonatomic) double denoise; 
@property (assign,nonatomic) double temperature; 
@property (assign,nonatomic) double tint; 
@property (assign,nonatomic) double bottomLevel; 
@property (assign,nonatomic) double topLevel; 
@property (assign,nonatomic) double gamma; 
@property (assign,nonatomic) char enhance; 
@property (assign,nonatomic) char representsSageAdjustments; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSaturation:(double)arg1 ;
-(void)setContrast:(double)arg1 ;
-(void)setTemperature:(double)arg1 ;
-(void)setSharpness:(double)arg1 ;
-(void)setGamma:(double)arg1 ;
-(void)setTint:(double)arg1 ;
-(void)setHighlights:(double)arg1 ;
-(void)setExposure:(double)arg1 ;
-(void)setTopLevel:(double)arg1 ;
-(void)setEnhance:(char)arg1 ;
-(void)setShadows:(double)arg1 ;
-(void)setDenoise:(double)arg1 ;
-(void)setBottomLevel:(double)arg1 ;
-(void)setRepresentsSageAdjustments:(char)arg1 ;
@end

