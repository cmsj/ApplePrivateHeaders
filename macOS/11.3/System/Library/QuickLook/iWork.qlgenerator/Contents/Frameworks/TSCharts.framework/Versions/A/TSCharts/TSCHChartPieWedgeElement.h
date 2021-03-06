/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSCHChartSeries;

@interface TSCHChartPieWedgeElement : NSObject <NSCopying> {

	TSCHChartPieWedgeElementLayoutSystem _layoutSystem;
	double _radius;
	double _midAngle;
	double _startAngle;
	double _endAngle;
	double _labelExplosion;
	double _wedgeExplosion;
	TSCHChartSeries* _series;

}

@property (assign,nonatomic) TSCHChartPieWedgeElementLayoutSystem layoutSystem;              //@synthesize layoutSystem=_layoutSystem - In the implementation block
@property (assign,nonatomic) double radius;                                                  //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) double midAngle;                                                //@synthesize midAngle=_midAngle - In the implementation block
@property (assign,nonatomic) double startAngle;                                              //@synthesize startAngle=_startAngle - In the implementation block
@property (assign,nonatomic) double endAngle;                                                //@synthesize endAngle=_endAngle - In the implementation block
@property (assign,nonatomic) double labelExplosion;                                          //@synthesize labelExplosion=_labelExplosion - In the implementation block
@property (assign,nonatomic) double wedgeExplosion;                                          //@synthesize wedgeExplosion=_wedgeExplosion - In the implementation block
@property (assign,nonatomic,__weak) TSCHChartSeries * series;                                //@synthesize series=_series - In the implementation block
@property (nonatomic,readonly) CGPoint centerPoint; 
@property (nonatomic,readonly) double angleAtWedgeTip; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(void)setSeries:(TSCHChartSeries *)arg1 ;
-(TSCHChartSeries *)series;
-(void)setStartAngle:(double)arg1 ;
-(double)startAngle;
-(CGPoint)centerPoint;
-(double)endAngle;
-(void)setEndAngle:(double)arg1 ;
-(double)midAngle;
-(CGPoint)pointAtWedgeTipInChartCoordinateSpace;
-(double)wedgeExplosion;
-(CGRect)defaultLabelRectForLabelWithSize:(CGSize)arg1 bended:(char)arg2 ;
-(TSCHChartPieLabelRects)labelRectsForFirstLabelWithSize:(CGSize)arg1 secondLabelSize:(CGSize)arg2 stacked:(char)arg3 stackedLabelCenterAlign:(char)arg4 placeToTheSideOfPieChart:(char)arg5 ;
-(CGPoint)normalizedWedgeBisectionVector;
-(CGPoint)midpointOnClosestEdgeToWedgeTip:(CGRect)arg1 ;
-(id)initWithRadius:(double)arg1 startAngle:(double)arg2 midAngle:(double)arg3 endAngle:(double)arg4 labelExplosion:(double)arg5 wedgeExplosion:(double)arg6 series:(id)arg7 ;
-(double)labelExplosion;
-(CGPoint)pointAlongWedgeBisectionInChartCoordinateSpaceWithFloatDistanceFromWedgeTip:(double)arg1 ;
-(CGPoint)defaultLabelCenterPointForLabelWithSize:(CGSize)arg1 bended:(char)arg2 ;
-(CGPoint)pointAtWedgeCircumferenceMiddleInChartCoordinateSpace;
-(char)isInUpperHalfOfChartWithStartPoint:(CGPoint)arg1 ;
-(CGPoint)pointAlongWedgeBisectionInChartCoordinateSpaceWithPercentDistanceFromWedgeTip:(double)arg1 ;
-(char)shouldUsePerpendicularBendedLineWithStartPoint:(CGPoint)arg1 ;
-(double)angleAtWedgeTip;
-(void)setLayoutSystem:(TSCHChartPieWedgeElementLayoutSystem)arg1 ;
-(void)setMidAngle:(double)arg1 ;
-(void)setLabelExplosion:(double)arg1 ;
-(void)setWedgeExplosion:(double)arg1 ;
-(CGPoint)defaultLabelEndpointForBendedLineLabels;
-(CGPoint)defaultLabelCenterPoint;
-(char)isOnLeftSideOfChart;
-(CGPoint)defaultBendedLineEndpointWithStartPoint:(CGPoint)arg1 ;
-(CGPoint)firstHalfOfBendedLineVectorNormalizedShouldBeUpwards:(char)arg1 ;
-(CGPoint)defaultBendedLineMidpointWithStartPoint:(CGPoint)arg1 ;
-(double)p_xShiftAmountWithEndpoint:(CGPoint)arg1 ;
-(CGPoint)bendedLineMidpointWithStartPoint:(CGPoint)arg1 length:(double)arg2 shouldBeUpwards:(char)arg3 ;
-(char)lineIntersectsWedgeWithLineStartPoint:(CGPoint)arg1 lineEndPoint:(CGPoint)arg2 ;
-(CGPoint)arcStartPoint;
-(char)lineIntersectsLineWithStartPoint:(CGPoint)arg1 firstLineEndPoint:(CGPoint)arg2 secondLineStartPoint:(CGPoint)arg3 secondLineEndPoint:(CGPoint)arg4 outIntersectionPoint:(CGPoint*)arg5 ;
-(CGPoint)arcEndPoint;
-(char)angleInRange:(double)arg1 startAngle:(double)arg2 endAngle:(double)arg3 ;
-(char)pointWithinWedgeSpread:(CGPoint)arg1 percentage:(double)arg2 ;
-(void)setToLocalCoordinateSpace;
-(void)setToChartCoordinateSpaceWithChartBodyCenterPoint:(CGPoint)arg1 ;
-(char)calloutLineIntersectsWedgeWithStartPoint:(CGPoint)arg1 midPoint:(CGPoint)arg2 ;
-(char)pointWithinWedgeSpread:(CGPoint)arg1 ;
-(char)wedgeBisectionIntersectsRect:(CGRect)arg1 outIntersectionPointClosestToWedgeTip:(CGPoint*)arg2 ;
-(TSCHChartPieWedgeElementLayoutSystem)layoutSystem;
@end

