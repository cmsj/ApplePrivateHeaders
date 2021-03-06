/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CallKit.framework/Versions/A/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CXVoicemailSource.h>

@class NSString, NSURL, NSXPCConnection, NSSet;

@interface CXXPCVoicemailSource : CXVoicemailSource {

	NSString* _bundleIdentifier;
	NSURL* _bundleURL;
	NSXPCConnection* _connection;
	NSString* _applicationIdentifier;
	NSSet* _capabilities;

}

@property (nonatomic,retain) NSXPCConnection * connection;                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * bundleURL;                           //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,copy) NSSet * capabilities;                          //@synthesize capabilities=_capabilities - In the implementation block
-(void)dealloc;
-(id)init;
-(NSXPCConnection *)connection;
-(id)initWithConnection:(id)arg1 ;
-(id)identifier;
-(void)setBundleURL:(NSURL *)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSURL *)bundleURL;
-(NSString *)bundleIdentifier;
-(int)processIdentifier;
-(NSString *)applicationIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(char)isConnected;
-(NSSet *)capabilities;
-(void)setCapabilities:(NSSet *)arg1 ;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(id)vendorProtocolDelegate;
-(char)isPermittedToUsePrivateAPI;
@end

