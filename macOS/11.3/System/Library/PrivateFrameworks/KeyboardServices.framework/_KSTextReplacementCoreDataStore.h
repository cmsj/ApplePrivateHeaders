/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator;

@interface _KSTextReplacementCoreDataStore : NSObject {

	NSObject*<OS_dispatch_queue> _queueMOC;
	NSObject*<OS_dispatch_queue> _queuePSC;
	NSString* _directoryPath;
	NSManagedObjectContext* _managedObjectContext;
	NSManagedObjectModel* _managedObjectModel;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;

}

@property (nonatomic,retain) NSString * directoryPath;                                               //@synthesize directoryPath=_directoryPath - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;                          //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,retain) NSManagedObjectModel * managedObjectModel;                              //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,retain) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
+(id)localCloudEntryFromMocObject:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)cleanup;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(NSManagedObjectModel *)managedObjectModel;
-(void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(void)setManagedObjectModel:(NSManagedObjectModel *)arg1 ;
-(id)persistentStore;
-(NSString *)directoryPath;
-(id)initWithDirectoryPath:(id)arg1 ;
-(void)setDirectoryPath:(NSString *)arg1 ;
-(char)didMakeInitialPull;
-(char)markDeletesForTextReplacementEntries:(id)arg1 ;
-(char)recordTextReplacementEntries:(id)arg1 ;
-(char)deleteTextReplacementsWithPredicate:(id)arg1 ;
-(void)saveCKFetchToken:(id)arg1 ;
-(id)queryEntriesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 ;
-(char)deleteTextReplacementsFromLocalStoreWithNames:(id)arg1 excludeSavesToCloud:(char)arg2 ;
-(id)getCKFetchToken;
-(unsigned long long)countEntriesWithPredicate:(id)arg1 ;
-(void)fetchAndMergeTextReplacementEntry:(id)arg1 context:(id)arg2 ;
-(id)fetchTextReplacementEntry:(id)arg1 context:(id)arg2 ;
-(id)queryManagedObjectsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)getSyncStateEntry;
-(id)fetchTextReplacementWithUniqueName:(id)arg1 context:(id)arg2 ;
-(id)textReplacementEntriesWithLimit:(unsigned long long)arg1 ;
@end

