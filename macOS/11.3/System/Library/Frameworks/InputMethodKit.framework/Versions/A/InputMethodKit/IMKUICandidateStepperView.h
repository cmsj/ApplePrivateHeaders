/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InputMethodKit/InputMethodKit-Structs.h>
#import <AppKit/NSView.h>

@protocol IMKUICandidateStepperViewDelegate;
@class IMKUICandidateStepperAccessoryImageView;

@interface IMKUICandidateStepperView : NSView {

	id<IMKUICandidateStepperViewDelegate> _delegate;
	IMKUICandidateStepperAccessoryImageView* _topArrowView;
	IMKUICandidateStepperAccessoryImageView* _bottomArrowView;
	char _initialized;

}

@property (nonatomic,retain) IMKUICandidateStepperAccessoryImageView * topArrowView;                 //@synthesize topArrowView=_topArrowView - In the implementation block
@property (nonatomic,retain) IMKUICandidateStepperAccessoryImageView * bottomArrowView;              //@synthesize bottomArrowView=_bottomArrowView - In the implementation block
@property (assign,nonatomic) char initialized;                                                       //@synthesize initialized=_initialized - In the implementation block
@property (assign,nonatomic,__weak) id<IMKUICandidateStepperViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
-(void)setTopStepperState:(char)arg1 ;
-(void)setBottomStepperState:(char)arg1 ;
-(void)setupArrows;
-(void)changeArrowFrames;
-(CGRect)stepperAreaFrame;
-(CGRect)topArrowRectWithFrame:(CGRect)arg1 ;
-(CGRect)bottomArrowRectWithFrame:(CGRect)arg1 ;
-(void)setTopArrowView:(IMKUICandidateStepperAccessoryImageView *)arg1 ;
-(void)setBottomArrowView:(IMKUICandidateStepperAccessoryImageView *)arg1 ;
-(id<IMKUICandidateStepperViewDelegate>)delegate;
-(void)setDelegate:(id<IMKUICandidateStepperViewDelegate>)arg1 ;
-(char)initialized;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)setInitialized:(char)arg1 ;
-(IMKUICandidateStepperAccessoryImageView *)topArrowView;
-(IMKUICandidateStepperAccessoryImageView *)bottomArrowView;
@end

