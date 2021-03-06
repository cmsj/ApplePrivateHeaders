/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/Versions/A/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MSVABTestGenerator : NSObject {

	float _probabilityForOutcomeA;
	long long _totalExperiments;
	long long _totalForOutcomeA;
	long long _totalForOutcomeB;

}

@property (nonatomic,readonly) float probabilityForOutcomeA;              //@synthesize probabilityForOutcomeA=_probabilityForOutcomeA - In the implementation block
@property (nonatomic,readonly) long long totalExperiments;                //@synthesize totalExperiments=_totalExperiments - In the implementation block
@property (nonatomic,readonly) long long totalForOutcomeA;                //@synthesize totalForOutcomeA=_totalForOutcomeA - In the implementation block
@property (nonatomic,readonly) long long totalForOutcomeB;                //@synthesize totalForOutcomeB=_totalForOutcomeB - In the implementation block
-(id)description;
-(id)initWithProbabilityForOutcomeA:(float)arg1 ;
-(void)updateProbabilityForOutcomeA:(float)arg1 ;
-(long long)nextOutcome;
-(float)probabilityForOutcomeA;
-(long long)totalExperiments;
-(long long)totalForOutcomeA;
-(long long)totalForOutcomeB;
@end

