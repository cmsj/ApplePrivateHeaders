/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <AppKit/NSView.h>

@protocol SiriUIAcousticIDSpinnerDelegate;
@class NSImageView, NSVisualEffectView;

@interface SiriUIAcousticIDSpinner : NSView {

	NSImageView* _musicNoteView;
	NSImageView* _spinnerView;
	NSVisualEffectView* _vibrancyView;
	id<SiriUIAcousticIDSpinnerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SiriUIAcousticIDSpinnerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SiriUIAcousticIDSpinnerDelegate>)delegate;
-(void)setDelegate:(id<SiriUIAcousticIDSpinnerDelegate>)arg1 ;
-(void)layout;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)animateIn;
-(void)animateOut;
-(char)isShowing;
-(id)_imageForSpinner;
-(id)_spinningAnimation;
@end

