/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDAccessoryFirmwareUpdateTask.h>

@protocol HMDAccessoryFirmwareUpdateTask <NSObject>
@property (readonly) double initialDelay; 
@property (readonly) NSObject*<OS_xpc_object> criteria; 
@property (nonatomic,readonly) char shouldRun; 
@property (readonly) char shouldRunOnCurrentDevice; 
@property (getter=isUserInitiated,nonatomic,readonly) char userInitiated; 
@required
-(void)run;
-(NSObject*<OS_xpc_object>)criteria;
-(double)initialDelay;
-(char)shouldRun;
-(char)isUserInitiated;
-(char)shouldRunOnCurrentDevice;

@end


@class HMDAccessoryFirmwareUpdateSession, HMDAccessoryFirmwareUpdateProfile, HMDHAPAccessory, NSString;

@interface HMDAccessoryFirmwareUpdateTask : NSObject <HMFLogging, HMDAccessoryFirmwareUpdateTask> {

	double _initialDelay;
	HMDAccessoryFirmwareUpdateSession* _session;
	HMDAccessoryFirmwareUpdateProfile* _profile;

}

@property (__weak,readonly) HMDAccessoryFirmwareUpdateSession * session;               //@synthesize session=_session - In the implementation block
@property (__weak,readonly) HMDAccessoryFirmwareUpdateProfile * profile;               //@synthesize profile=_profile - In the implementation block
@property (__weak,readonly) HMDHAPAccessory * accessory; 
@property (readonly) long long accessoryActiveTransport; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) double initialDelay;                                              //@synthesize initialDelay=_initialDelay - In the implementation block
@property (readonly) NSObject*<OS_xpc_object> criteria; 
@property (nonatomic,readonly) char shouldRun; 
@property (readonly) char shouldRunOnCurrentDevice; 
@property (getter=isUserInitiated,nonatomic,readonly) char userInitiated; 
+(id)logCategory;
-(void)run;
-(NSString *)description;
-(HMDAccessoryFirmwareUpdateSession *)session;
-(HMDAccessoryFirmwareUpdateProfile *)profile;
-(HMDHAPAccessory *)accessory;
-(NSObject*<OS_xpc_object>)criteria;
-(double)initialDelay;
-(char)shouldRun;
-(char)isUserInitiated;
-(char)shouldRunOnCurrentDevice;
-(id)initWithSession:(id)arg1 profile:(id)arg2 initialDelay:(double)arg3 ;
-(long long)accessoryActiveTransport;
@end

