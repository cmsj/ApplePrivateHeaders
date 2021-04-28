/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/Versions/A/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSXPCConnection;

@interface FLUIHelperController : NSObject {

	NSLock* _connLock;
	NSXPCConnection* _conn;

}
+(id)sharedInstance;
-(id)init;
-(id)connection;
-(id)remoteObjectInterface;
-(void)tearDownUIForHSA2LoginNotificationWithPushMessageID:(id)arg1 ;
-(void)showUIForHSA2LoginNotification:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)showHSA2PasswordChangeForAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)showUIForHSA2LoginCode:(id)arg1 notification:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
