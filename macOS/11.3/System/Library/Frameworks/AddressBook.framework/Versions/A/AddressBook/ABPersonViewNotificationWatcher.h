/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ABCardViewNotificationHandler;

@interface ABPersonViewNotificationWatcher : NSObject {

	ABCardViewNotificationHandler* _cardViewNotificationHandler;

}
-(void)dealloc;
-(void)registerForExternalNotifications;
-(void)addressBookChangedExternally:(id)arg1 ;
-(void)removeNotificationObservers;
-(void)registerForLocalNotificationsWithAddressBook:(id)arg1 ;
-(void)managedObjectContextObjectsDidChange:(id)arg1 ;
-(id)initWithCardViewNotificationHandler:(id)arg1 ;
-(void)registerForNotificationsWithAddressBook:(id)arg1 ;
@end
