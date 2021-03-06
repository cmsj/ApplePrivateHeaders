/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSWindow;


@protocol AVPictureInPictureContentSource <NSObject>
@property (readonly) CGRect avkit_videoRectInWindow; 
@property (readonly) char avkit_isVisible; 
@property (readonly) NSWindow * avkit_window; 
@required
-(id)avkit_makePlayerControllerIfNeeded:(id)arg1;
-(id)avkit_pictureInPictureViewController;
-(void)avkit_startRoutingVideoToPictureInPictureViewController:(id)arg1;
-(void)avkit_stopRoutingVideoToPictureInPictureViewController:(id)arg1;
-(void)avkit_beginReducingResourcesForPictureInPictureViewController:(id)arg1 playerController:(id)arg2;
-(void)avkit_endReducingResourcesForPictureInPictureViewController:(id)arg1 playerController:(id)arg2;
-(void)avkit_willBeginStoppingPictureInPictureForPictureInPictureViewController:(id)arg1;
-(CGRect)avkit_videoRectInWindow;
-(char)avkit_isVisible;
-(NSWindow *)avkit_window;

@end

