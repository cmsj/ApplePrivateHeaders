/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameController.framework/Versions/A/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSDictionary;

@interface GCDeviceConfigurationEvaluator : NSObject {

	NSSet* _configurationsIN;
	NSDictionary* _deviceManagersIN;
	NSDictionary* _physicalDevicesIN;
	NSSet* _viableConfigurationsOUT;
	NSDictionary* _deviceOwnersOUT;

}

@property (nonatomic,copy) NSSet * configurationsIN;                         //@synthesize configurationsIN=_configurationsIN - In the implementation block
@property (nonatomic,copy) NSDictionary * deviceManagersIN;                  //@synthesize deviceManagersIN=_deviceManagersIN - In the implementation block
@property (nonatomic,copy) NSDictionary * physicalDevicesIN;                 //@synthesize physicalDevicesIN=_physicalDevicesIN - In the implementation block
@property (nonatomic,readonly) NSSet * viableConfigurationsOUT;              //@synthesize viableConfigurationsOUT=_viableConfigurationsOUT - In the implementation block
@property (nonatomic,readonly) NSDictionary * deviceOwnersOUT;               //@synthesize deviceOwnersOUT=_deviceOwnersOUT - In the implementation block
-(void)evaluate;
-(void)setConfigurationsIN:(NSSet *)arg1 ;
-(void)setDeviceManagersIN:(NSDictionary *)arg1 ;
-(void)setPhysicalDevicesIN:(NSDictionary *)arg1 ;
-(NSSet *)viableConfigurationsOUT;
-(NSSet *)configurationsIN;
-(NSDictionary *)physicalDevicesIN;
-(NSDictionary *)deviceManagersIN;
-(unsigned long long)viableConfigurations:(id*)arg1 deviceOwners:(id*)arg2 ;
-(NSDictionary *)deviceOwnersOUT;
@end

