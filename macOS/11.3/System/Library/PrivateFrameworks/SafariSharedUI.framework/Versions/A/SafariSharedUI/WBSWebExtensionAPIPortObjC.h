/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <SafariSharedUI/WBSWebExtensionAPIObject.h>
#import <libobjc.A.dylib/WBSTranslateToJSValue.h>

@class NSUUID, WKWebProcessPlugInBrowserContextController, WBSWebExtensionAPIEventObjC, NSString, NSDictionary;

@interface WBSWebExtensionAPIPortObjC : WBSWebExtensionAPIObject <WBSTranslateToJSValue> {

	NSUUID* _identifier;
	WKWebProcessPlugInBrowserContextController* _browserContextController;
	WBSWebExtensionAPIEventObjC* _onDisconnect;
	WBSWebExtensionAPIEventObjC* _onMessage;
	char _isDisconnected;
	NSString* _name;
	NSDictionary* _sender;

}

@property (nonatomic,readonly) WBSWebExtensionAPIPort* cpp; 
@property (nonatomic,readonly) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) WBSWebExtensionAPIEventObjC * onDisconnect; 
@property (nonatomic,readonly) WBSWebExtensionAPIEventObjC * onMessage; 
@property (nonatomic,readonly) NSDictionary * sender;                                   //@synthesize sender=_sender - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)name;
-(void)disconnect;
-(NSDictionary *)sender;
-(OpaqueJSValueRef)translateToJSValueWithJSContext:(OpaqueJSContextRef)arg1 ;
-(WBSWebExtensionAPIPort*)cpp;
-(char)isPropertyAllowed:(id)arg1 ;
-(id)_messageReceiver;
-(void)_initWithBrowserContextController:(id)arg1 extensionIdentifier:(id)arg2 runtime:(id)arg3 isForMainWorld:(char)arg4 targetExtensionID:(id)arg5 connectInfo:(id)arg6 rawSenderInfo:(id)arg7 ;
-(void)_initWithBrowserContextController:(id)arg1 extensionIdentifier:(id)arg2 runtime:(id)arg3 isForMainWorld:(char)arg4 targetTabID:(double)arg5 connectInfo:(id)arg6 rawSenderInfo:(id)arg7 ;
-(void)_initWithBrowserContextController:(id)arg1 extensionIdentifier:(id)arg2 runtime:(id)arg3 isForMainWorld:(char)arg4 portIdentifier:(id)arg5 connectInfo:(id)arg6 sender:(id)arg7 ;
-(void)_initWithBrowserContextController:(id)arg1 extensionIdentifier:(id)arg2 runtime:(id)arg3 applicationIdentifier:(id)arg4 ;
-(void)disconnectionRequestReceived;
-(WBSWebExtensionAPIEventObjC *)onDisconnect;
-(WBSWebExtensionAPIEventObjC *)onMessage;
-(void)postMessage:(id)arg1 outExceptionString:(id*)arg2 ;
@end

