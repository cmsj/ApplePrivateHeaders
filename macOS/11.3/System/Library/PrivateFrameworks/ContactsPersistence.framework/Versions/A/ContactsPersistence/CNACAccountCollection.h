/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAccountCollection.h>

@class NSArray, NSURL, CNPublishingSubject, NSString, CNAccountCollectionUpdateWatcher, CNUnfairLock;

@interface CNACAccountCollection : NSObject <CNAccountCollection> {

	NSArray* _accounts;
	NSURL* _baseURL;
	CNPublishingSubject* _enabledAccountsObservable;
	char _includeLocalAccount;
	NSString* _tag;
	CNAccountCollectionUpdateWatcher* _updateWatcher;
	CNUnfairLock* _resourceLock;
	NSArray* _enabledAccounts;
	NSArray* _enabledPersistentAccounts;
	CNPublishingSubject* _enabledPersistentAccountsObservable;

}

@property (copy) NSArray * accounts;                                                       //@synthesize accounts=_accounts - In the implementation block
@property (copy) NSArray * enabledAccounts;                                                //@synthesize enabledAccounts=_enabledAccounts - In the implementation block
@property (copy) NSArray * enabledPersistentAccounts;                                      //@synthesize enabledPersistentAccounts=_enabledPersistentAccounts - In the implementation block
@property (copy) NSURL * baseURL;                                                          //@synthesize baseURL=_baseURL - In the implementation block
@property (retain) CNPublishingSubject * enabledAccountsObservable;                        //@synthesize enabledAccountsObservable=_enabledAccountsObservable - In the implementation block
@property (retain) CNPublishingSubject * enabledPersistentAccountsObservable;              //@synthesize enabledPersistentAccountsObservable=_enabledPersistentAccountsObservable - In the implementation block
@property (retain) CNAccountCollectionUpdateWatcher * updateWatcher;                       //@synthesize updateWatcher=_updateWatcher - In the implementation block
@property (readonly) id<CNAccountDescription> defaultAccount; 
@property (copy,readonly) NSArray * allAccounts; 
@property (copy,readonly) NSArray * persistentAccounts; 
@property (readonly) char includeLocalAccount; 
@property (copy) NSString * tag;                                                           //@synthesize tag=_tag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSURL *)baseURL;
-(void)setTag:(NSString *)arg1 ;
-(NSString *)tag;
-(id)initWithBaseURL:(id)arg1 ;
-(id)accountWithIdentifier:(id)arg1 ;
-(NSArray *)accounts;
-(NSArray *)enabledAccounts;
-(void)setBaseURL:(NSURL *)arg1 ;
-(NSArray *)persistentAccounts;
-(char)includeLocalAccount;
-(NSArray *)allAccounts;
-(id<CNAccountDescription>)defaultAccount;
-(CNPublishingSubject *)enabledAccountsObservable;
-(CNPublishingSubject *)enabledPersistentAccountsObservable;
-(void)accountsUpdated:(id)arg1 ;
-(void)setAccounts:(NSArray *)arg1 ;
-(void)setEnabledAccounts:(NSArray *)arg1 ;
-(NSArray *)enabledPersistentAccounts;
-(void)setEnabledPersistentAccounts:(NSArray *)arg1 ;
-(void)setEnabledAccountsObservable:(CNPublishingSubject *)arg1 ;
-(void)setEnabledPersistentAccountsObservable:(CNPublishingSubject *)arg1 ;
-(CNAccountCollectionUpdateWatcher *)updateWatcher;
-(void)setUpdateWatcher:(CNAccountCollectionUpdateWatcher *)arg1 ;
@end
