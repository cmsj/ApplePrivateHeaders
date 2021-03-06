/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CallKit.framework/Versions/A/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <libobjc.A.dylib/CXNetworkExtensionMessageControllerDataSource.h>

@class NSXPCConnection, NSString;

@interface CXNetworkExtensionMessageControllerXPCClient : NSObject <CXNetworkExtensionMessageControllerDataSource> {

	os_unfair_lock_s _accessorLock;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) os_unfair_lock_s accessorLock;              //@synthesize accessorLock=_accessorLock - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                 //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(os_unfair_lock_s)accessorLock;
-(void)sendNetworkExtensionMessage:(id)arg1 forBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

