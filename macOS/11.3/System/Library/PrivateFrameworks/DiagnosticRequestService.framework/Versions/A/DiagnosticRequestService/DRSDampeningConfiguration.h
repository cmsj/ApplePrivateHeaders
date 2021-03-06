/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/Versions/A/DiagnosticRequestService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DRSDampeningConfiguration : NSObject {

	double _hysteresis;
	unsigned long long _countCap;
	double _acceptanceRate;

}

@property (assign,nonatomic) double hysteresis;                        //@synthesize hysteresis=_hysteresis - In the implementation block
@property (assign,nonatomic) unsigned long long countCap;              //@synthesize countCap=_countCap - In the implementation block
@property (assign,nonatomic) double acceptanceRate;                    //@synthesize acceptanceRate=_acceptanceRate - In the implementation block
+(id)_entityName;
+(id)defaultSignatureDampeningConfiguration;
+(id)nandDefaultConfiguration;
+(id)memoryToolsDefaultConfiguration;
+(id)memoryToolsMemgraphOverTimeConfiguration;
+(id)hangTracerInternalNoDownsamplingConfiguration;
+(id)hangTracerInternalDownsamplingConfiguration;
+(id)hangTracerSeedConfiguration;
+(id)hangTracerCustomerConfiguration;
+(id)sentryMacOSAppLaunchConfiguration;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(double)hysteresis;
-(void)setHysteresis:(double)arg1 ;
-(unsigned long long)countCap;
-(double)acceptanceRate;
-(id)initWithHysteresis:(double)arg1 cap:(unsigned long long)arg2 acceptanceRate:(double)arg3 ;
-(id)_initWithMO_ON_MOC_QUEUE:(id)arg1 ;
-(id)jsonCompatibleDictRepresentation;
-(void)setCountCap:(unsigned long long)arg1 ;
-(void)setAcceptanceRate:(double)arg1 ;
-(char)isEqualToDampeningConfiguration:(id)arg1 ;
-(id)_ON_MOC_QUEUE_moRepresentationInContext:(id)arg1 identifier:(id)arg2 ;
@end

