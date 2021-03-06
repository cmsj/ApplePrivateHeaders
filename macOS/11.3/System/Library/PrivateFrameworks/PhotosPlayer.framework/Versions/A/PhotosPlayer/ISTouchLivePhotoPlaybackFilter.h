/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/Versions/A/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/ISLivePhotoPlaybackFilter.h>

@class ISDisplayLink, NSDate;

@interface ISTouchLivePhotoPlaybackFilter : ISLivePhotoPlaybackFilter {

	char _touchActive;
	long long __playbackRequestID;
	ISDisplayLink* __displayLink;
	NSDate* __playbackStartDate;

}

@property (assign,setter=_setPlaybackReaquestID:,nonatomic) long long _playbackRequestID;              //@synthesize _playbackRequestID=__playbackRequestID - In the implementation block
@property (assign,setter=_setDisplayLink:,nonatomic) ISDisplayLink * _displayLink;                     //@synthesize _displayLink=__displayLink - In the implementation block
@property (setter=_setPlaybackStartDate:,nonatomic,retain) NSDate * _playbackStartDate;                //@synthesize _playbackStartDate=__playbackStartDate - In the implementation block
@property (assign,getter=isTouchActive,nonatomic) char touchActive;                                    //@synthesize touchActive=_touchActive - In the implementation block
-(void)reset;
-(ISDisplayLink *)_displayLink;
-(void)didPerformChanges;
-(void)setTouchActive:(char)arg1 ;
-(void)_setDisplayLink:(id)arg1 ;
-(long long)_playbackRequestID;
-(NSDate *)_playbackStartDate;
-(long long)_nextPlaybackRequestID;
-(void)_handleDisplayLink;
-(char)isTouchActive;
-(void)_setPlaybackReaquestID:(long long)arg1 ;
-(void)_setPlaybackStartDate:(id)arg1 ;
@end

