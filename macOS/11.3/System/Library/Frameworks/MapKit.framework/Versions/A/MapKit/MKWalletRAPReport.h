/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class GEORPFeedbackRequestParameters, GEORPProblem, NSString;

@interface MKWalletRAPReport : NSObject {

	GEORPFeedbackRequestParameters* _feedbackRequestParameters;
	GEORPFeedbackRequestParameters* _requestParameters;
	GEORPProblem* _problem;

}

@property (nonatomic,copy) NSString * merchantAdamId; 
@property (nonatomic,readonly) GEORPFeedbackRequestParameters * requestParameters;              //@synthesize requestParameters=_requestParameters - In the implementation block
@property (nonatomic,copy) NSString * reportersComment; 
@property (nonatomic,copy) NSString * correlationId; 
@property (nonatomic,readonly) GEORPProblem * problem;                                          //@synthesize problem=_problem - In the implementation block
@property (assign,nonatomic) char isAppleCard; 
@property (assign,nonatomic) unsigned long long lookupTransactionType; 
-(NSString *)merchantAdamId;
-(NSString *)correlationId;
-(void)setMerchantAdamId:(NSString *)arg1 ;
-(void)setCorrelationId:(NSString *)arg1 ;
-(void)setIsAppleCard:(char)arg1 ;
-(char)isAppleCard;
-(GEORPProblem *)problem;
-(id)initForMerchantIssue:(unsigned long long)arg1 merchantIndustryCode:(long long)arg2 mapsIdentifier:(unsigned long long)arg3 merchantName:(id)arg4 merchantRawName:(id)arg5 merchantIndustryCategory:(id)arg6 merchantURL:(id)arg7 merchantFormattedAddress:(id)arg8 transactionTime:(double)arg9 transactionType:(id)arg10 transactionLocation:(CGSize)arg11 ;
-(void)setReportersComment:(NSString *)arg1 ;
-(NSString *)reportersComment;
-(unsigned long long)lookupTransactionType;
-(void)setLookupTransactionType:(unsigned long long)arg1 ;
-(GEORPFeedbackRequestParameters *)requestParameters;
@end

