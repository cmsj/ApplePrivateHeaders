/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@protocol CNPhotoLikenessEditorZoomDelegate;
@class NSStackView, NSSlider, NSButton;

@interface CNPhotoLikenessEditorZoomSliderController : NSViewController {

	id<CNPhotoLikenessEditorZoomDelegate> _zoomDelegate;
	NSStackView* _zoomStackView;
	NSSlider* _zoomSlider;
	NSButton* _zoomInButton;
	NSButton* _zoomOutButton;

}

@property (nonatomic,retain) NSStackView * zoomStackView;                           //@synthesize zoomStackView=_zoomStackView - In the implementation block
@property (nonatomic,retain) NSSlider * zoomSlider;                                 //@synthesize zoomSlider=_zoomSlider - In the implementation block
@property (nonatomic,retain) NSButton * zoomInButton;                               //@synthesize zoomInButton=_zoomInButton - In the implementation block
@property (nonatomic,retain) NSButton * zoomOutButton;                              //@synthesize zoomOutButton=_zoomOutButton - In the implementation block
@property (__weak) id<CNPhotoLikenessEditorZoomDelegate> zoomDelegate;              //@synthesize zoomDelegate=_zoomDelegate - In the implementation block
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)zoomIn:(id)arg1 ;
-(void)zoomOut:(id)arg1 ;
-(void)setupConstraints;
-(void)setZoomFraction:(double)arg1 ;
-(void)setupView;
-(void)setupZoomInButton;
-(void)setupZoomOutButton;
-(void)setupSlider;
-(void)zoomValueChanged:(id)arg1 ;
-(NSButton *)zoomOutButton;
-(NSButton *)zoomInButton;
-(NSSlider *)zoomSlider;
-(id<CNPhotoLikenessEditorZoomDelegate>)zoomDelegate;
-(void)setZoomDelegate:(id<CNPhotoLikenessEditorZoomDelegate>)arg1 ;
-(NSStackView *)zoomStackView;
-(void)setZoomStackView:(NSStackView *)arg1 ;
-(void)setZoomSlider:(NSSlider *)arg1 ;
-(void)setZoomInButton:(NSButton *)arg1 ;
-(void)setZoomOutButton:(NSButton *)arg1 ;
@end

