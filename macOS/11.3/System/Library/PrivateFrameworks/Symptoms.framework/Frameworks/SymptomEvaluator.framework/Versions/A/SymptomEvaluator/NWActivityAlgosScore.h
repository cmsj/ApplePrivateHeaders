/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/Versions/A/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface NWActivityAlgosScore : NSObject {

	NSMutableDictionary* _recordedScores;

}

@property (nonatomic,retain) NSMutableDictionary * recordedScores;              //@synthesize recordedScores=_recordedScores - In the implementation block
+(id)sharedInstance;
+(void)processingComplete;
+(void)processNWActivitySuperMetric:(id)arg1 ;
-(id)init;
-(void)_processingComplete;
-(void)_processNWActivitySuperMetric:(id)arg1 ;
-(void)setRecordedScores:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)recordedScores;
-(id)_processNWActivityConnections:(id)arg1 ;
-(id)_scoreDictForBundleID:(id)arg1 effectiveBundleID:(id)arg2 ;
-(void)_processNWActivityTransactions:(id)arg1 scoreDict:(id)arg2 ;
-(void)_postSymptomFor:(id)arg1 withScore:(unsigned long long)arg2 ;
@end

