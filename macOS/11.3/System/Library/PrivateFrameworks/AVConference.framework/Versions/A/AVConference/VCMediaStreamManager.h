/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCMediaStreamDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSMutableDictionary, NSString;

@interface VCMediaStreamManager : NSObject <VCMediaStreamDelegate> {

	opaque_pthread_mutex_t stateLock;
	NSMutableArray* streamArray;
	NSObject*<OS_dispatch_queue> xpcQueue;
	NSMutableDictionary* _vcMomentsCollectorDictionary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultManager;
+(void)addNSError:(id)arg1 toXPCArgumentDictionary:(id)arg2 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(id)autorelease;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)allocWithZone:(NSZone*)arg1 ;
-(void)registerBlocksForService;
-(void)deregisterBlocksForService;
-(void)vcMediaStream:(id)arg1 updateFrequencyLevel:(id)arg2 isInputMeter:(char)arg3 ;
-(void)vcMediaStreamDidInterruptionBegin:(id)arg1 ;
-(void)vcMediaStreamDidInterruptionEnd:(id)arg1 ;
-(id)textStreamWithStreamToken:(long long)arg1 ;
-(void)vcMediaStream:(id)arg1 didStartStream:(char)arg2 error:(id)arg3 ;
-(void)vcMediaStreamDidStop:(id)arg1 ;
-(void)vcMediaStream:(id)arg1 didPauseStream:(char)arg2 error:(id)arg3 ;
-(void)vcMediaStream:(id)arg1 didResumeStream:(char)arg2 error:(id)arg3 ;
-(void)vcMediaStreamDidRTPTimeOut:(id)arg1 ;
-(void)vcMediaStreamDidRTCPTimeOut:(id)arg1 ;
-(void)vcMediaStream:(id)arg1 didReceiveRTCPPackets:(id)arg2 ;
-(void)vcMediaStream:(id)arg1 didReceiveDTMFEventWithDigit:(char)arg2 ;
-(void)vcMediaStream:(id)arg1 didReceiveTTYCharacter:(unsigned short)arg2 ;
-(void)vcMediaStream:(id)arg1 didReceiveText:(id)arg2 ;
-(void)vcMediaStream:(id)arg1 downlinkQualityDidChange:(id)arg2 ;
-(void)vcMediaStream:(id)arg1 uplinkQualityDidChange:(id)arg2 ;
-(void)vcMediaStream:(id)arg1 didUpdateVideoConfiguration:(char)arg2 error:(id)arg3 dictionary:(id)arg4 ;
-(void)pauseStreams:(char)arg1 ;
@end

