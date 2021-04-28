/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SetupKit.framework/Versions/A/SetupKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupKit/SetupKit-Structs.h>
#import <libobjc.A.dylib/CUActivatable.h>
#import <libobjc.A.dylib/CUAuthenticatableServer.h>
#import <libobjc.A.dylib/CULabelable.h>
#import <libobjc.A.dylib/CUMessaging.h>

@protocol OS_dispatch_queue;
@class SKConnection, CUBLEServer, NSString, CUNANPublisher, NSMutableDictionary, SKStepWiFiSetupServer, NSObject;

@interface SKSetupServer : NSObject <CUActivatable, CUAuthenticatableServer, CULabelable, CUMessaging> {

	char _activateCalled;
	SKConnection* _activeCnx;
	CUBLEServer* _bleServer;
	char _invalidateCalled;
	char _invalidateDone;
	NSString* _nanEndpointID;
	CUNANPublisher* _nanPublisher;
	NSMutableDictionary* _registeredEvents;
	SKStepWiFiSetupServer* _stepWiFiSetup;
	LogCategory* _ucat;
	int _passwordType;
	unsigned _controlFlags;
	/*^block*/id _authCompletionHandler;
	/*^block*/id _authHidePasswordHandler;
	/*^block*/id _authShowPasswordHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	NSString* _password;
	/*^block*/id _overallCompletionHandler;

}

@property (assign,nonatomic) unsigned controlFlags;                                   //@synthesize controlFlags=_controlFlags - In the implementation block
@property (nonatomic,copy) id overallCompletionHandler;                               //@synthesize overallCompletionHandler=_overallCompletionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id authCompletionHandler;                                  //@synthesize authCompletionHandler=_authCompletionHandler - In the implementation block
@property (nonatomic,copy) id authHidePasswordHandler;                                //@synthesize authHidePasswordHandler=_authHidePasswordHandler - In the implementation block
@property (nonatomic,copy) id authShowPasswordHandler;                                //@synthesize authShowPasswordHandler=_authShowPasswordHandler - In the implementation block
@property (nonatomic,copy) NSString * password;                                       //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) int passwordType;                                        //@synthesize passwordType=_passwordType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
-(id)authHidePasswordHandler;
-(void)setAuthHidePasswordHandler:(id)arg1 ;
-(id)authShowPasswordHandler;
-(void)setAuthShowPasswordHandler:(id)arg1 ;
-(void)registerEventID:(id)arg1 options:(id)arg2 eventHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)deregisterEventID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendEventID:(id)arg1 eventMessage:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)registerRequestID:(id)arg1 options:(id)arg2 requestHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)deregisterRequestID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendRequestID:(id)arg1 requestMessage:(id)arg2 options:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)setOverallCompletionHandler:(id)arg1 ;
-(void)_activateBLE;
-(void)_activateNAN;
-(void)_handleAcceptBLEConnection:(id)arg1 ;
-(void)_handleAcceptNANData:(id)arg1 endpoint:(id)arg2 ;
-(void)_handleAcceptCommon:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(void)invalidate;
-(NSString *)password;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(id)invalidationHandler;
-(void)_invalidated;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned)controlFlags;
-(void)setControlFlags:(unsigned)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(int)passwordType;
-(void)setPasswordType:(int)arg1 ;
-(id)authCompletionHandler;
-(void)setAuthCompletionHandler:(id)arg1 ;
-(void)_receivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3 ;
-(id)overallCompletionHandler;
@end
