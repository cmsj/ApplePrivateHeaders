/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CHBState.h>

@protocol CHAutoStyling;
@class EBReaderSheetState, OADColorScheme;

@interface CHBReaderState : CHBState {

	EBReaderSheetState* mEBReaderSheetState;
	XlChartBinaryReader* mXlReader;
	id<CHAutoStyling> mAutoStyling;
	int mAxisGroup;
	XlChartPlot* mXlCurrentPlot;
	int mXlCurrentPlotIndex;

}

@property (nonatomic,readonly) OADColorScheme * colorScheme; 
-(id)resources;
-(OADColorScheme *)colorScheme;
-(id)workbook;
-(void)setChart:(id)arg1 ;
-(XlChartPlot*)xlCurrentPlot;
-(int)axisGroup;
-(XlChartBinaryReader*)xlReader;
-(id)autoStyling;
-(const XlChartSeriesFormat*)xlCurrentDefaultSeriesFormat;
-(id)ebReaderSheetState;
-(void)setAxisGroup:(int)arg1 ;
-(int)xlPlotCount;
-(void)setXlCurrentPlotIndex:(int)arg1 ;
-(void)setXlCurrentPlot:(XlChartPlot*)arg1 ;
-(id)initWithEBReaderSheetState:(id)arg1 ;
-(const XlChartSeriesFormat*)defaultFormatForXlSeries:(const XlChartDataSeries*)arg1 ;
-(void)readAndCacheXlChartDataSeries;
-(int)xlCurrentPlotIndex;
@end

