/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKCoreDataStorageDelegate;
@class NSManagedObjectModel, NSMutableDictionary, NSMapTable, _DKDataProtectionStateMonitor, NSFileManager, NSCloudKitMirroringDelegate, NSString, NSURL;

@interface _DKCoreDataStorage : NSObject {

	NSManagedObjectModel* _managedObjectModel;
	NSMutableDictionary* _paths;
	NSMapTable* _managedObjectContexts;
	NSMutableDictionary* _persistentStoreCoordinators;
	_DKDataProtectionStateMonitor* _dataProtectionMonitor;
	NSFileManager* _fm;
	NSCloudKitMirroringDelegate* _mirroringDelegate;
	char _isManagedDatabase;
	char _isDatabaseManager;
	char _maintenanceRunning;
	char _readOnly;
	char _localOnly;
	char _sync;
	char _requiresManualMigration;
	NSString* _directory;
	NSURL* _modelURL;
	NSString* _databaseName;
	id<_DKCoreDataStorageDelegate> _delegate;
	NSString* _containerIdentifier;

}

@property (readonly) NSString * directory;                                         //@synthesize directory=_directory - In the implementation block
@property (readonly) char readOnly;                                                //@synthesize readOnly=_readOnly - In the implementation block
@property (readonly) char localOnly;                                               //@synthesize localOnly=_localOnly - In the implementation block
@property (readonly) char sync;                                                    //@synthesize sync=_sync - In the implementation block
@property (readonly) NSURL * modelURL;                                             //@synthesize modelURL=_modelURL - In the implementation block
@property (readonly) NSString * databaseName;                                      //@synthesize databaseName=_databaseName - In the implementation block
@property (__weak) id<_DKCoreDataStorageDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSCloudKitMirroringDelegate * mirroringDelegate;              //@synthesize mirroringDelegate=_mirroringDelegate - In the implementation block
@property (readonly) NSString * containerIdentifier;                               //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (assign,nonatomic) char requiresManualMigration;                         //@synthesize requiresManualMigration=_requiresManualMigration - In the implementation block
+(unsigned long long)countObjectsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 includeSubentities:(char)arg4 includePendingChanges:(char)arg5 ;
+(unsigned long long)deleteObjectsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 fetchLimit:(unsigned long long)arg5 includeSubentities:(char)arg6 includePendingChanges:(char)arg7 ;
+(unsigned long long)deleteObjectsIfNeededToLimitTotal:(unsigned long long)arg1 context:(id)arg2 entityName:(id)arg3 predicate:(id)arg4 sortDescriptors:(id)arg5 fetchLimit:(unsigned long long)arg6 includeSubentities:(char)arg7 includePendingChanges:(char)arg8 ;
+(unsigned long long)anonymizeObjectStringsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 batchFetchLimit:(unsigned long long)arg5 totalFetchLimit:(unsigned long long)arg6 includeSubentities:(char)arg7 salt:(id)arg8 ;
+(unsigned long long)deleteOrphanedEntitiesInContext:(id)arg1 ;
+(unsigned long long)deleteObjectsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 fetchOffset:(unsigned long long)arg5 fetchLimit:(unsigned long long)arg6 includeSubentities:(char)arg7 includePendingChanges:(char)arg8 ;
+(unsigned long long)anonymizeStringAttributesOfManagedObject:(id)arg1 withSalt:(id)arg2 ;
+(unsigned long long)updateObjectsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 batchFetchLimit:(unsigned long long)arg5 totalFetchLimit:(unsigned long long)arg6 includeSubentities:(char)arg7 updateBlock:(/*^block*/id)arg8 ;
-(void)dealloc;
-(id)init;
-(id<_DKCoreDataStorageDelegate>)delegate;
-(void)setDelegate:(id<_DKCoreDataStorageDelegate>)arg1 ;
-(NSString *)directory;
-(char)sync;
-(id)managedObjectModel;
-(char)readOnly;
-(NSString *)databaseName;
-(NSString *)containerIdentifier;
-(id)initWithDirectory:(id)arg1 databaseName:(id)arg2 modelURL:(id)arg3 readOnly:(char)arg4 localOnly:(char)arg5 ;
-(id)managedObjectContextFor:(id)arg1 ;
-(id)privateManagedObjectContextFor:(id)arg1 ;
-(void)closeStorageForProtectionClass:(id)arg1 ;
-(char)deleteStorageFor:(id)arg1 ;
-(id)copyStorageFor:(id)arg1 toDirectory:(id)arg2 ;
-(id)initWithDirectory:(id)arg1 databaseName:(id)arg2 modelURL:(id)arg3 sync:(char)arg4 ;
-(void)setRequiresManualMigration:(char)arg1 ;
-(id)managedObjectContextFor:(id)arg1 identifier:(id)arg2 ;
-(char)isManagedObjectContextFor:(id)arg1 equalToManagedObjectContext:(id)arg2 ;
-(char)localOnly;
-(id)managedObjectModelForVersion:(unsigned long long)arg1 ;
-(char)isManagedObjectModel:(id)arg1 compatibleWithPersistentStoreAtURL:(id)arg2 error:(id*)arg3 ;
-(id)managedObjectModelURLForVersion:(unsigned long long)arg1 ;
-(long long)modelVersionForStoreAtURL:(id)arg1 error:(id*)arg2 ;
-(char)requiresManualMigration;
-(char)migratePersistentStoreAtURL:(id)arg1 toManagedObjectModel:(id)arg2 protectionClass:(id)arg3 error:(id*)arg4 ;
-(id)persistentStoreCoordinatorFor:(id)arg1 ;
-(void)setManagedObjectModel:(id)arg1 ;
-(char)confirmDatabaseConnectionFor:(id)arg1 ;
-(NSURL *)modelURL;
-(NSCloudKitMirroringDelegate *)mirroringDelegate;
@end
