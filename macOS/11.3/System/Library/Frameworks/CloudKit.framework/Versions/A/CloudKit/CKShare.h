/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/CKRecord.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableSet, NSMutableArray, CKContainerID, CKRecordID, NSData, NSString, NSArray, CKShareID, NSURL, CKShareParticipant;

@interface CKShare : CKRecord <NSSecureCoding, NSCopying> {

	char _encodeAllowsReadOnlyParticipantsToSeeEachOther;
	char _allowsAnonymousPublicAccess;
	char _serializePersonalInfo;
	long long _publicPermission;
	NSMutableSet* _addedParticipantIDs;
	NSMutableSet* _removedParticipantIDs;
	NSMutableArray* _lastFetchedParticipants;
	NSMutableArray* _allParticipants;
	long long _participantVisibility;
	CKContainerID* _containerID;
	CKRecordID* _rootRecordID;
	NSData* _invitedProtectionData;
	NSString* _invitedProtectionEtag;
	NSString* _previousInvitedProtectionEtag;
	NSData* _publicProtectionData;
	NSString* _publicProtectionEtag;
	NSString* _previousPublicProtectionEtag;
	NSArray* _invitedKeysToRemove;
	CKShareID* _shareID;

}

@property (nonatomic,retain) NSMutableSet * addedParticipantIDs;                               //@synthesize addedParticipantIDs=_addedParticipantIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * removedParticipantIDs;                             //@synthesize removedParticipantIDs=_removedParticipantIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * lastFetchedParticipants;                         //@synthesize lastFetchedParticipants=_lastFetchedParticipants - In the implementation block
@property (assign,nonatomic) char encodeAllowsReadOnlyParticipantsToSeeEachOther;              //@synthesize encodeAllowsReadOnlyParticipantsToSeeEachOther=_encodeAllowsReadOnlyParticipantsToSeeEachOther - In the implementation block
@property (nonatomic,retain) NSMutableArray * allParticipants;                                 //@synthesize allParticipants=_allParticipants - In the implementation block
@property (nonatomic,retain) NSData * publicSharingIdentity; 
@property (assign,nonatomic) long long participantVisibility;                                  //@synthesize participantVisibility=_participantVisibility - In the implementation block
@property (assign,nonatomic) char allowsAnonymousPublicAccess;                                 //@synthesize allowsAnonymousPublicAccess=_allowsAnonymousPublicAccess - In the implementation block
@property (nonatomic,retain) CKContainerID * containerID;                                      //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,copy) CKRecordID * rootRecordID;                                          //@synthesize rootRecordID=_rootRecordID - In the implementation block
@property (nonatomic,retain) NSData * invitedProtectionData;                                   //@synthesize invitedProtectionData=_invitedProtectionData - In the implementation block
@property (nonatomic,retain) NSString * invitedProtectionEtag;                                 //@synthesize invitedProtectionEtag=_invitedProtectionEtag - In the implementation block
@property (nonatomic,retain) NSString * previousInvitedProtectionEtag;                         //@synthesize previousInvitedProtectionEtag=_previousInvitedProtectionEtag - In the implementation block
@property (nonatomic,retain) NSData * publicProtectionData;                                    //@synthesize publicProtectionData=_publicProtectionData - In the implementation block
@property (nonatomic,retain) NSString * publicProtectionEtag;                                  //@synthesize publicProtectionEtag=_publicProtectionEtag - In the implementation block
@property (nonatomic,retain) NSString * previousPublicProtectionEtag;                          //@synthesize previousPublicProtectionEtag=_previousPublicProtectionEtag - In the implementation block
@property (nonatomic,readonly) char isZoneWideShare; 
@property (nonatomic,retain) NSArray * invitedKeysToRemove;                                    //@synthesize invitedKeysToRemove=_invitedKeysToRemove - In the implementation block
@property (assign,nonatomic) char serializePersonalInfo;                                       //@synthesize serializePersonalInfo=_serializePersonalInfo - In the implementation block
@property (nonatomic,copy) CKShareID * shareID;                                                //@synthesize shareID=_shareID - In the implementation block
@property (assign,nonatomic) long long publicPermission;                                       //@synthesize publicPermission=_publicPermission - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL; 
@property (nonatomic,copy,readonly) NSArray * participants; 
@property (nonatomic,copy,readonly) CKShareParticipant * owner; 
@property (nonatomic,copy,readonly) CKShareParticipant * currentUserParticipant; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(CKShareParticipant *)owner;
-(long long)publicPermission;
-(NSArray *)participants;
-(CKContainerID *)containerID;
-(id)initWithRecordType:(id)arg1 recordID:(id)arg2 ;
-(id)CKDescriptionPropertiesWithPublic:(char)arg1 private:(char)arg2 shouldExpand:(char)arg3 ;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(void)CKAssignToContainerWithID:(id)arg1 ;
-(void)encodeSystemFieldsWithCoder:(id)arg1 ;
-(id)initWithRecordType:(id)arg1 ;
-(id)initWithRecordType:(id)arg1 zoneID:(id)arg2 ;
-(id)copyWithOriginalValues;
-(id)encryptedPublicSharingKey;
-(char)canHostServerURLInfo;
-(char)hasEncryptedData;
-(void)setWantsPublicSharingKey:(char)arg1 ;
-(void)_stripPersonalInfo;
-(id)shareURL;
-(id)initWithRootRecord:(id)arg1 shareID:(id)arg2 ;
-(void)_commonCKShareInit;
-(void)_addOwnerParticipant;
-(void)_addParticipantBypassingChecks:(id)arg1 ;
-(NSMutableSet *)removedParticipantIDs;
-(CKShareParticipant *)currentUserParticipant;
-(void)_removePendingPrivateAndAdminParticipants;
-(void)_removeAllParticipants;
-(void)_setPublicPermissionNoSideEffects:(long long)arg1 ;
-(void)setParticipantVisibility:(long long)arg1 ;
-(long long)participantVisibility;
-(CKRecordID *)rootRecordID;
-(void)setRootRecordID:(CKRecordID *)arg1 ;
-(char)allowsAnonymousPublicAccess;
-(void)setAllowsAnonymousPublicAccess:(char)arg1 ;
-(void)setAllParticipants:(NSMutableArray *)arg1 ;
-(NSMutableArray *)allParticipants;
-(void)setLastFetchedParticipants:(NSMutableArray *)arg1 ;
-(NSMutableArray *)lastFetchedParticipants;
-(NSMutableSet *)addedParticipantIDs;
-(void)setAddedParticipantIDs:(NSMutableSet *)arg1 ;
-(void)setRemovedParticipantIDs:(NSMutableSet *)arg1 ;
-(NSArray *)invitedKeysToRemove;
-(void)setInvitedKeysToRemove:(NSArray *)arg1 ;
-(NSData *)invitedProtectionData;
-(void)setInvitedProtectionData:(NSData *)arg1 ;
-(NSString *)invitedProtectionEtag;
-(void)setInvitedProtectionEtag:(NSString *)arg1 ;
-(NSString *)previousInvitedProtectionEtag;
-(void)setPreviousInvitedProtectionEtag:(NSString *)arg1 ;
-(NSData *)publicProtectionData;
-(void)setPublicProtectionData:(NSData *)arg1 ;
-(NSString *)publicProtectionEtag;
-(void)setPublicProtectionEtag:(NSString *)arg1 ;
-(NSString *)previousPublicProtectionEtag;
-(void)setPreviousPublicProtectionEtag:(NSString *)arg1 ;
-(char)serializePersonalInfo;
-(void)setSerializePersonalInfo:(char)arg1 ;
-(char)isZoneWideShare;
-(id)_knownParticipantEqualToParticipant:(id)arg1 ;
-(void)_removeParticipantBypassingChecks:(id)arg1 ;
-(char)_participantArray:(id)arg1 containsEquivalentWithPermissionsParticipant:(id)arg2 ;
-(char)_participantArray:(id)arg1 isEquivalentToArray:(id)arg2 ;
-(id)addedParticipants;
-(id)removedParticipants;
-(void)resetFetchedParticipants;
-(void)registerFetchedParticipant:(id)arg1 ;
-(void)clearModifiedParticipants;
-(void)addParticipant:(id)arg1 ;
-(char)encodeAllowsReadOnlyParticipantsToSeeEachOther;
-(id)initWithRootRecord:(id)arg1 ;
-(id)initWithRecordZoneID:(id)arg1 ;
-(id)_initWithShareRecordID:(id)arg1 ;
-(void)setPublicPermission:(long long)arg1 ;
-(void)setAllowsReadOnlyParticipantsToSeeEachOther:(char)arg1 ;
-(char)allowsReadOnlyParticipantsToSeeEachOther;
-(void)removeParticipant:(id)arg1 ;
-(id)updateFromServerShare:(id)arg1 ;
-(void)_addParticipantEmails:(id)arg1 phoneNumbers:(id)arg2 asReadWrite:(char)arg3 inContainer:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_copyWithoutPersonalInfo;
-(void)_getDecryptedShareInContainer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSData *)publicSharingIdentity;
-(void)setPublicSharingIdentity:(NSData *)arg1 ;
-(void)setEncodeAllowsReadOnlyParticipantsToSeeEachOther:(char)arg1 ;
-(CKShareID *)shareID;
-(void)setShareID:(CKShareID *)arg1 ;
@end

