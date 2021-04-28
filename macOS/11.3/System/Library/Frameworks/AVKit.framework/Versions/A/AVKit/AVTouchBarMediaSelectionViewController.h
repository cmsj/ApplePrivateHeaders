/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@protocol AVTouchBarMediaSelectionControlling, AVTouchBarMediaSelectionViewControllerDelegate;
@class NSTextField, NSStackView;

@interface AVTouchBarMediaSelectionViewController : NSViewController {

	NSTextField* _audioLabel;
	NSTextField* _legibleLabel;
	NSStackView* _audioOptionsContainerView;
	NSStackView* _legibleOptionsContainerView;
	id<AVTouchBarMediaSelectionControlling> _playerController;
	id<AVTouchBarMediaSelectionViewControllerDelegate> _delegate;

}

@property (retain) id<AVTouchBarMediaSelectionControlling> playerController;                                  //@synthesize playerController=_playerController - In the implementation block
@property (assign,nonatomic,__weak) id<AVTouchBarMediaSelectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<AVTouchBarMediaSelectionViewControllerDelegate>)delegate;
-(void)setDelegate:(id<AVTouchBarMediaSelectionViewControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)loadView;
-(void)setPlayerController:(id<AVTouchBarMediaSelectionControlling>)arg1 ;
-(id<AVTouchBarMediaSelectionControlling>)playerController;
-(void)actionAudioTouchBarMediaSelectionOptionSelected:(id)arg1 ;
-(void)actionLegibleTouchBarMediaSelectionOptionSelected:(id)arg1 ;
-(void)_updateTouchBarMediaSelectionOptionInContainerView:(id)arg1 mediaSelectionOptions:(id)arg2 currentMediaSelectionOption:(id)arg3 selectionAction:(SEL)arg4 ;
-(void)_updateButtonStatesForCurrentTouchBarMediaSelectionOption:(id)arg1 containerView:(id)arg2 ;
@end
