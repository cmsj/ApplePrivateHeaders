/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/Versions/A/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFStartSearchFeedback.h>

@class NSString, NSDictionary;

@interface SFStartNetworkSearchFeedback : SFStartSearchFeedback {

	NSString* _url;
	NSDictionary* _headers;
	unsigned long long _endpoint;
	NSString* _experimentId;
	NSString* _treatmentId;

}

@property (nonatomic,copy) NSString * url;                             //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSDictionary * headers;                     //@synthesize headers=_headers - In the implementation block
@property (assign,nonatomic) unsigned long long endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,copy) NSString * experimentId;                    //@synthesize experimentId=_experimentId - In the implementation block
@property (nonatomic,copy) NSString * treatmentId;                     //@synthesize treatmentId=_treatmentId - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(unsigned long long)endpoint;
-(void)setEndpoint:(unsigned long long)arg1 ;
-(NSString *)experimentId;
-(void)setExperimentId:(NSString *)arg1 ;
-(NSDictionary *)headers;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(NSString *)treatmentId;
-(void)setTreatmentId:(NSString *)arg1 ;
-(id)initWithInput:(id)arg1 url:(id)arg2 headers:(id)arg3 triggerEvent:(unsigned long long)arg4 endpoint:(unsigned long long)arg5 ;
-(id)initWithInput:(id)arg1 url:(id)arg2 headers:(id)arg3 triggerEvent:(unsigned long long)arg4 endpoint:(unsigned long long)arg5 queryId:(unsigned long long)arg6 ;
-(id)initWithInput:(id)arg1 url:(id)arg2 headers:(id)arg3 triggerEvent:(unsigned long long)arg4 endpoint:(unsigned long long)arg5 queryId:(unsigned long long)arg6 experimentId:(id)arg7 treatmentId:(id)arg8 ;
@end

