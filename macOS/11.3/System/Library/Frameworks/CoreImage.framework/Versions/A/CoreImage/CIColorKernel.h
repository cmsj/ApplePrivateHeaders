/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIKernel.h>

@interface CIColorKernel : CIKernel

@property (assign,nonatomic) BOOL perservesAlpha; 
+(id)SDOFV2MetalKernelNamed:(id)arg1 ;
+(id)SDOFV3MetalKernelNamed:(id)arg1 ;
+(id)kernelWithString:(id)arg1 ;
-(void)setCanReduceOutputChannels:(BOOL)arg1 ;
-(void)setPreservesRange:(BOOL)arg1 ;
-(BOOL)canReduceOutputChannels;
-(id)_initWithReflection:(CIKernelReflection*)arg1 constants:(id)arg2 constantTypes:(id)arg3 ;
-(BOOL)preservesRange;
-(BOOL)perservesAlpha;
-(id)initWithString:(id)arg1 ;
-(id)applyWithExtent:(CGRect)arg1 arguments:(id)arg2 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 arguments:(id)arg3 ;
-(void)setPerservesAlpha:(BOOL)arg1 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 arguments:(id)arg3 options:(id)arg4 ;
-(id)applyWithExtent:(CGRect)arg1 arguments:(id)arg2 options:(id)arg3 ;
@end
