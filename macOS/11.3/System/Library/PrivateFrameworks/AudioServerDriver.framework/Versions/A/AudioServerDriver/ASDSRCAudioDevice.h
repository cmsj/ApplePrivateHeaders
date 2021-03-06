/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/Versions/A/AudioServerDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <AudioServerDriver/ASDAudioDevice.h>
#import <libobjc.A.dylib/ASDDeviceConfigurationChangeDelegate.h>
#import <libobjc.A.dylib/ASDPropertyChangedDelegate.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject, ASDAudioDevice, NSString;

@interface ASDSRCAudioDevice : ASDAudioDevice <ASDDeviceConfigurationChangeDelegate, ASDPropertyChangedDelegate> {

	double _samplingRate;
	NSArray* _samplingRates;
	NSObject*<OS_dispatch_queue> _sampleRateQueue;
	SCD_Struct_AS16 _lastTimestamp;
	ASDAudioDevice* _underlyingDevice;

}

@property (nonatomic,readonly) ASDAudioDevice * underlyingDevice;              //@synthesize underlyingDevice=_underlyingDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)timestampPeriod;
-(void)changedProperty:(const AudioObjectPropertyAddress*)arg1 forObject:(id)arg2 ;
-(char)requestConfigurationChangeForDevice:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(int)startIOForClient:(unsigned)arg1 ;
-(int)stopIOForClient:(unsigned)arg1 ;
-(unsigned)clockAlgorithm;
-(char)clockIsStable;
-(int)performStopIO;
-(/*^block*/id)getZeroTimestampBlock;
-(/*^block*/id)willDoReadInputBlock;
-(/*^block*/id)willDoWriteMixBlock;
-(double)sampleRateRatio;
-(id)initWithDeviceUID:(id)arg1 underlyingDevice:(id)arg2 plugin:(id)arg3 ;
-(char)isHidden;
-(id)manufacturerName;
-(id)deviceName;
-(unsigned)transportType;
-(void)setDeviceName:(id)arg1 ;
-(id)modelName;
-(unsigned)clockDomain;
-(id)modelUID;
-(unsigned)inputSafetyOffset;
-(unsigned)outputSafetyOffset;
-(void)setSamplingRate:(double)arg1 ;
-(double)samplingRate;
-(id)samplingRates;
-(ASDAudioDevice *)underlyingDevice;
-(void)setSamplingRates:(id)arg1 ;
-(char)canBeDefaultDevice;
-(char)canBeDefaultInputDevice;
-(char)canBeDefaultOutputDevice;
-(char)canBeDefaultSystemDevice;
-(char)changeSamplingRate:(double)arg1 ;
@end

