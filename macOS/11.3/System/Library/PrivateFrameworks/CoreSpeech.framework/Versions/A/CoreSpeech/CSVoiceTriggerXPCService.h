/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSVoiceTriggerXPCClientDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CSVoiceTriggerXPCClient, NSString;

@interface CSVoiceTriggerXPCService : NSObject <CSVoiceTriggerXPCClientDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	CSVoiceTriggerXPCClient* _xpcClient;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerXPCClient * xpcClient;              //@synthesize xpcClient=_xpcClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedService;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_teardownXPCClientIfNeeded;
-(CSVoiceTriggerXPCClient *)xpcClient;
-(void)setXpcClient:(CSVoiceTriggerXPCClient *)arg1 ;
-(id)_createXPCClientConnectionIfNeeded:(id)arg1 ;
-(void)enableVoiceTrigger:(char)arg1 withAssertion:(id)arg2 xpcClient:(id)arg3 ;
-(void)setPhraseSpotterBypassing:(char)arg1 timeout:(double)arg2 ;
-(void)setPhraseSpotterBypassing:(char)arg1 timeout:(double)arg2 xpcClient:(id)arg3 ;
-(void)setRaiseToSpeakBypassing:(char)arg1 timeout:(double)arg2 ;
-(void)setRaiseToSpeakBypassing:(char)arg1 timeout:(double)arg2 xpcClient:(id)arg3 ;
-(void)notifyVoiceTriggeredSiriSessionCancelled;
-(void)notifyVoiceTriggeredSiriSessionCancelledWithXpcClient:(id)arg1 ;
-(void)voiceTriggerXPCClient:(id)arg1 didDisconnect:(char)arg2 ;
-(void)enableVoiceTrigger:(char)arg1 withAssertion:(id)arg2 ;
-(id)fetchVoiceTriggerDailyStats;
@end

