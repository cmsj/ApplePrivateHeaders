/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/Versions/A/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreMotion/CoreMotion-Structs.h>
@class CMAccelerometerData, CMGyroData, CMMagnetometerData, CMDeviceMotion;

@interface CMMotionManager : NSObject {

	id _internal;

}

@property (getter=isDeviceMotionLiteAvailable,nonatomic,readonly) char isDeviceMotionLiteAvailable; 
@property (assign,nonatomic) double accelerometerUpdateInterval; 
@property (getter=isAccelerometerAvailable,nonatomic,readonly) char accelerometerAvailable; 
@property (getter=isAccelerometerActive,nonatomic,readonly) char accelerometerActive; 
@property (readonly) CMAccelerometerData * accelerometerData; 
@property (assign,nonatomic) double gyroUpdateInterval; 
@property (getter=isGyroAvailable,nonatomic,readonly) char gyroAvailable; 
@property (getter=isGyroActive,nonatomic,readonly) char gyroActive; 
@property (readonly) CMGyroData * gyroData; 
@property (assign,nonatomic) double magnetometerUpdateInterval; 
@property (getter=isMagnetometerAvailable,nonatomic,readonly) char magnetometerAvailable; 
@property (getter=isMagnetometerActive,nonatomic,readonly) char magnetometerActive; 
@property (readonly) CMMagnetometerData * magnetometerData; 
@property (assign,nonatomic) double deviceMotionUpdateInterval; 
@property (nonatomic,readonly) unsigned long long attitudeReferenceFrame; 
@property (getter=isDeviceMotionAvailable,nonatomic,readonly) char deviceMotionAvailable; 
@property (getter=isDeviceMotionActive,nonatomic,readonly) char deviceMotionActive; 
@property (readonly) CMDeviceMotion * deviceMotion; 
@property (assign,nonatomic) char showsDeviceMovementDisplay; 
+(id)sharedManager;
+(void)setVirtualAlmondDevice:(id)arg1 ;
+(unsigned long long)availableAttitudeReferenceFrames;
+(id)virtualAlmondDevice;
-(void)dealloc;
-(id)init;
-(CMDeviceMotion *)deviceMotion;
-(void)startDeviceMotionUpdates;
-(void)startDeviceMotionUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(char)isAccelerometerAvailable;
-(char)isAccelerometerActive;
-(double)accelerometerUpdateInterval;
-(void)setAccelerometerUpdateInterval:(double)arg1 ;
-(CMAccelerometerData *)accelerometerData;
-(void)startAccelerometerUpdates;
-(void)startAccelerometerUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)stopAccelerometerUpdates;
-(char)isGyroAvailable;
-(char)isGyroActive;
-(double)gyroUpdateInterval;
-(void)setGyroUpdateInterval:(double)arg1 ;
-(CMGyroData *)gyroData;
-(void)startGyroUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)startGyroUpdates;
-(void)stopGyroUpdates;
-(char)isDeviceMotionAvailable;
-(char)isDeviceMotionActive;
-(double)deviceMotionUpdateInterval;
-(void)setDeviceMotionUpdateInterval:(double)arg1 ;
-(void)startDeviceMotionUpdatesUsingReferenceFrame:(unsigned long long)arg1 ;
-(void)startDeviceMotionUpdatesUsingReferenceFrame:(unsigned long long)arg1 toQueue:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)stopDeviceMotionUpdates;
-(unsigned long long)attitudeReferenceFrame;
-(void)setShowsDeviceMovementDisplay:(char)arg1 ;
-(char)showsDeviceMovementDisplay;
-(void)dismissDeviceMovementDisplay;
-(char)isMagnetometerAvailable;
-(char)isMagnetometerActive;
-(void)setMagnetometerUpdateInterval:(double)arg1 ;
-(double)magnetometerUpdateInterval;
-(CMMagnetometerData *)magnetometerData;
-(void)startMagnetometerUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)startMagnetometerUpdates;
-(void)stopMagnetometerUpdates;
-(char)isDeviceMotionLiteAvailable;
-(void)startDeviceMotionLiteUpdatesForDeviceID:(id)arg1 usingConfiguration:(SCD_Struct_CM18)arg2 toQueue:(id)arg3 withFusedHandler:(/*^block*/id)arg4 ;
-(void)startDeviceMotionLiteFusedUpdatesForDeviceID:(id)arg1 toQueue:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)stopDeviceMotionLiteUpdatesForDeviceID:(id)arg1 ;
@end

