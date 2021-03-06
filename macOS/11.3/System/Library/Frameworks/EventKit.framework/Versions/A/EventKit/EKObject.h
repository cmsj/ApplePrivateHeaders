/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <libobjc.A.dylib/EKFrozenMeltedPair.h>
#import <libobjc.A.dylib/EKProtocolMutableObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSManagedObjectID, EKEventStore, EKChangeSet, NSMutableDictionary, NSDictionary, EKObjectValidationContext, EKFrozenObject, EKBatchChangeInfo;

@interface EKObject : NSObject <EKFrozenMeltedPair, EKProtocolMutableObject, NSCopying, NSMutableCopying> {

	NSManagedObjectID* managedObjectID;
	unsigned long long _cachedHash;
	EKEventStore* _eventStore;
	EKChangeSet* _changeSet;
	NSMutableDictionary* __cachedMeltedObjects;
	NSDictionary* _additionalFrozenProperties;
	NSMutableDictionary* __cachedValues;
	EKObjectValidationContext* __validationContext;
	NSString* _eventStoreIdentifier;
	EKFrozenObject* _backingObject;
	EKBatchChangeInfo* _batchChangeInfo;

}

@property (assign,nonatomic) unsigned long long cachedHash;                               //@synthesize cachedHash=_cachedHash - In the implementation block
@property (nonatomic,retain) EKEventStore * eventStore;                                   //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,retain) EKChangeSet * changeSet;                                     //@synthesize changeSet=_changeSet - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _cachedMeltedObjects;                  //@synthesize _cachedMeltedObjects=__cachedMeltedObjects - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalFrozenProperties;                   //@synthesize additionalFrozenProperties=_additionalFrozenProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _cachedValues;                         //@synthesize _cachedValues=__cachedValues - In the implementation block
@property (nonatomic,retain) EKObjectValidationContext * _validationContext;              //@synthesize _validationContext=__validationContext - In the implementation block
@property (nonatomic,retain) NSString * eventStoreIdentifier;                             //@synthesize eventStoreIdentifier=_eventStoreIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * specificIdentifier; 
@property (nonatomic,retain) EKFrozenObject * backingObject;                              //@synthesize backingObject=_backingObject - In the implementation block
@property (nonatomic,retain) EKBatchChangeInfo * batchChangeInfo;                         //@synthesize batchChangeInfo=_batchChangeInfo - In the implementation block
@property (nonatomic,readonly) char hasChanges; 
@property (getter=isNew,nonatomic,readonly) char new; 
@property (nonatomic,readonly) char isFrozen; 
@property (nonatomic,readonly) char isPartialObject; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) NSString * semanticIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSManagedObjectID * managedObjectID; 
@property (nonatomic,readonly) char canBeConvertedToFullObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
+(Class)meltedClass;
+(id)propertiesUnavailableForPartialObjects;
+(Class)frozenClass;
+(id)knownImmutableKeys;
+(char)canonicalizedEqualityTestValue1:(id)arg1 value2:(id)arg2 key:(id)arg3 object1:(id)arg4 object2:(id)arg5 ;
+(id)objectWithObject:(id)arg1 ;
+(unsigned long long)hashForObject:(id)arg1 ;
+(id)uniqueIdentifierForObject:(id)arg1 ;
+(id)knownIdentityKeys;
+(id)singleValueDiffKeys;
+(id)multiValueDiffKeys;
+(id)knownRelationshipSingleValueKeys;
+(id)knownRelationshipMultiValueKeys;
+(id)knownDerivedRelationshipKeys;
+(id)knownSingleValueKeys;
+(id)keysToCheckForChangedKeysMethod;
+(id)batchChangeNotificationName;
+(void)_insertPreFrozenRelationshipObject:(id)arg1 withKey:(id)arg2 intoDictionary:(id)arg3 ;
+(char)isWeakRelationship;
+(char)_compareNonRelationshipKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4 ;
+(char)_compareSingleValueRelationshipKey:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4 ;
+(char)_compareMutliValueRelationshipKey:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4 ;
+(char)_object:(id)arg1 equalsObject:(id)arg2 compareImmutableKeys:(char)arg3 ;
+(char)_object:(id)arg1 equalsObject:(id)arg2 forKeys:(id)arg3 compareImmutableKeys:(char)arg4 ;
+(char)_object:(id)arg1 equalsObject:(id)arg2 compareImmutableKeys:(char)arg3 ignoringProperties:(id)arg4 ;
+(char)_object:(id)arg1 equalsObject:(id)arg2 forKeys:(id)arg3 compareImmutableKeys:(char)arg4 ignoringProperties:(id)arg5 ;
+(char)_objects:(id)arg1 haveSameMeltedClass:(Class)arg2 frozenClass:(Class)arg3 ;
+(char)_compareKnownKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareImmutableKeys:(char)arg4 propertiesToIgnore:(id)arg5 ;
+(char)_compareAllKnownKeysExceptKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareIdentityKeys:(char)arg4 ;
+(char)_compareKnownKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareIdentityKeys:(char)arg4 compareImmutableKeys:(char)arg5 propertiesToIgnore:(id)arg6 ;
+(char)_compareIdentityKeysForObject:(id)arg1 againstObject:(id)arg2 propertiesToIgnore:(id)arg3 ;
+(char)_compareNonIdentityKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareImmutableKeys:(char)arg4 propertiesToIgnore:(id)arg5 ;
+(id)_createNonPartialObjectFromObject:(id)arg1 ifPropertyIsUnavailable:(id)arg2 ;
+(char)_compareRelationshipObject1:(id)arg1 againstRelationshipObject2:(id)arg2 propertiesToIgnore:(id)arg3 ;
+(char)_compareSingleValueRelationshipKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4 ;
+(char)_compareMultiValueRelationshipKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4 ;
+(id)objectWithObject:(id)arg1 preFrozenRelationshipObjects:(id)arg2 ;
+(id)knownSummaryKeys;
+(char)_object:(id)arg1 equalsObject:(id)arg2 ;
+(char)_object:(id)arg1 equalsObject:(id)arg2 forKeys:(id)arg3 ;
+(char)_compareAllKnownKeysExceptKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 ;
+(char)_compareKnownKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 ;
+(char)_compareNonIdentityKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4 ;
+(char)isDerivedRelationship;
+(char)_isWeakRelationMeltedObject:(id)arg1 forKey:(id)arg2 ;
+(id)knownRelationshipWeakKeys;
+(char)isMeltedAndNotWeakRelationshipObject:(id)arg1 forKey:(id)arg2 ;
+(unsigned long long)_numberOfSharedLocksForUnitTesting;
+(id)knownDerivedAndSingleValueRelationshipKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(void)setCachedValue:(id)arg1 forKey:(id)arg2 ;
-(id)cachedValueForKey:(id)arg1 ;
-(NSMutableDictionary *)_cachedValues;
-(void)reset;
-(char)_reset;
-(void)addChanges:(id)arg1 ;
-(char)hasChanges;
-(void)rollback;
-(char)_hasChanges;
-(void)refetch;
-(EKChangeSet *)changeSet;
-(void)setChangeSet:(EKChangeSet *)arg1 ;
-(char)validate:(id*)arg1 ;
-(id)changedKeys;
-(char)isDeleted;
-(id)summary;
-(EKFrozenObject *)backingObject;
-(void)setBackingObject:(EKFrozenObject *)arg1 ;
-(EKEventStore *)eventStore;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(char)refresh;
-(unsigned long long)cachedHash;
-(void)applyChanges:(id)arg1 ;
-(char)hasUnsavedChanges;
-(char)isPartialObject;
-(id)duplicate;
-(char)isNew;
-(char)canBeConvertedToFullObject;
-(void)_sharedInit;
-(NSManagedObjectID *)managedObjectID;
-(char)isFrozen;
-(char)isPropertyUnavailable:(id)arg1 ;
-(NSDictionary *)preFrozenRelationshipObjects;
-(id)initWithObject:(id)arg1 createPartialBackingObject:(char)arg2 keepBackingObject:(char)arg3 preFrozenRelationshipObjects:(id)arg4 additionalFrozenProperties:(id)arg5 ;
-(id)meltedAndCachedSingleRelationObjectForKey:(id)arg1 ;
-(id)frozenOrMeltedCachedSingleRelationObjectForKey:(id)arg1 ;
-(id)cachedMeltedObjectsForMultiValueKey:(id)arg1 ;
-(Class)frozenClass;
-(void)updateMeltedAndCachedSingleRelationObject:(id)arg1 forKey:(id)arg2 frozenClass:(Class)arg3 ;
-(id)singleChangedValueForKey:(id)arg1 ;
-(void)setSingleChangedValue:(id)arg1 forKey:(id)arg2 ;
-(id)meltedAndCachedMultiRelationObjectsForKey:(id)arg1 ;
-(void)updateMeltedAndCachedMultiRelationObjects:(id)arg1 forKey:(id)arg2 ;
-(id)cachedMeltedObjectForSingleValueKey:(id)arg1 ;
-(void)setCachedMeltedObject:(id)arg1 forSingleValueKey:(id)arg2 ;
-(void)setCachedMeltedObjects:(id)arg1 forMultiValueKey:(id)arg2 ;
-(NSDictionary *)additionalFrozenProperties;
-(void)addCachedMeltedObject:(id)arg1 forMultiValueKey:(id)arg2 ;
-(void)removeCachedMeltedObject:(id)arg1 forMultiValueKey:(id)arg2 ;
-(unsigned long long)meltedAndCachedMultiRelationCountForKey:(id)arg1 ;
-(id)duplicateWithOptions:(long long)arg1 ;
-(id)_duplicateWithChangedKeys:(id)arg1 ;
-(void)changeIdentifiersFromOriginal:(id)arg1 ;
-(void)markAsNotNew;
-(void)_resetMeltedCache;
-(void)_clearCachedHash;
-(char)_validateNotDeleted:(id*)arg1 ;
-(void)_resetWithFrozenObject:(id)arg1 ;
-(id)_previousValueForKey:(id)arg1 ;
-(char)_hasChangesForKey:(id)arg1 ;
-(id)meltedObjectInStore:(id)arg1 ;
-(void)setManagedObjectID:(NSManagedObjectID *)arg1 ;
-(NSString *)specificIdentifier;
-(void)_applyKnownImmutableValuesFrom:(id)arg1 ;
-(id)_keysToChangeForDuplicateWithOptions:(long long)arg1 ;
-(char)_refreshable;
-(char)revert;
-(char)isSaved;
-(char)isUndeleted;
-(NSString *)semanticIdentifier;
-(char)_isNew;
-(id)frozenObject;
-(void)markAsNew;
-(id)cachedValueForKey:(id)arg1 populateBlock:(/*^block*/id)arg2 ;
-(void)clearCachedValueForKey:(id)arg1 ;
-(id)prepareReminderKitObjectForSaveWithUpdatedBackingObjectProvider:(id)arg1 ;
-(NSString *)eventStoreIdentifier;
-(void)setEventStoreIdentifier:(NSString *)arg1 ;
-(id)diffWithObject:(id)arg1 ;
-(void)addChangesFromObject:(id)arg1 except:(id)arg2 ;
-(EKBatchChangeInfo *)batchChangeInfo;
-(void)setBatchChangeInfo:(EKBatchChangeInfo *)arg1 ;
-(void)markAsSaved;
-(void)markAsDeleted;
-(id)previouslySavedObject;
-(void)addChangesFromObject:(id)arg1 keep:(id)arg2 ;
-(void)markAsCommitted;
-(id)coreDataEntityName;
-(id)committedValueForKey:(id)arg1 ;
-(char)isCompletelyEqual:(id)arg1 ;
-(id)initWithObject:(id)arg1 keepBackingObject:(char)arg2 preFrozenRelationshipObjects:(id)arg3 ;
-(char)hasUnsavedChangesIgnoreKeys:(id)arg1 ;
-(void)_initChangeSetIfNone;
-(char)hasUnsavedChangesInKeys:(id)arg1 ;
-(void)_ensureUniqueIdentifier;
-(void)setAdditionalFrozenProperties:(NSDictionary *)arg1 ;
-(id)initWithObject:(id)arg1 createPartialBackingObject:(char)arg2 keepBackingObject:(char)arg3 preFrozenRelationshipObjects:(id)arg4 ;
-(void)setCachedHash:(unsigned long long)arg1 ;
-(id)existingMeltedObject;
-(id)initWithObject:(id)arg1 keepBackingObject:(char)arg2 additionalFrozenProperties:(id)arg3 ;
-(void)addChangesFromObject:(id)arg1 ;
-(void)_markAsNewCommon;
-(void)_markAsNotNewCommon;
-(void)_markAsDeletedCommon;
-(void)_markAsUndeletedCommon;
-(void)_markAsSavedCommon;
-(void)_markAsCommittedCommon;
-(void)_rollbackCommon;
-(char)_resetCommon;
-(char)_refreshCommon;
-(void)_convertToNonPartialObject;
-(void)_applyDefinedAfterFirstSaveFrom:(id)arg1 ;
-(char)isEqual:(id)arg1 comparingKeys:(id)arg2 ;
-(char)isEqual:(id)arg1 comparingKeys:(id)arg2 compareImmutableKeys:(char)arg3 ignoringProperties:(id)arg4 ;
-(id)_basicSummaryWithDepth:(long long)arg1 ;
-(id)_summaryWithDepth:(long long)arg1 ;
-(char)_isPropertyUnavailable:(id)arg1 convertToFullObjectIfUnavailable:(char)arg2 ;
-(char)isEqual:(id)arg1 ignoringProperties:(id)arg2 ;
-(id)initWithObject:(id)arg1 keepBackingObject:(char)arg2 ;
-(id)initWithObject:(id)arg1 createPartialBackingObject:(char)arg2 keepBackingObject:(char)arg3 ;
-(void)markAsUndeleted;
-(id)changedKeysAgainstObject:(id)arg1 ;
-(id)summaryDiffWithObject:(id)arg1 ;
-(id)inverseObjectWithObject:(id)arg1 ;
-(NSMutableDictionary *)_cachedMeltedObjects;
-(void)set_cachedMeltedObjects:(NSMutableDictionary *)arg1 ;
-(void)set_cachedValues:(NSMutableDictionary *)arg1 ;
-(EKObjectValidationContext *)_validationContext;
-(void)set_validationContext:(EKObjectValidationContext *)arg1 ;
-(char)_resetIfBackingObjectIsOfClass:(Class)arg1 fetchResetFrozenObjectBlock:(/*^block*/id)arg2 ;
-(void)clearCachedValuesForKeys:(id)arg1 ;
-(id)cachedValueForKey:(id)arg1 expectingCachedValue:(id)arg2 forMasterKey:(id)arg3 relatedKeys:(id)arg4 populateBlock:(/*^block*/id)arg5 ;
-(id)_singleRelationshipKeysToCheckForChanges;
-(id)privacyDescription;
-(id)_readWriteLock;
-(void)_performWithReadLock:(/*^block*/id)arg1 ;
-(void)_performWithWriteLock:(/*^block*/id)arg1 ;
-(char)validateWithOwner:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)_cachedMeltedObjectsCount;
-(char)_hasChangeHelperInKeys:(id)arg1 ignoreKeys:(id)arg2 checkUnsaved:(char)arg3 ;
-(char)_hasUnsavedChangesInKeys:(id)arg1 ignoreKeys:(id)arg2 ;
-(char)_hasChangesForKey:(id)arg1 checkUnsaved:(char)arg2 ;
-(id)_multiRelationshipKeysToCheckForChanges;
-(char)_areOnlyChangedKeys:(id)arg1 ;
-(void)_addChangesFromObject:(id)arg1 except:(id)arg2 keep:(id)arg3 ;
-(void)updatedMeltedCacheForChangeSet:(id)arg1 ;
-(void)addMultiChangedObjectValues:(id)arg1 forKey:(id)arg2 ;
-(void)removeMultiChangedObjectValues:(id)arg1 forKey:(id)arg2 ;
-(id)multiChangedObjectValuesForKey:(id)arg1 ;
-(void)_addCachedMeltedObject:(id)arg1 forMultiValueKey:(id)arg2 ;
-(void)updateMultiValueCacheForChangeSet:(id)arg1 preservingExistingAdds:(char)arg2 ;
-(void)addMultiChangedObjectValue:(id)arg1 forKey:(id)arg2 ;
-(void)_updateCachedMeltedObjectSetForMultiValueKey:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_removeCachedMeltedObject:(id)arg1 forMultiValueKey:(id)arg2 ;
-(void)removeMultiChangedObjectValue:(id)arg1 forKey:(id)arg2 ;
-(void)replaceMultiChangedObjectValuesWithObjectValues:(id)arg1 forKey:(id)arg2 ;
-(void)emptyMeltedCacheForKey:(id)arg1 ;
-(id)_convertBackingObjectsWithPath:(id)arg1 updateBackingObjects:(char)arg2 allChangedBackingObjects:(id)arg3 eventStore:(id)arg4 updatedBackingObjectProvider:(id)arg5 ;
-(id)backingObjectOfChildObject:(id)arg1 withRelationshipKey:(id)arg2 ;
-(void)_cachedMeltedChildIdentifierToParentMap:(id)arg1 ;
-(char)_isOnlyChangedKey:(id)arg1 ;
-(void)emptyMeltedCache;
-(void)emptyMeltedCacheForKeys:(id)arg1 ;
-(id)cachedMeltedChildIdentifierToParentMap;
-(void)_addSummaryWithDepth:(long long)arg1 toMutableString:(id)arg2 indentFirstLine:(char)arg3 ;
@end

