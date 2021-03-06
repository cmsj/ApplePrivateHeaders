/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/Versions/A/AdPlatformsCommon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AdPlatformsCommon/AdPlatformsCommon-Structs.h>
@class NSString, NSXPCConnection;

@interface APXPCConnection : NSObject {

	NSString* _bundleID;
	NSString* _appVersion;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSString * bundleID;                       //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * appVersion;                     //@synthesize appVersion=_appVersion - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) int processIdentifier; 
-(void)invalidate;
-(NSXPCConnection *)connection;
-(id)initWithConnection:(id)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSString *)bundleID;
-(int)processIdentifier;
-(SCD_Struct_AP4)auditToken;
-(id)remoteObjectProxy;
-(char)hasEntitlement:(id)arg1 ;
-(NSString *)appVersion;
-(void)setAppVersion:(NSString *)arg1 ;
@end

