/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSKit.framework/Versions/A/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSKit/TSKit-Structs.h>
@interface TSKPencilOverlayAnchorSelectionRectangle : NSObject {

	CGColorRef _strokeColor;
	CGColorRef _fillColor;
	CGRect _rectangle;

}

@property (assign,nonatomic) CGRect rectangle;                    //@synthesize rectangle=_rectangle - In the implementation block
@property (assign,nonatomic) CGColorRef strokeColor;              //@synthesize strokeColor=_strokeColor - In the implementation block
@property (assign,nonatomic) CGColorRef fillColor;                //@synthesize fillColor=_fillColor - In the implementation block
-(void)dealloc;
-(void)setFillColor:(CGColorRef)arg1 ;
-(CGColorRef)fillColor;
-(CGColorRef)strokeColor;
-(void)setStrokeColor:(CGColorRef)arg1 ;
-(CGRect)rectangle;
-(void)setRectangle:(CGRect)arg1 ;
-(id)pencilAnchorBloopAnimationStartingAtElapsedTime:(double)arg1 ;
-(id)initWithRectangle:(CGRect)arg1 strokeColor:(CGColorRef)arg2 fillColor:(CGColorRef)arg3 ;
-(id)anchorOverlayLayerForElapsedAnimationTime:(double)arg1 ;
@end

