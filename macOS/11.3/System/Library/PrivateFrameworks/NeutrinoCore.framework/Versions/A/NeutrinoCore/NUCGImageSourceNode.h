/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSourceNode.h>

@protocol OS_dispatch_queue;
@class NSObject, NSURL, NSString, NSDictionary;

@interface NUCGImageSourceNode : NUSourceNode {

	NSObject*<OS_dispatch_queue> _queue;
	char _loaded;
	NSURL* _URL;
	NSString* _UTI;
	CGImageSourceRef _cgImageSource;
	NSDictionary* _cgImageProperties;
	long long _orientation;
	CGColorSpaceRef _colorSpace;
	long long _alphaInfo;
	long long _componentInfo;
	NSDictionary* _auxiliaryImagesProperties;
	SCD_Struct_NU8 _size;

}

@property (readonly) NSURL * URL;                                           //@synthesize URL=_URL - In the implementation block
@property (readonly) NSString * UTI;                                        //@synthesize UTI=_UTI - In the implementation block
@property (assign) char loaded;                                             //@synthesize loaded=_loaded - In the implementation block
@property (nonatomic,retain) CGImageSourceRef cgImageSource;                //@synthesize cgImageSource=_cgImageSource - In the implementation block
@property (nonatomic,retain) NSDictionary * cgImageProperties;              //@synthesize cgImageProperties=_cgImageProperties - In the implementation block
@property (assign) SCD_Struct_NU8 size;                                     //@synthesize size=_size - In the implementation block
@property (assign) long long orientation;                                   //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) CGColorSpaceRef colorSpace;                    //@synthesize colorSpace=_colorSpace - In the implementation block
@property (assign) long long alphaInfo;                                     //@synthesize alphaInfo=_alphaInfo - In the implementation block
@property (assign) long long componentInfo;                                 //@synthesize componentInfo=_componentInfo - In the implementation block
@property (retain) NSDictionary * auxiliaryImagesProperties;                //@synthesize auxiliaryImagesProperties=_auxiliaryImagesProperties - In the implementation block
+(char)isFusedOvercaptureFromCGImageProperties:(id)arg1 ;
-(SCD_Struct_NU8)size;
-(void)dealloc;
-(void)_init;
-(NSURL *)URL;
-(void)setSize:(SCD_Struct_NU8)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(char)loaded;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(CGColorSpaceRef)colorSpace;
-(long long)orientation;
-(void)setLoaded:(char)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(NSString *)UTI;
-(id)debugQuickLookObject;
-(char)load:(out id*)arg1 ;
-(CGImageSourceRef)cgImageSource;
-(NSDictionary *)cgImageProperties;
-(id)initWithImageSource:(CGImageSourceRef)arg1 identifier:(id)arg2 ;
-(id)initWithURL:(id)arg1 UTI:(id)arg2 identifier:(id)arg3 ;
-(id)initWithURL:(id)arg1 UTI:(id)arg2 settings:(id)arg3 ;
-(void)_addDefaultFinalizedSourceOptions:(id)arg1 ;
-(id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateImageGeometryWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3 ;
-(id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)preparedNodeWithSourceContainer:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4 error:(out id*)arg5 ;
-(char)canPropagateOriginalAuxiliaryData;
-(long long)sourceOrientation;
-(char)shouldCacheNodeForPipelineState:(id)arg1 ;
-(char)_load:(out id*)arg1 ;
-(SCD_Struct_NU8)pixelSizeWithSourceOptions:(id)arg1 ;
-(char)supportsPipelineState:(id)arg1 error:(out id*)arg2 ;
-(long long)normalizeSubsampleFactor:(long long)arg1 ;
-(id)auxiliaryImagePropertiesForAuxImageType:(long long)arg1 ;
-(id)resolvedAuxiliaryImageNodeForPipelineState:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateAuxiliaryImageForType:(long long)arg1 error:(out id*)arg2 ;
-(char)_setGeometryFromProperties:(id)arg1 error:(out id*)arg2 ;
-(char)_setAuxiliaryImagePropertiesFromCGProperties:(id)arg1 error:(out id*)arg2 ;
-(id)_finalizeSourceOptions:(id)arg1 subsampleFactor:(long long)arg2 ;
-(id)_evaluateRawImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(void)setCgImageSource:(CGImageSourceRef)arg1 ;
-(void)setCgImageProperties:(NSDictionary *)arg1 ;
-(long long)alphaInfo;
-(void)setAlphaInfo:(long long)arg1 ;
-(long long)componentInfo;
-(void)setComponentInfo:(long long)arg1 ;
-(NSDictionary *)auxiliaryImagesProperties;
-(void)setAuxiliaryImagesProperties:(NSDictionary *)arg1 ;
@end

