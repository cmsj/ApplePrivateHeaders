/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/Versions/A/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPBaseTracker.h>

@interface VCPCtrTracker : NSObject <VCPBaseTracker> {

	CGPoint* P;
	SCD_Struct_VC67* context;
	BOOL stable;
	BOOL lostTrack;
	float _confidence;

}

@property (assign) CGPoint* box; 
@property (assign) BOOL stableInd; 
@property (assign) BOOL lostTrackInd; 
@property (assign) float confidence;               //@synthesize confidence=_confidence - In the implementation block
-(void)dealloc;
-(id)init;
-(float)confidence;
-(void)setConfidence:(float)arg1 ;
-(CGPoint*)box;
-(void)setBox:(CGPoint*)arg1 ;
-(void)setupTrackerWithReferenceFrame:(CVBufferRef)arg1 withROI:(CGPoint*)arg2 ;
-(void)trackInFrame:(CVBufferRef)arg1 ;
-(BOOL)lostTrackInd;
-(BOOL)stableInd;
-(void)setStableInd:(BOOL)arg1 ;
-(void)setLostTrackInd:(BOOL)arg1 ;
@end

