/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/Versions/A/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CoreTelephonyClientDataDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientCarrierBundleDelegate.h>

@protocol OS_dispatch_queue;
@class CoreTelephonyClient, NSObject, CTXPCServiceSubscriptionContext, NSHashTable, CTBundle, NSDictionary, NSString;

@interface PCCarrierBundleHelper : NSObject <CoreTelephonyClientDataDelegate, CoreTelephonyClientCarrierBundleDelegate> {

	CoreTelephonyClient* _ctClient;
	NSObject*<OS_dispatch_queue> _queue;
	CTXPCServiceSubscriptionContext* _currentDataContext;
	NSHashTable* _delegates;
	CTBundle* _bundle;
	NSDictionary* _cachedPushSettings;

}

@property (nonatomic,copy) NSDictionary * cachedPushSettings;              //@synthesize cachedPushSettings=_cachedPushSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)helper;
-(id)copyValueFromPushBundleForKey:(id)arg1 error:(id*)arg2 ;
-(id)copyValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)_processCarrierBundleChange:(id)arg1 ;
-(void)_updateCurrentDataSimContext:(id)arg1 ;
-(char)boolValueFromPushBundleForKey:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)cachedPushSettings;
-(void)setCachedPushSettings:(NSDictionary *)arg1 ;
-(id)init;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)currentDataSimChanged:(id)arg1 ;
-(void)operatorBundleChange:(id)arg1 ;
@end

