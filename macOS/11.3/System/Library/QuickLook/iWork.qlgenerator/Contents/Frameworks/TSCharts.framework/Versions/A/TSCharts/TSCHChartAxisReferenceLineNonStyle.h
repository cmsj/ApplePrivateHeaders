/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSCHChartAxisID, NSArray;

@interface TSCHChartAxisReferenceLineNonStyle : NSObject {

	TSCHChartAxisID* _axisIdentifier;
	NSArray* _referenceLineNonStyleItems;

}

@property (nonatomic,copy) TSCHChartAxisID * axisIdentifier;                  //@synthesize axisIdentifier=_axisIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * referenceLineNonStyleItems;              //@synthesize referenceLineNonStyleItems=_referenceLineNonStyleItems - In the implementation block
-(void)didInitFromSOS;
-(TSCHChartAxisID *)axisIdentifier;
-(void)setAxisIdentifier:(TSCHChartAxisID *)arg1 ;
-(NSArray *)referenceLineNonStyleItems;
-(void)setReferenceLineNonStyleItems:(NSArray *)arg1 ;
@end

