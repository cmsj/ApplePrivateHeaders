/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DScenePropertyAccessor.h>

@interface TSCH3DChartScenePropertyAccessor : TSCH3DScenePropertyAccessor

@property (nonatomic,readonly) float constantDepthFactor; 
@property (assign,nonatomic) tvec2<float> sageChartInfoSize; 
@property (assign,nonatomic) tvec3<float> rotation; 
@property (assign,nonatomic) tvec3<float> originalRotation; 
@property (assign,nonatomic) tvec3<float> cachedRotation; 
@property (assign,nonatomic) tvec4<float> initialInfoChartScale; 
@property (assign,nonatomic) tvec4<float> infoChartScale; 
@property (assign,nonatomic) tvec3<float> elementScale; 
@property (assign,nonatomic) tvec3<float> stageScale; 
@property (assign,nonatomic) tvec3<float> stageOffset; 
@property (assign,nonatomic) tvec4<float> originalInfoChartScale; 
@property (assign,nonatomic) char layoutConfigurationEnabled; 
@property (assign,nonatomic) char dynamicShadowsEnabled; 
@property (assign,nonatomic) char labelsShadowIgnored; 
@property (assign,nonatomic) tvec3<float> initialInfoChartScaleVec3; 
@property (assign,nonatomic) tvec3<float> infoChartScaleVec3; 
@property (nonatomic,readonly) tvec3<float> stageXYCenter; 
@property (nonatomic,readonly) tmat4x4<float> stageTransform; 
@property (nonatomic,readonly) tmat4x4<float> unitTransform; 
@property (nonatomic,readonly) tmat4x4<float> transform; 
@property (nonatomic,readonly) tmat4x4<float> constantDepthStageTransform; 
@property (nonatomic,readonly) tmat4x4<float> globalUnitTransform; 
@property (nonatomic,readonly) float depthToWidthRatio; 
@property (nonatomic,readonly) tvec3<float> gridlinesOffset; 
@property (nonatomic,readonly) tvec3<float> categoryLabelsOffset; 
@property (nonatomic,readonly) char isHorizontal; 
@property (nonatomic,readonly) tvec3<float> adjustedInfoChartScale; 
+(id)nonNilAccessorWithScene:(id)arg1 ;
+(id)accessorWithScene:(id)arg1 ;
-(tvec3<float>)rotation;
-(tmat4x4<float>)transform;
-(void)setRotation:(tvec3<float>)arg1 ;
-(char)isHorizontal;
-(tvec3<float>)originalRotation;
-(void)setOriginalRotation:(tvec3<float>)arg1 ;
-(tmat4x4<float>)sceneTransform;
-(tvec3<float>)stageScale;
-(char)layoutConfigurationEnabled;
-(tvec4<float>)infoChartScale;
-(tvec3<float>)stageOffset;
-(tvec3<float>)adjustedInfoChartScale;
-(tvec3<float>)stageXYCenter;
-(tmat4x4<float>)stageTransform;
-(float)constantDepthFactor;
-(tmat4x4<float>)unitTransform;
-(tvec4<float>)initialInfoChartScale;
-(void)setInitialInfoChartScale:(tvec4<float>)arg1 ;
-(void)setInfoChartScale:(tvec4<float>)arg1 ;
-(tvec3<float>)infoChartScaleVec3;
-(tvec2<float>)sageChartInfoSize;
-(void)setSageChartInfoSize:(tvec2<float>)arg1 ;
-(tvec3<float>)cachedRotation;
-(void)setCachedRotation:(tvec3<float>)arg1 ;
-(tvec3<float>)elementScale;
-(void)setElementScale:(tvec3<float>)arg1 ;
-(void)setStageScale:(tvec3<float>)arg1 ;
-(void)setStageOffset:(tvec3<float>)arg1 ;
-(tvec4<float>)originalInfoChartScale;
-(void)setOriginalInfoChartScale:(tvec4<float>)arg1 ;
-(void)setLayoutConfigurationEnabled:(char)arg1 ;
-(char)dynamicShadowsEnabled;
-(void)setDynamicShadowsEnabled:(char)arg1 ;
-(char)labelsShadowIgnored;
-(void)setLabelsShadowIgnored:(char)arg1 ;
-(tmat4x4<float>)constantDepthStageTransform;
-(tmat4x4<float>)globalUnitTransform;
-(tvec3<float>)initialInfoChartScaleVec3;
-(void)setInitialInfoChartScaleVec3:(tvec3<float>)arg1 ;
-(void)setInfoChartScaleVec3:(tvec3<float>)arg1 ;
-(void)updateInfoChartScaleUsingConstantDepth;
-(void)resetInfoChartScale;
-(float)depthToWidthRatio;
-(tvec3<float>)gridlinesOffset;
-(tvec3<float>)categoryLabelsOffset;
@end

