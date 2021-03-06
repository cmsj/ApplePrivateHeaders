/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/NEExtensionProviderProtocol.h>
#import <libobjc.A.dylib/NEExtensionProviderHostProtocol.h>

@protocol NEExtensionProviderProtocol, NEExtensionProviderHostDelegate;
@class NSString, NEUserNotification, NEProcessIdentity, NSXPCConnection;

@interface NEExtensionProviderHostContext : NSExtensionContext <NEExtensionProviderProtocol, NEExtensionProviderHostProtocol> {

	id<NEExtensionProviderProtocol> _vendorContext;
	NSString* _description;
	NEUserNotification* _notification;
	char _stopped;
	char _isHostingSystemExtension;
	id<NEExtensionProviderHostDelegate> _delegate;
	NEProcessIdentity* _extensionProcessIdentity;
	NSXPCConnection* _vendorConnection;

}

@property (assign,nonatomic) char stopped;                                                //@synthesize stopped=_stopped - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * vendorConnection;                        //@synthesize vendorConnection=_vendorConnection - In the implementation block
@property (nonatomic,readonly) char isHostingSystemExtension;                             //@synthesize isHostingSystemExtension=_isHostingSystemExtension - In the implementation block
@property (__weak) id<NEExtensionProviderHostDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) int requiredEntitlement; 
@property (nonatomic,readonly) NEProcessIdentity * extensionProcessIdentity;              //@synthesize extensionProcessIdentity=_extensionProcessIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)createWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2 ;
-(void)startedWithError:(id)arg1 ;
-(void)displayMessage:(id)arg1 message:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NEProcessIdentity *)extensionProcessIdentity;
-(NSXPCConnection *)vendorConnection;
-(id)copyValueForEntitlement:(id)arg1 ;
-(char)isHostingSystemExtension;
-(char)isSignedWithDeveloperID;
-(id)initWithVendorEndpoint:(id)arg1 processIdentity:(id)arg2 delegate:(id)arg3 ;
-(char)deriveProcessIdentity;
-(NSString *)description;
-(id<NEExtensionProviderHostDelegate>)delegate;
-(void)setDelegate:(id<NEExtensionProviderHostDelegate>)arg1 ;
-(char)stopped;
-(void)dispose;
-(int)requiredEntitlement;
-(void)setDescription:(NSString *)arg1 ;
-(void)setStopped:(char)arg1 ;
-(void)wake;
-(id)vendorContext;
-(void)startWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)validateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)sleepWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopWithReason:(int)arg1 ;
@end

