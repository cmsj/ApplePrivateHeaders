/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/Versions/A/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DPDaemonProtocol.h>

@class NSXPCConnection;

@interface _DPDaemonConnection : NSObject <_DPDaemonProtocol> {

	NSXPCConnection* _daemonConnection;

}

@property (nonatomic,readonly) NSXPCConnection * daemonConnection;              //@synthesize daemonConnection=_daemonConnection - In the implementation block
+(id)daemonConnection;
+(id)daemonAgentConnection;
-(void)dealloc;
-(id)init;
-(id)initWithServiceName:(id)arg1 options:(unsigned long long)arg2 ;
-(NSXPCConnection *)daemonConnection;
-(void)recordNumbers:(id)arg1 forKey:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)recordBitValues:(id)arg1 forKey:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)recordBitValues:(id)arg1 metadata:(id)arg2 forKey:(id)arg3 withReply:(/*^block*/id)arg4 ;
-(void)recordBitVectors:(id)arg1 forKey:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)recordBitVectors:(id)arg1 metadata:(id)arg2 forKey:(id)arg3 withReply:(/*^block*/id)arg4 ;
-(void)recordStrings:(id)arg1 forKey:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)recordStrings:(id)arg1 metadata:(id)arg2 forKey:(id)arg3 withReply:(/*^block*/id)arg4 ;
-(void)recordWords:(id)arg1 forKey:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)reportsNotYetSubmittedWithReply:(/*^block*/id)arg1 ;
-(void)retireReports:(id)arg1 withReply:(/*^block*/id)arg2 ;
@end
