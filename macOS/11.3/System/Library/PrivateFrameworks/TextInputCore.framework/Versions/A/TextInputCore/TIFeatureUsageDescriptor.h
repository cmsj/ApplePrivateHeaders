/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/Versions/A/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TINumericValueDescriptor.h>

@class NSString;

@interface TIFeatureUsageDescriptor : TINumericValueDescriptor {

	NSString* _discoveryCounter;
	long long _discoveryThreshold;
	NSString* _configString;

}

@property (nonatomic,readonly) NSString * discoveryCounter;               //@synthesize discoveryCounter=_discoveryCounter - In the implementation block
@property (nonatomic,readonly) long long discoveryThreshold;              //@synthesize discoveryThreshold=_discoveryThreshold - In the implementation block
@property (nonatomic,readonly) NSString * configString;                   //@synthesize configString=_configString - In the implementation block
+(id)featureUsageDescriptorWithMetricName:(id)arg1 discoveryCounter:(id)arg2 discoveryThreshold:(long long)arg3 configString:(id)arg4 calculationExpression:(id)arg5 calculationPrecondition:(id)arg6 calculationDefaultValue:(id)arg7 calculationDependencies:(id)arg8 bucketThresholds:(id)arg9 ;
-(id)initWithMetricName:(id)arg1 discoveryCounter:(id)arg2 discoveryThreshold:(long long)arg3 configString:(id)arg4 calculationExpression:(id)arg5 calculationPrecondition:(id)arg6 calculationDefaultValue:(id)arg7 calculationDependencies:(id)arg8 bucketThresholds:(id)arg9 ;
-(NSString *)discoveryCounter;
-(long long)discoveryThreshold;
-(NSString *)configString;
@end

