/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/Versions/A/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <libobjc.A.dylib/MLCustomModel.h>

@class PPBaseScoreInputSet, _PASLock;

@interface PPScoreInterpreter : NSObject <MLCustomModel> {

	unique_ptr<std::__1::vector<std::__1::vector<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>>>>>, std::__1::default_delete<std::__1::vector<std::__1::vector<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue ()(PPScoreInterpreterCtx *)>>>>>>>>* _varPrograms;
	/*^block*/id _coreMLModelPathBlock;
	unique_ptr<std::__1::vector<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>, std::__1::allocator<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>>>, std::__1::default_delete<std::__1::vector<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>, std::__1::allocator<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>>>>>* _subscoreDependencies;
	unique_ptr<std::__1::vector<PPSubscoreIdentifier, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::default_delete<std::__1::vector<PPSubscoreIdentifier, std::__1::allocator<PPSubscoreIdentifier>>>>* _subscoreComputeOrder;
	PPBaseScoreInputSet* _scoreInputSet;
	_PASLock* _reusableContext;

}
+(id)scoreInterpreterParseRootFromAsset:(id)arg1 scalarSubscoreCount:(unsigned long long*)arg2 arraySubscoreCount:(unsigned long long*)arg3 objectSubscoreCount:(unsigned long long*)arg4 ;
+(id)scoreInterpreterFromAsset:(id)arg1 coreMLModelPathBlock:(/*^block*/id)arg2 ;
-(id)init;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3 ;
-(void)resolveSubscoreDependencies:(PPSubscoreIdentifier)arg1 resolved:(unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>*)arg2 unresolved:(unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>*)arg3 resolvedOrdering:(vector<PPSubscoreIdentifier, std::__1::allocator<PPSubscoreIdentifier>>*)arg4 ;
-(unique_ptr<std::__1::vector<PPSubscoreIdentifier, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::default_delete<std::__1::vector<PPSubscoreIdentifier, std::__1::allocator<PPSubscoreIdentifier>>>>*)determineSubscoreComputationOrder;
-(id)initWithParseRoot:(id)arg1 scalarSubscoreCount:(unsigned long long)arg2 arraySubscoreCount:(unsigned long long)arg3 objectSubscoreCount:(unsigned long long)arg4 scoreInputSet:(id)arg5 coreMLModelPathBlock:(/*^block*/id)arg6 ;
-(id)initWithParseRoot:(id)arg1 scalarSubscoreCount:(unsigned long long)arg2 arraySubscoreCount:(unsigned long long)arg3 objectSubscoreCount:(unsigned long long)arg4 coreMLModelPathBlock:(/*^block*/id)arg5 ;
-(void)evaluateScoresWithContext:(id)arg1 ;
-(void)evaluateWithPreviousStageSubscores:(id)arg1 scoreInputInitializationBlock:(/*^block*/id)arg2 scoreInputAssignmentBlock:(/*^block*/id)arg3 outputBlock:(/*^block*/id)arg4 ;
-(void)cleanupReusableComponents;
-(id)evaluateWithScoreInputs:(id)arg1 previousSubscores:(id)arg2 ;
-(id)evaluateWithScoreInputs:(id)arg1 ;
-(PPScoreInterpreterValue*)_evalAtScalarSubscoreIndex:(unsigned long long)arg1 withCtx:(id)arg2 ;
@end
