/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/Versions/A/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TIInputMode, NSString, NSDictionary;

@interface TIKeyboardInputManagerConfig : NSObject {

	char _allowsSpaceCorrections;
	char _usesTextChecker;
	char _usesRetrocorrection;
	char _usesWordNgramModel;
	char _usesAdaptation;
	char _completionsShouldSharePrefix;
	char _usesStemSuffixCorrectionFactor;
	char _languageAllowsCP;
	char _usesContinuousPath;
	char _usesContinuousPathProgressiveCandidates;
	char _continuousPathDeleteWholeWord;
	char _continuousPathDetectPause;
	char _continuousPathCompletesWords;
	char _insertsSpaceAfterPredictiveInput;
	char _usesContinuousPathRetrocorrection;
	char _shouldIgnoreCPRequirements;
	char _includeLightWeightLanguageModelMobileAssets;
	char _usesCJContinuousPath;
	char _testing;
	char _skipLanguageLayoutCheckCPML;
	char _usesCustomNgramModel;
	char _usesCustomStaticDictionary;
	char _usesDODMLLogging;
	char _sensorKitEnabled;
	char _allowRelaxedOVSPolicy;
	char _usesUserModelLogging;
	int _continuousPathEnabledAlgorithms;
	int _cpConfidenceModelType;
	TIInputMode* _inputMode;
	NSString* _staticDictionaryPath;
	NSString* _dynamicResourcePath;
	NSString* _ngramModelPath;
	NSString* _shapeStoreResourceDir;
	unsigned long long _maxWordsPerPrediction;
	NSDictionary* _continuousPathParams;
	double _continuousPathLanguageWeight;
	long long _cpCandidatesCount;
	unsigned long long _sensorKitWordsThreshold;

}

