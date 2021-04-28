/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ABAccountRepository, ABUserDefaults;

@interface ABDefaultAccountPreference : NSObject {

	ABAccountRepository* _repository;
	ABUserDefaults* _preferences;

}
+(id)os_log;
-(void)dealloc;
-(void)postDistributedNotification;
-(id)defaultAccount;
-(id)initWithAccountRepository:(id)arg1 ;
-(void)registerForNotifications;
-(void)setDefaultAccount:(id)arg1 ;
-(id)initWithAccountRepository:(id)arg1 defaults:(id)arg2 ;
-(id)sanityCheckDefaultAcountIdentifier:(id)arg1 ;
-(id)sanityCheckDefaultAccount:(id)arg1 ;
-(id)fallbackAccount;
-(void)postDidChangeNotifications;
-(void)defaultAccountChangedExternally:(id)arg1 ;
-(void)postLocalNotification;
@end
