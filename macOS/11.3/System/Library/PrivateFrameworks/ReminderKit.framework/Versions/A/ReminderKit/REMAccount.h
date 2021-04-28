/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/REMPersonIDProviding.h>
#import <libobjc.A.dylib/REMObjectIDProviding.h>
#import <libobjc.A.dylib/REMExternalSyncMetadataProviding.h>

@class REMStore, REMAccountStorage, REMAccountCapabilities, REMResolutionTokenMap, NSData, NSSet, NSString, NSOrderedSet, REMCRMergeableOrderedSet, REMAccountGroupContext, REMObjectID;

@interface REMAccount : NSObject <REMPersonIDProviding, REMObjectIDProviding, REMExternalSyncMetadataProviding> {

	char _markedForRemoval;
	REMStore* _store;
	REMAccountStorage* _storage;
	REMAccountCapabilities* _capabilities;

}

@property (assign,nonatomic) char markedForRemoval;                                              //@synthesize markedForRemoval=_markedForRemoval - In the implementation block
@property (nonatomic,readonly) REMResolutionTokenMap * resolutionTokenMap; 
@property (nonatomic,readonly) NSData * resolutionTokenMapData; 
@property (nonatomic,readonly) NSSet * listIDsToUndelete; 
@property (nonatomic,readonly) char listsDADisplayOrderChanged; 
@property (nonatomic,retain) REMStore * store;                                                   //@synthesize store=_store - In the implementation block
@property (nonatomic,copy,readonly) REMAccountStorage * storage;                                 //@synthesize storage=_storage - In the implementation block
@property (nonatomic,retain) REMAccountCapabilities * capabilities;                              //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,readonly) NSOrderedSet * listIDsOrdering; 
@property (nonatomic,readonly) REMCRMergeableOrderedSet * listIDsMergeableOrdering; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) char inactive; 
@property (nonatomic,readonly) char didChooseToMigrate; 
@property (nonatomic,readonly) char didChooseToMigrateLocally; 
@property (nonatomic,readonly) char didFinishMigration; 
@property (nonatomic,readonly) NSString * daConstraintsDescriptionPath; 
@property (nonatomic,readonly) char daAllowsCalendarAddDeleteModify; 
@property (nonatomic,readonly) char daSupportsPhoneNumbers; 
@property (nonatomic,readonly) char daSupportsSharedCalendars; 
@property (nonatomic,readonly) char daWasMigrated; 
@property (nonatomic,readonly) char supportsSharingLists; 
@property (nonatomic,readonly) REMAccountGroupContext * groupContext; 
@property (nonatomic,readonly) REMObjectID * objectID; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,copy) NSString * personID; 
@property (nonatomic,copy) NSData * personIDSalt; 
@property (nonatomic,readonly) REMObjectID * remObjectID; 
@property (nonatomic,readonly) NSString * externalIdentifier; 
@property (nonatomic,readonly) NSString * externalModificationTag; 
@property (nonatomic,readonly) NSString * daSyncToken; 
@property (nonatomic,readonly) NSString * daPushKey; 
+(id)newObjectID;
+(id)objectIDWithUUID:(id)arg1 ;
+(id)cdEntityName;
+(id)localAccountID;
+(id)localInternalAccountID;
+(id)_accountTypeMaskWithBitMask:(long long)arg1 ;
-(char)isEqual:(id)arg1 ;
-(char)respondsToSelector:(SEL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(REMAccountStorage *)storage;
-(id)valueForUndefinedKey:(id)arg1 ;
-(REMStore *)store;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(REMAccountCapabilities *)capabilities;
-(void)setStore:(REMStore *)arg1 ;
-(void)setCapabilities:(REMAccountCapabilities *)arg1 ;
-(REMAccountGroupContext *)groupContext;
-(REMObjectID *)remObjectID;
-(id)fetchListsIncludingSpecialContainersWithError:(id*)arg1 ;
-(id)fetchListIncludingSpecialContainerWithExternalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)fetchListsWithError:(id*)arg1 ;
-(id)initWithStore:(id)arg1 storage:(id)arg2 ;
-(void)setMarkedForRemoval:(char)arg1 ;
-(char)markedForRemoval;
-(id)optionalObjectID;
-(id)externalIdentifierForMarkedForDeletionObject;
-(char)supportsSharingLists;
-(char)canCopyReminderLosslesslyToAccount:(id)arg1 ;
-(char)isConsideredEmptyWithResultPtr:(char*)arg1 withError:(id*)arg2 ;
-(char)MCIsManagedWithResultPtr:(char*)arg1 error:(id*)arg2 ;
-(NSOrderedSet *)listIDsOrdering;
-(char)daSupportsPhoneNumbers;
@end
