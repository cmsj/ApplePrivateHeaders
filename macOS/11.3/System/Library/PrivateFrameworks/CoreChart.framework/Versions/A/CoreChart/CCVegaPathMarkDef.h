/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/Versions/A/CoreChart
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreChart/CoreChart-Structs.h>
#import <CoreChart/CCVegaSingleItemShapeMarkDef.h>

@class NSString;

@interface CCVegaPathMarkDef : CCVegaSingleItemShapeMarkDef {

	NSString* _cachedPathDef;
	CGPathRef _cachedPath;

}
-(void)dealloc;
-(CGPathRef)newPathForMark:(id)arg1 ;
-(CATransform3D)transformForMark:(id)arg1 ;
@end

