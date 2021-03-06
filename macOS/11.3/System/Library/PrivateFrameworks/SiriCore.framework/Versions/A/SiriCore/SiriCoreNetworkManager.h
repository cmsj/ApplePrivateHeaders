/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/Versions/A/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_nw_path_evaluator;
@class NSObject, NSHashTable, SiriCoreWiFiManagerClient, NSNumber;

@interface SiriCoreNetworkManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _observers;
	NSObject*<OS_nw_path_evaluator> _pathEvaluator;
	int _pathStatus;
	char _pathUsesCellular;
	SiriCoreWiFiManagerClient* _wiFiManagerClient;
	char _hasSymptomsBasedInstantCellQuality;
	char _symptomsBasedInstantCellQualityIsGood;
	char _hasSymptomsBasedInstantWiFiQuality;
	char _symptomsBasedInstantWiFiQualityIsGood;
	char _hasSymptomsBasedHistoricalCellQuality;
	char _symptomsBasedHistoricalCellQualityIsGood;
	char _hasSymptomsBasedHistoricalWiFiQuality;
	char _symptomsBasedHistoricalWiFiQualityIsGood;
	char _lastFetchInProgress;
	double _lastSuccessfulSymptomsFetch;
	NSNumber* _lastSignalStrength;
	unsigned long long _subscriptionCount;

}
+(id)sharedInstance;
+(long long)connectionSubTypeForCellularInterface;
+(void)_ifnameTypeForName:(char*)arg1 isWiFi:(char*)arg2 isCellular:(char*)arg3 ;
+(void)getCarrierName:(id*)arg1 signalStrength:(id*)arg2 subscriptionCount:(id*)arg3 ;
+(id)connectionTypeForInterfaceName:(id)arg1 isCellular:(char)arg2 ;
+(long long)connectionTypeForInterface:(id)arg1 ;
+(void)acquireDormancySuspendAssertion:(const void*)arg1 ;
+(void)releaseDormancySuspendAssertion:(void*)arg1 ;
-(void)dealloc;
-(id)_init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_stopMonitoringNetwork;
-(void)_pathUpdated:(id)arg1 ;
-(void)_getNetworkPerformanceFeed;
-(long long)_reportCellularInstantQuality;
-(long long)_reportCellularHistoricalQuality;
-(long long)_reportWiFiInstantQuality;
-(long long)_reportWiFiHistoricalQuality;
-(void)releaseWiFiAssertion;
-(id)_wiFiManagerClient;
-(void)acquireWiFiAssertion:(long long)arg1 ;
-(void)startMonitoringNetworkForHost:(id)arg1 ;
-(void)stopMonitoringNetwork;
-(void)getNetworkPerformanceFeed;
-(long long)cellularNetworkQuality;
-(long long)wifiNetworkQuality;
-(long long)anyNetworkQuality;
-(void)getQualityReport:(/*^block*/id)arg1 ;
-(void)getSignalStrength:(id*)arg1 subscriptionCount:(unsigned long long*)arg2 ;
-(void)forceFastDormancy;
-(char)_defaultBTLinkRecommendation;
-(char)_defaultWiFiLinkRecommendation;
-(char)_getConnectionSuccessRate:(id)arg1 hasMetric:(char*)arg2 ;
@end

