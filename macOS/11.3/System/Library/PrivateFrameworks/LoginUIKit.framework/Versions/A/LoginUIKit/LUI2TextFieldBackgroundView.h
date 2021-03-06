/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoginUIKit/LoginUIKit-Structs.h>
#import <AppKit/NSVisualEffectView.h>

@class LUI2TintView, LUI2DarkenView;

@interface LUI2TextFieldBackgroundView : NSVisualEffectView {

	LUI2TintView* _tintView;
	id _mouseUpTarget;
	SEL _mouseUpAction;
	LUI2DarkenView* _darkenView;

}

@property (retain) LUI2DarkenView * darkenView;              //@synthesize darkenView=_darkenView - In the implementation block
@property (readonly) LUI2TintView * tintView;                //@synthesize tintView=_tintView - In the implementation block
@property (assign) id mouseUpTarget;                         //@synthesize mouseUpTarget=_mouseUpTarget - In the implementation block
@property (assign) SEL mouseUpAction;                        //@synthesize mouseUpAction=_mouseUpAction - In the implementation block
-(LUI2DarkenView *)darkenView;
-(void)setDarkenView:(LUI2DarkenView *)arg1 ;
-(void)_setupTextFieldBackgroundView;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)updateLayer;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)addSubview:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(SEL)mouseUpAction;
-(void)setMouseUpAction:(SEL)arg1 ;
-(LUI2TintView *)tintView;
-(void)setMouseUpTarget:(id)arg1 ;
-(id)mouseUpTarget;
@end

