/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DChartBasicElementProperties.h>

@class TSCH3DLabelResources, TSCH3DBarChartDefaultAppearance, NSMutableArray;

@interface TSCH3DChartBarElementProperties : TSCH3DChartBasicElementProperties {

	vector<float, std::__1::allocator<float>>* _maxValues;
	vector<TSCH3D::BarElementInfo, std::__1::allocator<TSCH3D::BarElementInfo>>* _elementInfos;
	char _stacked;
	char _bevelEdges;
	float _barWidth;
	float _elementsXOffset;
	float _seriesOffset;
	float _setWidth;
	int _barShape;
	TSCH3DLabelResources* _seriesLabels;
	array<TSCH3D::BarExtrusionDetails, 2> _extrusionDetails;
	TSCH3DBarChartDefaultAppearance* _appearance;
	NSMutableArray* _rangeCache;

}

@property (nonatomic,retain) TSCH3DLabelResources * seriesLabels;                    //@synthesize seriesLabels=_seriesLabels - In the implementation block
@property (nonatomic,readonly) id<TSCH3DBarChartAppearance> appearance; 
@property (nonatomic,readonly) int barShape;                                         //@synthesize barShape=_barShape - In the implementation block
@property (nonatomic,readonly) char hasBevelEdges;                                   //@synthesize bevelEdges=_bevelEdges - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)reset;
-(id<TSCH3DBarChartAppearance>)appearance;
-(void)p_updateAppearance;
-(void)createResources;
-(void)updateLabels;
-(char)applyElementTransform:(ObjectTransforms*)arg1 series:(id)arg2 index:(tvec2<int>)arg3 propertyAccessor:(id)arg4 ;
-(float)elementTransformDepthFromPropertyAccessor:(id)arg1 ;
-(id)texcoordsForSeries:(id)arg1 index:(const tvec2<int>*)arg2 ;
-(id)geometryForSeries:(id)arg1 index:(const tvec2<int>*)arg2 ;
-(id)boundsGeometryForSeries:(id)arg1 index:(const tvec2<int>*)arg2 ;
-(id)normalsForSeries:(id)arg1 index:(const tvec2<int>*)arg2 ;
-(void)p_createAppearance;
-(void)releaseAndClearAppearance;
-(long long)flatIndex:(tvec2<int>*)arg1 ;
-(BarElementInfo*)elementInfoAtIndex:(const tvec2<int>*)arg1 ;
-(id)calculateInterceptForSeries:(id)arg1 ;
-(id)p_calculateRangeForSeries:(id)arg1 index:(tvec2<int>*)arg2 intercept:(id)arg3 ;
-(id)rangeForSeries:(id)arg1 index:(tvec2<int>*)arg2 ;
-(char)beveledAtIndex:(const tvec2<int>*)arg1 ;
-(id)p_appearance;
-(const BarExtrusionDetails*)extrusionDetailsForShape:(int)arg1 ;
-(id)p_barResourceCacheItemAtIndex:(const tvec2<int>*)arg1 ;
-(void)setElementInfo:(const BarElementInfo*)arg1 atIndex:(const tvec2<int>*)arg2 ;
-(void)setMaxValueForSeries:(long long)arg1 value:(float)arg2 ;
-(void)setSeriesLabels:(TSCH3DLabelResources *)arg1 ;
-(TSCH3DLabelResources *)seriesLabels;
-(float)chartInitialDepthOffset;
-(void)calculateLayout;
-(void)p_updateRangeCache;
-(void)updateMaxValuesAndBevels;
-(id)p_appearanceClasses;
-(void)p_resetExtrusionDetails;
-(BarElementInfo)barElementInfoAtIndex:(const tvec2<int>*)arg1 ;
-(void)setBeveledAtIndex:(const tvec2<int>*)arg1 ;
-(float)interceptValueForSeries:(id)arg1 ;
-(float)barWidth;
-(float)maxValueForSeries:(long long)arg1 ;
-(void)setExtrusionDetails:(const BarExtrusionDetails*)arg1 forShape:(int)arg2 ;
-(int)barShape;
-(char)hasBevelEdges;
@end

