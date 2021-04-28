/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSString, NSMutableArray, CUIPSDGradient, NSData, CUIShapeEffectPreset, NSDate, NSSet, NSArray, NSDictionary, MDLAsset, MDLMesh, MDLSubmesh;

@interface CSIGenerator : NSObject {

	CGSize _size;
	NSString* _name;
	NSString* _utiType;
	CGSize _physicalSizeInMeters;
	NSMutableArray* _slices;
	NSMutableArray* _bitmaps;
	NSMutableArray* _metrics;
	NSMutableArray* _layerReferences;
	char _isExcludedFromFilter;
	char _isVectorBased;
	long long _templateRenderingMode;
	char _allowsMultiPassEncoding;
	char _allowsOptimalRowbytesPacking;
	char _allowsPaletteImageCompression;
	char _allowsHevcCompression;
	char _allowsDeepmapImageCompression;
	char _allowsDeepmap2ImageCompression;
	char _optOutOfThinning;
	char _preservedVectorRepresentation;
	char _isFlippable;
	char _isTintable;
	long long _targetPlatform;
	short _colorSpaceID;
	short _layout;
	unsigned _scaleFactor;
	CUIPSDGradient* _gradient;
	NSData* _rawData;
	CUIShapeEffectPreset* _effectPreset;
	int _blendMode;
	double _opacity;
	NSDate* _modtime;
	unsigned _pixelFormat;
	int _exifOrientation;
	unsigned long long _rowbytes;
	NSString* _assetPackIdentifier;
	NSSet* _externalTags;
	CGRect _externalReferenceFrame;
	unsigned short _linkLayout;
	CGSize _originalUncroppedSize;
	CGRect _alphaCroppedFrame;
	NSArray* _containedNamedElements;
	double _compressionQuality;
	long long _compressionType;
	char _isCubeMap;
	long long _textureFormat;
	long long _textureInterpretation;
	NSMutableArray* _mipReferences;
	char _textureOpaque;
	NSArray* _colorComponents;
	NSString* _systemColorName;
	NSDictionary* _sizesByIndex;
	char _clampMetrics;
	NSString* _fontName;
	double _fontSize;
	double _maxPointSize;
	double _minPointSize;
	short _scalingStyle;
	short _alignment;
	NSDictionary* _renditionProperties;
	int _objectVersion;
	SCD_Struct_CS28 _transformation;
	MDLAsset* _modelAsset;
	NSMutableArray* _meshReferences;
	MDLMesh* _modelMesh;
	NSMutableArray* _submeshReferences;
	MDLSubmesh* _modelSubmesh;
	NSArray* _vectorSizes;
	unsigned _standardVectorSize;
	float _baseline;
	float _capHeight;
	float _templateVersion;
	SCD_Struct_CU1 _alignmentRectInsets;

}

