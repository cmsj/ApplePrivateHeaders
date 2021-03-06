/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigrationNetworking.framework/Versions/A/SystemMigrationNetworking
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemMigrationNetworking/SystemMigrationNetworking-Structs.h>
#import <libobjc.A.dylib/SMNNetworkSessionDelegateProtocol.h>

@protocol OS_dispatch_queue;
@class NSString, SMNNetworkSession, NSMutableDictionary, NSObject;

@interface SMNNetworkMigrationBrowser : NSObject <SMNNetworkSessionDelegateProtocol> {

	char _useSSL;
	char _allowLocalNetworkServer;
	char _automaticallySeeksFastestConnection;
	NSString* secretPassword;
	/*^block*/id _systemAppearedBlock;
	/*^block*/id _systemDisappearedBlock;
	SMNNetworkSession* _session;
	SecIdentityRef _localIdentity;
	NSMutableDictionary* _serviceToTxtRecordMap;
	NSObject*<OS_dispatch_queue> _serviceMapQueue;

}

@property (copy) id systemAppearedBlock;                                      //@synthesize systemAppearedBlock=_systemAppearedBlock - In the implementation block
@property (copy) id systemDisappearedBlock;                                   //@synthesize systemDisappearedBlock=_systemDisappearedBlock - In the implementation block
@property (retain) SMNNetworkSession * session;                               //@synthesize session=_session - In the implementation block
@property (assign) SecIdentityRef localIdentity;                              //@synthesize localIdentity=_localIdentity - In the implementation block
@property (retain) NSMutableDictionary * serviceToTxtRecordMap;               //@synthesize serviceToTxtRecordMap=_serviceToTxtRecordMap - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> serviceMapQueue;              //@synthesize serviceMapQueue=_serviceMapQueue - In the implementation block
@property (assign) char useSSL;                                               //@synthesize useSSL=_useSSL - In the implementation block
@property (assign) char allowLocalNetworkServer;                              //@synthesize allowLocalNetworkServer=_allowLocalNetworkServer - In the implementation block
@property (assign) char automaticallySeeksFastestConnection;                  //@synthesize automaticallySeeksFastestConnection=_automaticallySeeksFastestConnection - In the implementation block
@property (retain) NSString * secretPassword; 
+(void)addLocalInstanceName:(id)arg1 ;
-(void)dealloc;
-(void)start;
-(void)stop;
-(SMNNetworkSession *)session;
-(void)setSession:(SMNNetworkSession *)arg1 ;
-(SecIdentityRef)localIdentity;
-(void)setUseSSL:(char)arg1 ;
-(char)useSSL;
-(void)setSecretPassword:(NSString *)arg1 ;
-(char)allowLocalNetworkServer;
-(void)setAllowLocalNetworkServer:(char)arg1 ;
-(id)initWithSystemAppearedBlock:(/*^block*/id)arg1 andSystemDisappearedBlock:(/*^block*/id)arg2 ;
-(void)session:(id)arg1 peerNamed:(id)arg2 updatedTxtRecord:(id)arg3 ;
-(char)session:(id)arg1 shouldAcceptPeerWithAddress:(id)arg2 ;
-(void)session:(id)arg1 discoveredPeerNamed:(id)arg2 ;
-(void)session:(id)arg1 peerDisappeared:(id)arg2 ;
-(void)session:(id)arg1 failedToResolvePeerNamed:(id)arg2 errorCode:(long long)arg3 ;
-(void)session:(id)arg1 resolvedPeerNamed:(id)arg2 txtRecord:(id)arg3 ;
-(void)session:(id)arg1 didFailConnectionToPeerNamed:(id)arg2 ;
-(void)sessionDetectedNetworkConfigurationChanged:(id)arg1 ;
-(void)sessionDeterminingFastestConnection:(id)arg1 ;
-(void)sessionHasFasterConnectionAvailable:(id)arg1 ;
-(void)session:(id)arg1 promotedNewConnectionToActive:(id)arg2 andResignedConnection:(id)arg3 ;
-(void)session:(id)arg1 finishedSamplingConnection:(id)arg2 ;
-(void)sessionIsActive:(id)arg1 ;
-(void)session:(id)arg1 newIncomingStream:(id)arg2 ;
-(void)session:(id)arg1 streamClosing:(id)arg2 ;
-(void)sessionInterrupted:(id)arg1 connection:(id)arg2 active:(char)arg3 didReplaceActiveConnection:(char)arg4 ;
-(void)session:(id)arg1 benchmarkedSoftAP:(double)arg2 infrastructureSample:(double)arg3 ;
-(NSString *)secretPassword;
-(char)automaticallySeeksFastestConnection;
-(void)setAutomaticallySeeksFastestConnection:(char)arg1 ;
-(void)setServiceToTxtRecordMap:(NSMutableDictionary *)arg1 ;
-(void)setServiceMapQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)serviceMapQueue;
-(NSMutableDictionary *)serviceToTxtRecordMap;
-(void)setSystemDisappearedBlock:(id)arg1 ;
-(id)systemDisappearedBlock;
-(void)setSystemAppearedBlock:(id)arg1 ;
-(void)setLocalIdentity:(SecIdentityRef)arg1 ;
-(void)startWithType:(id)arg1 ;
-(id)_decodedTxtRecordWithMyStringKeys:(id)arg1 ;
-(id)systemAppearedBlock;
-(void)sessionIsInterrupted:(id)arg1 ;
@end

