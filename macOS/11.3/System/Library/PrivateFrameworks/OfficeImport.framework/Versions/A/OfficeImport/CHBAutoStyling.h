/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CHAutoStyling.h>
#import <libobjc.A.dylib/CHAutoStyling.h>

@class NSString;

@interface CHBAutoStyling : CHAutoStyling <CHAutoStyling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)fillWithColorIndex:(unsigned long long)arg1 ;
-(id)strokeWithColorIndex:(int)arg1 ;
-(id)autoFill;
-(id)autoStroke;
-(void)resolvedGraphicProperties:(id)arg1 autoFill:(id)arg2 autoStroke:(id)arg3 autoShadow:(char)arg4 nullFill:(id)arg5 nullStroke:(id)arg6 nullShadow:(char)arg7 ;
-(id)autoSeriesFill:(unsigned long long)arg1 ;
-(id)autoStrokeForSeriesIndex:(unsigned long long)arg1 ;
-(id)autoSeriesBorderStroke;
-(void)resolveAxisGraphicProperties:(id)arg1 ;
-(void)resolveMinorGridLinesGraphicProperties:(id)arg1 ;
-(void)resolveMajorGridLinesGraphicProperties:(id)arg1 ;
-(void)resolveWallGraphicProperties:(id)arg1 ;
-(void)resolveFloorGraphicProperties:(id)arg1 ;
-(void)resolveGraphicPropertiesOfErrorBar:(id)arg1 forSeriesIndex:(unsigned long long)arg2 ;
-(void)resolveLegendGraphicProperties:(id)arg1 ;
-(void)resolvePlotAreaGraphicProperties:(id)arg1 ;
-(void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned long long)arg2 ;
-(void)resolveChartAreaGraphicProperties:(id)arg1 ;
-(id)autoTextFill;
-(void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned long long)arg2 isLine:(BOOL)arg3 ;
-(void)resolveMarker:(id)arg1 withSeriesGraphicProperties:(id)arg2 forSeriesIndex:(unsigned long long)arg3 clientGraphicPropertyDefaults:(/*^block*/id)arg4 ;
-(void)resolveGraphicPropertiesOfTrendline:(id)arg1 forSeriesIndex:(unsigned long long)arg2 ;
@end
