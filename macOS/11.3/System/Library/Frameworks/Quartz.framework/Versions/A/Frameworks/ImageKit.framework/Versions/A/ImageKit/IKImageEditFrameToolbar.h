/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSView.h>

@class NSView;

@interface IKImageEditFrameToolbar : NSView {

	NSView* _buttonContainer;
	id _delegate;

}
-(id)toolbarType;
-(void)addTool:(id)arg1 frame:(CGRect)arg2 action:(SEL)arg3 ;
-(void)drawRect2:(CGRect)arg1 ;
-(void)setup;
-(id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 ;
@end
