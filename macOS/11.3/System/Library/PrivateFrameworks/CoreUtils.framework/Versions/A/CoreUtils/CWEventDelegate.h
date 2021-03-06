/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CWEventDelegate
@optional
-(void)clientConnectionInterrupted;
-(void)clientConnectionInvalidated;
-(void)powerStateDidChangeForWiFiInterfaceWithName:(id)arg1;
-(void)ssidDidChangeForWiFiInterfaceWithName:(id)arg1;
-(void)bssidDidChangeForWiFiInterfaceWithName:(id)arg1;
-(void)countryCodeDidChangeForWiFiInterfaceWithName:(id)arg1;
-(void)linkDidChangeForWiFiInterfaceWithName:(id)arg1;
-(void)linkQualityDidChangeForWiFiInterfaceWithName:(id)arg1 rssi:(long long)arg2 transmitRate:(double)arg3;
-(void)modeDidChangeForWiFiInterfaceWithName:(id)arg1;
-(void)scanCacheUpdatedForWiFiInterfaceWithName:(id)arg1;

@end

