/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SFSession, NSDate, NSObject, NSString, SFDevice;

@interface SFPasswordSharingSession : NSObject {

	char _activateCalled;
	char _invalidateCalled;
	int _pairState;
	int _passwordShareState;
	SFSession* _sfSession;
	int _sfSessionState;
	NSDate* _shareClock;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _deviceName;
	NSString* _hashedEmail;
	NSString* _hashedPhone;
	NSString* _hotspotPSK;
	SFDevice* _peerDevice;
	/*^block*/id _progressHandler;
	/*^block*/id _promptForPINHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSString * deviceName;                                   //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) NSString * hashedEmail;                                  //@synthesize hashedEmail=_hashedEmail - In the implementation block
@property (nonatomic,retain) NSString * hashedPhone;                                  //@synthesize hashedPhone=_hashedPhone - In the implementation block
@property (nonatomic,retain) NSString * hotspotPSK;                                   //@synthesize hotspotPSK=_hotspotPSK - In the implementation block
@property (nonatomic,retain) SFDevice * peerDevice;                                   //@synthesize peerDevice=_peerDevice - In the implementation block
@property (nonatomic,copy) id progressHandler;                                        //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id promptForPINHandler;                                    //@synthesize promptForPINHandler=_promptForPINHandler - In the implementation block
-(int)_runSFSessionStart;
-(int)_runPair;
-(int)_runPasswordShare;
-(void)_receivedObject:(id)arg1 flags:(unsigned)arg2 ;
-(void)_runPasswordShareSendInfo;
-(void)_runPasswordShareReceiveResponse:(id)arg1 ;
-(NSString *)hashedEmail;
-(NSString *)hashedPhone;
-(NSString *)hotspotPSK;
-(void)setHotspotPSK:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(void)_cleanup;
-(NSString *)deviceName;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setProgressHandler:(id)arg1 ;
-(id)progressHandler;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)_run;
-(SFDevice *)peerDevice;
-(id)promptForPINHandler;
-(void)setPeerDevice:(SFDevice *)arg1 ;
-(void)setPromptForPINHandler:(id)arg1 ;
-(void)tryPIN:(id)arg1 ;
-(void)_completedWithError:(id)arg1 ;
-(void)setHashedEmail:(NSString *)arg1 ;
-(void)setHashedPhone:(NSString *)arg1 ;
@end

