/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/Versions/A/MediaConversionService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaConversionService/PHMediaFormatConversionCompositeRequest.h>

@class PHMediaFormatConversionRequest;

@interface PHMediaFormatChainedConversionRequest : PHMediaFormatConversionCompositeRequest {

	PHMediaFormatConversionRequest* _independentRequest;
	PHMediaFormatConversionRequest* _dependentRequest;
	/*^block*/id _successUpdateHandler;

}

@property (retain) PHMediaFormatConversionRequest * independentRequest;              //@synthesize independentRequest=_independentRequest - In the implementation block
@property (retain) PHMediaFormatConversionRequest * dependentRequest;                //@synthesize dependentRequest=_dependentRequest - In the implementation block
@property (copy) id successUpdateHandler;                                            //@synthesize successUpdateHandler=_successUpdateHandler - In the implementation block
+(id)requestForSource:(id)arg1 destinationCapabilities:(id)arg2 error:(id*)arg3 ;
+(id)chainedRequestForAdjustmentRenderRequest:(id)arg1 dependingOnRequest:(id)arg2 error:(id*)arg3 ;
+(id)chainedRequestForRequest:(id)arg1 dependingOnRequest:(id)arg2 error:(id*)arg3 successUpdateHandler:(/*^block*/id)arg4 ;
-(void)enqueueSubrequestsOnConversionManager:(id)arg1 ;
-(void)enumerateSubrequests:(/*^block*/id)arg1 ;
-(void)postProcessSuccessfulCompositeRequest;
-(void)setSuccessUpdateHandler:(id)arg1 ;
-(void)setDependentRequest:(PHMediaFormatConversionRequest *)arg1 ;
-(void)setIndependentRequest:(PHMediaFormatConversionRequest *)arg1 ;
-(PHMediaFormatConversionRequest *)independentRequest;
-(PHMediaFormatConversionRequest *)dependentRequest;
-(id)successUpdateHandler;
@end
