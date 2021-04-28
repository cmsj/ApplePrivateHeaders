/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCHChartLayoutItem.h>

@class TSCHChartInfo, TSCHChartAbstractAreaLayoutItem, TSCHLegendAreaLayoutItem, NSDictionary, TSCHChartModel;

@interface TSCHChartRootLayoutItem : TSCHChartLayoutItem {

	TSCHChartInfo* _chartInfo;
	TSCHChartAbstractAreaLayoutItem* _chartArea;
	TSCHLegendAreaLayoutItem* _legend;
	SCD_Struct_TS50 _layoutSettings;
	CGRect _legendInnerFrame;
	CGRect _chartInnerFrame;
	char _inResize;
	CGSize _startingSize;
	NSDictionary* _seriesIndexedPieWedgeExplosions;
	TSCHChartModel* _chartModel;

}

@property (nonatomic,readonly) TSCHChartAbstractAreaLayoutItem * chartAreaLayoutItem; 
@property (nonatomic,readonly) TSCHLegendAreaLayoutItem * legendAreaLayoutItem; 
@property (nonatomic,copy) NSDictionary * seriesIndexedPieWedgeExplosions;                                             //@synthesize seriesIndexedPieWedgeExplosions=_seriesIndexedPieWedgeExplosions - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * seriesIndexedPieNormalizedLabelDistancesFromWedgeTips; 
@property (assign,nonatomic) unsigned long long dataSetIndex; 
-(id)root;
-(id)model;
-(void)clearAll;
-(id)initWithChartInfo:(id)arg1 ;
-(id)chartInfo;
-(void)setLayoutSettings:(SCD_Struct_TS50)arg1 ;
-(void)setDataSetIndex:(unsigned long long)arg1 ;
-(SCD_Struct_TS50)layoutSettings;
-(TSCHChartAbstractAreaLayoutItem *)chartAreaLayoutItem;
-(CGRect)calcDrawingRect;
-(char)isInResize;
-(CGSize)startingSize;
-(void)layoutInward;
-(void)layoutOutward;
-(void)setLegendSize:(CGSize)arg1 ;
-(void)setSeriesIndexedPieWedgeExplosions:(NSDictionary *)arg1 ;
-(id)renderersWithRep:(id)arg1 ;
-(unsigned long long)dataSetIndex;
-(TSCHLegendAreaLayoutItem *)legendAreaLayoutItem;
-(void)updateLayoutOffset;
-(void)setChartInnerFrame:(CGRect)arg1 legendInnerFrame:(CGRect)arg2 ;
-(void)setChartBodySize:(CGSize)arg1 ;
-(NSDictionary *)seriesIndexedPieWedgeExplosions;
-(NSDictionary *)seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;
-(CGRect)calcOverhangRect;
-(void)buildSubTree;
-(void)updateLayoutSize;
-(void)p_updatePieWedgeExplosionsFromModel;
-(void)beginResizeWithStartingSize:(CGSize)arg1 ;
-(void)updateSizeDuringResizeTo:(CGSize)arg1 ;
-(void)endResizeOperation;
-(void)invalidateSeriesIndexedPieWedgeExplosions;
-(void)invalidateTransientModel;
@end
