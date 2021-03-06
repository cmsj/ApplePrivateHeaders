/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCStatisticsHistory : NSObject {

	VCStatisticsStatsHistoryElement _statsHistory[500];
	int _statsHistorySize;
	int _currentStatsHistoryIndex;
	VCStatisticsStatsHistoryElement _lastStats;
	unsigned char _currentLinkID;
	double _lastHistoryNotEnoughLogTime;
	VCStatisticsSendHistoryElement* _sendHistory;

}
-(void)dealloc;
-(void)addStatsHistory:(VCStatisticsStatsHistoryElement)arg1 ;
-(void)addAndPruneSendHistory:(VCStatisticsSendHistoryElement*)arg1 upToTime:(double)arg2 ;
-(VCStatisticsSendHistoryElement*)getSendHistoryElementWithPacketId:(unsigned)arg1 ;
-(double)getPacketLossRateAtTime:(double)arg1 inMostRecentDuration:(double)arg2 ;
-(double)getReceivingBitrateAtTime:(double)arg1 inMostRecentDuration:(double)arg2 ;
-(double)getSendingBitrateAtTime:(double)arg1 inMostRecentDuration:(double)arg2 ;
-(double)getServerStatsBitrateAtTime:(double)arg1 inMostRecentDuration:(double)arg2 ;
-(double)getRoundTripTimeWithPacketId:(unsigned)arg1 time:(double)arg2 ;
-(int)getBurstyLossAtTime:(double)arg1 inMostRecentDuration:(double)arg2 withPercentile:(double)arg3 ;
-(void)clearSendHistory;
-(void)resetHistory;
-(char)isStatsElementOutOfOrder:(VCStatisticsStatsHistoryElement)arg1 ;
-(char)handleWrappedAroundByteCountForStats:(VCStatisticsStatsHistoryElement*)arg1 ;
-(char)getStatsHistoryElementIndex:(int*)arg1 time:(double)arg2 inMostRecentDuration:(double)arg3 ;
@end

