/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SFClient, SFService, SFSession, SFDeviceOperationHandlerCDPSetup, SFDeviceOperationHandlerWiFiSetup, NSObject;

@interface SFDeviceSetupAppleTVService : NSObject {

	char _activateCalled;
	char _advertiseFast;
	char _invalidateCalled;
	SFClient* _preventExitForLocaleClient;
	SFService* _sfService;
	SFSession* _sfSession;
	SFDeviceOperationHandlerCDPSetup* _cdpSetupHandler;
	SFDeviceOperationHandlerWiFiSetup* _wifiSetupHandler;
	char _prefCDPEnabled;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _progressHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id progressHandler;                                        //@synthesize progressHandler=_progressHandler - In the implementation block
-(void)_handleSessionStarted:(id)arg1 ;
-(void)_sfServiceStart;
-(void)_handleSessionEnded:(id)arg1 ;
-(void)_handleFinishRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handlePreAuthRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handleBasicConfigRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_reportProgress:(unsigned)arg1 info:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)_activate;
-(void)invalidate;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(void)_cleanup;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setProgressHandler:(id)arg1 ;
-(id)progressHandler;
@end
