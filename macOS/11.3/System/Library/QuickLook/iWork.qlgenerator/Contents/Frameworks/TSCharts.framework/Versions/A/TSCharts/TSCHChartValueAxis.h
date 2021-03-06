/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCHChartAxis.h>

@class NSNumber;

@interface TSCHChartValueAxis : TSCHChartAxis

@property (nonatomic,readonly) NSNumber * userMin; 
@property (nonatomic,readonly) NSNumber * userMax; 
+(id)axisForInfo:(id)arg1 ;
+(unsigned char)styleOwnerPathType;
-(id)defaultProperties;
-(pair<TSCH3DAxisLabelEnumerator *, TSCH3DAxisLabelEnumerator *>)labelEnumeratorPair;
-(char)supportsReferenceLines;
-(int)specificPropertyForGeneric:(int)arg1 ;
-(void)updateModelAxisAnalysis:(id)arg1 ;
-(void)adjustMinMaxForDataRangeInAnalysis:(id)arg1 ;
-(id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg1 ;
-(char)editableFormatForValueStrings;
-(id)g_genericToSpecificPropertyMap;
-(char)supportsAxisValueLabels;
-(void)updateModelMinMaxForTrendLineOnSeries:(id)arg1 axisID:(id)arg2 analysis:(id)arg3 ;
-(void)updateModelMinMaxForErrorBarsOnSeries:(id)arg1 axisID:(id)arg2 analysis:(id)arg3 ;
-(NSNumber *)userMin;
-(NSNumber *)userMax;
-(id)p_computeMajorGridlines:(long long)arg1 analysis:(id)arg2 ;
-(id)p_computeMajorGridlinesAutomaticallyInAnalysis:(id)arg1 forHorizChart:(char)arg2 ;
-(double)p_calculateAxisDeltaFromSpread:(double)arg1 spreadRanges:(const CGPoint*)arg2 ;
-(SCD_Struct_TS94)p_axisDescFromPositiveMinValue:(double)arg1 positiveMaxValue:(double)arg2 spreadRanges:(const CGPoint*)arg3 ;
-(SCD_Struct_TS94)p_axisDescFromNegativeMinValue:(double)arg1 positiveMaxValue:(double)arg2 spreadRanges:(const CGPoint*)arg3 ;
-(SCD_Struct_TS94)p_axisDescFromFixedPositiveMinValue:(double)arg1 positiveMaxValue:(double)arg2 spreadRanges:(const CGPoint*)arg3 ;
-(SCD_Struct_TS94)p_axisDescFromFixedNegativeMinValue:(double)arg1 positiveMaxValue:(double)arg2 spreadRanges:(const CGPoint*)arg3 ;
-(SCD_Struct_TS94)p_axisDescFromPositiveMinValue:(double)arg1 fixedPositiveMaxValue:(double)arg2 spreadRanges:(const CGPoint*)arg3 ;
-(SCD_Struct_TS94)p_axisDescFromNegativeMinValue:(double)arg1 fixedPositiveMaxValue:(double)arg2 spreadRanges:(const CGPoint*)arg3 ;
-(SCD_Struct_TS94)p_axisDescFromFixedMinValue:(double)arg1 fixedMaxValue:(double)arg2 spreadRanges:(const CGPoint*)arg3 ;
-(SCD_Struct_TS94)p_axisDescFromMinValue:(double)arg1 maxValue:(double)arg2 userValues:(long long)arg3 ;
-(SCD_Struct_TS94)p_calculateAxisDescFromMinValue:(double)arg1 maxValue:(double)arg2 userValues:(long long)arg3 ;
-(void)p_includeZeroWithMinValue:(double*)arg1 maxValue:(double*)arg2 userValues:(long long)arg3 ;
-(id)p_GetGenericToValuePropertyMap;
-(double)validateUserMinForDouble:(double)arg1 ;
-(double)validateUserMaxForDouble:(double)arg1 ;
@end

