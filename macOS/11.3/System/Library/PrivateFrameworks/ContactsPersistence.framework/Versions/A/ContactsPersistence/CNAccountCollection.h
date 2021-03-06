/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, NSArray, CNObservable, NSString;


@protocol CNAccountCollection <NSObject>
@property (copy,readonly) NSURL * baseURL; 
@property (readonly) id<CNAccountDescription> defaultAccount; 
@property (copy,readonly) NSArray * allAccounts; 
@property (copy,readonly) NSArray * enabledAccounts; 
@property (copy,readonly) NSArray * persistentAccounts; 
@property (readonly) CNObservable * enabledAccountsObservable; 
@property (readonly) CNObservable * enabledPersistentAccountsObservable; 
@property (readonly) char includeLocalAccount; 
@property (copy) NSString * tag; 
@required
-(NSURL *)baseURL;
-(void)setTag:(id)arg1;
-(NSString *)tag;
-(id)initWithBaseURL:(id)arg1;
-(id)accountWithIdentifier:(id)arg1;
-(NSArray *)enabledAccounts;
-(NSArray *)persistentAccounts;
-(char)includeLocalAccount;
-(NSArray *)allAccounts;
-(id<CNAccountDescription>)defaultAccount;
-(CNObservable *)enabledAccountsObservable;
-(CNObservable *)enabledPersistentAccountsObservable;

@end

