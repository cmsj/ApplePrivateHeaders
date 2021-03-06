/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAccountCollection.h>

@protocol CNAccountCollection;
@class NSPredicate, NSArray, NSURL, CNObservable, NSString;

@interface CNDelegateAccessAccountCollection : NSObject <CNAccountCollection> {

	NSPredicate* _predicate;
	id<CNAccountCollection> _accountCollection;
	NSArray* _allAccountsImpl;

}

@property (nonatomic,copy,readonly) NSPredicate * predicate;                           //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) id<CNAccountCollection> accountCollection;              //@synthesize accountCollection=_accountCollection - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allAccountsImpl;                         //@synthesize allAccountsImpl=_allAccountsImpl - In the implementation block
@property (copy,readonly) NSURL * baseURL; 
@property (readonly) id<CNAccountDescription> defaultAccount; 
@property (copy,readonly) NSArray * allAccounts; 
@property (copy,readonly) NSArray * enabledAccounts; 
@property (copy,readonly) NSArray * persistentAccounts; 
@property (readonly) CNObservable * enabledAccountsObservable; 
@property (readonly) CNObservable * enabledPersistentAccountsObservable; 
@property (readonly) char includeLocalAccount; 
@property (copy) NSString * tag; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSURL *)baseURL;
-(void)setTag:(NSString *)arg1 ;
-(NSPredicate *)predicate;
-(NSString *)tag;
-(id)initWithBaseURL:(id)arg1 ;
-(id)accountWithIdentifier:(id)arg1 ;
-(NSArray *)enabledAccounts;
-(NSArray *)persistentAccounts;
-(char)includeLocalAccount;
-(id<CNAccountCollection>)accountCollection;
-(NSArray *)allAccounts;
-(id<CNAccountDescription>)defaultAccount;
-(CNObservable *)enabledAccountsObservable;
-(CNObservable *)enabledPersistentAccountsObservable;
-(void)updateAccounts;
-(id)initWithPredicate:(id)arg1 accountCollection:(id)arg2 ;
-(NSArray *)allAccountsImpl;
@end

