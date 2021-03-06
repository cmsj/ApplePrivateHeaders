/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MPDocument, MRRenderer;


@protocol MRMarimbaBasicPlayback
@property (nonatomic,retain) MPDocument * document; 
@property (assign,nonatomic) double time; 
@property (nonatomic,readonly) double timeRemaining; 
@property (nonatomic,readonly) char isPlaying; 
@property (assign,nonatomic) double volume; 
@property (assign,nonatomic) char stopWithVideo; 
@property (assign,nonatomic) char displaysFPS; 
@property (nonatomic,readonly) MRRenderer * renderer; 
@property (assign,nonatomic) char enableSlideDidChangeNotification; 
@required
-(double)volume;
-(void)pause;
-(MPDocument *)document;
-(double)time;
-(void)play;
-(void)setDocument:(id)arg1;
-(char)isPlaying;
-(void)setVolume:(double)arg1;
-(MRRenderer *)renderer;
-(void)setTime:(double)arg1;
-(double)timeRemaining;
-(void)goBack;
-(void)togglePlayback;
-(void)setEnableSlideDidChangeNotification:(char)arg1;
-(void)warmupRenderer;
-(void)goForth;
-(void)requestRendering:(char)arg1;
-(void)pauseWhenStill;
-(char)displaysFPS;
-(void)setDisplaysFPS:(char)arg1;
-(void)touchesBegan:(id)arg1;
-(void)touchesMoved:(id)arg1;
-(void)touchesEnded:(id)arg1;
-(void)touchesCancelled:(id)arg1;
-(void)gotoBeginning;
-(void)gotoEnd;
-(void)nextFrame;
-(void)prevFrame;
-(CGImageRef)snapshotAsCGImageForTime:(double)arg1 withSize:(CGSize)arg2;
-(CGImageRef)snapshotAsCGImage;
-(char)stopWithVideo;
-(void)setStopWithVideo:(char)arg1;
-(char)enableSlideDidChangeNotification;

@end

