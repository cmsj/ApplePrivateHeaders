/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/Versions/A/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiPolicy/WiFiAvailabilitySource.h>

@protocol OS_dispatch_queue;
@class PKPassLibrary, NSMutableDictionary, NSMutableSet, NSObject, NSString;

@interface WiFiWalletSource : NSObject <WiFiAvailabilitySource> {

	/*^block*/id changeHandler;
	/*^block*/id relevancyHandler;
	PKPassLibrary* _passLibrary;
	NSMutableDictionary* _networks;
	NSMutableSet* _relevantPassIdentifiers;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) PKPassLibrary * passLibrary;                         //@synthesize passLibrary=_passLibrary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * networks;                      //@synthesize networks=_networks - In the implementation block
@property (nonatomic,retain) NSMutableSet * relevantPassIdentifiers;              //@synthesize relevantPassIdentifiers=_relevantPassIdentifiers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id changeHandler; 
@property (nonatomic,copy) id relevancyHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setChangeHandler:(id)arg1 ;
-(id)changeHandler;
-(NSMutableDictionary *)networks;
-(void)setNetworks:(NSMutableDictionary *)arg1 ;
-(void)_passLibraryDidChange:(id)arg1 ;
-(id)initWithChangeHandler:(/*^block*/id)arg1 ;
-(void)_initializeWiFiPasses;
-(void)_passLibraryDidBecomeRelevantNotification:(id)arg1 ;
-(PKPassLibrary *)passLibrary;
-(void)_addPass:(id)arg1 ;
-(void)_handleRelevantPassUpdate:(id)arg1 ;
-(id)_createWiFiWalletPassFromPass:(id)arg1 ;
-(void)_removeRelevantPasses;
-(void)_handlePassLibraryChange:(id)arg1 ;
-(void)_passDidBecomeRelevant:(id)arg1 ;
-(NSMutableSet *)relevantPassIdentifiers;
-(id)_networksWithIdentifier:(id)arg1 ;
-(void)_issueRelevancyCallbackWithRelevantNetworks:(id)arg1 notRelevantNetworks:(id)arg2 ;
-(id)relevancyHandler;
-(id)relevantNetworks;
-(void)setRelevancyHandler:(id)arg1 ;
-(id)candidateNetworks;
-(void)setPassLibrary:(PKPassLibrary *)arg1 ;
-(void)setRelevantPassIdentifiers:(NSMutableSet *)arg1 ;
@end
