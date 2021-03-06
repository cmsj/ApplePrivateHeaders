/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QLTimeSliderDataSource <NSObject>
@property (assign) char playing; 
@property (readonly) double duration; 
@property (assign) double currentTime; 
@property (assign) double seekTolerance; 
@property (assign) char showRemainingTime; 
@property (readonly) char needsVolumeControl; 
@property (readonly) char hidePlayControl; 
@property (assign) char muted; 
@property (assign) float volume; 
@property (readonly) char autoplay; 
@optional
-(char)autoplay;

@required
-(double)seekTolerance;
-(void)setSeekTolerance:(double)arg1;
-(char)showRemainingTime;
-(void)setShowRemainingTime:(char)arg1;
-(char)needsVolumeControl;
-(char)hidePlayControl;
-(float)volume;
-(double)duration;
-(double)currentTime;
-(void)setCurrentTime:(double)arg1;
-(void)setVolume:(float)arg1;
-(char)playing;
-(void)setMuted:(char)arg1;
-(char)muted;
-(void)setPlaying:(char)arg1;

@end

