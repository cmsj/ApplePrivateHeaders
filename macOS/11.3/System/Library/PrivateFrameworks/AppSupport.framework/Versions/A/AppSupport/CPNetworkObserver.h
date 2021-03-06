/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/Versions/A/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppSupport/AppSupport-Structs.h>
@class NSLock, NSMutableDictionary;

@interface CPNetworkObserver : NSObject {

	NSLock* _lock;
	NSMutableDictionary* _reachabilityRequests;
	unsigned _networkReachability;
	SCNetworkReachabilityRef _networkReach;
	CFDictionaryRef _networkObservers;
	SCPreferencesRef _wifiPreferences;
	CFDictionaryRef _wifiObservers;
	char _networkNotified;
	char _networkReachable;
	char _wifiNotified;
	char _wifiEnabled;

}
+(id)sharedNetworkObserver;
-(void)dealloc;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(char)isNetworkReachable;
-(char)isWiFiEnabled;
-(void)removeNetworkReachableObserver:(id)arg1 ;
-(void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)removeObserver:(id)arg1 forHostname:(id)arg2 ;
-(void)_networkReachableFirstCallBack:(id)arg1 ;
-(void)_networkReachableCallBack:(unsigned)arg1 ;
-(void)_networkObserversInitialize;
-(void)_wifiFirstCallBack:(id)arg1 ;
-(void)_wifiCallBack:(unsigned)arg1 ;
-(void)_wifiObserversInitialize;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 forHostname:(id)arg3 ;
-(void)addWiFiObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)removeWiFiObserver:(id)arg1 ;
@end

