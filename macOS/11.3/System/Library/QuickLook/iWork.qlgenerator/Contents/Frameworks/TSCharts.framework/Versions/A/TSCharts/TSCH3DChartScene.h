/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@class TSCH3DChartSceneInfo;

@interface TSCH3DChartScene : NSObject {

	TSCH3DChartSceneInfo* _sceneInfo;

}
+(char)supportsValueAxisLabelAlignmentCaching;
+(void)addObjectsToSceneWithSceneInfo:(id)arg1 ;
-(id)scene;
-(id)chartType;
-(id)chartInfo;
-(id)seriesType;
-(SCD_Struct_TS50)layoutSettings;
-(id)initWithSceneInfo:(id)arg1 ;
-(void)addAllObjectsToScene;
-(void)addLabelsToScene;
-(void)addChartTitlesToScene;
-(void)adjustSceneSettings;
-(void)addObjectsToScene;
-(void)addAllLabelsToScene;
-(void)addSeriesObjectsToScene;
@end

