/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SSFrameBufferViewDelegate <NSObject>
@property (readonly) char useAVConference; 
@required
-(char)useAVConference;
-(void)ssFrameBufferView:(id)arg1 didDropRemotePath:(id)arg2 atLocalDropDestination:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)didFinishDroppingRemotePaths;

@end

