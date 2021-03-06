/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFUserNotificationServiceDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSMutableDictionary, NSObject;

@interface AFUserNotificationProvider : NSObject <AFUserNotificationServiceDelegate> {

	NSXPCConnection* _connection;
	NSMutableDictionary* _responseHandlersByNotificationID;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(id)_connection;
-(void)withdrawNotificationRequestWithIdentifier:(id)arg1 ;
-(void)receivedNotificationResponse:(id)arg1 ;
-(void)postNotificationRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
@end

