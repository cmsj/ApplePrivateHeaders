/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class AVPictureInPicturePlayerLayerView, AVPlayerController;

@interface AVPictureInPictureViewController : NSViewController {

	AVPictureInPicturePlayerLayerView* _pictureInPicturePlayerLayerView;
	AVPlayerController* _playerController;

}

@property (nonatomic,retain) AVPlayerController * playerController;                                              //@synthesize playerController=_playerController - In the implementation block
@property (nonatomic,readonly) AVPictureInPicturePlayerLayerView * pictureInPicturePlayerLayerView;              //@synthesize pictureInPicturePlayerLayerView=_pictureInPicturePlayerLayerView - In the implementation block
-(void)dealloc;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(AVPlayerController *)playerController;
-(id)initWithPictureInPicturePlayerLayerView:(id)arg1 ;
-(AVPictureInPicturePlayerLayerView *)pictureInPicturePlayerLayerView;
@end
