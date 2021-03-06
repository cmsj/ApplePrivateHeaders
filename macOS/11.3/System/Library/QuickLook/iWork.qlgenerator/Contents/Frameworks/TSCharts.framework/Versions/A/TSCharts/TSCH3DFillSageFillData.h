/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DSageFillData.h>

@class TSCH3DFill, NSMutableArray;

@interface TSCH3DFillSageFillData : NSObject <TSCH3DSageFillData> {

	TSCH3DFill* _fill;
	NSMutableArray* _textures;
	NSMutableArray* _textureBlendModes;

}
+(id)dataWithFill:(id)arg1 ;
-(unsigned long long)layerCount;
-(id)environment;
-(float)opacity;
-(float)shininess;
-(Color)diffuse;
-(Color)specular;
-(id)materialAtIndex:(unsigned long long)arg1 ;
-(id)initWithFill:(id)arg1 ;
-(id)lightingModel;
-(id)phongMaterials;
-(Color)emissive;
-(id)textureForIndex:(unsigned long long)arg1 ;
-(char)layerIsEnvironmentMapForIndex:(unsigned long long)arg1 ;
-(long long)layerBlendModeForIndex:(unsigned long long)arg1 ;
-(char)isLayerEnabledForIndex:(unsigned long long)arg1 ;
-(float)layerScaleForIndex:(unsigned long long)arg1 ;
-(float)layerRotationForIndex:(unsigned long long)arg1 ;
-(int)layerTilingModeForIndex:(unsigned long long)arg1 ;
-(id)layerLightenPercentageForIndex:(unsigned long long)arg1 ;
-(id)fillSetIdentifier;
-(unsigned long long)diffuseCount;
-(id)diffuseMaterial;
-(void)p_addMaterial:(id)arg1 blendMode:(long long)arg2 ;
-(unsigned long long)modulateCount;
-(id)modulateMaterial;
@end

