/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@class TSCH3DVector;

@interface TSCH3DChartSceneAreaLayoutItemCache : NSObject {

	TSCH3DChartSceneAreaLayoutItemCacheValues _values;
	TSCH3DVector* _containingViewportVector;

}

@property (nonatomic,readonly) tvec4<float> infoChartScale; 
@property (nonatomic,readonly) tvec2<int> containingViewport; 
@property (nonatomic,readonly) TSCH3DVector * containingViewportVector;                               //@synthesize containingViewportVector=_containingViewportVector - In the implementation block
@property (nonatomic,readonly) tvec2<float> chartBodyLayoutOffsetInChartAreaLayoutSpace; 
@property (nonatomic,readonly) CGSize layoutSize; 
@property (nonatomic,readonly) CGSize requestLayoutSize; 
@property (nonatomic,readonly) CGSize chartBodyLayoutSize; 
@property (nonatomic,readonly) CGSize requestChartBodyLayoutSize; 
@property (nonatomic,readonly) tvec2<int> modelSize; 
@property (nonatomic,readonly) SCD_Struct_TS50 layoutSettings; 
@property (nonatomic,readonly) char forcedValid; 
+(id)cacheWithCacheValues:(const TSCH3DChartSceneAreaLayoutItemCacheValues*)arg1 ;
-(const TSCH3DChartSceneAreaLayoutItemCacheValues*)values;
-(CGSize)layoutSize;
-(TSCH3DVector *)containingViewportVector;
-(tvec2<int>)containingViewport;
-(tvec4<float>)infoChartScale;
-(SCD_Struct_TS50)layoutSettings;
-(CGSize)chartBodyLayoutSize;
-(char)forcedValid;
-(tvec2<float>)chartBodyLayoutOffsetInChartAreaLayoutSpace;
-(tvec2<int>)modelSize;
-(CGSize)requestLayoutSize;
-(CGSize)requestChartBodyLayoutSize;
-(id)initWithCacheValues:(const TSCH3DChartSceneAreaLayoutItemCacheValues*)arg1 ;
-(void)printDebug;
@end

