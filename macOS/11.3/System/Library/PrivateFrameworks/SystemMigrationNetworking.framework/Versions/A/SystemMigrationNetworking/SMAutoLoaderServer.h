/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigrationNetworking.framework/Versions/A/SystemMigrationNetworking
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SMNNetworkSessionDelegateProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSString, NSMutableDictionary, NSObject, NSURL, SMNNetworkSession;

@interface SMAutoLoaderServer : NSObject <SMNNetworkSessionDelegateProtocol> {

	char _networkServerShouldBeUp;
	NSString* _secretPassword;
	/*^block*/id _statusUpdateBlock;
	NSMutableDictionary* _txtRecord;
	NSObject*<OS_dispatch_queue> _requestQueue;
	NSURL* _systemPath;
	NSObject*<OS_dispatch_source> _batteryLogSource;
	SMNNetworkSession* _session;

}

@property (retain) NSMutableDictionary * txtRecord;                             //@synthesize txtRecord=_txtRecord - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> requestQueue;                   //@synthesize requestQueue=_requestQueue - In the implementation block
@property (assign) char networkServerShouldBeUp;                                //@synthesize networkServerShouldBeUp=_networkServerShouldBeUp - In the implementation block
@property (retain) NSURL * systemPath;                                          //@synthesize systemPath=_systemPath - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> batteryLogSource;              //@synthesize batteryLogSource=_batteryLogSource - In the implementation block
@property (retain) SMNNetworkSession * session;                                 //@synthesize session=_session - In the implementation block
@property (retain) NSString * secretPassword;                                   //@synthesize secretPassword=_secretPassword - In the implementation block
@property (copy) id statusUpdateBlock;                                          //@synthesize statusUpdateBlock=_statusUpdateBlock - In the implementation block
+(char)canGenerateValidTXTRecordForSourcePath:(id)arg1 ;
+(id)sha256hashString:(id)arg1 withSalt:(id)arg2 ;
+(id)supportedCommandIDs;
-(id)initWithName:(id)arg1 ;
-(void)start;
-(void)stop;
-(SMNNetworkSession *)session;
-(NSMutableDictionary *)txtRecord;
-(void)setTxtRecord:(NSMutableDictionary *)arg1 ;
-(void)setSession:(SMNNetworkSession *)arg1 ;
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(void)setRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)statusUpdateBlock;
-(void)setStatusUpdateBlock:(id)arg1 ;
-(id)initWithName:(id)arg1 usingSourcePath:(id)arg2 ;
-(void)setSecretPassword:(NSString *)arg1 ;
-(void)setBatteryLogSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)batteryLogSource;
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
-(id)localCertificates;
-(char)shouldAcceptPeerCertificates:(id)arg1 ;
-(NSURL *)systemPath;
-(void)setSystemPath:(NSURL *)arg1 ;
-(id)initWithName:(id)arg1 usingSourcePath:(id)arg2 type:(id)arg3 usingSSL:(char)arg4 ;
-(char)networkServerShouldBeUp;
-(void)generateTXTRecord;
-(void)setNetworkServerShouldBeUp:(char)arg1 ;
-(id)actionFromStream:(id)arg1 ;
-(void)handleAction:(id)arg1 fromStream:(id)arg2 ;
@end
