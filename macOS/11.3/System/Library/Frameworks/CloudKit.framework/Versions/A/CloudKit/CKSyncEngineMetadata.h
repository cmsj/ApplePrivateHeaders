/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class CKServerChangeToken, NSObject, NSMutableSet, NSMutableDictionary, NSMutableOrderedSet, NSArray;

@interface CKSyncEngineMetadata : NSObject <NSSecureCoding> {

	char _needsToFetchDatabaseChanges;
	char _needsToSaveDatabaseSubscription;
	CKServerChangeToken* _serverChangeTokenForDatabase;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _zoneIDsNeedingToFetchChangesSet;
	NSMutableDictionary* _serverChangeTokensByZoneID;
	NSMutableDictionary* _zonesToSaveDictionary;
	NSMutableOrderedSet* _zoneIDsToDeleteSet;
	NSMutableOrderedSet* _pendingModificationsSet;
	NSMutableOrderedSet* _inFlightModificationsSet;
	unsigned long long _internalChangeCount;
	NSMutableOrderedSet* _fakeRecordIDsToSaveForSerializationTests;
	NSMutableOrderedSet* _fakeRecordIDsToDeleteForSerializationTests;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableSet * zoneIDsNeedingToFetchChangesSet;                                //@synthesize zoneIDsNeedingToFetchChangesSet=_zoneIDsNeedingToFetchChangesSet - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * serverChangeTokensByZoneID;                              //@synthesize serverChangeTokensByZoneID=_serverChangeTokensByZoneID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * zonesToSaveDictionary;                                   //@synthesize zonesToSaveDictionary=_zonesToSaveDictionary - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * zoneIDsToDeleteSet;                                      //@synthesize zoneIDsToDeleteSet=_zoneIDsToDeleteSet - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * pendingModificationsSet;                                 //@synthesize pendingModificationsSet=_pendingModificationsSet - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * inFlightModificationsSet;                                //@synthesize inFlightModificationsSet=_inFlightModificationsSet - In the implementation block
@property (assign,nonatomic) unsigned long long internalChangeCount;                                        //@synthesize internalChangeCount=_internalChangeCount - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * fakeRecordIDsToSaveForSerializationTests;                //@synthesize fakeRecordIDsToSaveForSerializationTests=_fakeRecordIDsToSaveForSerializationTests - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * fakeRecordIDsToDeleteForSerializationTests;              //@synthesize fakeRecordIDsToDeleteForSerializationTests=_fakeRecordIDsToDeleteForSerializationTests - In the implementation block
@property (nonatomic,readonly) unsigned long long changeCount; 
@property (assign,nonatomic) char needsToFetchDatabaseChanges;                                              //@synthesize needsToFetchDatabaseChanges=_needsToFetchDatabaseChanges - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * serverChangeTokenForDatabase;                            //@synthesize serverChangeTokenForDatabase=_serverChangeTokenForDatabase - In the implementation block
@property (assign,nonatomic) char needsToSaveDatabaseSubscription;                                          //@synthesize needsToSaveDatabaseSubscription=_needsToSaveDatabaseSubscription - In the implementation block
@property (nonatomic,readonly) NSArray * zoneIDsNeedingToFetchChanges; 
@property (nonatomic,readonly) NSArray * zonesToSave; 
@property (nonatomic,readonly) NSArray * zoneIDsToDelete; 
@property (nonatomic,readonly) NSArray * pendingRecordModifications; 
@property (nonatomic,readonly) NSArray * inFlightRecordModifications; 
+(char)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)changeCount;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)commonInit;
-(id)CKDescriptionPropertiesWithPublic:(char)arg1 private:(char)arg2 shouldExpand:(char)arg3 ;
-(id)recordIDsToDelete;
-(void)setNeedsToFetchDatabaseChanges:(char)arg1 ;
-(void)setNeedsToSaveDatabaseSubscription:(char)arg1 ;
-(NSArray *)inFlightRecordModifications;
-(void)markRecordModifications:(id)arg1 inFlight:(char)arg2 ;
-(void)getDataRepresentation:(/*^block*/id)arg1 ;
-(void)addPendingRecordModifications:(id)arg1 ;
-(void)setNeedsToSave:(char)arg1 zones:(id)arg2 ;
-(void)setNeedsToDelete:(char)arg1 zoneIDs:(id)arg2 ;
-(void)removeInFlightRecordModifications:(id)arg1 ;
-(NSArray *)pendingRecordModifications;
-(NSArray *)zonesToSave;
-(NSArray *)zoneIDsToDelete;
-(void)removePendingRecordModifications:(id)arg1 ;
-(CKServerChangeToken *)serverChangeTokenForDatabase;
-(NSArray *)zoneIDsNeedingToFetchChanges;
-(id)serverChangeTokenForRecordZoneID:(id)arg1 ;
-(void)setNeedsToFetchChanges:(char)arg1 forRecordZoneID:(id)arg2 ;
-(void)setServerChangeToken:(id)arg1 forRecordZoneID:(id)arg2 ;
-(void)setServerChangeTokenForDatabase:(CKServerChangeToken *)arg1 ;
-(char)needsToFetchDatabaseChanges;
-(char)needsToSaveDatabaseSubscription;
-(NSMutableSet *)zoneIDsNeedingToFetchChangesSet;
-(NSMutableDictionary *)serverChangeTokensByZoneID;
-(NSMutableOrderedSet *)pendingModificationsSet;
-(NSMutableOrderedSet *)inFlightModificationsSet;
-(unsigned long long)internalChangeCount;
-(void)setInternalChangeCount:(unsigned long long)arg1 ;
-(id)pendingRecordIDsWithModificationType:(long long)arg1 ;
-(NSMutableDictionary *)zonesToSaveDictionary;
-(NSMutableOrderedSet *)zoneIDsToDeleteSet;
-(id)recordIDsToSave;
-(char)needsToFetchChangesForZoneID:(id)arg1 ;
-(char)needsToSaveZone:(id)arg1 ;
-(char)needsToDeleteZoneID:(id)arg1 ;
-(void)setZoneIDsNeedingToFetchChangesSet:(NSMutableSet *)arg1 ;
-(void)setServerChangeTokensByZoneID:(NSMutableDictionary *)arg1 ;
-(void)setZonesToSaveDictionary:(NSMutableDictionary *)arg1 ;
-(void)setZoneIDsToDeleteSet:(NSMutableOrderedSet *)arg1 ;
-(void)setPendingModificationsSet:(NSMutableOrderedSet *)arg1 ;
-(void)setInFlightModificationsSet:(NSMutableOrderedSet *)arg1 ;
-(NSMutableOrderedSet *)fakeRecordIDsToSaveForSerializationTests;
-(void)setFakeRecordIDsToSaveForSerializationTests:(NSMutableOrderedSet *)arg1 ;
-(NSMutableOrderedSet *)fakeRecordIDsToDeleteForSerializationTests;
-(void)setFakeRecordIDsToDeleteForSerializationTests:(NSMutableOrderedSet *)arg1 ;
@end
