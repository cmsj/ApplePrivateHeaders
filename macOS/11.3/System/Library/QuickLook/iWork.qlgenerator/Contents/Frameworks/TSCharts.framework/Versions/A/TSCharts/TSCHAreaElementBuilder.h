/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCHLineElementBuilder.h>

@interface TSCHAreaElementBuilder : TSCHLineElementBuilder
-(SCD_Struct_TS103*)p_createPointArrayForSeries:(id)arg1 inAreaFrame:(CGRect)arg2 groupIndexSet:(id)arg3 outCount:(unsigned long long*)arg4 ;
-(void)p_addTopStroke:(SCD_Struct_TS105*)arg1 toPath:(CGPathRef)arg2 withPointsArray:(SCD_Struct_TS103*)arg3 withCount:(unsigned long long)arg4 lineType:(int)arg5 ;
-(char)p_addBottomStroke:(SCD_Struct_TS105*)arg1 toPath:(CGPathRef)arg2 seriesIndex:(unsigned long long)arg3 withPointsArray:(SCD_Struct_TS103*)arg4 withCount:(unsigned long long)arg5 ;
-(char)needsSeparateHitTestingPaths;
@end

