/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/Versions/A/AppSSO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ViewBridge/NSServiceViewController.h>
#import <libobjc.A.dylib/SORemoteExtensionViewProtocol.h>

@class NSWindow, SORemoteExtensionContext, NSString;

@interface SOExtensionViewService : NSServiceViewController <SORemoteExtensionViewProtocol> {

	NSWindow* _window;
	SORemoteExtensionContext* _extensionContext;

}

@property (__weak) SORemoteExtensionContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)invalidate;
-(id)exportedInterface;
-(SORemoteExtensionContext *)extensionContext;
-(void)loadView;
-(void)connectToContextWithSessionID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setExtensionContext:(SORemoteExtensionContext *)arg1 ;
-(void)_connectChildView;
-(id)remoteViewControllerInterface;
@end

