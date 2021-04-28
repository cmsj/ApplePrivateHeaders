/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/IKRectSelection.h>

@interface IKRectSelectionImageCapture : IKRectSelection {

	long long _scanOrientation;
	char _isBound;

}

@property (assign) long long scanOrientation;              //@synthesize scanOrientation=_scanOrientation - In the implementation block
-(unsigned)defaultKnob;
-(void)doDrawInContext:(CGContextRef)arg1 rect:(CGRect)arg2 ;
-(unsigned)knobLayerFlags;
-(long long)scanOrientation;
-(void)setScanOrientation:(long long)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)cleanup;
-(void)removeFromSuperlayer;
-(void)setBounds:(CGRect)arg1 ;
-(void)setup:(id)arg1 ;
@end
