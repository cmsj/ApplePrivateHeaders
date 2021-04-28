/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, HMFUnfairLock;

@interface HMDAccessoryPairingEventRetryMap : NSObject {

	NSMutableDictionary* _retryCountMap;
	HMFUnfairLock* _accessoryPairingRetryMapLock;

}

@property (nonatomic,readonly) NSMutableDictionary * retryCountMap;                       //@synthesize retryCountMap=_retryCountMap - In the implementation block
@property (nonatomic,readonly) HMFUnfairLock * accessoryPairingRetryMapLock;              //@synthesize accessoryPairingRetryMapLock=_accessoryPairingRetryMapLock - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)incrementRetryCount:(id)arg1 ;
-(HMFUnfairLock *)accessoryPairingRetryMapLock;
-(NSMutableDictionary *)retryCountMap;
-(unsigned long long)retryCountForIdentifier:(id)arg1 ;
-(void)clearRetryCountMap;
@end
