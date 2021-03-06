/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VCSessionDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface VCSessionManager : NSObject <VCSessionDelegate> {

	NSMutableDictionary* _sessions;
	NSObject*<OS_dispatch_queue> _xpcCommandQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * sessions;              //@synthesize sessions=_sessions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)addNSError:(id)arg1 toXPCArgumentDictionary:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(NSMutableDictionary *)sessions;
-(void)registerBlocksForService;
-(void)deregisterBlocksForService;
-(id)participantConfigFromXPCDictionary:(id)arg1 ;
-(void)vcSession:(id)arg1 didStart:(char)arg2 error:(id)arg3 ;
-(void)vcSession:(id)arg1 didStopWithError:(id)arg2 ;
-(void)vcSession:(id)arg1 addParticipantWithID:(id)arg2 didSucceed:(char)arg3 error:(id)arg4 ;
-(void)vcSession:(id)arg1 removeParticipantWithID:(id)arg2 didSucceed:(char)arg3 error:(id)arg4 ;
-(void)vcSession:(id)arg1 updateConfiguration:(id)arg2 didSucceed:(char)arg3 error:(id)arg4 ;
-(void)vcSession:(id)arg1 participantID:(id)arg2 audioEnabled:(char)arg3 didSucceed:(char)arg4 error:(id)arg5 ;
-(void)vcSession:(id)arg1 participantID:(id)arg2 videoEnabled:(char)arg3 didSucceed:(char)arg4 error:(id)arg5 ;
-(void)vcSession:(id)arg1 participantID:(id)arg2 remoteAudioEnabledDidChange:(char)arg3 ;
-(void)vcSession:(id)arg1 participantID:(id)arg2 remoteVideoEnabledDidChange:(char)arg3 ;
-(void)vcSession:(id)arg1 participantID:(id)arg2 audioPaused:(char)arg3 didSucceed:(char)arg4 error:(id)arg5 ;
-(void)vcSession:(id)arg1 participantID:(id)arg2 videoPaused:(char)arg3 didSucceed:(char)arg4 error:(id)arg5 ;
-(void)vcSession:(id)arg1 participantID:(id)arg2 remoteAudioPausedDidChange:(char)arg3 ;
-(void)vcSession:(id)arg1 participantID:(id)arg2 remoteVideoPausedDidChange:(char)arg3 ;
-(void)vcSession:(id)arg1 participantID:(id)arg2 didChangeMediaPriority:(unsigned char)arg3 description:(id)arg4 ;
-(void)vcSession:(id)arg1 participantID:(id)arg2 didDetectError:(id)arg3 ;
-(void)vcSession:(id)arg1 participantID:(id)arg2 spatialAudioSourceIDDidChange:(unsigned long long)arg3 ;
-(id)sessionForUUID:(id)arg1 ;
-(id)sessionForStreamToken:(unsigned)arg1 ;
@end

