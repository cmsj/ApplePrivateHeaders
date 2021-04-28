/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableArray, NSNumber;

@interface VCLinkProbingResult : NSObject {

	unsigned _reorderedPacketsCount;
	unsigned _sentRequestCount;
	unsigned _receivedResponseCount;
	NSMutableArray* _requestTimestampAndRTTList;
	NSNumber* _expMovMeanRTT;
	NSNumber* _plrEnvelopeValue;
	NSNumber* _plrTier;
	SCD_Struct_VC186 _linkProbingResultConfig;

}

@property (readonly) unsigned reorderedPacketsCount;                           //@synthesize reorderedPacketsCount=_reorderedPacketsCount - In the implementation block
@property (readonly) unsigned sentRequestCount;                                //@synthesize sentRequestCount=_sentRequestCount - In the implementation block
@property (readonly) unsigned receivedResponseCount;                           //@synthesize receivedResponseCount=_receivedResponseCount - In the implementation block
@property (readonly) NSMutableArray * requestTimestampAndRTTList;              //@synthesize requestTimestampAndRTTList=_requestTimestampAndRTTList - In the implementation block
@property (readonly) NSNumber * expMovMeanRTT;                                 //@synthesize expMovMeanRTT=_expMovMeanRTT - In the implementation block
@property (readonly) NSNumber * plrEnvelopeValue;                              //@synthesize plrEnvelopeValue=_plrEnvelopeValue - In the implementation block
@property (readonly) NSNumber * plrTier;                                       //@synthesize plrTier=_plrTier - In the implementation block
-(void)dealloc;
-(id)description;
-(unsigned)sentRequestCount;
-(NSNumber *)expMovMeanRTT;
-(NSNumber *)plrTier;
-(void)updateProbingResult:(id)arg1 initialResult:(char)arg2 ;
-(NSMutableArray *)requestTimestampAndRTTList;
-(void)updateLinkStatsWithArrivingNewValueMeanRTT:(double)arg1 arrivingNewValuePLR:(double)arg2 ;
-(unsigned char)getPLRTierFromPLREnvelope:(double)arg1 ;
-(id)initWithProbingResults:(id)arg1 linkProbingResultConfig:(SCD_Struct_VC187)arg2 ;
-(void)mergeProbingResults:(id)arg1 ;
-(unsigned)reorderedPacketsCount;
-(unsigned)receivedResponseCount;
-(NSNumber *)plrEnvelopeValue;
@end
