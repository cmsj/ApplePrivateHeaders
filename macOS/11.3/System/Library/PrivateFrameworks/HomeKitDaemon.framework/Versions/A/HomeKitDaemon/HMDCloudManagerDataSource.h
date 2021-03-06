/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDHomeManager;

@interface HMDCloudManagerDataSource : HMFObject {

	HMDHomeManager* _homeManager;

}

@property (__weak,readonly) HMDHomeManager * homeManager;              //@synthesize homeManager=_homeManager - In the implementation block
-(HMDHomeManager *)homeManager;
-(id)initWithHomeManager:(id)arg1 ;
-(char)isKeychainSyncEnabled;
-(char)supportsKeyTransferServer;
-(id)keyTransferAgent;
-(char)isControllerKeyAvailable;
-(unsigned long long)dataMigrationOptions;
-(id)queryDatabaseOperationWithBlock:(/*^block*/id)arg1 ;
@end

