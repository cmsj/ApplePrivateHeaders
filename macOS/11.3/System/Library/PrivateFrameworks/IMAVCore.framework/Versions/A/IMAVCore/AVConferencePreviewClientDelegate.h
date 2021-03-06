/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/Versions/A/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVConferencePreviewClientDelegate
@optional
-(void)didStartPreview;
-(void)didPausePreview;
-(void)didStopPreview;
-(void)didReceiveFirstPreviewFrameFromCamera:(unsigned)arg1;
-(void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg1;
-(void)didChangeLocalVideoAttributes:(id)arg1;
-(void)didChangeLocalScreenAttributes:(id)arg1;
-(void)didReceiveErrorFromCameraUniqueID:(id)arg1 error:(id)arg2;
-(void)didReceiveCommError;
-(void)didGetSnapshot:(id)arg1;
-(void)cameraDidBecomeAvailableForUniqueID:(id)arg1;
-(void)cameraDidBecomeInterruptedForForUniqueID:(id)arg1 reason:(long long)arg2;
-(void)cameraZoomAvailabilityDidChange:(char)arg1;
-(void)cameraZoomAvailabilityDidChange:(char)arg1 currentZoomFactor:(double)arg2 maxZoomFactor:(double)arg3;
-(void)cameraCinematicFramingAvailabilityDidChange:(char)arg1;

@end

