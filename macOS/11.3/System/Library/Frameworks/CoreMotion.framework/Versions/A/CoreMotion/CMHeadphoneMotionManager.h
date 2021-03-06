/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/Versions/A/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CMHeadphoneMotionManagerDelegate;
@class CMHeadphoneMotionManagerInternal, CMDeviceMotion;

@interface CMHeadphoneMotionManager : NSObject {

	CMHeadphoneMotionManagerInternal* _internal;
	id<CMHeadphoneMotionManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CMHeadphoneMotionManagerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (getter=isDeviceMotionAvailable,nonatomic,readonly) char deviceMotionAvailable; 
@property (getter=isDeviceMotionActive,nonatomic,readonly) char deviceMotionActive; 
@property (readonly) CMDeviceMotion * deviceMotion; 
+(long long)authorizationStatus;
-(void)dealloc;
-(id)init;
-(id<CMHeadphoneMotionManagerDelegate>)delegate;
-(void)setDelegate:(id<CMHeadphoneMotionManagerDelegate>)arg1 ;
-(CMDeviceMotion *)deviceMotion;
-(void)startDeviceMotionUpdates;
-(void)startDeviceMotionUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(char)isDeviceMotionAvailable;
-(char)isDeviceMotionActive;
-(void)stopDeviceMotionUpdates;
-(void)pauseDeviceMotionStreamingPrivate;
-(void)startDeviceMotionUpdatesPrivateToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)stopDeviceMotionUpdatesPrivate;
-(void)resumeDeviceMotionStreamingPrivate;
-(void)onDeviceMotionPrivate:(id)arg1 ;
-(void)onDeviceMotionEventPrivate:(id)arg1 ;
-(void)applyInitialReferencePrivate:(id)arg1 ;
-(void)notifyDeviceConnectedEventToClientPrivate;
-(void)notifyDeviceDisconnectedEventToClientPrivate;
-(id)delegateQueuePrivate;
@end

