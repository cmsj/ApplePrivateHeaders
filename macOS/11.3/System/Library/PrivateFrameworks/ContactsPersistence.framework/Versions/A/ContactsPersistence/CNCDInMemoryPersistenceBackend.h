/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNCDPersistenceBackend.h>

@protocol CNCDIOSLegacyIdentifierRegistration;
@class NSPersistentStoreCoordinator, NSMutableArray, NSString;

@interface CNCDInMemoryPersistenceBackend : NSObject <CNCDPersistenceBackend> {

	NSPersistentStoreCoordinator* _coordinator;
	NSMutableArray* _containers;
	id<CNCDIOSLegacyIdentifierRegistration> _iOSLegacyIdentifierRegistrar;

}

@property (nonatomic,readonly) NSPersistentStoreCoordinator * coordinator;                              //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,readonly) NSMutableArray * containers;                                             //@synthesize containers=_containers - In the implementation block
@property (readonly) id<CNCDIOSLegacyIdentifierRegistration> iOSLegacyIdentifierRegistrar;              //@synthesize iOSLegacyIdentifierRegistrar=_iOSLegacyIdentifierRegistrar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSMutableArray *)containers;
-(id)defaultContainer;
-(id)allContainers;
-(NSPersistentStoreCoordinator *)coordinator;
-(id)makePersistenceContextWithNotificationSource:(id)arg1 ;
-(id)addAccountContainerWithName:(id)arg1 type:(long long)arg2 ;
-(void)applyDiff:(id)arg1 toContainerWithIdentifier:(id)arg2 ;
-(id<CNCDIOSLegacyIdentifierRegistration>)iOSLegacyIdentifierRegistrar;
-(id)makeManagedObjectContextWithConcurrencyType:(unsigned long long)arg1 ;
-(id)addAccountContainerWithName:(id)arg1 type:(long long)arg2 writable:(char)arg3 ;
-(id)addAccountContainerWithProvider:(/*^block*/id)arg1 ;
-(void)updateCachedContainersWithValuesFromPersistentStore;
@end
