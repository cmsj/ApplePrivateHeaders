/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/ICUserIdentityStoreBackend.h>

@protocol OS_dispatch_queue, ICUserIdentityStoreBackendDelegate;
@class ACAccountStore, NSMapTable, NSArray, NSMutableDictionary, ACAccountType, NSObject, ICUnfairLock, NSString;

@interface ICUserIdentityStoreACAccountBackend : NSObject <ICUserIdentityStoreBackend> {

	ACAccountStore* _accountStore;
	NSMapTable* _accountToIdentityProperties;
	NSArray* _allStoreAccounts;
	NSMutableDictionary* _dsidToAccount;
	id _primaryICloudAccountIdentityPropertiesValue;
	ACAccountType* _storeAccountType;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	ICUnfairLock* _lock;
	id<ICUserIdentityStoreBackendDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ICUserIdentityStoreBackendDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<ICUserIdentityStoreBackendDelegate>)delegate;
-(void)setDelegate:(id<ICUserIdentityStoreBackendDelegate>)arg1 ;
-(void)synchronize;
-(void)_synchronize;
-(id)activeAccountDSIDWithError:(id*)arg1 ;
-(char)updateActiveAccountDSID:(id)arg1 error:(id*)arg2 ;
-(id)activeLockerAccountDSIDWithError:(id*)arg1 ;
-(char)updateActiveLockerAccountDSID:(id)arg1 error:(id*)arg2 ;
-(id)identityPropertiesForDSID:(id)arg1 error:(id*)arg2 ;
-(id)identityPropertiesForPrimaryICloudAccountWithError:(id*)arg1 ;
-(void)removeIdentityForDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)replaceIdentityProperties:(id)arg1 forDSID:(id)arg2 error:(id*)arg3 ;
-(char)setIdentityProperties:(id)arg1 forDSID:(id)arg2 error:(id*)arg3 ;
-(id)localStoreAccountPropertiesWithError:(id*)arg1 ;
-(char)setLocalStoreAccountProperties:(id)arg1 error:(id*)arg2 ;
-(id)verificationContextForDSID:(id)arg1 error:(id*)arg2 ;
-(id)verificationContextForAccountEstablishmentWithError:(id*)arg1 ;
-(id)initWithACAccountStore:(id)arg1 ;
-(void)_handleITunesStoreAccountsChanged;
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
-(void)_applyIdentityProperties:(id)arg1 toAccount:(id)arg2 ;
-(void)_applyLocalStoreAccountProperties:(id)arg1 toAccount:(id)arg2 ;
-(id)_allStoreAccountsWithError:(id*)arg1 ;
-(id)_activeStoreAccountWithError:(id*)arg1 ;
-(id)_newLocalStoreAccountPropertiesFromAccount:(id)arg1 ;
-(id)_newUserIdentityPropertiesForAccount:(id)arg1 ;
-(id)_primaryICloudAccountIdentityProperties;
-(id)_storeAccountForDSID:(id)arg1 error:(id*)arg2 ;
-(id)_storeAccountForDSID:(id)arg1 bypassCache:(char)arg2 error:(id*)arg3 ;
-(id)_storeAccountTypeWithError:(id*)arg1 ;
@end

