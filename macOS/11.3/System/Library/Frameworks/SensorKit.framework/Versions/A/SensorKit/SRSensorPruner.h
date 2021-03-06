/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SensorKit.framework/Versions/A/SensorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SRDaemonNotificationDelegate.h>

@protocol SRSensorPrunerDelegate;
@class SRDatastore, SRDaemonNotification, NSString, NSDictionary, SRDevice, NSXPCConnection;

@interface SRSensorPruner : NSObject <SRDaemonNotificationDelegate> {

	SRDatastore* _datastore;
	SRDaemonNotification* _daemonNotification;
	char _connectionDidInterrupt;
	char _connectionDidInvalidate;
	id<SRSensorPrunerDelegate> _delegate;
	NSString* _sensor;
	NSDictionary* _nextDatastoreFiles;
	SRDevice* _device;
	NSXPCConnection* _connection;

}

@property (copy) NSString * sensor;                                  //@synthesize sensor=_sensor - In the implementation block
@property (retain,readonly) SRDatastore * datastore; 
@property (retain) NSDictionary * nextDatastoreFiles;                //@synthesize nextDatastoreFiles=_nextDatastoreFiles - In the implementation block
@property (assign) char connectionDidInterrupt;                      //@synthesize connectionDidInterrupt=_connectionDidInterrupt - In the implementation block
@property (assign) char connectionDidInvalidate;                     //@synthesize connectionDidInvalidate=_connectionDidInvalidate - In the implementation block
@property (retain) SRDevice * device;                                //@synthesize device=_device - In the implementation block
@property (retain) NSXPCConnection * connection;                     //@synthesize connection=_connection - In the implementation block
@property (__weak) id<SRSensorPrunerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)clientInterface;
+(id)remoteInterface;
+(id)connectionToDaemon;
-(void)dealloc;
-(id<SRSensorPrunerDelegate>)delegate;
-(void)setDelegate:(id<SRSensorPrunerDelegate>)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(SRDevice *)device;
-(void)setDevice:(SRDevice *)arg1 ;
-(void)setupConnection;
-(SRDatastore *)datastore;
-(void)daemonNotificationDaemonDidStart:(id)arg1 ;
-(void)resetDatastoreFiles:(id)arg1 ;
-(void)removeAllSamplesForAllSensors;
-(id)initWithSensor:(id)arg1 xpcConnection:(id)arg2 daemonNotification:(id)arg3 device:(id)arg4 ;
-(void)setSensor:(NSString *)arg1 ;
-(void)setConnectionDidInterrupt:(char)arg1 ;
-(void)setNextDatastoreFiles:(NSDictionary *)arg1 ;
-(void)setConnectionDidInvalidate:(char)arg1 ;
-(char)connectionDidInterrupt;
-(char)connectionDidInvalidate;
-(NSString *)sensor;
-(NSDictionary *)nextDatastoreFiles;
-(void)continuePruneFrom:(double)arg1 to:(double)arg2 withDatastoreFiles:(id)arg3 ;
-(void)registerWithDaemonIfNeededWithReply:(/*^block*/id)arg1 ;
-(void)removeSamplesFrom:(double)arg1 to:(double)arg2 inSegment:(id)arg3 ;
-(id)initWithSensor:(id)arg1 device:(id)arg2 ;
-(void)removeSamplesFrom:(double)arg1 to:(double)arg2 ;
-(void)removeAllSamples;
@end

