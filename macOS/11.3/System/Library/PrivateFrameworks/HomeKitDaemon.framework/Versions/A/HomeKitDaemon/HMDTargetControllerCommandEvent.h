/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class HMDHAPAccessory, NSString;

@interface HMDTargetControllerCommandEvent : HMDLogEvent <HMDAWDLogEvent> {

	unsigned long long _commandType;
	HMDHAPAccessory* _accessory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long commandType;                  //@synthesize commandType=_commandType - In the implementation block
@property (nonatomic,__weak,readonly) HMDHAPAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
+(id)commandEventWithCommandType:(unsigned long long)arg1 accessory:(id)arg2 ;
-(HMDHAPAccessory *)accessory;
-(unsigned long long)commandType;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(id)initWithCommandType:(unsigned long long)arg1 accessory:(id)arg2 ;
@end

