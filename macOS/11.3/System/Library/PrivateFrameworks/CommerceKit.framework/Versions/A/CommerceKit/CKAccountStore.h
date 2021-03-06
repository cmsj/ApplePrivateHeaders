/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKStoreClient, NSArray, CKStoreAccount, CKDemoAccount, ISStoreAccount;

@interface CKAccountStore : NSObject {

	CKStoreClient* _storeClient;

}

@property (readonly) CKStoreClient * storeClient;                          //@synthesize storeClient=_storeClient - In the implementation block
@property (readonly) NSArray * knownAccounts; 
@property (readonly) CKStoreAccount * primaryStoreAccount; 
@property (readonly) char primaryAccountIsPresentAndSignedIn; 
@property (readonly) char isDemoModeEnabled; 
@property (readonly) CKDemoAccount * demoAccount; 
@property (readonly) NSArray * accounts; 
@property (readonly) ISStoreAccount * primaryAccount; 
+(id)sharedAccountStore;
+(id)accountStoreForStoreClient:(id)arg1 ;
-(NSArray *)accounts;
-(void)addAccount:(id)arg1 ;
-(ISStoreAccount *)primaryAccount;
-(id)accountWithAppleID:(id)arg1 ;
-(char)isDemoModeEnabled;
-(id)initWithStoreClient:(id)arg1 ;
-(CKDemoAccount *)demoAccount;
-(CKStoreClient *)storeClient;
-(id)storeAccountForDSID:(id)arg1 ;
-(id)addAccountObserver:(id)arg1 ;
-(CKStoreAccount *)primaryStoreAccount;
-(id)_initWithStoreClient:(id)arg1 ;
-(NSArray *)knownAccounts;
-(void)signOutWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeAccountObserver:(id)arg1 ;
-(id)storeAccountForAppleID:(id)arg1 ;
-(void)getEligibilityForService:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(char)primaryAccountIsPresentAndSignedIn;
-(void)signOut;
-(id)addPrimaryAccountObserverWithBlock:(/*^block*/id)arg1 ;
-(void)removePrimaryAccountObserver:(id)arg1 ;
-(id)accountForDSID:(id)arg1 ;
-(void)signIn;
-(void)signInWithSuggestedAppleID:(id)arg1 allowChangeOfAppleID:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)viewAccount;
-(id)eligibilityForService:(long long)arg1 ;
-(void)getPasswordSettingsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)updatePasswordSettings:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setTouchIDStateForAccount:(id)arg1 state:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getTouchIDStateForAccount:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

