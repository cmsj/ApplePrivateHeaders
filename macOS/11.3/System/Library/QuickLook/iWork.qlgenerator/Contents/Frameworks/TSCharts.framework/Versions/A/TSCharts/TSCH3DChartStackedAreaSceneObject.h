/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCH3DChartAreaSceneObject.h>

@interface TSCH3DChartStackedAreaSceneObject : TSCH3DChartAreaSceneObject
+(float)depthLimitFactorForSeriesCount:(long long)arg1 maxLimitingSeries:(long long)arg2 ;
+(float)chartSeriesDepth;
+(char)supportsChartSeriesDepthOffset;
+(id)chartSeriesType;
+(float)chartSeriesPolygonOffset;
-(float)depthForScene:(id)arg1 ;
-(void)sortElements:(id*)arg1 pipeline:(id)arg2 ;
-(char)transparencyDepthMask;
@end

