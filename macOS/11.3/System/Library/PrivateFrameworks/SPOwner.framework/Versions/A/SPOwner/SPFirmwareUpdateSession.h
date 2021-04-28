/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/Versions/A/SPOwner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SPOwner/SPFirmwareUpdateSessionPrivateProtocol.h>

@protocol OS_dispatch_queue;
@class FMXPCSession, NSObject, FMFuture, NSString;

@interface SPFirmwareUpdateSession : NSObject <SPFirmwareUpdateSessionPrivateProtocol> {

	FMXPCSession* _session;
	NSObject*<OS_dispatch_queue> _queue;
	FMFuture* _sessionInvalidationFuture;

}

@property (nonatomic,retain) FMXPCSession * session;                            //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) FMFuture * sessionInvalidationFuture;              //@synthesize sessionInvalidationFuture=_sessionInvalidationFuture - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)proxy;
-(FMXPCSession *)session;
-(void)setSession:(FMXPCSession *)arg1 ;
-(id)remoteInterface;
-(FMFuture *)sessionInvalidationFuture;
-(void)setSessionInvalidationFuture:(FMFuture *)arg1 ;
-(id)serviceDescription;
@end
