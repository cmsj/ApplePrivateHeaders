/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSView.h>

@class SiriUIContentLabel, SiriUIButton, SiriUISymbolButton, NSTrackingArea;

@interface SiriUINavigationBarView : NSView {

	char _isHovered;
	SiriUIContentLabel* _titleView;
	SiriUIButton* _backButton;
	SiriUISymbolButton* _squareBackDrop;
	NSTrackingArea* _trackingArea;

}

@property (nonatomic,retain) SiriUIContentLabel * titleView;                   //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) SiriUIButton * backButton;                        //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,retain) SiriUISymbolButton * squareBackDrop;              //@synthesize squareBackDrop=_squareBackDrop - In the implementation block
@property (nonatomic,retain) NSTrackingArea * trackingArea;                    //@synthesize trackingArea=_trackingArea - In the implementation block
@property (assign,nonatomic) char isHovered;                                   //@synthesize isHovered=_isHovered - In the implementation block
-(id)init;
-(void)setTitle:(id)arg1 ;
-(char)isFlipped;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(id)declaredLayoutConstraints;
-(NSTrackingArea *)trackingArea;
-(void)updateTrackingAreas;
-(void)setTrackingArea:(NSTrackingArea *)arg1 ;
-(void)setTitleView:(SiriUIContentLabel *)arg1 ;
-(SiriUIContentLabel *)titleView;
-(SiriUIButton *)backButton;
-(void)setBackButton:(SiriUIButton *)arg1 ;
-(char)isHovered;
-(void)setIsHovered:(char)arg1 ;
-(void)setupTrackingArea;
-(void)setSquareBackDrop:(SiriUISymbolButton *)arg1 ;
-(SiriUISymbolButton *)squareBackDrop;
-(void)setHideSquareBackDrop:(char)arg1 animated:(char)arg2 ;
-(void)setHideBackButton:(char)arg1 animated:(char)arg2 ;
-(void)setBackButtonTarget:(id)arg1 action:(SEL)arg2 ;
@end
