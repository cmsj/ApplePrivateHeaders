/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSView.h>

@class CALayer;

@interface IKSSImageView : NSView {

	CALayer* _imageLayer;
	CGImageRef _image;
	CGRect _rect;

}
-(void)hideContent;
-(void)setImage:(CGImageRef)arg1 rect:(CGRect)arg2 orientation:(int)arg3 transitionTime:(double)arg4 index:(long long)arg5 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)acceptsFirstResponder;
-(void)mouseDown:(id)arg1 ;
-(char)performKeyEquivalent:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)keyDown:(id)arg1 ;
@end
