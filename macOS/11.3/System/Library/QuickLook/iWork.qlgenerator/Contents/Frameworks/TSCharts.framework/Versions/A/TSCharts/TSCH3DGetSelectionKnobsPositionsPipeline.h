/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCH3DSceneRenderPipeline.h>
#import <TSCharts/TSCH3DSceneObjectDelegator.h>

@class TSCH3DChartRep, TSCH3DGetSelectionKnobsPositionsPipelineDelegate, NSArray, NSMutableArray;

@interface TSCH3DGetSelectionKnobsPositionsPipeline : TSCH3DSceneRenderPipeline <TSCH3DSceneObjectDelegator> {

	TSCH3DChartRep* _rep;
	TSCH3DGetSelectionKnobsPositionsPipelineDelegate* _sceneObjectDelegate;
	NSArray* _selection;
	NSMutableArray* _projectedPoints;
	float _normalizedKnobRadius;

}

@property (nonatomic,readonly) NSArray * projectedPoints;              //@synthesize projectedPoints=_projectedPoints - In the implementation block
+(id)pipelineWithRep:(id)arg1 scene:(id)arg2 selection:(id)arg3 normalizedKnobRadius:(float)arg4 ;
-(NSArray *)projectedPoints;
-(char)render;
-(id)makeDelegateWithScene:(id)arg1 ;
-(id)makeDelegateWithSceneObject:(id)arg1 scene:(id)arg2 ;
-(void)getSelectionKnobsPositions:(id)arg1 ;
-(Class)labelsMeshRendererClassForLabelsRenderer:(id)arg1 ;
-(id)initWithRep:(id)arg1 scene:(id)arg2 selection:(id)arg3 normalizedKnobRadius:(float)arg4 ;
@end
