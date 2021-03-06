/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/Versions/A/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMAVCore/IMAVCore-Structs.h>
#import <libobjc.A.dylib/AVConferencePreviewClientDelegate.h>
#import <IMAVCore/IMSystemMonitorListener.h>

@class AVConferencePreview;

@interface IMAVLocalPreviewClient : NSObject <AVConferencePreviewClientDelegate, IMSystemMonitorListener> {

	char _shouldAlterPreviewState;
	char _wantsPreview;
	char _wantsPausedPreview;
	char _wantsUnpausedPreview;
	AVConferencePreview* _conferencePreview;

}

@property (nonatomic,retain) AVConferencePreview * conferencePreview;              //@synthesize conferencePreview=_conferencePreview - In the implementation block
@property (nonatomic,readonly) char isPreviewRunning; 
@property (assign,nonatomic) unsigned cameraType; 
@property (assign,nonatomic) unsigned cameraOrientation; 
@property (assign,nonatomic) void* localVideoLayer; 
@property (assign,nonatomic) void* localVideoBackLayer; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)startPreview;
-(void)stopPreview;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationWillEnterForeground;
-(void)systemScreenDidPowerUp;
-(void)systemScreenDidPowerDown;
-(unsigned)cameraType;
-(void)setCameraType:(unsigned)arg1 ;
-(char)isPreviewRunning;
-(void)pausePreview;
-(id)localScreenAttributesForVideoAttributes:(id)arg1 ;
-(void)setLocalScreenAttributes:(id)arg1 ;
-(void)didStartPreview;
-(void)didPausePreview;
-(void)didStopPreview;
-(void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg1 ;
-(void)didChangeLocalVideoAttributes:(id)arg1 ;
-(void)didChangeLocalScreenAttributes:(id)arg1 ;
-(void)didReceiveErrorFromCameraUniqueID:(id)arg1 error:(id)arg2 ;
-(void)cameraDidBecomeAvailableForUniqueID:(id)arg1 ;
-(unsigned)cameraOrientation;
-(void*)localVideoLayer;
-(void)setLocalVideoLayer:(void*)arg1 ;
-(void*)localVideoBackLayer;
-(void)setLocalVideoBackLayer:(void*)arg1 ;
-(void)setCameraOrientation:(unsigned)arg1 ;
-(void)avChat:(id)arg1 setLocalPortraitRatio:(CGSize)arg2 localLandscapeRatio:(CGSize)arg3 ;
-(AVConferencePreview *)conferencePreview;
-(char)_shouldPreviewBeRunning;
-(void)_updatePreviewState;
-(void)_avDaemonConnected;
-(void)unpausePreview;
-(void)beginAnimationToPIP;
-(void)endAnimationToPIP;
-(void)beginAnimationToPreview;
-(void)endAnimationToPreview;
-(void)setConferencePreview:(AVConferencePreview *)arg1 ;
@end

