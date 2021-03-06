/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Frameworks/OpusFoundation.framework/Versions/A/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <AppKit/NSView.h>

@class NSMutableArray, OFNSViewController;

@interface OFViewProxy : NSView {

	NSMutableArray* _layoutSteps;
	SCD_Struct_OF0* _layoutInfo;
	OFNSViewController* _viewControllerProxy;
	char _magicLayoutEnabled;

}

@property (assign,nonatomic) OFNSViewController * viewControllerProxy;                         //@synthesize viewControllerProxy=_viewControllerProxy - In the implementation block
@property (assign,getter=isMagicLayoutEnabled,nonatomic) char magicLayoutEnabled;              //@synthesize magicLayoutEnabled=_magicLayoutEnabled - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(void)commonInit;
-(void)layoutSubviews;
-(OFNSViewController *)viewControllerProxy;
-(void)setViewControllerProxy:(OFNSViewController *)arg1 ;
-(void)runMagicLayout;
-(void)addLayoutStep:(id)arg1 ;
-(void)addLayoutSteps:(id)arg1 ;
-(char)isMagicLayoutEnabled;
-(void)setMagicLayoutEnabled:(char)arg1 ;
@end

