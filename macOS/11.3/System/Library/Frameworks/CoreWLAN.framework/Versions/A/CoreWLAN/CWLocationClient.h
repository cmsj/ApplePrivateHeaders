/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class CWWiFiClient, NSString, NSObject, NSMutableDictionary, NSMutableArray;

@interface CWLocationClient : NSObject {

	CWWiFiClient* _wifiClient;
	NSString* _interfaceName;
	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_queue> _queue;
	double _interval;
	double _channelInterval;
	char _isScanningDisabled;
	char _isScanningTemporarilyDisabled;
	char _acquiredCurrentLocation;
	NSMutableDictionary* _channelHistoryMap;
	NSMutableArray* _channelList;
	unsigned long long _prevChannelIndex;
	unsigned long long _channelIndex;
	/*^block*/id _scanResultsHandler;

}
+(id)sharedLocationClient;
-(void)__acquireCurrentLocationWithScanResults:(id)arg1 ;
-(void)__startScanning;
-(void)__stopScanning;
-(void)__updateChannelList;
-(void)__performScan;
-(void)__restartScanning;
-(id)__supportedLocationWiFiChannelList;
-(void)setScanResultsHandler:(/*^block*/id)arg1 ;
-(void)setChannelInterval:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setInterval:(double)arg1 ;
-(void)autoJoinDidStartForWiFiInterfaceWithName:(id)arg1 ;
-(void)autoJoinDidCompleteForWiFiInterfaceWithName:(id)arg1 ;
-(void)powerStateDidChangeForWiFiInterfaceWithName:(id)arg1 ;
-(void)countryCodeDidChangeForWiFiInterfaceWithName:(id)arg1 ;
-(void)scanCacheUpdatedForWiFiInterfaceWithName:(id)arg1 ;
-(void)startScanning;
-(void)stopScanning;
@end
