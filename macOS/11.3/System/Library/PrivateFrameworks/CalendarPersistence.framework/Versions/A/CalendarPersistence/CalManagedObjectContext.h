/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObjectContext.h>

@class NSMutableSet, NSMutableDictionary, NSCountedSet, NSString, NSSet;

@interface CalManagedObjectContext : NSManagedObjectContext {

	char _trackChangesForCalDAVServer;
	char _writeChangesToCalDAVServer;
	char _writeChangesToTruthFileStore;
	char _containsCalendarData;
	char _notifyCalendarAgent;
	NSMutableSet* _deletedObjectIDsFromMerge;
	NSMutableDictionary* _threadSafeData;
	NSMutableDictionary* _childContexts;
	NSCountedSet* _childContextReferences;
	NSMutableDictionary* _associatedUIDs;
	NSString* _originatorID;
	char _trackChangesToExchangeServer;

}

@property (assign,nonatomic) char containsCalendarData;                      //@synthesize containsCalendarData=_containsCalendarData - In the implementation block
@property (assign,nonatomic) char writeChangesToCalDAVServer;                //@synthesize writeChangesToCalDAVServer=_writeChangesToCalDAVServer - In the implementation block
@property (assign,nonatomic) char trackChangesForCalDAVServer;               //@synthesize trackChangesForCalDAVServer=_trackChangesForCalDAVServer - In the implementation block
@property (assign,nonatomic) char writeChangesToTruthFileStore;              //@synthesize writeChangesToTruthFileStore=_writeChangesToTruthFileStore - In the implementation block
@property (assign,nonatomic) char trackChangesToExchangeServer;              //@synthesize trackChangesToExchangeServer=_trackChangesToExchangeServer - In the implementation block
@property (assign,nonatomic) char notifyCalendarAgent;                       //@synthesize notifyCalendarAgent=_notifyCalendarAgent - In the implementation block
@property (readonly) char isContextForCalendarStore; 
@property (readonly) char isContextForMigration; 
@property (readonly) NSSet * deletedObjectIDsFromMerge; 
@property (nonatomic,retain) NSString * originatorId;                        //@synthesize originatorID=_originatorID - In the implementation block
+(id)managedObjectContext;
+(void)addPrefetchRelationshipKeyPaths:(id)arg1 toFetch:(id)arg2 ;
+(id)managedObjectContextWithOriginatorId:(id)arg1 ;
+(void)performBlockWithManagedObjectContext:(/*^block*/id)arg1 ;
+(void)logDetailedValidationError:(id)arg1 ;
+(void)quickFetchWithBlock:(/*^block*/id)arg1 ;
+(void)warnIfManagedObjectContextIsNil:(id)arg1 ;
+(char)isCalendarAgent;
+(void)instantiateSharedMonitors;
+(id)_userInfoForLog:(id)arg1 ;
+(void)setIsCalendarAgent:(char)arg1 ;
+(void)quickFetchWithBlock:(/*^block*/id)arg1 allowedStaleness:(double)arg2 ;
-(void)deleteObject:(id)arg1 ;
-(id)executeFetchRequest:(id)arg1 error:(id*)arg2 ;
-(char)save:(id*)arg1 ;
-(void)refreshObject:(id)arg1 mergeChanges:(char)arg2 ;
-(unsigned long long)countForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)initWithConcurrencyType:(unsigned long long)arg1 ;
-(char)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2 ;
-(void)mergeChangesFromContextDidSaveNotification:(id)arg1 ;
-(id)existingObjectWithIDString:(id)arg1 ;
-(id)objectIDFromString:(id)arg1 ;
-(id)refetchObjectsFromStoreWithObjectIDs:(id)arg1 entityName:(id)arg2 ;
-(long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4 ;
-(void)setOriginatorId:(NSString *)arg1 ;
-(id)createChildContext;
-(void)setTrackChangesForCalDAVServer:(char)arg1 ;
-(void)setWriteChangesToCalDAVServer:(char)arg1 ;
-(void)logDetailedValidationError:(id)arg1 ;
-(void)setContainsCalendarData:(char)arg1 ;
-(id)parentContext;
-(void)associateWithIdentifier:(id)arg1 secondaryIdentifier:(id)arg2 ;
-(void)setWriteChangesToTruthFileStore:(char)arg1 ;
-(char)saveIfContextHasChanges;
-(char)isContextForCalendarStore;
-(char)notifyCalendarAgent;
-(void)setNotifyCalendarAgent:(char)arg1 ;
-(char)trackChangesForCalDAVServer;
-(char)trackChangesToExchangeServer;
-(NSSet *)deletedObjectIDsFromMerge;
-(void)setThreadSafeData:(id)arg1 forKey:(id)arg2 ;
-(id)getThreadSafeDataForKey:(id)arg1 ;
-(void)clearThreadSafeDataForKey:(id)arg1 ;
-(id)initWithConcurrencyType:(unsigned long long)arg1 persistentStoreCoordinator:(id)arg2 ;
-(void)setTrackChangesToExchangeServer:(char)arg1 ;
-(char)isUserContext;
-(id)childContextForIdentifier:(id)arg1 ;
-(void)_associateWithIdentifier:(id)arg1 secondaryIdentifier:(id)arg2 ;
-(void)_associateChildContext:(id)arg1 withIdentifier:(id)arg2 secondaryIdentifier:(id)arg3 ;
-(void)parentContextDidSave:(id)arg1 ;
-(id)_attachChildContext;
-(id)associatedIdentifiers;
-(id)childContexts;
-(void)_detachChildContext:(id)arg1 ;
-(id)flattenedTreeOfChildContexts;
-(unsigned long long)_clientCountForChildContext:(id)arg1 ;
-(id)initWithPersistentStoreCoordinator:(id)arg1 ;
-(id)objectIDsFromStrings:(id)arg1 ;
-(id)existingObjectsWithIDStrings:(id)arg1 ;
-(id)refetchObjectsFromStoreWithObjectIDStrings:(id)arg1 entityName:(id)arg2 ;
-(id)attachChildContextForIdentifier:(id)arg1 secondaryIdentifier:(id)arg2 ;
-(void)detachFromParentContext;
-(id)associatedAndSecondaryIdentifiers;
-(id)childContextIdentifiers;
-(unsigned long long)clientCount;
-(char)isContextForMigration;
-(void)addDeletedObjectIDsFromMerge:(id)arg1 ;
-(char)hasPersistentChanges;
-(NSString *)originatorId;
-(char)containsCalendarData;
-(char)writeChangesToCalDAVServer;
-(char)writeChangesToTruthFileStore;
@end
