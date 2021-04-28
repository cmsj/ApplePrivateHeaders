/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/Versions/A/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSXPCConnection;

@interface TKSmartCardSessionRequest : NSObject {

	NSDictionary* _parameters;
	/*^block*/id _reply;
	NSXPCConnection* _connection;

}

@property (retain) NSDictionary * parameters;                 //@synthesize parameters=_parameters - In the implementation block
@property (copy) id reply;                                    //@synthesize reply=_reply - In the implementation block
@property (__weak) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(id)reply;
-(void)setReply:(id)arg1 ;
@end
