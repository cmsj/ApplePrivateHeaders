/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoKit.framework/Versions/A/NeutrinoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoKit/NeutrinoKit-Structs.h>
#import <AppKit/NSView.h>

@protocol NUAVPlayerViewDelegate;
@class AVPlayer;

@interface NUAVPlayerView : NSView {

	Ai _updateReadyForDisplayID;
	char _observerDetached;
	char _readyForDisplay;
	AVPlayer* _player;
	id<NUAVPlayerViewDelegate> _delegate;

}

@property (assign,setter=_setReadyForDisplay:,getter=isReadyForDisplay,nonatomic) char readyForDisplay;              //@synthesize readyForDisplay=_readyForDisplay - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                                                                      //@synthesize player=_player - In the implementation block
@property (assign,nonatomic,__weak) id<NUAVPlayerViewDelegate> delegate;                                             //@synthesize delegate=_delegate - In the implementation block
+(Class)layerClass;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<NUAVPlayerViewDelegate>)delegate;
-(void)setDelegate:(id<NUAVPlayerViewDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dispose;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVPlayer *)player;
-(char)isReadyForDisplay;
-(void)_setReadyForDisplay:(char)arg1 ;
-(void)_updateReadyForDisplayWithID:(A)arg1 :(int)arg2 ;
@end
