/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CallKit.framework/Versions/A/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/CXNotificationServiceExtensionHostDelegate.h>
#import <libobjc.A.dylib/CXNotificationServiceExtensionVoIPXPC.h>

@protocol CXNotificationServiceExtensionHostDelegate;
@class NSXPCListener, NSString;

@interface CXNotificationServiceExtensionVoIPXPCHost : NSObject <NSXPCListenerDelegate, CXNotificationServiceExtensionHostDelegate, CXNotificationServiceExtensionVoIPXPC> {

	NSXPCListener* _xpcListener;
	id<CXNotificationServiceExtensionHostDelegate> _delegate;

}

@property (nonatomic,readonly) NSXPCListener * xpcListener;                                               //@synthesize xpcListener=_xpcListener - In the implementation block
@property (assign,nonatomic,__weak) id<CXNotificationServiceExtensionHostDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CXNotificationServiceExtensionHostDelegate>)delegate;
-(void)setDelegate:(id<CXNotificationServiceExtensionHostDelegate>)arg1 ;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(NSXPCListener *)xpcListener;
-(void)notificationServiceExtension:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)notificationServiceExtensionHost:(id)arg1 didReceiveIncomingMessage:(id)arg2 forBundleIdentifier:(id)arg3 reply:(/*^block*/id)arg4 ;
@end

