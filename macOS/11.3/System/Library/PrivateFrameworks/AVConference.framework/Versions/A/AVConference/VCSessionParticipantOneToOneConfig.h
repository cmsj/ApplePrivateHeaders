/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCObject.h>

@class AVCRateControlFeedbackController, AVCStatisticsCollector, AVCBasebandCongestionDetector, VCRateControlMediaController;

@interface VCSessionParticipantOneToOneConfig : VCObject {

	unsigned long long _idsParticipantID;
	int _deviceRole;
	AVCRateControlFeedbackController* _feedbackController;
	AVCStatisticsCollector* _statisticsCollector;
	AVCBasebandCongestionDetector* _basebandCongestionDetector;
	void* _audioMediaControlInfoGenerator;
	void* _videoMediaControlInfoGenerator;
	VCRateControlMediaController* _mediaController;
	tagHANDLE* _mediaQueue;
	tagVCMediaQueueRef _vcMediaQueue;
	char _negotiatedVideoEnabled;

}

@property (assign,nonatomic) int deviceRole;                                                          //@synthesize deviceRole=_deviceRole - In the implementation block
@property (assign,nonatomic) unsigned long long idsParticipantID;                                     //@synthesize idsParticipantID=_idsParticipantID - In the implementation block
@property (nonatomic,retain) AVCRateControlFeedbackController * feedbackController;                   //@synthesize feedbackController=_feedbackController - In the implementation block
@property (nonatomic,retain) AVCStatisticsCollector * statisticsCollector;                            //@synthesize statisticsCollector=_statisticsCollector - In the implementation block
@property (nonatomic,retain) AVCBasebandCongestionDetector * basebandCongestionDetector;              //@synthesize basebandCongestionDetector=_basebandCongestionDetector - In the implementation block
@property (assign,nonatomic) void* audioMediaControlInfoGenerator;                                    //@synthesize audioMediaControlInfoGenerator=_audioMediaControlInfoGenerator - In the implementation block
@property (assign,nonatomic) void* videoMediaControlInfoGenerator;                                    //@synthesize videoMediaControlInfoGenerator=_videoMediaControlInfoGenerator - In the implementation block
@property (nonatomic,retain) VCRateControlMediaController * mediaController;                          //@synthesize mediaController=_mediaController - In the implementation block
@property (assign,nonatomic) tagHANDLE* mediaQueue;                                                   //@synthesize mediaQueue=_mediaQueue - In the implementation block
@property (assign,nonatomic) tagVCMediaQueueRef vcMediaQueue;                                         //@synthesize vcMediaQueue=_vcMediaQueue - In the implementation block
@property (assign,nonatomic) char negotiatedVideoEnabled;                                             //@synthesize negotiatedVideoEnabled=_negotiatedVideoEnabled - In the implementation block
-(void)dealloc;
-(id)init;
-(tagHANDLE*)mediaQueue;
-(VCRateControlMediaController *)mediaController;
-(int)deviceRole;
-(void)setDeviceRole:(int)arg1 ;
-(void)setStatisticsCollector:(AVCStatisticsCollector *)arg1 ;
-(void)setMediaController:(VCRateControlMediaController *)arg1 ;
-(AVCBasebandCongestionDetector *)basebandCongestionDetector;
-(void)setBasebandCongestionDetector:(AVCBasebandCongestionDetector *)arg1 ;
-(AVCRateControlFeedbackController *)feedbackController;
-(void)setFeedbackController:(AVCRateControlFeedbackController *)arg1 ;
-(AVCStatisticsCollector *)statisticsCollector;
-(void)setMediaQueue:(tagHANDLE*)arg1 ;
-(unsigned long long)idsParticipantID;
-(void)setIdsParticipantID:(unsigned long long)arg1 ;
-(char)negotiatedVideoEnabled;
-(void*)videoMediaControlInfoGenerator;
-(void*)audioMediaControlInfoGenerator;
-(void)setAudioMediaControlInfoGenerator:(void*)arg1 ;
-(void)setVideoMediaControlInfoGenerator:(void*)arg1 ;
-(void)setNegotiatedVideoEnabled:(char)arg1 ;
-(void)setVcMediaQueue:(tagVCMediaQueueRef)arg1 ;
-(tagVCMediaQueueRef)vcMediaQueue;
@end

