/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>

@class CHDChart, CMState, EDResources, CHDChartType, CHDSeries, CHDAxis, CMDrawableMapper;

@interface EMChartMapper : CMMapper {

	CHDChart* mChart;
	CMState* mState;
	EDResources* mResources;
	CHDChartType* mMainType;
	CHDSeries* mMainSeries;
	CHDAxis* mBaseAxis;
	CHDAxis* mPrimaryAxis;
	CHDAxis* mSecondaryAxis;
	char mIsHorizontal;
	char mIsStacked;
	char mIsPercentStacked;
	unsigned long long mPieIndex;
	SCD_Struct_EM11 mPlotInfos;
	char mHasDateCategory;
	char mHasPrimaryDateAxis;
	char mHasSecondaryDateAxis;

}

@property (__weak,readonly) CMDrawableMapper * parent; 
+(CGColorRef)newColorWithCalibratedRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
-(void)addTitleToDescription:(id)arg1 withState:(id)arg2 ;
-(void)addBackgroundToDescription:(id)arg1 withState:(id)arg2 ;
-(void)addLegendToDescription:(id)arg1 chartSize:(CGSize)arg2 withState:(id)arg3 ;
-(void)_addCategoryAxis:(id)arg1 series:(id)arg2 state:(id)arg3 toDescription:(id)arg4 ;
-(void)_addUnitAxis:(id)arg1 series:(id)arg2 state:(id)arg3 toDescription:(id)arg4 ;
-(void)addSeries:(id)arg1 toDescription:(id)arg2 withState:(id)arg3 ;
-(id)dateFromXlDateTimeNumber:(double)arg1 ;
-(void)_addGraphicProperties:(id)arg1 toDescription:(id)arg2 withState:(id)arg3 ;
-(void)_addStandardSeries:(id)arg1 toDescription:(id)arg2 withState:(id)arg3 ;
-(id)initWithChart:(id)arg1 parent:(id)arg2 ;
-(id)copyPdfWithState:(id)arg1 withSize:(CGSize)arg2 ;
@end

