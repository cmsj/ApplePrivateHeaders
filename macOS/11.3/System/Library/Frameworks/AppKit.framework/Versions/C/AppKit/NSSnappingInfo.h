/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@interface NSSnappingInfo : NSObject {

	CGSnappingInfoRef _snappingInfo;

}

@property (readonly) CGSnappingInfoRef CGSnappingInfo; 
+(id)snappingInfoWithWindowNumber:(long long)arg1 ;
-(void)dealloc;
-(void)addMovementWithMouseLocation:(CGPoint)arg1 timestamp:(double)arg2 ;
-(unsigned long long)snappedEdges;
-(void)snapOriginWithFrame:(CGRect)arg1 newFramePointer:(CGRect*)arg2 ;
-(CGRect)lastSnappedRect;
-(CGPoint)currentVelocity;
-(id)initWithWindowNumber:(long long)arg1 ;
-(CGSnappingInfoRef)CGSnappingInfo;
-(void)resetMovement;
-(void)snapFrame:(CGRect)arg1 forResizingWithNewFramePointer:(CGRect*)arg2 rectEdge:(unsigned)arg3 ;
-(CGRect)sizeSnapRectForFrame:(CGRect)arg1 snappedEdges:(unsigned long long)arg2 ;
@end

