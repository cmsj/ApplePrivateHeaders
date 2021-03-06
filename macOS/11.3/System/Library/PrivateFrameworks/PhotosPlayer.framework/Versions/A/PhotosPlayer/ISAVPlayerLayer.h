/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/Versions/A/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <AVFCore/AVPlayerLayer.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface ISAVPlayerLayer : AVPlayerLayer {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	/*^block*/id _readyForDisplayChangeHandler;

}

@property (nonatomic,copy) id readyForDisplayChangeHandler;              //@synthesize readyForDisplayChangeHandler=_readyForDisplayChangeHandler - In the implementation block
-(void)dealloc;
-(id)init;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setPlayer:(id)arg1 ;
-(id)readyForDisplayChangeHandler;
-(void)deferredDealloc;
-(void)setWrappedPlayer:(id)arg1 ;
-(void)setReadyForDisplayChangeHandler:(id)arg1 ;
@end

