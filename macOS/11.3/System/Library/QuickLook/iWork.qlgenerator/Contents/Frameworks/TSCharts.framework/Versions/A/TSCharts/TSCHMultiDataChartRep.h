/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCHChartRep.h>

@class CALayer, NSMutableDictionary, TSCHMultiDataChartRepElementIndex, NSSet;

@interface TSCHMultiDataChartRep : TSCHChartRep {

	CALayer* _rootLayer;
	CALayer* _elementsContainerLayer;
	char _renderingBackgroundLayer;
	char _renderingElementShapeLayer;
	char _renderingElementLabelsLayer;
	char _renderingDataSetNameLayer;
	char _renderingReferenceLineLayer;
	char _animatedLayersNeedUpdate;
	char _shouldAnimateLabelsQuickly;
	char _isAnimatingForBuilds;
	unsigned long long _elementLayersMultiDataSetIndex;
	int _gridDirection;
	NSMutableDictionary* _indexedElements;
	TSCHMultiDataChartRepElementIndex* _currentRepElementIndex;
	CALayer* _dataSetNameLayer;
	CALayer* _referenceLinesContainerLayer;
	NSSet* _referenceLinesToRender;
	NSSet* _referenceLineLabelsSearchSelectionsToRender;
	NSMutableDictionary* _layerIdToLayerMap;
	NSMutableDictionary* _previousOutsideBodyBounds;
	char _shouldDisableMultiDataControls;

}

@property (nonatomic,readonly) char shouldDisableMultiDataControls;              //@synthesize shouldDisableMultiDataControls=_shouldDisableMultiDataControls - In the implementation block
-(void)dealloc;
-(void)willBeginZooming;
-(void)didEndZooming;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(char)isHorizontalChart;
-(char)frameInUnscaledCanvasNeedsPaddingForShadows;
-(id)p_chartModel;
-(id)p_elementLayers;
-(char)needsAnimationForAnimationInfo:(id)arg1 ;
-(id)layerIdToLayerMap;
-(id)previousOutsideBodyBounds;
-(id)imageFromFill:(id)arg1 forResolutionWithBounds:(CGRect)arg2 toRepElementTransform:(CGAffineTransform)arg3 skipIntegral:(char)arg4 returningFillFrame:(CGRect*)arg5 ;
-(char)shouldUseLegendLayerForLayerBasedRep;
-(char)shouldDisableMultiDataControls;
@end
