/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/Versions/A/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPImageDescriptor, VCPVideoKeyFrame;

@interface VCPMovieHighlight : NSObject {

	char _isAutoPlayable;
	char _isTrimmed;
	float _score;
	float _junkScore;
	float _qualityScore;
	float _expressionScore;
	float _actionScore;
	float _voiceScore;
	float _humanActionScore;
	float _humanPoseScore;
	VCPImageDescriptor* _descriptor;
	VCPVideoKeyFrame* _keyFrame;
	CGRect _bestPlaybackCrop;
	SCD_Struct_VC7 _timerange;

}

@property (assign,nonatomic) SCD_Struct_VC7 timerange;                     //@synthesize timerange=_timerange - In the implementation block
@property (assign,nonatomic) float score;                                  //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) float junkScore;                              //@synthesize junkScore=_junkScore - In the implementation block
@property (assign,nonatomic) float qualityScore;                           //@synthesize qualityScore=_qualityScore - In the implementation block
@property (assign,nonatomic) float expressionScore;                        //@synthesize expressionScore=_expressionScore - In the implementation block
@property (assign,nonatomic) float actionScore;                            //@synthesize actionScore=_actionScore - In the implementation block
@property (assign,nonatomic) float voiceScore;                             //@synthesize voiceScore=_voiceScore - In the implementation block
@property (assign,nonatomic) float humanActionScore;                       //@synthesize humanActionScore=_humanActionScore - In the implementation block
@property (assign,nonatomic) float humanPoseScore;                         //@synthesize humanPoseScore=_humanPoseScore - In the implementation block
@property (assign,nonatomic) CGRect bestPlaybackCrop;                      //@synthesize bestPlaybackCrop=_bestPlaybackCrop - In the implementation block
@property (assign,nonatomic) char isAutoPlayable;                          //@synthesize isAutoPlayable=_isAutoPlayable - In the implementation block
@property (assign,nonatomic) char isTrimmed;                               //@synthesize isTrimmed=_isTrimmed - In the implementation block
@property (nonatomic,retain) VCPImageDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) VCPVideoKeyFrame * keyFrame;                  //@synthesize keyFrame=_keyFrame - In the implementation block
-(VCPImageDescriptor *)descriptor;
-(void)setDescriptor:(VCPImageDescriptor *)arg1 ;
-(float)score;
-(void)setScore:(float)arg1 ;
-(float)actionScore;
-(void)setActionScore:(float)arg1 ;
-(id)initWithTimeRange:(SCD_Struct_VC7)arg1 ;
-(float)qualityScore;
-(void)setQualityScore:(float)arg1 ;
-(SCD_Struct_VC7)timerange;
-(VCPVideoKeyFrame *)keyFrame;
-(CGRect)bestPlaybackCrop;
-(char)isTrimmed;
-(char)isAutoPlayable;
-(float)junkScore;
-(float)expressionScore;
-(float)voiceScore;
-(float)humanActionScore;
-(float)humanPoseScore;
-(void)mergeSegment:(id)arg1 ;
-(char)isShort;
-(void)copyScoresFrom:(id)arg1 ;
-(void)checkAutoPlayable;
-(void)setTimerange:(SCD_Struct_VC7)arg1 ;
-(void)setJunkScore:(float)arg1 ;
-(void)setExpressionScore:(float)arg1 ;
-(void)setVoiceScore:(float)arg1 ;
-(void)setHumanActionScore:(float)arg1 ;
-(void)setHumanPoseScore:(float)arg1 ;
-(void)setBestPlaybackCrop:(CGRect)arg1 ;
-(void)setIsAutoPlayable:(char)arg1 ;
-(void)setIsTrimmed:(char)arg1 ;
-(void)setKeyFrame:(VCPVideoKeyFrame *)arg1 ;
@end

