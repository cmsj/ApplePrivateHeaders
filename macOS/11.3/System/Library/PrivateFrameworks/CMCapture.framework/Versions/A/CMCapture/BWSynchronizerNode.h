/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@interface BWSynchronizerNode : BWNode {

	OpaqueCMClockRef _sourceClock;
	OpaqueCMClockRef _masterClock;
	SCD_Struct_BW34 _ptsSyncHistory[16];
	int _oldestPTSSyncHistoryElement;
	int _newestPTSSyncHistoryElement;
	OpaqueCMClockRef _hostTimeClock;

}
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(OpaqueCMClockRef)masterClock;
-(void)setMasterClock:(OpaqueCMClockRef)arg1 ;
-(id)initWithMediaType:(unsigned)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(id)nodeSubType;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)setSourceClock:(OpaqueCMClockRef)arg1 ;
-(opaqueCMSampleBufferRef)_newRetimedVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 updatePTSSyncHistory:(char)arg2 ;
-(SCD_Struct_Fi8)_getSyncedTimeForSourceTime:(SCD_Struct_Fi8)arg1 attachedHostTime:(id)arg2 ;
-(void)_updatePTSSyncHistoryWithSourceTime:(SCD_Struct_Fi8)arg1 syncedTime:(SCD_Struct_Fi8)arg2 ;
-(void)_synchronizeDetectedFaces:(id)arg1 metadata:(id)arg2 timescale:(int)arg3 attachedHostTime:(id)arg4 ;
-(OpaqueCMClockRef)sourceClock;
@end

