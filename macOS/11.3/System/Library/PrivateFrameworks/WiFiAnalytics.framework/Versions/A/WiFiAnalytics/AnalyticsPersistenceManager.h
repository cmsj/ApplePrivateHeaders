/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/Versions/A/WiFiAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPersistentStoreCoordinator, NSManagedObjectModel, NSManagedObjectContext, NSXPCStoreServer;

@interface AnalyticsPersistenceManager : NSObject {

	NSPersistentStoreCoordinator* _persistenceCoordinator;
	NSManagedObjectModel* _managedObjectModel;
	NSManagedObjectContext* _persistenceContext;
	NSXPCStoreServer* _xpcStoreServer;

}

@property (nonatomic,retain) NSManagedObjectModel * managedObjectModel;                          //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * persistenceContext;                        //@synthesize persistenceContext=_persistenceContext - In the implementation block
@property (nonatomic,retain) NSXPCStoreServer * xpcStoreServer;                                  //@synthesize xpcStoreServer=_xpcStoreServer - In the implementation block
@property (nonatomic,retain) NSPersistentStoreCoordinator * persistenceCoordinator;              //@synthesize persistenceCoordinator=_persistenceCoordinator - In the implementation block
+(char)isStoreCompatibleAtURL:(id)arg1 withModel:(id)arg2 ;
-(NSManagedObjectModel *)managedObjectModel;
-(void)setManagedObjectModel:(NSManagedObjectModel *)arg1 ;
-(NSManagedObjectContext *)persistenceContext;
-(void)setXpcStoreServer:(NSXPCStoreServer *)arg1 ;
-(NSXPCStoreServer *)xpcStoreServer;
-(void)setPersistenceContext:(NSManagedObjectContext *)arg1 ;
-(id)initWithManagedObjectModel:(id)arg1 storeDescriptor:(id)arg2 ;
-(NSPersistentStoreCoordinator *)persistenceCoordinator;
-(void)setPersistenceCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
@end

