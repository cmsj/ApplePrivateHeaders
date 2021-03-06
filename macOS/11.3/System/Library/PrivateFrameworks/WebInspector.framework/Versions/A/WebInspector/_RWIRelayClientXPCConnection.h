/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/Versions/A/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/_RWIRelayClientConnection.h>

@protocol OS_xpc_object;
@class NSObject;

@interface _RWIRelayClientXPCConnection : _RWIRelayClientConnection {

	NSObject*<OS_xpc_object> _connection;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
+(id)connectionFromXPCConnection:(id)arg1 delegate:(id)arg2 ;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)sendMessage:(id)arg1 ;
-(void)startListening;
-(void)closeInternal;
-(id)initWithXPCConnection:(id)arg1 delegate:(id)arg2 ;
-(void)_handleXPCEvent:(id)arg1 ;
@end

