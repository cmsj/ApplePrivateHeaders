/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@class NSArray, NSString, TSCHElementBuilder, TSUIntToIntDictionary;

@interface TSCHChartSeriesType : NSObject {

	NSArray* _seriesRendererClasses;

}

@property (nonatomic,readonly) NSString * inspectorLocalizedValueLabelsTabName; 
@property (nonatomic,readonly) NSString * userInterfaceName; 
@property (nonatomic,readonly) Class sceneObjectClass; 
@property (nonatomic,readonly) int defaultSymbolType; 
@property (nonatomic,readonly) int seriesStrokeProperty; 
@property (nonatomic,readonly) int specificFillSetFillProperty; 
@property (nonatomic,readonly) int legendBadgeType; 
@property (nonatomic,readonly) NSArray * supportedSymbols; 
@property (nonatomic,readonly) NSArray * supportedValueLabelsAxisCombinations; 
@property (nonatomic,readonly) NSArray * legalChartLabelPositions; 
@property (nonatomic,readonly) NSArray * seriesRendererClasses; 
@property (nonatomic,readonly) TSCHElementBuilder * elementBuilder; 
@property (nonatomic,readonly) char chunkedBuildsIncludeInterceptValues; 
@property (nonatomic,readonly) char supportsSeriesFill; 
@property (nonatomic,readonly) char supportsSeriesGradientFill; 
@property (nonatomic,readonly) char supportsSymbolTypeEditing; 
@property (nonatomic,readonly) char supportsValueLabels; 
@property (nonatomic,readonly) char supportsValueLabelsSeriesName; 
@property (nonatomic,readonly) char supportsValueLabelsAxisOption; 
@property (nonatomic,readonly) char supportsLineTypeNone; 
@property (nonatomic,readonly) char supportsLineConnectionStyle; 
@property (nonatomic,readonly) char supportsSetGap; 
@property (nonatomic,readonly) char supportsBarGap; 
@property (nonatomic,readonly) char supportsRoundedCorners; 
@property (nonatomic,readonly) char supportsFillSetFill; 
@property (nonatomic,readonly) char supportsCalloutLines; 
@property (nonatomic,readonly) char supportsDownsampling; 
@property (nonatomic,readonly) char supportsGridPartitioning; 
@property (nonatomic,readonly) char isVertical; 
@property (nonatomic,readonly) char useInBarGapCalculations; 
@property (nonatomic,readonly) NSString * inspectorLocalizedValueLabelsDisclosureTitle; 
@property (nonatomic,readonly) NSString * seriesFillLabelUIString; 
@property (nonatomic,readonly) char supportsShadowOffset; 
@property (nonatomic,readonly) char supportsSymbolDrawing; 
@property (nonatomic,readonly) char supportsSeries3DFill; 
@property (nonatomic,readonly) char supportsSeriesStroke; 
@property (nonatomic,readonly) NSArray * axisTypesForValueLabels; 
@property (nonatomic,copy,readonly) NSArray * propertiesForReferenceColors; 
@property (nonatomic,readonly) TSUIntToIntDictionary * genericToSpecificPropertyMap; 
@property (nonatomic,readonly) int fillSetFillProperty; 
@property (nonatomic,readonly) unsigned long long valueDimensions; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)_singletonAlloc;
+(Class)sceneObjectClass;
+(id)stackedColumn3DSeries;
+(id)stackedBar3DSeries;
+(id)column3DSeries;
+(id)bar3DSeries;
+(id)line3DSeries;
+(id)area3DSeries;
+(id)stackedArea3DSeries;
+(id)pie3DSeries;
+(id)columnSeries;
+(id)mixedLineSeries;
+(id)mixedAreaSeries;
+(id)mixedColumnSeries;
+(id)scatterSeries;
+(id)bubbleSeries;
+(id)pieSeries;
+(id)barSeries;
+(id)lineSeries;
+(id)areaSeries;
+(id)stackedColumnSeries;
+(id)stackedBarSeries;
+(id)stackedAreaSeries;
+(id)inspectorDefaultLocalizedValueLabelsTabName;
+(id)inspectorDefaultLocalizedValueLabelsDisclosureTitle;
+(id)donutSeries;
+(id)donut3DSeries;
+(id)expandProperties:(id)arg1 ;
+(id)styleArchTypes;
+(id)allSeriesTypes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(char)isVertical;
-(Class)sceneObjectClass;
-(id)resetSeriesStorage:(id)arg1 forSeries:(id)arg2 ;
-(id)fillPropertyTypeName;
-(int)fillSetFillProperty;
-(char)supportsFillSetFill;
-(int)specificFillSetFillProperty;
-(int)fillPropertyType;
-(id)valueAxisForSeries:(id)arg1 ;
-(id)coordinateAxisForSeries:(id)arg1 ;
-(unsigned)filterChartLabelPosition:(unsigned)arg1 forSeries:(id)arg2 ;
-(unsigned)adjustLabelPosition:(unsigned)arg1 forAxisValue:(double)arg2 intercept:(double)arg3 ;
-(char)useInBarGapCalculations;
-(unsigned long long)valueDimensions;
-(NSArray *)seriesRendererClasses;
-(char)supportsValueLabelsAxisOption;
-(NSArray *)axisTypesForValueLabels;
-(char)supportsValueLabelsSeriesName;
-(char)supportsCalloutLines;
-(NSArray *)legalChartLabelPositions;
-(unsigned)filterChartLabelPosition:(unsigned)arg1 ;
-(TSUIntToIntDictionary *)genericToSpecificPropertyMap;
-(char)supportsDownsampling;
-(id)legendFillForSeries:(id)arg1 ;
-(char)supportsSeriesFill;
-(char)supportsSymbolDrawing;
-(id)p_supportedSymbolsIfSymbolsSupported;
-(id)p_axisForSeries:(id)arg1 isCategory:(char)arg2 ;
-(TSCHElementBuilder *)elementBuilder;
-(char)supportsSetGap;
-(char)supportsBarGap;
-(char)supportsRoundedCorners;
-(char)supportsGridPartitioning;
-(id)userInterfaceNameForLabelPosition:(id)arg1 ;
-(int)legendBadgeType;
-(id)legendStrokeForSeries:(id)arg1 ;
-(NSArray *)propertiesForReferenceColors;
-(id)cdeFillForSeries:(id)arg1 ;
-(char)supportsSeriesGradientFill;
-(char)supportsSeries3DFill;
-(char)supportsSeriesStroke;
-(char)supportsSymbolTypeEditing;
-(NSArray *)supportedSymbols;
-(char)supportsShadowOffset;
-(char)supportsSymbolFillForSymbolType:(int)arg1 ;
-(char)supportsLineTypeNone;
-(char)supportsLineConnectionStyle;
-(char)chunkedBuildsIncludeInterceptValues;
-(double)beginValueForSeries:(unsigned long long)arg1 groupIndex:(unsigned long long)arg2 unitSpaceIntercept:(double)arg3 relativelyPositive:(char)arg4 valueAxis:(id)arg5 ;
-(double)beginDataValueForSeries:(id)arg1 valueIndex:(unsigned long long)arg2 valueAxisID:(id)arg3 ;
-(double)beginDataValueForSeries:(id)arg1 groupIndex:(unsigned long long)arg2 valueAxisID:(id)arg3 ;
-(unsigned long long)seriesIndexForDrawing:(id)arg1 ;
-(unsigned long long)numberOfSeriesForCalculatingBarWidth:(id)arg1 ;
-(char)supportsValueLabels;
-(NSString *)userInterfaceName;
-(int)defaultSymbolType;
-(NSArray *)supportedValueLabelsAxisCombinations;
-(int)seriesStrokeProperty;
-(NSString *)inspectorLocalizedValueLabelsTabName;
-(NSString *)inspectorLocalizedValueLabelsDisclosureTitle;
-(NSString *)seriesFillLabelUIString;
-(char)canUseEstimatedValueLabelsDrawingRect;
-(char)floatValueForLabelExplosion:(float*)arg1 series:(id)arg2 ;
@end

