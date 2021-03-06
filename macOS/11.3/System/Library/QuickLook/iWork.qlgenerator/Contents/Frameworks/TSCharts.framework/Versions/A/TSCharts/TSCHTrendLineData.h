/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@class TSCHChartSeries, TSURegressionModel, TSUBezierPath, NSString;

@interface TSCHTrendLineData : NSObject {

	TSCHChartSeries* _series;
	long long _lineType;
	char _showTrendLine;
	TSURegressionModel* _regression;
	double _maxYValue;
	double _minYValue;
	double _maxXValue;
	double _minXValue;
	int _inputAxisType;
	int _outputAxisType;
	char _trendLineInvalid;
	TSUBezierPath* _cachedTrendLinePath;
	CGRect _cachedChartFrame;
	double _offsetInBody;
	char _cachedChartVertical;

}

@property (nonatomic,readonly) char showTrendLine;                          //@synthesize showTrendLine=_showTrendLine - In the implementation block
@property (nonatomic,readonly) char showTrendLineLegendText; 
@property (nonatomic,readonly) char showEquation; 
@property (nonatomic,readonly) char showRSquared; 
@property (nonatomic,readonly) NSString * trendLineLegendText; 
@property (nonatomic,readonly) NSString * rSquaredText; 
@property (nonatomic,readonly) float equationTextOpacity; 
@property (nonatomic,readonly) float rSquaredTextOpacity; 
+(long long)getTrendLineTypeForSeries:(id)arg1 ;
-(void)dealloc;
-(void)updateIfNeeded;
-(void)invalidateData;
-(id)initWithSeries:(id)arg1 ;
-(char)showTrendLineLegendText;
-(NSString *)trendLineLegendText;
-(char)showTrendLineForAxisID:(id)arg1 ;
-(double)minValueForAxisID:(id)arg1 ;
-(double)maxValueForAxisID:(id)arg1 ;
-(void)p_releaseCache;
-(void)p_updateTrendLineData;
-(id)p_linePathFromPoints:(CGPoint*)arg1 count:(unsigned long long)arg2 ;
-(void)trendLineUnitSpacePoints:(/*function pointer*/void**)arg1 count:(unsigned long long*)arg2 drawCurve:(char*)arg3 maxPoints:(unsigned long long)arg4 ;
-(CGPoint)p_unitPoint:(CGPoint)arg1 toScreenFrame:(CGRect)arg2 offset:(double)arg3 vertical:(char)arg4 ;
-(void)p_addPathToTrendLinePathWithPoints:(CGPoint*)arg1 count:(unsigned long long)arg2 curved:(char)arg3 curveFitter:(id)arg4 ;
-(id)p_dataPointValues;
-(unsigned long long)p_fillArrayX:(id)arg1 andY:(id)arg2 fromPoints:(id)arg3 ;
-(void)p_calcMARegression:(unsigned long long)arg1 xData:(id)arg2 yData:(id)arg3 ;
-(void)p_calcBoundsForMovingAverage;
-(unsigned long long)p_fillArrayX:(double*)arg1 andY:(double*)arg2 fromPoints:(id)arg3 hasNegativeX:(char*)arg4 ;
-(void)p_calcRegression:(unsigned long long)arg1 xData:(double*)arg2 yData:(double*)arg3 ;
-(void)p_calcBounds;
-(long long)p_getTrendLineType;
-(void)p_generateRegression;
-(char)showEquation;
-(char)showRSquared;
-(NSString *)rSquaredText;
-(float)equationTextOpacity;
-(float)rSquaredTextOpacity;
-(CFAttributedStringRef)newEquationAttributedString;
-(id)trendLinePathForChartRect:(CGRect)arg1 offsetInBody:(double)arg2 vertical:(char)arg3 ;
-(char)showTrendLine;
@end

