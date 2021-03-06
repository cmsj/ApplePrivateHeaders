/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCHSupportsRendering.h>

@class TSCHChartInfo, NSArray, TSCHChartLayout, NSString;

@interface TSCHChartNonRep : NSObject <TSCHSupportsRendering> {

	TSCHChartInfo* _chartInfo;
	NSArray* _renderers;
	TSCHChartLayout* _chartLayout;

}

@property (nonatomic,retain) TSCHChartInfo * chartInfo;                  //@synthesize chartInfo=_chartInfo - In the implementation block
@property (nonatomic,retain) TSCHChartLayout * chartLayout;              //@synthesize chartLayout=_chartLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)shadowsEnabled;
-(void)drawInContext:(CGContextRef)arg1 ;
-(id)geometry;
-(id)renderers;
-(CGRect)convertUnscaledToBoundsRect:(CGRect)arg1 ;
-(double)viewScale;
-(CGRect)convertNaturalRectToLayerRelative:(CGRect)arg1 ;
-(void)setupForDrawingInLayer:(id)arg1 context:(CGContextRef)arg2 ;
-(void)didDrawInLayer:(id)arg1 context:(CGContextRef)arg2 ;
-(char)isDrawingIntoPDF;
-(id)commandController;
-(id)initWithChartInfo:(id)arg1 ;
-(TSCHChartInfo *)chartInfo;
-(TSCHChartLayout *)chartLayout;
-(char)renderGrid;
-(void)setChartInfo:(TSCHChartInfo *)arg1 ;
-(char)forceRenderBlankBackground;
-(char)renderElementsShadowOnly;
-(char)renderElementsWithoutShadows;
-(id)renderSeriesIndexSet;
-(id)renderGroupIndexSetForSeriesIndex:(unsigned long long)arg1 ;
-(char)is2DRepFor3DChartRep;
-(char)renderElements;
-(char)renderLabels;
-(char)requireSeparateLabelLayer;
-(CGRect)outerShadowFrame;
-(void)clearRenderers;
-(char)renderTrendLinesForSeriesIndex:(unsigned long long)arg1 ;
-(char)renderReferenceLines;
-(char)shouldShowLegendHighlight;
-(void)setChartLayout:(TSCHChartLayout *)arg1 ;
@end