@property (assign,nonatomic) double compressionQuality; 
@property (assign) long long targetPlatform; 
@property (assign) long long compressionType; 
@property (assign,nonatomic) CGSize size;                                                                      //@synthesize size=_size - In the implementation block
@property (nonatomic,copy) NSString * name;                                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * utiType;                                                                 //@synthesize utiType=_utiType - In the implementation block
@property (assign,nonatomic) CGSize physicalSizeInMeters;                                                      //@synthesize physicalSizeInMeters=_physicalSizeInMeters - In the implementation block
@property (assign,nonatomic) char isVectorBased;                                                               //@synthesize isVectorBased=_isVectorBased - In the implementation block
@property (assign,nonatomic) long long templateRenderingMode;                                                  //@synthesize templateRenderingMode=_templateRenderingMode - In the implementation block
@property (assign,getter=isExcludedFromContrastFilter,nonatomic) char excludedFromContrastFilter;              //@synthesize isExcludedFromFilter=_isExcludedFromFilter - In the implementation block
@property (assign,nonatomic) char optOutOfThinning;                                                            //@synthesize optOutOfThinning=_optOutOfThinning - In the implementation block
@property (assign,nonatomic) char preservedVectorRepresentation;                                               //@synthesize preservedVectorRepresentation=_preservedVectorRepresentation - In the implementation block
@property (assign,nonatomic) char isFlippable;                                                                 //@synthesize isFlippable=_isFlippable - In the implementation block
@property (assign,nonatomic) char isTintable;                                                                  //@synthesize isTintable=_isTintable - In the implementation block
@property (assign,nonatomic) short colorSpaceID;                                                               //@synthesize colorSpaceID=_colorSpaceID - In the implementation block
@property (assign,nonatomic) unsigned scaleFactor;                                                             //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (assign,nonatomic) unsigned pixelFormat;                                                             //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (assign,nonatomic) char allowsMultiPassEncoding;                                                     //@synthesize allowsMultiPassEncoding=_allowsMultiPassEncoding - In the implementation block
@property (assign,nonatomic) char allowsOptimalRowbytesPacking;                                                //@synthesize allowsOptimalRowbytesPacking=_allowsOptimalRowbytesPacking - In the implementation block
@property (assign,nonatomic) char allowsPaletteImageCompression;                                               //@synthesize allowsPaletteImageCompression=_allowsPaletteImageCompression - In the implementation block
@property (assign,nonatomic) char allowsHevcCompression;                                                       //@synthesize allowsHevcCompression=_allowsHevcCompression - In the implementation block
@property (assign,nonatomic) char allowsDeepmapImageCompression;                                               //@synthesize allowsDeepmapImageCompression=_allowsDeepmapImageCompression - In the implementation block
@property (assign,nonatomic) char allowsDeepmap2ImageCompression;                                              //@synthesize allowsDeepmap2ImageCompression=_allowsDeepmap2ImageCompression - In the implementation block
@property (assign,nonatomic) int exifOrientation;                                                              //@synthesize exifOrientation=_exifOrientation - In the implementation block
@property (assign,nonatomic) CGSize originalUncroppedSize;                                                     //@synthesize originalUncroppedSize=_originalUncroppedSize - In the implementation block
@property (assign,nonatomic) CGRect alphaCroppedFrame;                                                         //@synthesize alphaCroppedFrame=_alphaCroppedFrame - In the implementation block
@property (assign,nonatomic) char clampMetrics;                                                                //@synthesize clampMetrics=_clampMetrics - In the implementation block
@property (assign,nonatomic) long long textureFormat;                                                          //@synthesize textureFormat=_textureFormat - In the implementation block
@property (assign,nonatomic) long long textureInterpretation;                                                  //@synthesize textureInterpretation=_textureInterpretation - In the implementation block
@property (assign,nonatomic) char textureOpaque;                                                               //@synthesize textureOpaque=_textureOpaque - In the implementation block
@property (assign,nonatomic) char cubemap;                                                                     //@synthesize isCubeMap=_isCubeMap - In the implementation block
@property (nonatomic,readonly) NSArray * mipReferences;                                                        //@synthesize mipReferences=_mipReferences - In the implementation block
@property (nonatomic,readonly) NSArray * layerReferences;                                                      //@synthesize layerReferences=_layerReferences - In the implementation block
@property (nonatomic,retain) CUIPSDGradient * gradient;                                                        //@synthesize gradient=_gradient - In the implementation block
@property (nonatomic,retain) CUIShapeEffectPreset * effectPreset;                                              //@synthesize effectPreset=_effectPreset - In the implementation block
@property (assign,nonatomic) int blendMode;                                                                    //@synthesize blendMode=_blendMode - In the implementation block
@property (assign,nonatomic) double opacity;                                                                   //@synthesize opacity=_opacity - In the implementation block
@property (nonatomic,copy) NSDate * modtime;                                                                   //@synthesize modtime=_modtime - In the implementation block
@property (nonatomic,copy) NSArray * colorComponents;                                                          //@synthesize colorComponents=_colorComponents - In the implementation block
@property (nonatomic,copy) NSDictionary * sizesByIndex;                                                        //@synthesize sizesByIndex=_sizesByIndex - In the implementation block
@property (nonatomic,copy) NSString * fontName;                                                                //@synthesize fontName=_fontName - In the implementation block
@property (assign,nonatomic) double fontSize;                                                                  //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) double maxPointSize;                                                              //@synthesize maxPointSize=_maxPointSize - In the implementation block
@property (assign,nonatomic) double minPointSize;                                                              //@synthesize minPointSize=_minPointSize - In the implementation block
@property (assign,nonatomic) short scalingStyle;                                                               //@synthesize scalingStyle=_scalingStyle - In the implementation block
@property (assign,nonatomic) short alignment;                                                                  //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,copy) NSDictionary * renditionProperties;                                                 //@synthesize renditionProperties=_renditionProperties - In the implementation block
@property (assign,nonatomic) int objectVersion;                                                                //@synthesize objectVersion=_objectVersion - In the implementation block
@property (assign,nonatomic) SCD_Struct_CS28 transformation;                                                   //@synthesize transformation=_transformation - In the implementation block
@property (nonatomic,copy) MDLAsset * modelAsset;                                                              //@synthesize modelAsset=_modelAsset - In the implementation block
@property (nonatomic,readonly) NSArray * meshReferences;                                                       //@synthesize meshReferences=_meshReferences - In the implementation block
@property (nonatomic,copy) MDLMesh * modelMesh;                                                                //@synthesize modelMesh=_modelMesh - In the implementation block
@property (nonatomic,readonly) NSArray * submeshReferences;                                                    //@synthesize submeshReferences=_submeshReferences - In the implementation block
@property (nonatomic,copy) MDLSubmesh * modelSubmesh;                                                          //@synthesize modelSubmesh=_modelSubmesh - In the implementation block
@property (nonatomic,copy) NSArray * vectorSizes;                                                              //@synthesize vectorSizes=_vectorSizes - In the implementation block
@property (assign,nonatomic) unsigned standardVectorSize;                                                      //@synthesize standardVectorSize=_standardVectorSize - In the implementation block
@property (assign,nonatomic) float baseline;                                                                   //@synthesize baseline=_baseline - In the implementation block
@property (assign,nonatomic) float capHeight;                                                                  //@synthesize capHeight=_capHeight - In the implementation block
@property (assign,nonatomic) SCD_Struct_CU1 alignmentRectInsets;                                               //@synthesize alignmentRectInsets=_alignmentRectInsets - In the implementation block
@property (assign,nonatomic) float templateVersion;                                                            //@synthesize templateVersion=_templateVersion - In the implementation block
+(void)initialize;
+(void)setFileEncoding:(int)arg1 ;
+(int)fileEncoding;
-(CGSize)size;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setAlignment:(short)arg1 ;
-(void)setPixelFormat:(unsigned)arg1 ;
-(double)maxPointSize;
-(unsigned)pixelFormat;
-(short)alignment;
-(char)isFlippable;
-(SCD_Struct_CU1)alignmentRectInsets;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(void)setOpacity:(double)arg1 ;
-(NSString *)fontName;
-(double)opacity;
-(float)capHeight;
-(void)setScaleFactor:(unsigned)arg1 ;
-(unsigned)scaleFactor;
-(double)fontSize;
-(void)setFontName:(NSString *)arg1 ;
-(void)setFontSize:(double)arg1 ;
-(void)setGradient:(CUIPSDGradient *)arg1 ;
-(CUIPSDGradient *)gradient;
-(void)setAlignmentRectInsets:(SCD_Struct_CU1)arg1 ;
-(NSString *)utiType;
-(id)rawData;
-(char)cubemap;
-(int)exifOrientation;
-(double)compressionQuality;
-(void)setCompressionQuality:(double)arg1 ;
-(void)setBaseline:(float)arg1 ;
-(float)baseline;
-(id)initWithNameList:(id)arg1 ;
-(long long)targetPlatform;
-(void)setTargetPlatform:(long long)arg1 ;
-(id)CSIRepresentationWithCompression:(char)arg1 ;
-(id)initWithCanvasSize:(CGSize)arg1 sliceCount:(unsigned)arg2 layout:(short)arg3 ;
-(id)initWithInternalReferenceRect:(CGRect)arg1 layout:(short)arg2 ;
-(void)addLayerReference:(id)arg1 ;
-(long long)textureFormat;
-(id)initWithTextureImageWithSize:(CGSize)arg1 forPixelFormat:(long long)arg2 cubeMap:(char)arg3 ;
-(void)setExifOrientation:(int)arg1 ;
-(void)setRenditionProperties:(NSDictionary *)arg1 ;
-(void)addMetrics:(SCD_Struct_CS29)arg1 ;
-(short)colorSpaceID;
-(void)setColorSpaceID:(short)arg1 ;
-(long long)textureInterpretation;
-(void)setTextureInterpretation:(long long)arg1 ;
-(void)addBitmap:(id)arg1 ;
-(char)optOutOfThinning;
-(void)setOptOutOfThinning:(char)arg1 ;
-(void)setAllowsMultiPassEncoding:(char)arg1 ;
-(void)setAllowsOptimalRowbytesPacking:(char)arg1 ;
-(void)setMaxPointSize:(double)arg1 ;
-(double)minPointSize;
-(void)setMinPointSize:(double)arg1 ;
-(short)scalingStyle;
-(void)setScalingStyle:(short)arg1 ;
-(NSArray *)colorComponents;
-(long long)compressionType;
-(void)setAllowsPaletteImageCompression:(char)arg1 ;
-(void)setAllowsHevcCompression:(char)arg1 ;
-(long long)templateRenderingMode;
-(void)setTemplateRenderingMode:(long long)arg1 ;
-(void)setIsFlippable:(char)arg1 ;
-(CGSize)physicalSizeInMeters;
-(void)setPhysicalSizeInMeters:(CGSize)arg1 ;
-(void)setCompressionType:(long long)arg1 ;
-(NSArray *)layerReferences;
-(char)allowsPaletteImageCompression;
-(char)allowsHevcCompression;
-(int)objectVersion;
-(SCD_Struct_CS28)transformation;
-(char)isTintable;
-(void)setIsTintable:(char)arg1 ;
-(void)setColorComponents:(NSArray *)arg1 ;
-(void)setTransformation:(SCD_Struct_CS28)arg1 ;
-(void)setObjectVersion:(int)arg1 ;
-(id)initWithRawData:(id)arg1 pixelFormat:(unsigned)arg2 layout:(short)arg3 ;
-(void)setUtiType:(NSString *)arg1 ;
-(void)setAllowsDeepmapImageCompression:(char)arg1 ;
-(void)setAllowsDeepmap2ImageCompression:(char)arg1 ;
-(void)addSliceRect:(CGRect)arg1 ;
-(void)setExcludedFromContrastFilter:(char)arg1 ;
-(float)templateVersion;
-(id)initWithExternalReference:(id)arg1 tags:(id)arg2 ;
-(id)initWithColorNamed:(id)arg1 colorSpaceID:(unsigned long long)arg2 components:(id)arg3 linkedToSystemColorWithName:(id)arg4 ;
-(id)initWithModelSubmesh:(id)arg1 ;
-(id)initWithMultisizeImageSetNamed:(id)arg1 sizesByIndex:(id)arg2 ;
-(id)initWithModelMesh:(id)arg1 ;
-(void)addSubmeshReference:(id)arg1 ;
-(void)setIsVectorBased:(char)arg1 ;
-(void)setStandardVectorSize:(unsigned)arg1 ;
-(void)setVectorSizes:(NSArray *)arg1 ;
-(void)setCapHeight:(float)arg1 ;
-(void)setTemplateVersion:(float)arg1 ;
-(CUIShapeEffectPreset *)effectPreset;
-(id)initWithTextStyleNamed:(id)arg1 fontName:(id)arg2 fontSize:(double)arg3 maxPointSize:(double)arg4 minPointSize:(double)arg5 scalingStyle:(short)arg6 alignment:(short)arg7 ;
-(id)initWithShapeEffectPreset:(id)arg1 forScaleFactor:(unsigned)arg2 ;
-(id)initWithModelAsset:(id)arg1 ;
-(void)addMeshReference:(id)arg1 ;
-(id)initWithTextureForPixelFormat:(long long)arg1 ;
-(void)setTextureFormat:(long long)arg1 ;
-(void)setCubemap:(char)arg1 ;
-(void)setTextureOpaque:(char)arg1 ;
-(void)addMipReference:(id)arg1 ;
-(id)initWithLayerStackData:(id)arg1 withCanvasSize:(CGSize)arg2 ;
-(char)allowsMultiPassEncoding;
-(void)setAlphaCroppedFrame:(CGRect)arg1 ;
-(void)setOriginalUncroppedSize:(CGSize)arg1 ;
-(char)allowsOptimalRowbytesPacking;
-(void)setClampMetrics:(char)arg1 ;
-(void)setPreservedVectorRepresentation:(char)arg1 ;
-(MDLAsset *)modelAsset;
-(void)setModelAsset:(MDLAsset *)arg1 ;
-(CGSize)originalUncroppedSize;
-(char)isVectorBased;
-(char)preservedVectorRepresentation;
-(MDLMesh *)modelMesh;
-(MDLSubmesh *)modelSubmesh;
-(void)setEffectPreset:(CUIShapeEffectPreset *)arg1 ;
-(char)allowsDeepmapImageCompression;
-(char)allowsDeepmap2ImageCompression;
-(NSDate *)modtime;
-(NSDictionary *)sizesByIndex;
-(id)initWithColorNamed:(id)arg1 colorSpaceID:(unsigned long long)arg2 components:(id)arg3 ;
-(char)isExcludedFromContrastFilter;
-(void)setModtime:(NSDate *)arg1 ;
-(CGRect)alphaCroppedFrame;
-(NSArray *)mipReferences;
-(char)textureOpaque;
-(void)setSizesByIndex:(NSDictionary *)arg1 ;
-(char)clampMetrics;
-(NSDictionary *)renditionProperties;
-(NSArray *)meshReferences;
-(void)setModelMesh:(MDLMesh *)arg1 ;
-(NSArray *)submeshReferences;
-(void)setModelSubmesh:(MDLSubmesh *)arg1 ;
-(NSArray *)vectorSizes;
-(unsigned)standardVectorSize;
@end
