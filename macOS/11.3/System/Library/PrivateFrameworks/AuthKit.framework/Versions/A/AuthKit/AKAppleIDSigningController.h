/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/Versions/A/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AuthKit/AuthKit-Structs.h>
@class NSObject, NSXPCListenerEndpoint, NSXPCConnection, AKAppleIDAuthenticationController;

@interface AKAppleIDSigningController : NSObject {

	os_unfair_lock_s _signerLock;
	NSObject*<OS_dispatch_queue> _signingQueue;
	NSXPCListenerEndpoint* _listenerEndpoint;
	NSXPCConnection* _connection;
	char _isProxy;
	AKAppleIDAuthenticationController* _authenticationController;

}

@property (nonatomic,retain) AKAppleIDAuthenticationController * authenticationController;              //@synthesize authenticationController=_authenticationController - In the implementation block
@property (assign,nonatomic) char isProxy;                                                              //@synthesize isProxy=_isProxy - In the implementation block
-(id)initWithDaemonXPCEndpoint:(id)arg1 ;
-(void)_additionalAbsintheHeadersForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_additionalAttestationHeadersForRequest:(id)arg1 withInterval:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(char)isProxy;
-(id)init;
-(id)_connection;
-(AKAppleIDAuthenticationController *)authenticationController;
-(void)_connectionInterrupted;
-(void)_connectionInvalidated;
-(void)setAuthenticationController:(AKAppleIDAuthenticationController *)arg1 ;
-(void)setIsProxy:(char)arg1 ;
-(void)signingHeadersForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)signaturesForData:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)absintheSignatureForData:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

