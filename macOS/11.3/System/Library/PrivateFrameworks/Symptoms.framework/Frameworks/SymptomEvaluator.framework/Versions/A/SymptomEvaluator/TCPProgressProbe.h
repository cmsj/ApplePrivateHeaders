/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/Versions/A/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class NSObject;

@interface TCPProgressProbe : NSObject {

	NSObject*<OS_dispatch_queue> lqueue;
	const char* interfaceName;
	unsigned state;
	unsigned long long _countPremiumModeClients;
	char _localFlowTracking;
	unsigned long long _interfaceIndex;

}

@property (nonatomic,readonly) unsigned long long interfaceIndex;              //@synthesize interfaceIndex=_interfaceIndex - In the implementation block
@property (assign,nonatomic) char localFlowTracking;                           //@synthesize localFlowTracking=_localFlowTracking - In the implementation block
+(void)initialize;
+(id)probeForInterface:(id)arg1 ;
+(id)progressPrettyPrintUtility:(xtcpprogress_indicators*)arg1 ;
+(void)forceInvalidationFor:(id)arg1 periods:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)description;
-(unsigned long long)interfaceIndex;
-(char)manage:(unsigned)arg1 outValue:(unsigned*)arg2 ;
-(char)localFlowTracking;
-(void)setLocalFlowTracking:(char)arg1 ;
-(char)interfaceMappingIsCurrent;
-(void)fetchMetricsForFlowsAged:(double)arg1 metrics:(xtcpprogress_indicators*)arg2 resultBlock:(/*^block*/id)arg3 ;
-(id)_initForInterface:(id)arg1 ;
@end

