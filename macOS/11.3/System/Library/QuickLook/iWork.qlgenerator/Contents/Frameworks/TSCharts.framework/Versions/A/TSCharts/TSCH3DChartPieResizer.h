/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DChartResizer.h>

@interface TSCH3DChartPieResizer : TSCH3DChartResizer {

	tvec2<bool> _directions;

}
+(tvec2<float>)adjustLabelWrapSize:(const tvec2<float>*)arg1 ;
+(float)perspectiveness;
-(void)setScale:(tvec3<float>*)arg1 ;
-(tvec3<float>)adjust:(tvec3<float>*)arg1 by:(float)arg2 ;
-(tvec2<bool>)canImprove;
-(tvec2<float>)updateResizerFromRequestedSize:(const tvec2<float>*)arg1 startingSize:(tvec2<float>*)arg2 ;
-(tvec2<float>)squareSize:(const tvec2<float>*)arg1 ;
-(tvec2<float>)updateDirectionsFromRequestedSize:(const tvec2<float>*)arg1 startingSize:(tvec2<float>*)arg2 ;
@end

