/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/Versions/A/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue, NSPersistentStoreCoordinator, VSOptional, NSString, NSURL;

@interface VSSubscriptionPersistentContainer : NSObject {

	char _didSetupPersistence;
	char _skipMigration;
	NSOperationQueue* _migrationQueue;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	VSOptional* _viewContext;
	NSString* _persistentStoreType;
	NSURL* _persistentStoreURL;
	NSURL* _subscriptionsPropertyListURL;

}

@property (nonatomic,retain) NSOperationQueue * migrationQueue;                                      //@synthesize migrationQueue=_migrationQueue - In the implementation block
@property (assign,nonatomic) char didSetupPersistence;                                               //@synthesize didSetupPersistence=_didSetupPersistence - In the implementation block
@property (nonatomic,retain) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
@property (nonatomic,retain) VSOptional * viewContext;                                               //@synthesize viewContext=_viewContext - In the implementation block
@property (assign,nonatomic) char skipMigration;                                                     //@synthesize skipMigration=_skipMigration - In the implementation block
@property (nonatomic,copy) NSString * persistentStoreType;                                           //@synthesize persistentStoreType=_persistentStoreType - In the implementation block
@property (nonatomic,copy) NSURL * persistentStoreURL;                                               //@synthesize persistentStoreURL=_persistentStoreURL - In the implementation block
@property (nonatomic,copy) NSURL * subscriptionsPropertyListURL;                                     //@synthesize subscriptionsPropertyListURL=_subscriptionsPropertyListURL - In the implementation block
-(id)init;
-(void)performBlock:(/*^block*/id)arg1 ;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(NSString *)persistentStoreType;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(NSURL *)persistentStoreURL;
-(void)setPersistentStoreURL:(NSURL *)arg1 ;
-(VSOptional *)viewContext;
-(NSOperationQueue *)migrationQueue;
-(void)setViewContext:(VSOptional *)arg1 ;
-(char)didSetupPersistence;
-(NSURL *)subscriptionsPropertyListURL;
-(char)skipMigration;
-(void)setDidSetupPersistence:(char)arg1 ;
-(char)_setupPersistenceIfNeeded:(id*)arg1 ;
-(void)_performBlock:(/*^block*/id)arg1 andWait:(char)arg2 ;
-(void)_removePersistentStore;
-(void)setMigrationQueue:(NSOperationQueue *)arg1 ;
-(void)setSkipMigration:(char)arg1 ;
-(void)setPersistentStoreType:(NSString *)arg1 ;
-(void)setSubscriptionsPropertyListURL:(NSURL *)arg1 ;
@end

