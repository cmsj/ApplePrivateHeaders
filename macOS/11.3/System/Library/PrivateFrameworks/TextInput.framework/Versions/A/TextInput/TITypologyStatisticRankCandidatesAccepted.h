/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/Versions/A/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TITypologyStatisticCurrentAutocorrections.h>

@class NSMutableDictionary, NSDictionary;

@interface TITypologyStatisticRankCandidatesAccepted : TITypologyStatisticCurrentAutocorrections {

	NSMutableDictionary* _histogram;
	long long _lengthOfSelectedCandidates;
	long long _lengthOfSelectedPredictions;

}

@property (nonatomic,readonly) NSDictionary * histogram;                           //@synthesize histogram=_histogram - In the implementation block
@property (nonatomic,readonly) long long lengthOfSelectedCandidates;               //@synthesize lengthOfSelectedCandidates=_lengthOfSelectedCandidates - In the implementation block
@property (nonatomic,readonly) long long lengthOfSelectedPredictions;              //@synthesize lengthOfSelectedPredictions=_lengthOfSelectedPredictions - In the implementation block
-(id)init;
-(NSDictionary *)histogram;
-(void)visitRecordKeyboardInput:(id)arg1 ;
-(id)structuredReport;
-(unsigned long long)rankOfCandidate:(id)arg1 ;
-(void)addLengthOfSelectedCandidate:(id)arg1 ;
-(void)addLengthOfSelectedPrediction:(id)arg1 ;
-(void)countSelectedAutocorrection:(id)arg1 ;
-(void)countSelectedInputString;
-(void)countSelectedInputStringToRejectAutocorrection;
-(char)isCandidatePrediction:(id)arg1 ;
-(void)countSelectedPrediction:(id)arg1 withRank:(unsigned long long)arg2 ;
-(void)countSelectedCandidate:(id)arg1 withRank:(unsigned long long)arg2 ;
-(void)rankAndCountSelectedCandidate:(id)arg1 ;
-(long long)lengthOfSelectedCandidates;
-(long long)lengthOfSelectedPredictions;
@end

