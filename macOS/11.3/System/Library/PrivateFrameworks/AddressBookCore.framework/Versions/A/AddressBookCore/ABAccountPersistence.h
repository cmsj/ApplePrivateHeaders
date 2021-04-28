/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ABAccountPersistenceBackend, CNCancelable, ABAccountPersistenceDelegate;
@class NSString, NSMutableDictionary;

@interface ABAccountPersistence : NSObject {

	id<ABAccountPersistenceBackend> _backend;
	NSString* _accountType;
	char _invalidated;
	id<CNCancelable> _delayedApplyToken;
	char _hasChanges;
	NSMutableDictionary* _persistentValues;
	id<ABAccountPersistenceDelegate> _delegate;

}

@property (getter=isInvalidated) char invalidated;                         //@synthesize invalidated=_invalidated - In the implementation block
@property (assign) char hasChanges;                                        //@synthesize hasChanges=_hasChanges - In the implementation block
@property (__weak) id<ABAccountPersistenceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)invalidate;
-(id<ABAccountPersistenceDelegate>)delegate;
-(void)setDelegate:(id<ABAccountPersistenceDelegate>)arg1 ;
-(char)boolForKey:(id)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(void)setBool:(char)arg1 forKey:(id)arg2 ;
-(char)hasChanges;
-(char)isInvalidated;
-(id)acAccountIdentifier;
-(char)loadPersistentValues;
-(void)rediscoverPersistentValuesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)deletePersistentValuesWithAddressBook:(id)arg1 ;
-(void)applyChangesAndRefresh:(char)arg1 ;
-(void)persistValuesAndPostDidChangeNotifcation:(char)arg1 ;
-(void)_sourceShouldRefreshImmediately;
-(char)savePersistentValuesAndPostDidChangeNotification:(char)arg1 ;
-(void)setHasChanges:(char)arg1 ;
-(id)allPersistentValues;
-(id)scheduleDelayedApply;
-(void)setDelayedApplyToken:(id)arg1 ;
-(void)delayedApplyChanges;
-(void)applyChanges:(id)arg1 ;
-(void)setInvalidated:(char)arg1 ;
-(void)nts_removeObjectForKey:(id)arg1 ;
-(void)nts_setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithBackend:(id)arg1 accountType:(id)arg2 ;
-(void)setUnsignedInteger:(unsigned long long)arg1 forKey:(id)arg2 ;
-(unsigned long long)unsignedIntegerForKey:(id)arg1 ;
@end
