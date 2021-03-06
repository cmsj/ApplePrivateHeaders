/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol HMFLocking, HMDMediaBrowserDelegate, OS_dispatch_queue, HMDMediaBrowserDataSource;
@class NSMutableSet, HMDHomeManager, NSObject, HMFTimer, HMDUnassociatedMediaAccessory, NSArray, NSString;

@interface HMDMediaBrowser : HMFObject <HMFLogging, HMFTimerDelegate> {

	id<HMFLocking> _lock;
	NSMutableSet* _accessoryAdvertisements;
	char _discoverUnassociatedAccessories;
	char _discoverAssociatedAccessories;
	char _updateAvailableOutputDevices;
	id<HMDMediaBrowserDelegate> _delegate;
	HMDHomeManager* _homeManager;
	NSObject*<OS_dispatch_queue> _clientQueue;
	void* _discoverySession;
	void* _discoverySessionCallbackToken;
	HMFTimer* _discoveryPollTimer;
	NSMutableSet* _identifiersOfAssociatedMediaAccessories;
	NSMutableSet* _mediaEndpoints;
	id<HMDMediaBrowserDataSource> _dataSource;

}

@property (__weak) id<HMDMediaBrowserDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (__weak) HMDHomeManager * homeManager;                                         //@synthesize homeManager=_homeManager - In the implementation block
@property (copy,readonly) HMDUnassociatedMediaAccessory * currentAccessory; 
@property (copy,readonly) NSArray * accessoryAdvertisements; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortDescription;
+(id)logCategory;
+(id)advertisementsFromOutputDevices:(CFArrayRef)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(id<HMDMediaBrowserDelegate>)delegate;
-(void)setDelegate:(id<HMDMediaBrowserDelegate>)arg1 ;
-(id)shortDescription;
-(HMDUnassociatedMediaAccessory *)currentAccessory;
-(void)timerDidFire:(id)arg1 ;
-(HMDHomeManager *)homeManager;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(id)initWithHomeManager:(id)arg1 ;
-(NSArray *)accessoryAdvertisements;
-(id)dumpDescription;
-(void)updateSessionsForAccessories:(id)arg1 ;
-(void)registerAccessories:(id)arg1 ;
-(void)stopDiscoveringAssociatedAccessories;
-(void)startDiscoveringAssociatedAccessories;
-(id)unassociatedAccessoryFromAdvertisementData:(id)arg1 ;
-(void)deregisterAccessories:(id)arg1 ;
-(void)startDiscoveringUnassociatedAccessories;
-(void)stopDiscoveringUnassociatedAccessories;
-(id)initWithHomeManager:(id)arg1 dataSource:(id)arg2 ;
@end

