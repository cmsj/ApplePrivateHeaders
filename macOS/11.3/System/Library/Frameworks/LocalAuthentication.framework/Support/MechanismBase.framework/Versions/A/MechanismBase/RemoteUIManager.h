/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismBase.framework/Versions/A/MechanismBase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LARemoteUIHost.h>

@protocol LAUIMechanismLARemoteUIHost;
@class MechanismBase, NSXPCConnection;

@interface RemoteUIManager : NSObject <LARemoteUIHost> {

	MechanismBase*<LAUIMechanism>*<LARemoteUIHost> _uiMechanism;
	/*^block*/id _pendingShowUiReply;
	/*^block*/id _pendingUiActivationBlock;
	id _pendingUiMechanism;
	id _dismissingUi;
	char _uiDismissedBeforeConnection;
	int _showUiCounter;
	int _dismissUiCounter;
	NSXPCConnection* _agentConnection;

}
+(id)sharedInstance;
-(void)_assignPendingMechanism:(id)arg1 reply:(/*^block*/id)arg2 ;
-(char)_activatePlatformUIWithParams:(id)arg1 ;
-(void)_setupUiActivationTimeout;
-(void)_activateUi;
-(id)_connectToUIAgent:(id)arg1 ;
-(void)_replyOnceToShowUi:(char)arg1 error:(id)arg2 ;
-(void)showUIWithParams:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)prepareForRemoteViewControllerWithMechanism:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)dismissRemoteUI:(id)arg1 uiMechanism:(id)arg2 uiDisappeared:(char)arg3 reply:(/*^block*/id)arg4 ;
-(void)connectRemoteUI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)disconnectRemoteUI;
-(void)connectionToViewServiceInvalidated;
@end

