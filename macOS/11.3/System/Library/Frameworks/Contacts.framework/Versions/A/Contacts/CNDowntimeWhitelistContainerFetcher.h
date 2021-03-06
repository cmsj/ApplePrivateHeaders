/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNDowntimeWhitelistContainerFetching.h>

@protocol NSObject;
@class CNContainer, CNContactStore, ACAccountStore, NSNotificationCenter, NSString;

@interface CNDowntimeWhitelistContainerFetcher : NSObject <CNDowntimeWhitelistContainerFetching> {

	CNContainer* _primaryiCloudContainer;
	CNContactStore* _contactStore;
	ACAccountStore* _accountStore;
	NSNotificationCenter* _notificationCenter;
	id<NSObject> _accountStoreDidChangeNotificationToken;

}

@property (nonatomic,readonly) CNContactStore * contactStore;                                    //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) ACAccountStore * accountStore;                                    //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;                        //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) id<NSObject> accountStoreDidChangeNotificationToken;              //@synthesize accountStoreDidChangeNotificationToken=_accountStoreDidChangeNotificationToken - In the implementation block
@property (nonatomic,readonly) CNContainer * primaryiCloudContainer;                             //@synthesize primaryiCloudContainer=_primaryiCloudContainer - In the implementation block
@property (nonatomic,readonly) CNContainer * downtimeWhitelistContainer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)os_log;
-(void)dealloc;
-(id)init;
-(NSNotificationCenter *)notificationCenter;
-(ACAccountStore *)accountStore;
-(id)initWithContactStore:(id)arg1 accountStore:(id)arg2 notificationCenter:(id)arg3 ;
-(void)beginObservingChangeNotifications;
-(CNContainer *)primaryiCloudContainer;
-(id)fetchPrimaryiCloudCardDAVContainer;
-(id)fetchPrimaryiCloudCardDAVAccountIdentifier;
-(CNContactStore *)contactStore;
-(CNContainer *)downtimeWhitelistContainer;
-(id<NSObject>)accountStoreDidChangeNotificationToken;
@end

