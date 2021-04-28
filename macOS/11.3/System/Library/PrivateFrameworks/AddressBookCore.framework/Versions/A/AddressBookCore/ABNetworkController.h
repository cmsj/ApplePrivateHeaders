/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AddressBookCore/AddressBookCore-Structs.h>
@class NSString, NSTimer;

@interface ABNetworkController : NSObject {

	SCDynamicStoreRef _store;
	NSString* _domainName;
	unsigned _waitingForDialToFinish : 1;
	unsigned _checkedNetwork : 1;
	unsigned _isNetworkUp : 1;
	NSTimer* _notificationTimer;

}
+(char)isHostReachable:(id)arg1 ;
+(id)sharedNetworkController;
-(void)dealloc;
-(id)init;
-(char)isNetworkUp;
-(void)listenForNetworkChanges;
-(char)isHostReachable:(id)arg1 ;
-(char)canReachAddress:(id)arg1 ;
-(void)_postNotification:(id)arg1 ;
-(void)_postNetworkChangeNotification:(id)arg1 ;
-(void)_triggerDialForHostname:(id)arg1 ;
@end