@property (nonatomic,retain) TIInputMode * inputMode;                                       //@synthesize inputMode=_inputMode - In the implementation block
@property (nonatomic,copy) NSString * staticDictionaryPath;                                 //@synthesize staticDictionaryPath=_staticDictionaryPath - In the implementation block
@property (nonatomic,copy) NSString * dynamicResourcePath;                                  //@synthesize dynamicResourcePath=_dynamicResourcePath - In the implementation block
@property (nonatomic,copy) NSString * ngramModelPath;                                       //@synthesize ngramModelPath=_ngramModelPath - In the implementation block
@property (nonatomic,copy) NSString * shapeStoreResourceDir;                                //@synthesize shapeStoreResourceDir=_shapeStoreResourceDir - In the implementation block
@property (assign,nonatomic) char allowsSpaceCorrections;                                   //@synthesize allowsSpaceCorrections=_allowsSpaceCorrections - In the implementation block
@property (assign,nonatomic) char usesTextChecker;                                          //@synthesize usesTextChecker=_usesTextChecker - In the implementation block
@property (assign,nonatomic) char usesRetrocorrection;                                      //@synthesize usesRetrocorrection=_usesRetrocorrection - In the implementation block
@property (assign,nonatomic) char usesWordNgramModel;                                       //@synthesize usesWordNgramModel=_usesWordNgramModel - In the implementation block
@property (assign,nonatomic) char usesAdaptation;                                           //@synthesize usesAdaptation=_usesAdaptation - In the implementation block
@property (assign,nonatomic) char usesWordNgramModelAdaptation; 
@property (assign,nonatomic) unsigned long long maxWordsPerPrediction;                      //@synthesize maxWordsPerPrediction=_maxWordsPerPrediction - In the implementation block
@property (assign,nonatomic) char completionsShouldSharePrefix;                             //@synthesize completionsShouldSharePrefix=_completionsShouldSharePrefix - In the implementation block
@property (assign,nonatomic) char usesStemSuffixCorrectionFactor;                           //@synthesize usesStemSuffixCorrectionFactor=_usesStemSuffixCorrectionFactor - In the implementation block
@property (assign,nonatomic) char languageAllowsCP;                                         //@synthesize languageAllowsCP=_languageAllowsCP - In the implementation block
@property (assign,nonatomic) char usesContinuousPath;                                       //@synthesize usesContinuousPath=_usesContinuousPath - In the implementation block
@property (nonatomic,copy) NSDictionary * continuousPathParams;                             //@synthesize continuousPathParams=_continuousPathParams - In the implementation block
@property (assign,nonatomic) char usesContinuousPathProgressiveCandidates;                  //@synthesize usesContinuousPathProgressiveCandidates=_usesContinuousPathProgressiveCandidates - In the implementation block
@property (assign,nonatomic) double continuousPathLanguageWeight;                           //@synthesize continuousPathLanguageWeight=_continuousPathLanguageWeight - In the implementation block
@property (assign,nonatomic) char continuousPathDeleteWholeWord;                            //@synthesize continuousPathDeleteWholeWord=_continuousPathDeleteWholeWord - In the implementation block
@property (assign,nonatomic) char continuousPathDetectPause;                                //@synthesize continuousPathDetectPause=_continuousPathDetectPause - In the implementation block
@property (assign,nonatomic) char continuousPathCompletesWords;                             //@synthesize continuousPathCompletesWords=_continuousPathCompletesWords - In the implementation block
@property (assign,nonatomic) char insertsSpaceAfterPredictiveInput;                         //@synthesize insertsSpaceAfterPredictiveInput=_insertsSpaceAfterPredictiveInput - In the implementation block
@property (assign,nonatomic) int continuousPathEnabledAlgorithms;                           //@synthesize continuousPathEnabledAlgorithms=_continuousPathEnabledAlgorithms - In the implementation block
@property (assign,nonatomic) char usesContinuousPathRetrocorrection;                        //@synthesize usesContinuousPathRetrocorrection=_usesContinuousPathRetrocorrection - In the implementation block
@property (assign,nonatomic) char shouldIgnoreCPRequirements;                               //@synthesize shouldIgnoreCPRequirements=_shouldIgnoreCPRequirements - In the implementation block
@property (assign,nonatomic) int cpConfidenceModelType;                                     //@synthesize cpConfidenceModelType=_cpConfidenceModelType - In the implementation block
@property (assign,nonatomic) long long cpCandidatesCount;                                   //@synthesize cpCandidatesCount=_cpCandidatesCount - In the implementation block
@property (assign,nonatomic) char includeLightWeightLanguageModelMobileAssets;              //@synthesize includeLightWeightLanguageModelMobileAssets=_includeLightWeightLanguageModelMobileAssets - In the implementation block
@property (assign,nonatomic) char usesCJContinuousPath;                                     //@synthesize usesCJContinuousPath=_usesCJContinuousPath - In the implementation block
@property (assign,getter=isTesting,nonatomic) char testing;                                 //@synthesize testing=_testing - In the implementation block
@property (assign,nonatomic) char skipLanguageLayoutCheckCPML;                              //@synthesize skipLanguageLayoutCheckCPML=_skipLanguageLayoutCheckCPML - In the implementation block
@property (assign,nonatomic) char usesCustomNgramModel;                                     //@synthesize usesCustomNgramModel=_usesCustomNgramModel - In the implementation block
@property (assign,nonatomic) char usesCustomStaticDictionary;                               //@synthesize usesCustomStaticDictionary=_usesCustomStaticDictionary - In the implementation block
@property (assign,nonatomic) char usesDODMLLogging;                                         //@synthesize usesDODMLLogging=_usesDODMLLogging - In the implementation block
@property (assign,nonatomic) char sensorKitEnabled;                                         //@synthesize sensorKitEnabled=_sensorKitEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long sensorKitWordsThreshold;                    //@synthesize sensorKitWordsThreshold=_sensorKitWordsThreshold - In the implementation block
@property (assign,nonatomic) char allowRelaxedOVSPolicy;                                    //@synthesize allowRelaxedOVSPolicy=_allowRelaxedOVSPolicy - In the implementation block
@property (assign,nonatomic) char usesUserModelLogging;                                     //@synthesize usesUserModelLogging=_usesUserModelLogging - In the implementation block
+(id)configurationForInputMode:(id)arg1 ;
-(id)propertyList;
-(void)setInputMode:(TIInputMode *)arg1 ;
-(TIInputMode *)inputMode;
-(char)usesContinuousPath;
-(void)setUsesContinuousPath:(char)arg1 ;
-(char)usesContinuousPathProgressiveCandidates;
-(void)setUsesContinuousPathProgressiveCandidates:(char)arg1 ;
-(char)insertsSpaceAfterPredictiveInput;
-(void)setInsertsSpaceAfterPredictiveInput:(char)arg1 ;
-(void)setTesting:(char)arg1 ;
-(char)isTesting;
-(NSString *)dynamicResourcePath;
-(char)usesRetrocorrection;
-(double)continuousPathLanguageWeight;
-(void)setIncludeLightWeightLanguageModelMobileAssets:(char)arg1 ;
-(void)setCpConfidenceModelType:(int)arg1 ;
-(void)setShapeStoreResourceDir:(NSString *)arg1 ;
-(void)setDynamicResourcePath:(NSString *)arg1 ;
-(void)setNgramModelPath:(NSString *)arg1 ;
-(void)setStaticDictionaryPath:(NSString *)arg1 ;
-(void)setCpCandidatesCount:(long long)arg1 ;
-(void)setAllowRelaxedOVSPolicy:(char)arg1 ;
-(void)setUsesUserModelLogging:(char)arg1 ;
-(void)setSensorKitWordsThreshold:(unsigned long long)arg1 ;
-(void)setSensorKitEnabled:(char)arg1 ;
-(void)setUsesDODMLLogging:(char)arg1 ;
-(void)setUsesContinuousPathRetrocorrection:(char)arg1 ;
-(void)setContinuousPathEnabledAlgorithms:(int)arg1 ;
-(void)setContinuousPathDetectPause:(char)arg1 ;
-(void)setContinuousPathDeleteWholeWord:(char)arg1 ;
-(void)setContinuousPathLanguageWeight:(double)arg1 ;
-(void)setContinuousPathCompletesWords:(char)arg1 ;
-(void)setUsesCJContinuousPath:(char)arg1 ;
-(void)setContinuousPathParams:(NSDictionary *)arg1 ;
-(char)shouldIgnoreCPRequirements;
-(char)languageAllowsCP;
-(void)setLanguageAllowsCP:(char)arg1 ;
-(void)setShouldIgnoreCPRequirements:(char)arg1 ;
-(void)setUsesStemSuffixCorrectionFactor:(char)arg1 ;
-(void)setCompletionsShouldSharePrefix:(char)arg1 ;
-(void)setMaxWordsPerPrediction:(unsigned long long)arg1 ;
-(void)setUsesAdaptation:(char)arg1 ;
-(void)setUsesWordNgramModel:(char)arg1 ;
-(void)setUsesRetrocorrection:(char)arg1 ;
-(void)setUsesTextChecker:(char)arg1 ;
-(void)setAllowsSpaceCorrections:(char)arg1 ;
-(char)usesWordNgramModelAdaptation;
-(void)setUsesWordNgramModelAdaptation:(char)arg1 ;
-(NSString *)staticDictionaryPath;
-(NSString *)ngramModelPath;
-(NSString *)shapeStoreResourceDir;
-(char)allowsSpaceCorrections;
-(char)usesTextChecker;
-(char)usesWordNgramModel;
-(char)usesAdaptation;
-(unsigned long long)maxWordsPerPrediction;
-(char)completionsShouldSharePrefix;
-(char)usesStemSuffixCorrectionFactor;
-(NSDictionary *)continuousPathParams;
-(char)continuousPathDeleteWholeWord;
-(char)continuousPathDetectPause;
-(char)continuousPathCompletesWords;
-(int)continuousPathEnabledAlgorithms;
-(char)usesContinuousPathRetrocorrection;
-(int)cpConfidenceModelType;
-(long long)cpCandidatesCount;
-(char)includeLightWeightLanguageModelMobileAssets;
-(char)usesCJContinuousPath;
-(char)skipLanguageLayoutCheckCPML;
-(void)setSkipLanguageLayoutCheckCPML:(char)arg1 ;
-(char)usesCustomNgramModel;
-(void)setUsesCustomNgramModel:(char)arg1 ;
-(char)usesCustomStaticDictionary;
-(void)setUsesCustomStaticDictionary:(char)arg1 ;
-(char)usesDODMLLogging;
-(char)sensorKitEnabled;
-(unsigned long long)sensorKitWordsThreshold;
-(char)allowRelaxedOVSPolicy;
-(char)usesUserModelLogging;
@end
