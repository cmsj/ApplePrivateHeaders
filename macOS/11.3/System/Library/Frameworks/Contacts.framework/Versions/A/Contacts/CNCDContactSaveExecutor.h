/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, CNCDSaveContext, NSMutableArray;

@interface CNCDContactSaveExecutor : NSObject {

	NSArray* _allContactIdentifiers;
	NSArray* _insertedContactIdentifiers;
	CNCDSaveContext* _saveContext;
	NSMutableArray* _addedContactsToRefresh;
	NSMutableArray* _updatedContactsToRefresh;

}

@property (nonatomic,readonly) CNCDSaveContext * saveContext;                          //@synthesize saveContext=_saveContext - In the implementation block
@property (nonatomic,readonly) NSMutableArray * addedContactsToRefresh;                //@synthesize addedContactsToRefresh=_addedContactsToRefresh - In the implementation block
@property (nonatomic,readonly) NSMutableArray * updatedContactsToRefresh;              //@synthesize updatedContactsToRefresh=_updatedContactsToRefresh - In the implementation block
@property (readonly) NSArray * allContactIdentifiers;                                  //@synthesize allContactIdentifiers=_allContactIdentifiers - In the implementation block
@property (readonly) NSArray * insertedContactIdentifiers;                             //@synthesize insertedContactIdentifiers=_insertedContactIdentifiers - In the implementation block
+(id)contactsLinkedToContact:(id)arg1 inSaveContext:(id)arg2 ;
-(CNCDSaveContext *)saveContext;
-(void)collectIdentifiers;
-(NSArray *)allContactIdentifiers;
-(NSArray *)insertedContactIdentifiers;
-(void)addContacts;
-(void)updateCacheWithAddedContacts;
-(void)linkContacts;
-(void)unlinkContacts;
-(void)updateContacts;
-(void)updateMeContact;
-(void)deleteContacts;
-(void)associateAddedContact:(id)arg1 withDatabaseRepresentation:(id)arg2 ;
-(void)enumerateAddedContacts:(/*^block*/id)arg1 ;
-(void)updateUnifiedContacts:(id)arg1 ;
-(void)updateNonUnifiedContacts:(id)arg1 ;
-(void)associateUpdatedContact:(id)arg1 withDatabaseRepresentation:(id)arg2 ;
-(void)applyDiff:(id)arg1 toUnifiedContact:(id)arg2 withIdentifierMap:(id)arg3 ;
-(id)initWithSaveContext:(id)arg1 ;
-(void)saveContacts;
-(void)updateContactSnapshots;
-(void)refreshAddedContacts;
-(void)refreshUpdatedContacts;
-(NSMutableArray *)addedContactsToRefresh;
-(NSMutableArray *)updatedContactsToRefresh;
@end

