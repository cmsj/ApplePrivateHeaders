/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/Versions/A/ApplePushService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSMutableArray, NSObject, NSString;

@interface APSTaskClient : NSObject {

	NSXPCConnection* _connection;
	NSMutableArray* _outstandingDNSRequests;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSString* _environment;

}
-(void)_clearOutstandingTasks:(long long)arg1 ;
-(void)_timeoutOutstandingRequests;
-(id)_findDNSRequestForHostname:(id)arg1 ;
-(id)resolveDNS:(id)arg1 ;
-(void)dealloc;
-(id)initWithEnvironment:(id)arg1 queue:(id)arg2 ;
@end

