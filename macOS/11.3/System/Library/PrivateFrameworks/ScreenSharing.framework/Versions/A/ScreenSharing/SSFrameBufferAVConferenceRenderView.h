/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenSharing/ScreenSharing-Structs.h>
#import <ScreenSharing/SSFrameBufferRenderView.h>

@interface SSFrameBufferAVConferenceRenderView : SSFrameBufferRenderView {

	CGImageRef _touchImageRef;
	CGImageRef _forceTouchImageRef;

}

@property (assign) CGImageRef touchImageRef;                   //@synthesize touchImageRef=_touchImageRef - In the implementation block
@property (assign) CGImageRef forceTouchImageRef;              //@synthesize forceTouchImageRef=_forceTouchImageRef - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)setTouchImageRef:(CGImageRef)arg1 ;
-(CGImageRef)touchImageRef;
-(void)setForceTouchImageRef:(CGImageRef)arg1 ;
-(CGImageRef)forceTouchImageRef;
@end

