/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/Versions/A/PowerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PowerUISmartChargeClientManaging <NSObject>
@required
-(id)status;
-(char)isOBCSupported;
-(void)isOBCSupportedWithHandler:(/*^block*/id)arg1;
-(void)fullChargeDeadlineWithHandler:(/*^block*/id)arg1;
-(void)isSmartChargingCurrentlyEnabledWithHandler:(/*^block*/id)arg1;
-(void)isOBCEngagedWithHandler:(/*^block*/id)arg1;
-(void)enterDevelopmentMode;
-(void)resetDevelopmentMode;
-(char)isOBCEngaged:(char*)arg1 asDesktopDevice:(char*)arg2 chargingOverrideAllowed:(char*)arg3 withError:(id*)arg4;
-(void)isOBCEngagedAsDesktopDeviceWithHandler:(/*^block*/id)arg1;
-(id)initWithClientName:(id)arg1;
-(unsigned long long)isSmartChargingCurrentlyEnabled:(id*)arg1;
-(char)disableSmartCharging:(id*)arg1;
-(void)disableSmartChargingWithHandler:(/*^block*/id)arg1;
-(char)temporarilyDisableSmartCharging:(id*)arg1;
-(void)temporarilyDisableSmartChargingWithHandler:(/*^block*/id)arg1;
-(char)enableSmartCharging:(id*)arg1;
-(void)enableSmartChargingWithHandler:(/*^block*/id)arg1;
-(char)temporarilyEnableCharging:(id*)arg1;
-(void)temporarilyEnableChargingWithHandler:(/*^block*/id)arg1;
-(char)isOBCEngagedAsDesktopDevice:(char*)arg1 chargingOverrideAllowed:(char*)arg2 withError:(id*)arg3;
-(char)isOBCEngaged:(id*)arg1;
-(id)fullChargeDeadline:(id*)arg1;
-(id)powerLogStatus;
-(id)simulateCurrentOutputAsOfDate:(id)arg1 overrideAllSignals:(char)arg2 withError:(id*)arg3;

@end

