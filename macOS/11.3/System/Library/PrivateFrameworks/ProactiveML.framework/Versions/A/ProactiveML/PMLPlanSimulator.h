/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/Versions/A/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProactiveML/ProactiveML-Structs.h>
@class NSArray, PMLSessionDescriptor, _PASRng;

@interface PMLPlanSimulator : NSObject {

	NSArray* _stores;
	PMLSessionDescriptor* _sessionDescriptor;
	_PASRng* _rng;

}
+(id)simulatorWithDbPaths:(id)arg1 sessionDescriptor:(id)arg2 sessionsInBatch:(unsigned long long)arg3 maxSessionsLimit:(unsigned long long)arg4 seed:(unsigned long long)arg5 ;
-(id)init;
-(id)initWithStores:(id)arg1 sessionDescriptor:(id)arg2 seed:(unsigned long long)arg3 ;
-(id)_randomStore;
-(id)_randomStores:(unsigned long long)arg1 ;
-(id)runParallelPlansWithPlanId:(id)arg1 tracker:(id)arg2 noiseScaleFactors:(SCD_Struct_PM1)arg3 noiseMinimumMagnitude:(float)arg4 weights:(id)arg5 serverIteration:(unsigned long long)arg6 useIntercept:(char)arg7 noiseMechanism:(long long)arg8 usingRandomlySelected:(unsigned long long)arg9 ;
@end

