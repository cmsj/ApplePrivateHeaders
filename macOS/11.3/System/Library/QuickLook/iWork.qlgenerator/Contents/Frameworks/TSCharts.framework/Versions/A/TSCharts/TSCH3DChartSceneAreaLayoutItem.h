/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCHChartAbstractAreaLayoutItem.h>

@class TSCH3DChartResizerHelper, TSCH3DScene, TSCH3DVector;

@interface TSCH3DChartSceneAreaLayoutItem : TSCHChartAbstractAreaLayoutItem {

	CGRect _chartBodyLayoutRect;
	TSCH3DChartResizerHelper* _resizerHelper;
	TSCH3DScene* _scene;
	tvec2<float> _chartBodyLayoutOffsetInChartAreaLayoutSpace;
	char _isInvariant;
	char _isInvalidated;
	tvec4<float> _initialInfoChartScale;

}

@property (assign,nonatomic) CGRect chartBodyLayoutRect;                                       //@synthesize chartBodyLayoutRect=_chartBodyLayoutRect - In the implementation block
@property (nonatomic,readonly) tvec2<int> containingViewport; 
@property (nonatomic,readonly) TSCH3DVector * containingViewportVector; 
@property (nonatomic,readonly) const ChartProjectedBoundsSpaces* projectedBounds; 
@property (nonatomic,readonly) TSCH3DScene * scene;                                            //@synthesize scene=_scene - In the implementation block
@property (assign,nonatomic) char isInvariant;                                                 //@synthesize isInvariant=_isInvariant - In the implementation block
+(id)worldBoundsDescriptionForScene:(id)arg1 ;
-(id)initWithParent:(id)arg1 ;
-(void)clearAll;
-(TSCH3DScene *)scene;
-(void)clearScene;
-(CGRect)titleFrame;
-(void)invalidateBounds;
-(const ChartProjectedBoundsSpaces*)projectedBounds;
-(TSCH3DVector *)containingViewportVector;
-(id)boundsLayout;
-(tvec2<int>)containingViewport;
-(CGRect)chartBodyLayoutRect;
-(void)invalidateLabelsBoundsForSceneObjectClass:(Class)arg1 boundsIndex:(long long)arg2 ;
-(void)p_validate;
-(id)p_updatedResizerHelper;
-(id)p_updatedResizerHelperForcingAccurateBounds:(char)arg1 ;
-(id)boundsLayout:(CGRect)arg1 scene:(id)arg2 forcesAccurateBounds:(char)arg3 allowsEmptyBodyLayoutBounds:(char)arg4 ;
-(CGRect)calcDrawingRect;
-(CGRect)p_frameForSelectionPath:(id)arg1 sceneObjectClass:(Class)arg2 ;
-(void)p_updateBodyLayoutRect;
-(void)p_updateLayoutSize:(CGSize)arg1 chartBodyLayoutOffsetInChartAreaLayoutSpace:(const tvec2<float>*)arg2 ;
-(tvec2<int>)p_currentModelSize;
-(char)p_validCacheItem:(id)arg1 inward:(char)arg2 ;
-(void)p_updateFromCacheItem:(id)arg1 ;
-(char)p_needsRefinementForInwardLayout;
-(void)layoutInward;
-(id)p_cache;
-(char)p_inwardLayoutCanUseCacheItem:(id)arg1 ;
-(id)p_cacheInwardLayout;
-(void)layoutOutward;
-(char)p_outwardLayoutCanUseCacheItem:(id)arg1 ;
-(id)p_cacheOutwardLayout;
-(void)setLayoutOffset:(CGPoint)arg1 ;
-(const ChartProjectedBoundsSpaces*)projectedBoundsWithScene:(id)arg1 forcesAccurateBounds:(char)arg2 allowsEmptyBodyLayoutBounds:(char)arg3 ;
-(id)debug_rotationBounds;
-(void)setStabilizedChartBodyLayoutRectUsingConverter:(const ChartProjectedBoundsConverter*)arg1 ;
-(void)setChartBodyLayoutSize:(CGSize)arg1 ;
-(void)setChartBodyLayoutRect:(CGRect)arg1 ;
-(char)isInvariant;
-(void)setIsInvariant:(char)arg1 ;
@end

