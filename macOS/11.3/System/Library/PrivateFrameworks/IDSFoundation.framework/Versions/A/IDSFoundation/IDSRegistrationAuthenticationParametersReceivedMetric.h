/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/Versions/A/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>
#import <libobjc.A.dylib/CUTAWDMetric.h>

@class NSString, NSDictionary;

@interface IDSRegistrationAuthenticationParametersReceivedMetric : NSObject <CUTCoreAnalyticsMetric, CUTAWDMetric> {

	long long _errorCode;
	double _timeIntervalSinceAuthenticationParameterRequest;

}

@property (nonatomic,readonly) NSString * name; 
@property (readonly) unsigned awdIdentifier; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) PBCodable*<NSCopying> awdRepresentation; 
@property (nonatomic,readonly) long long errorCode;                                                 //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) double timeIntervalSinceAuthenticationParameterRequest;              //@synthesize timeIntervalSinceAuthenticationParameterRequest=_timeIntervalSinceAuthenticationParameterRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSDictionary *)dictionaryRepresentation;
-(long long)errorCode;
-(PBCodable*<NSCopying>)awdRepresentation;
-(unsigned)awdIdentifier;
-(double)timeIntervalSinceAuthenticationParameterRequest;
-(id)initWithErrorCode:(long long)arg1 timeIntervalSinceAuthenticationParameterRequest:(double)arg2 ;
@end

