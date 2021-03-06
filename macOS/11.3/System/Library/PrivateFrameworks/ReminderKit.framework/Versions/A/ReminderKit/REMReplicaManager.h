/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ReminderKit/ReminderKit-Structs.h>
@class NSMutableOrderedSet, NSMutableDictionary;

@interface REMReplicaManager : NSObject {

	char _isPersistable;
	char _exceededMaxSerializedSize;
	os_unfair_lock_s _ivarLock;
	NSMutableOrderedSet* _replicaUUIDs;
	NSMutableDictionary* _replicaEntries;
	unsigned long long _currentVersion;
	unsigned long long _maxLastSavedVersion;

}

@property (assign,nonatomic) os_unfair_lock_s ivarLock;                           //@synthesize ivarLock=_ivarLock - In the implementation block
@property (assign,nonatomic) char isPersistable;                                  //@synthesize isPersistable=_isPersistable - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * replicaUUIDs;                  //@synthesize replicaUUIDs=_replicaUUIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * replicaEntries;                //@synthesize replicaEntries=_replicaEntries - In the implementation block
@property (assign,nonatomic) unsigned long long currentVersion;                   //@synthesize currentVersion=_currentVersion - In the implementation block
@property (assign,nonatomic) unsigned long long maxLastSavedVersion;              //@synthesize maxLastSavedVersion=_maxLastSavedVersion - In the implementation block
@property (assign,nonatomic) char exceededMaxSerializedSize;                      //@synthesize exceededMaxSerializedSize=_exceededMaxSerializedSize - In the implementation block
+(char)supportsSecureCoding;
+(char)disablesInMemoryOnlyCheck;
+(char)shouldUseNewInMemoryOnlyReplicaManager;
+(id)replicaManagerWithSerializedData:(id)arg1 error:(id*)arg2 ;
+(id)replicaManagerForAccountID:(id)arg1 store:(id)arg2 ;
+(id)unsavedReplicaManagersForAccountIDs:(id)arg1 ;
+(void)setDisablesInMemoryOnlyCheck:(char)arg1 ;
+(id)replicaManagerIfLoadedForAccountID:(id)arg1 ;
+(void)setReplicaManager:(id)arg1 forAccountID:(id)arg2 ;
-(id)description;
-(id)init;
-(unsigned long long)currentVersion;
-(void)commonInit;
-(os_unfair_lock_s)ivarLock;
-(void)setIvarLock:(os_unfair_lock_s)arg1 ;
-(char)hasUnsavedChanges;
-(id)persistenceDescription;
-(void)setIsPersistable:(char)arg1 ;
-(NSMutableOrderedSet *)replicaUUIDs;
-(NSMutableDictionary *)replicaEntries;
-(id)l_checkoutReplicaUUIDForClient:(id)arg1 ;
-(void)performLocked:(/*^block*/id)arg1 ;
-(void)setCurrentVersion:(unsigned long long)arg1 ;
-(char)l_updateVersionOfEntry:(id)arg1 forClient:(id)arg2 ;
-(void)modifyReplicaEntryForClient:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)l_replicaUUIDsDescription;
-(id)l_replicaEntriesDescriptionForPersistence:(char)arg1 ;
-(unsigned long long)maxLastSavedVersion;
-(char)isPersistable;
-(id)initWithArchive:(const ReplicaManager*)arg1 error:(id*)arg2 ;
-(void)setMaxLastSavedVersion:(unsigned long long)arg1 ;
-(void)encodeIntoArchive:(ReplicaManager*)arg1 ;
-(char)exceededMaxSerializedSize;
-(id)l_serializedDataWithError:(id*)arg1 ;
-(void)setExceededMaxSerializedSize:(char)arg1 ;
-(id)checkoutReplicaUUIDForClient:(id)arg1 ;
-(void)updateVersionForClient:(id)arg1 ;
-(void)returnReplicaForClient:(id)arg1 ;
-(id)serializedDataCappedAtMaxSize:(char)arg1 error:(id*)arg2 ;
-(void)didSaveVersion:(unsigned long long)arg1 ;
-(unsigned long long)replicaEntryCount;
-(id)availabilityOfFirstReplicaForCRDTID:(id)arg1 ;
-(id)clockOfFirstReplicaForCRDTID:(id)arg1 ;
-(char)hasEqualPersistedEntriesAs:(id)arg1 ;
-(void)addRandomReplicaEntriesWithCount:(long long)arg1 ;
-(void)setReplicaUUIDs:(NSMutableOrderedSet *)arg1 ;
-(void)setReplicaEntries:(NSMutableDictionary *)arg1 ;
@end

