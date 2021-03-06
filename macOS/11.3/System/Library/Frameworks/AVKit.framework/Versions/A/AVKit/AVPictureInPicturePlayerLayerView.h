/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSView.h>

@class _AVSimplePlayerLayerView, AVPlayerLayer;

@interface AVPictureInPicturePlayerLayerView : NSView {

	_AVSimplePlayerLayerView* _simplePlayerLayerView;

}

@property (nonatomic,readonly) AVPlayerLayer * playerLayer; 
-(AVPlayerLayer *)playerLayer;
-(void)attachPlayerLayer;
-(void)detachPlayerLayer;
@end

