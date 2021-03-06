/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CalXPCConnectionInfo, NSXPCConnection, NSDate;

@interface CalXPCConnectionProvider : NSObject {

	CalXPCConnectionInfo* _info;
	/*^block*/id _errorHandler;
	NSXPCConnection* _connection;
	/*^block*/id _aliveHandler;
	NSDate* _lastLifecycleCheckin;

}

@property (nonatomic,retain) CalXPCConnectionInfo * info;                //@synthesize info=_info - In the implementation block
@property (nonatomic,copy) id errorHandler;                              //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;               //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) id aliveHandler;                              //@synthesize aliveHandler=_aliveHandler - In the implementation block
@property (nonatomic,retain) NSDate * lastLifecycleCheckin;              //@synthesize lastLifecycleCheckin=_lastLifecycleCheckin - In the implementation block
+(id)providerWithConnectionInfo:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)description;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)errorHandler;
-(void)setErrorHandler:(id)arg1 ;
-(CalXPCConnectionInfo *)info;
-(void)setInfo:(CalXPCConnectionInfo *)arg1 ;
-(id)remoteProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)initWithConnectionInfo:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)setAliveHandler:(id)arg1 ;
-(void)_reregisterForLifecycleNotification:(id)arg1 ;
-(void)didReceiveLifecycleNotification;
-(void)setLastLifecycleCheckin:(NSDate *)arg1 ;
-(void)_didReceiveLifecycleNotificationHelper:(unsigned long long)arg1 ;
-(id)aliveHandler;
-(void)_didInterruptConnection;
-(void)_didInvalidateConnection;
-(void)_updateExportedObject;
-(NSDate *)lastLifecycleCheckin;
-(void)startMonitoringLifecycleWithHandler:(/*^block*/id)arg1 ;
-(void)updateConnectionInfo:(id)arg1 ;
@end

