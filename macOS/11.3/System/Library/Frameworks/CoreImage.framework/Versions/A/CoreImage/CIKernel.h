/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@class NSString;

@interface CIKernel : NSObject {

	void* _priv;

}

@property (assign,nonatomic) BOOL perservesAlpha; 
@property (assign,nonatomic) BOOL canReduceOutputChannels; 
@property (assign,nonatomic) BOOL preservesRange; 
@property (assign,nonatomic) CGSize outputGroupSize; 
@property (readonly) NSString * name; 
+(id)redEyeMetalKernelWithFunctionName:(id)arg1 outputPixelFormat:(int)arg2 error:(id*)arg3 ;
+(id)redEyeMetalKernelWithFunctionName:(id)arg1 error:(id*)arg2 ;
+(id)SDOFV2MetalKernelNamed:(id)arg1 ;
+(unsigned long long)xxhashForString:(id)arg1 ;
+(id)betterString:(id)arg1 ;
+(id)modifiedKernelStringForFosl:(id)arg1 ;
+(id)allocForType:(int)arg1 ;
+(id)kernelsWithString:(id)arg1 andMetalLibrary:(id)arg2 messageLog:(id)arg3 ;
+(id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(id)kernelsWithString:(id)arg1 fromMetalLibraryData:(id)arg2 ;
+(id)kernelWithString:(id)arg1 fromMetalLibraryData:(id)arg2 ;
+(id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 outputPixelFormat:(int)arg3 error:(id*)arg4 ;
+(id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 outputGroupSize:(CGSize)arg3 error:(id*)arg4 ;
+(id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 constants:(id)arg3 error:(id*)arg4 ;
+(id)kernelNamesFromMetalLibraryData:(id)arg1 ;
+(id)colorMatrixBiasKernel;
+(id)redEyeMetalKernelWithFunctionName:(id)arg1 fromMetalLibraryURL:(id)arg2 outputPixelFormat:(int)arg3 error:(id*)arg4 ;
+(id)redEyeMetalKernelWithFunctionName:(id)arg1 fromMetalLibraryURL:(id)arg2 error:(id*)arg3 ;
+(id)SDOFV3MetalKernelNamed:(id)arg1 ;
+(id)hashForString:(id)arg1 ;
+(id)kernelsWithString:(id)arg1 messageLog:(id)arg2 ;
+(id)kernelWithString:(id)arg1 ;
+(id)kernelsWithString:(id)arg1 ;
+(id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 error:(id*)arg3 ;
-(void)setCanReduceOutputChannels:(BOOL)arg1 ;
-(void*)_internalRepresentation;
-(void)setPreservesRange:(BOOL)arg1 ;
-(id)_initWithInternalRepresentation:(void*)arg1 ;
-(BOOL)canReduceOutputChannels;
-(SEL)ROISelector;
-(id)_initWithReflection:(CIKernelReflection*)arg1 ;
-(id)_initWithString:(id)arg1 andMetalLibrary:(id)arg2 usingCruftCompatibility:(BOOL)arg3 ;
-(id)_initWithReflection:(CIKernelReflection*)arg1 constants:(id)arg2 constantTypes:(id)arg3 ;
-(id)_initWithString:(id)arg1 usingCruftCompatibility:(BOOL)arg2 ;
-(char)_isValidOutputPixelFormat:(int)arg1 ;
-(int)_outputFormatUsingDictionary:(id)arg1 andKernel:(Kernel*)arg2 ;
-(BOOL)preservesRange;
-(BOOL)perservesAlpha;
-(CGSize)outputGroupSize;
-(void)setOutputGroupSize:(CGSize)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)init;
-(NSString *)name;
-(id)initWithString:(id)arg1 ;
-(id)parameters;
-(void)setROISelector:(SEL)arg1 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 arguments:(id)arg3 ;
-(void)setPerservesAlpha:(BOOL)arg1 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 arguments:(id)arg3 options:(id)arg4 ;
@end
