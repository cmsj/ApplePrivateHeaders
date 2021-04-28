/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/JetEngine.framework/Versions/A/JetEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSURLBagContract.h>
#import <libobjc.A.dylib/AMSMetricsBagContract.h>

@class AMSBagValue;

@interface JetEngine.URLBagContract : NSObject <AMSURLBagContract, AMSMetricsBagContract> {

	 backing;
	 mescalContract;

}

@property (readonly,nonatomic) id guidRegexes; 
@property (readonly,nonatomic) id guidSchemes; 
@property (readonly,nonatomic) id storefrontSuffix; 
@property (readonly,nonatomic) id trustedDomains; 
@property (readonly,nonatomic) id<AMSMetricsBagContract> metricsContract; 
@property (readonly,nonatomic) id<AMSMescalBagContract> mescalContract; 
@property (readonly,nonatomic) id TLSSamplingPercentage; 
@property (readonly,nonatomic) id TLSSamplingSessionDuration; 
@property (readonly,nonatomic) id TFOSamplingPercentage; 
@property (readonly,nonatomic) id TFOSamplingSessionDuration; 
@property (readonly,nonatomic) id apsEnabledPatterns; 
@property (readonly,nonatomic) id apsSamplingPercent; 
@property (readonly,nonatomic) id metricsURL; 
@property (readonly,nonatomic) id metricsDictionary; 
-(id)init;
-(id)apsEnabledPatterns;
-(id)apsSamplingPercent;
-(id)guidRegexes;
-(id)guidSchemes;
-(id<AMSMescalBagContract>)mescalContract;
-(id)storefrontSuffix;
-(id)TLSSamplingPercentage;
-(id)TLSSamplingSessionDuration;
-(id)TFOSamplingPercentage;
-(id)TFOSamplingSessionDuration;
-(id)trustedDomains;
-(id<AMSMetricsBagContract>)metricsContract;
-(id)metricsURL;
-(id)metricsDictionary;
@end
