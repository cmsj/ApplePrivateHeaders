/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVPictureInPicturePlatformAdapterDelegate <NSObject>
@required
-(void)pictureInPicturePlatformAdapter:(id)arg1 failedToStartError:(id)arg2;
-(void)pictureInPicturePlatformAdapter:(id)arg1 prepareToStopForRestoringUserInterface:(/*^block*/id)arg2;
-(void)pictureInPicturePlatformAdapterPrepareToStopForDismissal:(id)arg1;
-(void)pictureInPicturePlatformAdapter:(id)arg1 stopPictureInPictureAndRestoreUserInterface:(char)arg2;
-(void)pictureInPicturePlatformAdapter:(id)arg1 handlePlaybackCommand:(long long)arg2;
-(void)pictureInPicturePlatformAdapter:(id)arg1 statusDidChange:(long long)arg2 fromStatus:(long long)arg3;
-(void)pictureInPicturePlatformAdapterBeginReducingResourcesForEligibleOffScreenState;
-(void)pictureInPicturePlatformAdapterEndReducingResourcesForEligibleOffScreenState;

@end

