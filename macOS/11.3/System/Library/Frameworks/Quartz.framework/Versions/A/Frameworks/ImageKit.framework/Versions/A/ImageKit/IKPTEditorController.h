/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/IKViewController.h>
#import <libobjc.A.dylib/IKRecentPicturesButtonDelegate.h>

@class IKPTContentViewController, NSButton, NSLayoutConstraint, NSView, IKPictureTakerView, NSTabView, NSSlider;

@interface IKPTEditorController : IKViewController <IKRecentPicturesButtonDelegate> {

	IKPTContentViewController* _ikpt_contentViewController;
	NSButton* doneButton;
	NSButton* cancelButton;
	NSButton* chooseButton;
	NSLayoutConstraint* buttonSizeConstraint;
	NSView* editorView;
	IKPictureTakerView* cropView;
	NSTabView* editorTabView;
	NSSlider* zoomSlider;
	NSButton* minSizeButton;
	NSButton* maxSizeButton;
	NSView* countdownView;
	NSButton* cameraButton;
	NSButton* effectsButton;

}

@property (assign) IKPTContentViewController * ikpt_contentViewController;              //@synthesize ikpt_contentViewController=_ikpt_contentViewController - In the implementation block
@property (assign) NSButton * doneButton; 
@property (assign) NSButton * cancelButton; 
@property (assign) NSButton * chooseButton; 
@property (assign) NSView * editorView; 
@property (assign) IKPictureTakerView * cropView; 
@property (assign) NSTabView * editorTabView; 
@property (assign) NSSlider * zoomSlider; 
@property (assign) NSButton * minSizeButton; 
@property (assign) NSButton * maxSizeButton; 
@property (assign) NSView * countdownView; 
@property (assign) NSButton * cameraButton; 
@property (assign) NSButton * effectsButton; 
+(CGSize)cropSize;
-(char)isLiveCapturing;
-(void)updateContentLayout;
-(NSButton *)cameraButton;
-(IKPTContentViewController *)ikpt_contentViewController;
-(id)pictureTakerForRecentPicturesButton:(id)arg1 ;
-(void)setIkpt_contentViewController:(IKPTContentViewController *)arg1 ;
-(void)setLiveCapturing:(char)arg1 ;
-(NSButton *)minSizeButton;
-(NSButton *)maxSizeButton;
-(NSButton *)effectsButton;
-(NSTabView *)editorTabView;
-(double)controlViewHeight;
-(void)setCropView:(IKPictureTakerView *)arg1 ;
-(void)setEditorTabView:(NSTabView *)arg1 ;
-(void)setMinSizeButton:(NSButton *)arg1 ;
-(void)setMaxSizeButton:(NSButton *)arg1 ;
-(void)setCameraButton:(NSButton *)arg1 ;
-(void)setEffectsButton:(NSButton *)arg1 ;
-(void)loadView;
-(NSButton *)cancelButton;
-(void)setCancelButton:(NSButton *)arg1 ;
-(NSButton *)doneButton;
-(void)setDoneButton:(NSButton *)arg1 ;
-(NSSlider *)zoomSlider;
-(void)setZoomSlider:(NSSlider *)arg1 ;
-(NSView *)editorView;
-(void)setEditorView:(NSView *)arg1 ;
-(NSView *)countdownView;
-(void)setCountdownView:(NSView *)arg1 ;
-(IKPictureTakerView *)cropView;
-(NSButton *)chooseButton;
-(void)setChooseButton:(NSButton *)arg1 ;
@end

