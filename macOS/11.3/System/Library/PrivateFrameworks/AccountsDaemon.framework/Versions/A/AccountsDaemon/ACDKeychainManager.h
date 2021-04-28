/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/Versions/A/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ACDKeychainManager : NSObject
+(void)initialize;
+(void)setServer:(id)arg1 ;
+(id)server;
+(char)_shouldSyncCredentialForAccount:(id)arg1 ;
+(id)credentialForAccount:(id)arg1 clientID:(id)arg2 error:(id*)arg3 ;
+(id)credentialForManagedAccountObject:(id)arg1 clientID:(id)arg2 error:(id*)arg3 ;
+(id)credentialForManagedAccountObject:(id)arg1 clientID:(id)arg2 ;
+(id)_fetchOptionsForAccount:(id)arg1 ;
+(id)_credentialForAccountWithID:(id)arg1 accountTypeID:(id)arg2 credentialType:(id)arg3 clientID:(id)arg4 allowAdditionalAccountTypeSegment:(char)arg5 options:(id)arg6 error:(id*)arg7 ;
+(void)_fallbackToUnsyncedOAuthTokens:(id)arg1 ;
+(void)_createNoSyncOAuthTokens:(id)arg1 account:(id)arg2 clientID:(id)arg3 ;
+(id)keychainServiceNameForClientID:(id)arg1 accountTypeIdentifier:(id)arg2 additionalAccountTypeSegment:(id)arg3 key:(id)arg4 ;
+(id)_itemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
+(void)_setCredentialForAccount:(id)arg1 clientID:(id)arg2 handleCredentialItemRemovals:(char)arg3 error:(id*)arg4 ;
+(void)removeCredentialForAccount:(id)arg1 clientID:(id)arg2 error:(id*)arg3 ;
+(void)_saveCredential:(id)arg1 forAccount:(id)arg2 clientID:(id)arg3 error:(id*)arg4 ;
+(char)_removeCredentialItemWithKey:(id)arg1 forAccountWithID:(id)arg2 username:(id)arg3 accountTypeID:(id)arg4 clientID:(id)arg5 options:(id)arg6 error:(id*)arg7 ;
+(void)_setNonPersistentCredentialTimerForAccount:(id)arg1 ;
+(void)_setItem:(id)arg1 forServiceName:(id)arg2 username:(id)arg3 accessGroup:(id)arg4 accessibility:(id)arg5 syncable:(char)arg6 requiresTouchID:(char)arg7 options:(id)arg8 error:(id*)arg9 ;
+(void)removeCredentialForAccount:(id)arg1 error:(id*)arg2 ;
+(void)_removeCredentialsForAccount:(id)arg1 clientID:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(char)_removeItemForService:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
+(void)_accountTypeIdentifierFromComponents:(id)arg1 handler:(/*^block*/id)arg2 ;
+(char)_keychainLock_removeItemForService:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
+(void)_keychainLock_addItem:(id)arg1 forServiceName:(id)arg2 username:(id)arg3 accessGroup:(id)arg4 accessibility:(id)arg5 syncable:(char)arg6 requiresTouchID:(char)arg7 error:(id*)arg8 ;
+(void)_keychainLock_updateItem:(id)arg1 existingPassword:(id)arg2 forServiceName:(id)arg3 username:(id)arg4 accessGroup:(id)arg5 accessibility:(id)arg6 options:(id)arg7 error:(id*)arg8 ;
+(char)_setAccountSyncItem:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 accessibility:(id)arg4 options:(id)arg5 error:(id*)arg6 ;
+(void)removeDataclassAccountSyncItemForAccount:(id)arg1 ;
+(char)_setAccountSyncItem:(id)arg1 hostname:(id)arg2 accessGroup:(id)arg3 accessibility:(id)arg4 options:(id)arg5 error:(id*)arg6 ;
+(char)_setAccountSyncMigrateItem:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 accessibility:(id)arg4 options:(id)arg5 error:(id*)arg6 ;
+(char)_setDataclassSyncItem:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 accessibility:(id)arg4 options:(id)arg5 error:(id*)arg6 ;
+(id)keychainDeletedAccounts;
+(char)_accountSyncItemExistsForServiceName:(id)arg1 username:(id)arg2 ;
+(char)_accountSyncItemExistsForServiceName:(id)arg1 hostname:(id)arg2 ;
+(char)_dataclassSyncItemExistsForServiceName:(id)arg1 username:(id)arg2 ;
+(char)accountSyncMigrated;
+(id)keychainAccounts;
+(id)keychainHostnameAccounts;
+(id)keychainDeletedContactAccounts;
+(void)makeItemInvisibleWithService:(id)arg1 andAccount:(id)arg2 ;
+(id)credentialForManagedAccountObject:(id)arg1 ;
+(id)credentialForAccount:(id)arg1 clientID:(id)arg2 ;
+(void)setCredentialForAccount:(id)arg1 ;
+(void)setCredentialForAccount:(id)arg1 clientID:(id)arg2 ;
+(void)setCredentialForAccount:(id)arg1 error:(id*)arg2 ;
+(void)setCredentialForAccount:(id)arg1 clientID:(id)arg2 error:(id*)arg3 ;
+(void)setCredentialForNewAccount:(id)arg1 clientID:(id)arg2 error:(id*)arg3 ;
+(void)removeCredentialForAccount:(id)arg1 ;
+(void)removeCredentialForAccount:(id)arg1 clientID:(id)arg2 ;
+(void)removeCredentialForAccount:(id)arg1 key:(id)arg2 error:(id*)arg3 ;
+(void)componentsFromKeychainServiceName:(id)arg1 handler:(/*^block*/id)arg2 ;
+(void)_migrateCredential:(id)arg1 forAccount:(id)arg2 clientID:(id)arg3 ;
+(char)createAccountSyncItemForAccount:(id)arg1 clientID:(id)arg2 properties:(id)arg3 error:(id*)arg4 ;
+(char)createAccountSyncMigratedItemWithError:(id*)arg1 ;
+(void)createDataclassAccountSyncItemForAccount:(id)arg1 withDataclassActions:(id)arg2 ;
+(char)removeAccountSyncItemForAccount:(id)arg1 clientID:(id)arg2 properties:(id)arg3 error:(id*)arg4 ;
+(id)removeTombstonesForAccount:(id)arg1 clientID:(id)arg2 error:(id*)arg3 ;
+(id)accountSynciOSVersion;
+(void)setAccountSynciOSVersion:(id)arg1 ;
+(id)keychainDeletedHostnameAccounts;
+(void)removeTombstoneForService:(id)arg1 keychainAccountIdentifier:(id)arg2 ;
+(void)notifiyCredentialChangedForAccount:(id)arg1 ;
@end
