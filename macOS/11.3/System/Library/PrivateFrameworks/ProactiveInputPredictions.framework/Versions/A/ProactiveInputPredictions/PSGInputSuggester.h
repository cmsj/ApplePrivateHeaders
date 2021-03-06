/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveInputPredictions.framework/Versions/A/ProactiveInputPredictions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class PSGInputSuggesterClient, NSObject, PSGInputSuggestionsRequest, _PASTuple2;

@interface PSGInputSuggester : NSObject {

	PSGInputSuggesterClient* _client;
	NSObject*<OS_dispatch_queue> _lastPredictionQueue;
	PSGInputSuggestionsRequest* _lastRequest;
	_PASTuple2* _lastPrediction;
	_PASTuple2* _lastImpression;

}
+(id)sharedInstance;
-(id)initWithClient:(id)arg1 ;
-(void)warmUp;
-(void)hibernate;
-(void)inputSuggestionsWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)warmUpForLocaleIdentifier:(id)arg1 ;
-(void)logMetricForEventType:(unsigned char)arg1 externalMetadata:(id)arg2 request:(id)arg3 responseItems:(id)arg4 ;
-(void)_reportSpeedMetricWithData:(id)arg1 ;
-(void)logMetricForEventType:(unsigned char)arg1 externalMetadata:(id)arg2 predictedValues:(id)arg3 ;
-(void)logTimeoutForRequest:(id)arg1 ;
@end

