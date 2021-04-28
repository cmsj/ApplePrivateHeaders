/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/VCObject.h>

@interface VCVideoQualityInfo : VCObject {

	char _videoIsExpected;
	char _isVideoQualityDegraded;
	double _firstDegradedMeasure;
	double _videoDegradedThreshold;
	unsigned long long _idsParticipantID;

}

@property (nonatomic,readonly) char isVideoQualityDegraded;              //@synthesize isVideoQualityDegraded=_isVideoQualityDegraded - In the implementation block
@property (assign,nonatomic) char videoIsExpected;                       //@synthesize videoIsExpected=_videoIsExpected - In the implementation block
-(void)dealloc;
-(id)initWithParticipantID:(unsigned long long)arg1 ;
-(void)setVideoIsExpected:(char)arg1 ;
-(char)videoIsExpected;
-(char)updateWithLastDecodedFrameTime:(double)arg1 time:(double)arg2 ;
-(char)isVideoQualityDegraded;
@end
