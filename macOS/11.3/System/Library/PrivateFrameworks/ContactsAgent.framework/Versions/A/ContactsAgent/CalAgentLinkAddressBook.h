/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsAgent.framework/Versions/A/ContactsAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CalAgentLinkAddressBook <CalendarLink>
@required
-(void)membersOfRemoteGroup:(id)arg1 withBasePersistenceURL:(id)arg2 reply:(/*^block*/id)arg3;
-(void)remoteSubGroupsForRemoteParentGroup:(id)arg1 withBasePersistenceURL:(id)arg2 reply:(/*^block*/id)arg3;
-(void)persistentStoreURLForRemoteRecord:(id)arg1 withBasePersistenceURL:(id)arg2 reply:(/*^block*/id)arg3;
-(void)remoteCustomPropertiesWithBasePersistenceURL:(id)arg1 reply:(/*^block*/id)arg2;
-(void)fetchPeopleWithPredicate:(id)arg1 sortDescriptors:(id)arg2 inAccountsWithIdentifiers:(id)arg3 withBasePersistenceURL:(id)arg4 reply:(/*^block*/id)arg5;
-(void)fetchGroupsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 inAccountsWithIdentifiers:(id)arg3 withBasePersistenceURL:(id)arg4 reply:(/*^block*/id)arg5;
-(void)fetchSmartGroupsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 inAccountsWithIdentifiers:(id)arg3 withBasePersistenceURL:(id)arg4 reply:(/*^block*/id)arg5;
-(void)saveWithRemoteObjectCache:(id)arg1 basePersistenceURL:(id)arg2 reply:(/*^block*/id)arg3;
-(void)remotePersonForMeWithBasePersistenceURL:(id)arg1 reply:(/*^block*/id)arg2;
-(void)remoteGroupsForAccountsWithIdentifiers:(id)arg1 withBasePersistenceURL:(id)arg2 reply:(/*^block*/id)arg3;
-(void)remoteInfosForAccountsWithIdentifiers:(id)arg1 withBasePersistenceURL:(id)arg2 reply:(/*^block*/id)arg3;
-(void)remotePeopleForAccountsWithIdentifiers:(id)arg1 withBasePersistenceURL:(id)arg2 reply:(/*^block*/id)arg3;
-(void)remoteSmartGroupsForAccountsWithIdentifiers:(id)arg1 withBasePersistenceURL:(id)arg2 reply:(/*^block*/id)arg3;
-(void)remotePersonWithUniqueID:(id)arg1 withBasePersistenceURL:(id)arg2 reply:(/*^block*/id)arg3;
-(void)fullNameForRemotePerson:(id)arg1 reply:(/*^block*/id)arg2;
-(void)remoteGroupWithUniqueID:(id)arg1 withBasePersistenceURL:(id)arg2 reply:(/*^block*/id)arg3;
-(void)coreDataPredicateFromRemoteSearchElement:(id)arg1 withBasePersistenceURL:(id)arg2 reply:(/*^block*/id)arg3;
-(void)remoteGroupsForRemotePerson:(id)arg1 withBasePersistenceURL:(id)arg2 reply:(/*^block*/id)arg3;
-(void)remoteParentGroupsForRemoteSubGroup:(id)arg1 withBasePersistenceURL:(id)arg2 reply:(/*^block*/id)arg3;
-(void)remoteInfoWithUniqueID:(id)arg1 withBasePersistenceURL:(id)arg2 reply:(/*^block*/id)arg3;
-(void)createInfoWithBasePersistenceURL:(id)arg1 reply:(/*^block*/id)arg2;
-(void)propertyNameRepresentsCustomProperty:(id)arg1 withBasePersistenceURL:(id)arg2 reply:(/*^block*/id)arg3;
-(void)remoteAccountCollectionForBasePersistenceURL:(id)arg1 reply:(/*^block*/id)arg2;

@end
