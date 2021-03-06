/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/Versions/A/CoreChart
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreChart/CoreChart-Structs.h>
@class CCVegaCGContext;

@interface CCVegaSVGRenderer : NSObject {

	CCVegaCGContext* cgCanvas;

}

@property (retain) CCVegaCGContext * cgCanvas; 
+(id)getInstance;
-(CGPathRef)newPathFromJSFunction:(id)arg1 item:(id)arg2 ;
-(void)setCgCanvas:(CCVegaCGContext *)arg1 ;
-(CCVegaCGContext *)cgCanvas;
-(CGPathRef)newPathFromParsedPath:(id)arg1 size:(double)arg2 rendererContext:(id)arg3 ;
-(id)parseString:(id)arg1 rendererContext:(id)arg2 ;
@end

