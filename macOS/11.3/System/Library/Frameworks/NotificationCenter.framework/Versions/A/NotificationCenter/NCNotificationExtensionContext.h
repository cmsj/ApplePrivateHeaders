/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/Versions/A/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/NCRemoteViewExtensionContextProtocol.h>

@class NSUserNotification, NSString;

@interface NCNotificationExtensionContext : NSExtensionContext <NCRemoteViewExtensionContextProtocol> {

	id _delegate;
	NSUserNotification* _notification;

}

@property (readonly) NSUserNotification * notification;              //@synthesize notification=_notification - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
+(id)hostInterface;
+(id)serviceInterface;
-(char)conformsToProtocol:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(NSUserNotification *)notification;
-(void)setNotification:(NSUserNotification *)arg1 ;
-(void)closeNotificationWithActivation:(long long)arg1 actionIdentifier:(id)arg2 ;
@end

