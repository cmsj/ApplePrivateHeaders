/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/Versions/A/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ProofReader/ProofReader-Structs.h>
@class NSObject, NSMutableDictionary, NSMutableArray, NSString, NSArray, NSMutableSet, NSURL, NSData;

@interface AppleSpell : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	void* _proofReaderConnection;
	CFDictionaryRef _databaseConnections;
	NSMutableDictionary* _languageModelDicts;
	NSMutableDictionary* _lexiconDict;
	NSMutableDictionary* _phraseLexiconDict;
	CFDictionaryRef _emojiPredictorDict;
	double _referenceResetTimer;
	double _lastWriteLanguageModels;
	double _lastDecayLanguageModels;
	double _lastResetLanguageModels;
	double _lastReleaseLanguageModels;
	double _lastMaintainLanguageModels;
	unsigned long long _languageModelWordCount;
	NSMutableDictionary* _localDictionaryArrays;
	NSMutableArray* _globalDictionaryArray;
	NSString* _lastLanguage;
	NSString* _lastCandidateLanguage;
	NSArray* _userPreferredLanguages;
	NSArray* _userPreferredLatinLanguages;
	NSArray* _userTopLanguages;
	NSArray* _userTransliterationLocalizations;
	NSArray* _userAdditionalEnglishLocalizations;
	NSMutableDictionary* _learnedResponses;
	NSMutableDictionary* _probationaryLearnedResponses;
	NSMutableDictionary* _probationaryLearnedResponseTimes;
	NSMutableArray* _diagnosticInfo;
	NSMutableSet* _foundNames;
	id _foundNamesLexicon;
	id _foundPhrasesLexicon;
	double _lastFindNames;
	NSMutableSet* _foundShortcuts;
	NSMutableDictionary* _foundShortcutsDictionary;
	CFDictionaryRef _databaseConnectionsByPathAndCode;
	unsigned long long _reserved1;
	double _reserved2;
	NSMutableArray* _reserved3;
	NSMutableDictionary* _reserved4;
	double _reserved5;
	NSMutableArray* _altBundleURLs;
	NSObject*<OS_dispatch_queue> _assetDataBundleSerialQueue;
	NSMutableDictionary* _assetDataBundleURLDictionary;
	NSMutableSet* _updatedDataBundleLanguages;
	NSURL* _updateBundleURL;
	NSMutableDictionary* _languageCounts;
	double _lastLanguageCounts;
	NSMutableDictionary* _userAdaptationDictionary;
	NSData* _lastKeyEventArray;
	unsigned long long* _keyboardHistogram;
	double _lastKeyboardHistogramRecording;
	NSMutableArray* _requestedAssets;
	NSMutableArray* _requestedByCheckerAssets;
	double _lastAssetRequest;
	NSMutableArray* _recordedCorrections;
	NSMutableArray* _recordedTICorrections;
	double _probationaryInterval;
	char _userPrefersUncheckedLatinLanguage;
	char _userPrefersUncheckedCyrillicLanguage;
	char _hasUpdatedDataBundleLanguages;
	char _shouldClearFoundNames;
	char _automaticTextCompletionCollapsed;
	char _automaticTextCompletionEnabled;

}
+(id)sharedInstance;
+(void)resetSharedInstance;
-(id)init;
-(void)clearCaches;
-(NSRange)spellServer:(id)arg1 findMisspelledWordInString:(id)arg2 language:(id)arg3 wordCount:(long long*)arg4 countOnly:(char)arg5 ;
-(NSRange)spellServer:(id)arg1 checkGrammarInString:(id)arg2 language:(id)arg3 details:(id*)arg4 ;
-(id)spellServer:(id)arg1 suggestGuessesForWord:(id)arg2 inLanguage:(id)arg3 ;
-(id)spellServer:(id)arg1 checkString:(id)arg2 offset:(unsigned long long)arg3 types:(unsigned long long)arg4 options:(id)arg5 orthography:(id)arg6 wordCount:(long long*)arg7 ;
-(id)spellServer:(id)arg1 generateCandidatesForSelectedRange:(NSRange)arg2 inString:(id)arg3 offset:(unsigned long long)arg4 types:(unsigned long long)arg5 options:(id)arg6 orthography:(id)arg7 ;
-(id)spellServer:(id)arg1 suggestGuessesForWordRange:(NSRange)arg2 inString:(id)arg3 language:(id)arg4 options:(id)arg5 ;
-(id)spellServer:(id)arg1 suggestGuessesForWordRange:(NSRange)arg2 inString:(id)arg3 language:(id)arg4 ;
-(id)spellServer:(id)arg1 suggestCompletionsForPartialWordRange:(NSRange)arg2 inString:(id)arg3 language:(id)arg4 options:(id)arg5 ;
-(id)spellServer:(id)arg1 suggestCompletionsForPartialWordRange:(NSRange)arg2 inString:(id)arg3 language:(id)arg4 ;
-(id)spellServer:(id)arg1 suggestCompletionDictionariesForPartialWordRange:(NSRange)arg2 inString:(id)arg3 language:(id)arg4 options:(id)arg5 ;
-(id)spellServer:(id)arg1 suggestCompletionDictionariesForPartialWordRange:(NSRange)arg2 inString:(id)arg3 language:(id)arg4 ;
-(id)spellServer:(id)arg1 suggestNextLetterDictionariesForPartialWordRange:(NSRange)arg2 inString:(id)arg3 language:(id)arg4 options:(id)arg5 ;
-(id)spellServer:(id)arg1 suggestNextLetterDictionariesForPartialWordRange:(NSRange)arg2 inString:(id)arg3 language:(id)arg4 ;
-(id)spellServer:(id)arg1 stringForInputString:(id)arg2 language:(id)arg3 ;
-(id)spellServer:(id)arg1 alternativesForPinyinInputString:(id)arg2 language:(id)arg3 ;
-(id)spellServer:(id)arg1 extendedAlternativesForPinyinInputString:(id)arg2 language:(id)arg3 ;
-(id)spellServer:(id)arg1 prefixesForPinyinInputString:(id)arg2 language:(id)arg3 ;
-(void)resetTimer;
-(NSRange)spellServer:(id)arg1 findMisspelledWordInString:(id)arg2 language:(id)arg3 wordCount:(long long*)arg4 countOnly:(char)arg5 correction:(id*)arg6 ;
-(void)resetAllLanguageModels;
-(void)releaseAllLexicons;
-(NSRange)spellServer:(id)arg1 findMisspelledWordInString:(id)arg2 languages:(id)arg3 wordCount:(long long*)arg4 countOnly:(char)arg5 correction:(id*)arg6 ;
-(id)spellServer:(id)arg1 suggestWordWithLengthInRange:(NSRange)arg2 language:(id)arg3 ;
-(char)spellServer:(id)arg1 canChangeCaseOfFirstLetterInString:(id)arg2 toUpperCase:(char)arg3 language:(id)arg4 ;
-(id)sentenceTerminatorCharacterSet;
-(id)_standardizedLanguageModelStringForString:(id)arg1 ;
-(id)internalStringForKoreanExternalString:(id)arg1 ;
-(unsigned)_tokenIDForString:(id)arg1 languageModel:(id)arg2 language:(id)arg3 createIfAbsent:(char)arg4 terminatorTokenID:(unsigned)arg5 ;
-(char)validateWordBuffer:(char*)arg1 length:(unsigned long long)arg2 language:(id)arg3 connection:(PR_DB_IO*)arg4 sender:(id)arg5 checkBase:(char)arg6 checkDict:(char)arg7 checkTemp:(char)arg8 checkUser:(char)arg9 checkNames:(char)arg10 checkHyphens:(char)arg11 checkIntercaps:(char)arg12 checkOptions:(char)arg13 depth:(unsigned long long)arg14 ;
-(char)checkWordBuffer:(char*)arg1 length:(unsigned long long)arg2 language:(id)arg3 encoding:(unsigned)arg4 index:(unsigned long long)arg5 ;
-(unsigned long long)acceptabilityOfWordBuffer:(char*)arg1 length:(unsigned long long)arg2 language:(id)arg3 encoding:(unsigned)arg4 forPrediction:(char)arg5 alreadyCapitalized:(char)arg6 ;
-(id)externalStringForKoreanInternalString:(id)arg1 ;
-(char)checkNegativeWordBuffer:(char*)arg1 length:(unsigned long long)arg2 language:(id)arg3 encoding:(unsigned)arg4 ;
-(unsigned)encodingForLanguage:(id)arg1 ;
-(unsigned)_tokenIDForString:(id)arg1 languageModel:(id)arg2 language:(id)arg3 terminatorTokenID:(unsigned)arg4 ;
-(char)shouldBlockWord:(id)arg1 language:(id)arg2 encoding:(unsigned)arg3 ;
-(id)languageModelLocalizationForLanguage:(id)arg1 ;
-(id)languageModelFallbackLocalizationForLanguage:(id)arg1 ;
-(id)lexiconForLanguage:(id)arg1 ;
-(void)_readLanguageModelParametersFromDefaults;
-(id)_loadLanguageModelForLanguage:(id)arg1 localization:(id)arg2 appIdentifier:(id)arg3 onQueue:(id)arg4 ;
-(id)backgroundLoadingQueue;
-(id)languageModelForLanguage:(id)arg1 appIdentifier:(id)arg2 waitForResult:(char)arg3 ;
-(unsigned long long)_resetLanguageModels;
-(void)_releaseLanguageModels;
-(id)_stringForTokenIDs:(const unsigned*)arg1 tokenCount:(unsigned long long)arg2 entryString:(id)arg3 languageModel:(id)arg4 language:(id)arg5 connection:(PR_DB_IO*)arg6 sender:(id)arg7 encoding:(unsigned)arg8 prefix:(id)arg9 capitalized:(char)arg10 ;
-(void*)databaseConnectionForLanguage:(id)arg1 ;
-(void)_addLanguageModelCompletionsForPrefix:(id)arg1 languageModel:(id)arg2 language:(id)arg3 connection:(PR_DB_IO*)arg4 sender:(id)arg5 encoding:(unsigned)arg6 capitalized:(char)arg7 candidates:(id)arg8 ;
-(unsigned long long)_contextLengthForRange:(NSRange)arg1 language:(id)arg2 tagger:(id)arg3 taggerIndex:(unsigned long long)arg4 languageModel:(id)arg5 maxContextLength:(unsigned long long)arg6 context:(unsigned*)arg7 cleanOffset:(unsigned long long*)arg8 lastTokenRange:(NSRange*)arg9 lastTokenID:(unsigned*)arg10 ;
-(char)useUnigramProbabilityForLanguage:(id)arg1 ;
-(char)_getUnigramProbabilityForString:(id)arg1 languageModel:(id)arg2 probability:(double*)arg3 ;
-(float)dynamicScoreForWord:(id)arg1 languageModel:(id)arg2 language:(id)arg3 ;
-(void)enumerateAssetDataItemsForLocale:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)backgroundMaintenanceQueue;
-(void)_readLanguageModelParametersFromDictionary:(id)arg1 ;
-(char)useLanguageModelForLanguage:(id)arg1 tagger:(id)arg2 taggerIndex:(unsigned long long)arg3 appIdentifier:(id)arg4 ;
-(void)loadLanguageModelForLanguage:(id)arg1 ;
-(void)resetLanguageModels;
-(void)releaseLanguageModels;
-(id)languageModelCompletionsForPartialWord:(id)arg1 language:(id)arg2 sender:(id)arg3 appIdentifier:(id)arg4 ;
-(char)_addLanguageModelCompletionsForPartialWordRange:(NSRange)arg1 language:(id)arg2 connection:(PR_DB_IO*)arg3 sender:(id)arg4 encoding:(unsigned)arg5 tagger:(id)arg6 taggerIndex:(unsigned long long)arg7 appIdentifier:(id)arg8 waitForLanguageModel:(char)arg9 candidates:(id)arg10 tryTransliteration:(char*)arg11 ;
-(id)_rankedCandidatesForRange:(NSRange)arg1 candidates:(id)arg2 language:(id)arg3 tagger:(id)arg4 taggerIndex:(unsigned long long)arg5 appIdentifier:(id)arg6 scoreDictionary:(id)arg7 ;
-(id)_rankedCandidatesForCandidateList:(id)arg1 language:(id)arg2 tagger:(id)arg3 taggerIndex:(unsigned long long)arg4 appIdentifier:(id)arg5 ;
-(char)_useAlternateLanguageForRange:(NSRange)arg1 ofString:(id)arg2 language:(id)arg3 tagger:(id)arg4 taggerIndex:(unsigned long long)arg5 alternateLanguage:(id)arg6 alternateTagger:(id)arg7 alternateTaggerIndex:(unsigned long long)arg8 appIdentifier:(id)arg9 ;
-(float)dynamicScoreForWord:(id)arg1 language:(id)arg2 appIdentifier:(id)arg3 ;
-(id)assetDataBundleURLsForLanguage:(id)arg1 ;
-(id)dataBundlesForLanguage:(id)arg1 ;
-(void)updateLexiconsForLanguageIfNecessary:(id)arg1 ;
-(id)localizationForLanguage:(id)arg1 ;
-(id)fallbackLocalizationForLanguage:(id)arg1 ;
-(id)localDictionaryArrayForLanguage:(id)arg1 ;
-(id)globalDictionaryArray;
-(id)dictionaryForLanguage:(id)arg1 index:(unsigned long long)arg2 ;
-(void)releaseDatabaseConnections;
-(char)checkNameWordBuffer:(char*)arg1 length:(unsigned long long)arg2 language:(id)arg3 encoding:(unsigned)arg4 globalOnly:(char)arg5 ;
-(id)autocorrectionDictionaryForLanguage:(id)arg1 ;
-(id)guessesDictionaryForLanguage:(id)arg1 ;
-(id)capitalizationDictionaryArrayForLanguage:(id)arg1 ;
-(id)phraseCorrectionsDictionaryForLanguage:(id)arg1 ;
-(id)sentenceCorrectionsDictionaryForLanguage:(id)arg1 ;
-(id)spellServer:(id)arg1 suggestCompletionDictionariesForPartialWordRange:(NSRange)arg2 inString:(id)arg3 inLanguage:(id)arg4 options:(id)arg5 ;
-(id)linguisticTaggerForLanguage:(id)arg1 string:(id)arg2 range:(NSRange)arg3 taggerIndex:(unsigned long long*)arg4 ;
-(char)getMetaFlagsForWord:(id)arg1 inLexiconForLanguage:(id)arg2 metaFlags:(unsigned*)arg3 otherMetaFlags:(unsigned*)arg4 ;
-(char)checkNoCapAbbreviationWordBuffer:(char*)arg1 length:(unsigned long long)arg2 language:(id)arg3 encoding:(unsigned)arg4 ;
-(id)spellServer:(id)arg1 suggestCompletionsForPartialWordRange:(NSRange)arg2 inString:(id)arg3 inLanguage:(id)arg4 options:(id)arg5 ;
-(char)noSuggestForCompletion:(id)arg1 language:(id)arg2 appIdentifier:(id)arg3 alreadyCapitalized:(char)arg4 ;
-(void)personalizeEmojiArray:(id)arg1 ;
-(id)spellServer:(id)arg1 suggestGuessesForWordRange:(NSRange)arg2 inString:(id)arg3 inLanguage:(id)arg4 options:(id)arg5 ;
-(id)spellServer:(id)arg1 suggestNextLetterDictionariesForPartialWordRange:(NSRange)arg2 inString:(id)arg3 inLanguage:(id)arg4 options:(id)arg5 ;
-(id)spellServer:(id)arg1 suggestWordWithMinimumLength:(unsigned long long)arg2 maximumLength:(unsigned long long)arg3 language:(id)arg4 ;
-(id)spellServer:(id)arg1 candidatesForSelectedRange:(NSRange)arg2 inString:(id)arg3 offset:(unsigned long long)arg4 types:(unsigned long long)arg5 options:(id)arg6 orthography:(id)arg7 ;
-(id)vietnameseModificationForWord:(id)arg1 ;
-(char)validateWordBuffer:(char*)arg1 length:(unsigned long long)arg2 language:(id)arg3 connection:(PR_DB_IO*)arg4 sender:(id)arg5 checkBase:(char)arg6 checkDict:(char)arg7 checkTemp:(char)arg8 checkUser:(char)arg9 checkNames:(char)arg10 checkHyphens:(char)arg11 checkIntercaps:(char)arg12 checkOptions:(char)arg13 forCorrection:(char)arg14 depth:(unsigned long long)arg15 ;
-(char*)_validatedGuessWordBuffer:(char*)arg1 length:(unsigned long long)arg2 language:(id)arg3 connection:(PR_DB_IO*)arg4 sender:(id)arg5 checkUser:(char)arg6 additionalBuffer:(char*)arg7 ;
-(char)_findMatchingRangesForRange:(NSRange)arg1 inString:(id)arg2 keyEventArray:(id)arg3 endingAtIndex:(unsigned long long)arg4 matchingStringRange:(NSRange*)arg5 correctableStringRange:(NSRange*)arg6 matchingKeyEventRange:(NSRange*)arg7 firstMisspelledKeyEventIndex:(unsigned long long*)arg8 lastMisspelledKeyEventIndex:(unsigned long long*)arg9 previousBackspaceCount:(unsigned long long*)arg10 ;
-(id)phraseMatching:(id)arg1 inLexiconForLanguage:(id)arg2 ;
-(char)wordIsAlreadyAccented:(id)arg1 ;
-(void)enumerateEntriesForWord:(id)arg1 inLexiconForLanguage:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(char)validateWordBuffer:(char*)arg1 length:(unsigned long long)arg2 language:(id)arg3 connection:(PR_DB_IO*)arg4 sender:(id)arg5 checkBase:(char)arg6 checkDict:(char)arg7 checkNames:(char)arg8 checkHyphens:(char)arg9 checkIntercaps:(char)arg10 checkOptions:(char)arg11 depth:(unsigned long long)arg12 ;
-(id)_correctionResultForKoreanString:(id)arg1 range:(NSRange)arg2 inString:(id)arg3 offset:(unsigned long long)arg4 tagger:(id)arg5 taggerIndex:(unsigned long long)arg6 appIdentifier:(id)arg7 dictionary:(id)arg8 keyEventArray:(id)arg9 ;
-(unsigned long long)loadedLexiconsCountForLanguage:(id)arg1 ;
-(void)_addGuessesForWordBuffer:(char*)arg1 length:(unsigned long long)arg2 language:(id)arg3 connection:(PR_DB_IO*)arg4 sender:(id)arg5 minAutocorrectionLength:(unsigned long long)arg6 previousLetter:(unsigned short)arg7 nextLetter:(unsigned short)arg8 basicOnly:(char)arg9 toGuesses:(id)arg10 ;
-(char)validateWord:(id)arg1 inLexiconForLanguage:(id)arg2 ;
-(char)checkNegativeWordBuffer:(char*)arg1 length:(unsigned long long)arg2 language:(id)arg3 encoding:(unsigned)arg4 alreadyCapitalized:(char)arg5 ;
-(char)findMatchingRangesForRange:(NSRange)arg1 inString:(id)arg2 keyEventArray:(id)arg3 selectedRangeValue:(id)arg4 matchingStringRange:(NSRange*)arg5 correctableStringRange:(NSRange*)arg6 matchingKeyEventRange:(NSRange*)arg7 firstMisspelledKeyEventIndex:(unsigned long long*)arg8 lastMisspelledKeyEventIndex:(unsigned long long*)arg9 previousBackspaceCount:(unsigned long long*)arg10 ;
-(id)_capitalizationResultForString:(id)arg1 range:(NSRange)arg2 inString:(id)arg3 offset:(unsigned long long)arg4 language:(id)arg5 onlyAtInsertionPoint:(char)arg6 keyEventArray:(id)arg7 selectedRangeValue:(id)arg8 ;
-(id)_phraseCapitalizationResultForString:(id)arg1 range:(NSRange)arg2 currentWordRange:(NSRange)arg3 inString:(id)arg4 offset:(unsigned long long)arg5 language:(id)arg6 onlyAtInsertionPoint:(char)arg7 keyEventArray:(id)arg8 selectedRangeValue:(id)arg9 ;
-(id)_accentCorrectionResultForString:(id)arg1 range:(NSRange)arg2 inString:(id)arg3 offset:(unsigned long long)arg4 language:(id)arg5 onlyAtInsertionPoint:(char)arg6 capitalize:(char)arg7 keyEventArray:(id)arg8 selectedRangeValue:(id)arg9 ;
-(char)_acceptWithoutAccentForString:(id)arg1 range:(NSRange)arg2 inString:(id)arg3 language:(id)arg4 ;
-(id)_correctionResultForString:(id)arg1 range:(NSRange)arg2 inString:(id)arg3 offset:(unsigned long long)arg4 tagger:(id)arg5 taggerIndex:(unsigned long long)arg6 appIdentifier:(id)arg7 dictionary:(id)arg8 languages:(id)arg9 connection:(PR_DB_IO*)arg10 onlyAtInsertionPoint:(char)arg11 capitalize:(char)arg12 autocapitalize:(char)arg13 keyEventArray:(id)arg14 selectedRangeValue:(id)arg15 previousLetter:(unsigned short)arg16 nextLetter:(unsigned short)arg17 isAlternateLanguage:(char)arg18 extraMisspellingCount:(unsigned long long)arg19 extraCorrectionCount:(unsigned long long*)arg20 ;
-(id)dataBundle;
-(id)localizationsForLanguage:(id)arg1 ;
-(id)_lexiconPathForLocalization:(id)arg1 type:(id)arg2 ;
-(id)_lexiconPathForLanguage:(id)arg1 type:(id)arg2 ;
-(id)_loadLexiconsForLanguage:(id)arg1 localization:(id)arg2 onQueue:(id)arg3 ;
-(id)_lexiconsForLanguage:(id)arg1 waitForResult:(char)arg2 ;
-(id)_phraseLexiconPathForLanguage:(id)arg1 ;
-(id)_loadPhraseLexiconsForLanguage:(id)arg1 localization:(id)arg2 onQueue:(id)arg3 ;
-(id)_phraseLexiconsForLanguage:(id)arg1 waitForResult:(char)arg2 ;
-(void)updateLexiconsForLanguage:(id)arg1 ;
-(id)_lexiconsForLanguage:(id)arg1 ;
-(char)validateWord:(id)arg1 inLexicons:(id)arg2 forLanguage:(id)arg3 requiredMetaFlags:(unsigned)arg4 alternativeRequiredMetaFlags:(unsigned)arg5 prohibitedMetaFlags:(unsigned)arg6 caseInsensitive:(char)arg7 ;
-(id)_phraseLexiconsForLanguage:(id)arg1 ;
-(void)updateAllLexicons;
-(char)validateAdditionalWord:(id)arg1 inLexiconForLanguage:(id)arg2 ;
-(char)validateVariantWord:(id)arg1 inLexiconForLanguage:(id)arg2 ;
-(char)validateNoCapAbbreviation:(id)arg1 inLexiconForLanguage:(id)arg2 ;
-(char)validateUntilLearnedWord:(id)arg1 inLexiconForLanguage:(id)arg2 ;
-(char)validateWord:(id)arg1 inLexicon:(id)arg2 ;
-(void)enumerateCorrectionEntriesForWord:(id)arg1 maxCorrections:(unsigned long long)arg2 inLexiconForLanguage:(id)arg3 withBlock:(/*^block*/id)arg4 ;
-(unsigned long long)numberOfTurkishSuffixPointsInBuffer:(char*)arg1 length:(unsigned long long)arg2 maxSuffixPoints:(unsigned long long)arg3 suffixPoints:(SCD_Struct_Ap4*)arg4 ;
-(unsigned long long)acceptabilityOfWordBuffer:(char*)arg1 length:(unsigned long long)arg2 language:(id)arg3 encoding:(unsigned)arg4 forPrediction:(char)arg5 alreadyCapitalized:(char)arg6 depth:(unsigned long long)arg7 ;
-(char)validateAbbreviationOrNumberWordBuffer:(char*)arg1 length:(unsigned long long)arg2 language:(id)arg3 encoding:(unsigned)arg4 connection:(PR_DB_IO*)arg5 sender:(id)arg6 ;
-(char)validateWordBuffer:(char*)arg1 length:(unsigned long long)arg2 connection:(PR_DB_IO*)arg3 ;
-(char)checkSpecialPrefixesForWordBuffer:(char*)arg1 length:(unsigned long long)arg2 ;
-(id)stringByRemovingArabicDiacriticsFromString:(id)arg1 ;
-(id)stringByReducingArabicAlefVariantsInString:(id)arg1 ;
-(id)_orthographyByModifyingOrthography:(id)arg1 withLatinLanguage:(id)arg2 ;
-(char)validateWordBuffer:(char*)arg1 length:(unsigned long long)arg2 language:(id)arg3 connection:(PR_DB_IO*)arg4 sender:(id)arg5 checkBase:(char)arg6 checkDict:(char)arg7 checkTemp:(char)arg8 checkNames:(char)arg9 checkHyphens:(char)arg10 checkIntercaps:(char)arg11 checkOptions:(char)arg12 depth:(unsigned long long)arg13 ;
-(char)validateWordPrefixBuffer:(char*)arg1 length:(unsigned long long)arg2 connection:(PR_DB_IO*)arg3 ;
-(NSRange)spellServer:(id)arg1 findMisspelledWordInString:(id)arg2 range:(NSRange)arg3 languages:(id)arg4 topLanguages:(id)arg5 orthography:(id)arg6 checkOrthography:(char)arg7 mutableResults:(id)arg8 offset:(unsigned long long)arg9 autocorrect:(char)arg10 onlyAtInsertionPoint:(char)arg11 initialCapitalize:(char)arg12 autocapitalize:(char)arg13 keyEventArray:(id)arg14 appIdentifier:(id)arg15 selectedRangeValue:(id)arg16 wordCount:(long long*)arg17 countOnly:(char)arg18 correction:(id*)arg19 ;
-(char)spellServer:(id)arg1 _canChangeCaseOfFirstLetterInString:(id)arg2 toUpperCase:(char)arg3 language:(id)arg4 ;
-(id)databasePathForLanguage:(id)arg1 ;
-(char)_checkEnglishGrammarInString:(id)arg1 range:(NSRange)arg2 indexIntoBuffer:(unsigned long long)arg3 bufferLength:(unsigned long long)arg4 language:(id)arg5 connection:(PR_DB_IO*)arg6 sender:(id)arg7 bufIO:(PR_BUF_IO*)arg8 retval:(int*)arg9 errorRange:(NSRange*)arg10 details:(id*)arg11 ;
-(char)_checkGrammarInString:(id)arg1 range:(NSRange)arg2 language:(id)arg3 connection:(PR_DB_IO*)arg4 sender:(id)arg5 bufIO:(PR_BUF_IO*)arg6 errorRange:(NSRange*)arg7 details:(id*)arg8 ;
-(NSRange)spellServer:(id)arg1 checkGrammarInString:(id)arg2 range:(NSRange)arg3 language:(id)arg4 orthography:(id)arg5 mutableResults:(id)arg6 offset:(unsigned long long)arg7 details:(id*)arg8 ;
-(id)spellServer:(id)arg1 suggestContextualGuessDictionariesForWordRange:(NSRange)arg2 inString:(id)arg3 inLanguage:(id)arg4 options:(id)arg5 ;
-(id)spellServer:(id)arg1 suggestGuessDictionariesForWordRange:(NSRange)arg2 inString:(id)arg3 inLanguage:(id)arg4 options:(id)arg5 errorModel:(id)arg6 ;
-(id)spellServer:(id)arg1 alternativesForPinyinInputString:(id)arg2 ;
-(id)spellServer:(id)arg1 extendedAlternativesForPinyinInputString:(id)arg2 ;
-(id)spellServer:(id)arg1 prefixesForPinyinInputString:(id)arg2 ;
-(id)spellServer:(id)arg1 correctionsForPinyinInputString:(id)arg2 ;
-(void)timeout:(id)arg1 ;
-(void)resetDataBundlesForLanguage:(id)arg1 ;
-(void)resetDataBundlesForAllLanguages;
-(void)addAlternateDataBundleURL:(id)arg1 ;
-(void)setUpdateBundleURL:(id)arg1 ;
-(void)releaseAllLanguageModels;
-(void)loadLexiconsAndLanguageModelsForLanguage:(id)arg1 ;
-(id)spellServer:(id)arg1 suggestContextualGuessDictionariesForWordRange:(NSRange)arg2 inString:(id)arg3 language:(id)arg4 options:(id)arg5 ;
-(id)spellServer:(id)arg1 suggestGuessDictionariesForWordRange:(NSRange)arg2 inString:(id)arg3 language:(id)arg4 options:(id)arg5 errorModel:(id)arg6 ;
-(id)spellServer:(id)arg1 correctionsForPinyinInputString:(id)arg2 language:(id)arg3 ;
-(id)spellServer:(id)arg1 suggestGuessesForKoreanWordRange:(NSRange)arg2 inString:(id)arg3 options:(id)arg4 ;
-(void)addLexiconGuessesForWord:(id)arg1 buffer:(char*)arg2 length:(unsigned long long)arg3 language:(id)arg4 minCorrectionLength:(unsigned long long)arg5 minExtendedCorrectionLength:(unsigned long long)arg6 isCapitalized:(char)arg7 stopAfterFreeInsertions:(char)arg8 toGuesses:(id)arg9 ;
-(id)_spellServer:(id)arg1 suggestGuessesForWordRange:(NSRange)arg2 inString:(id)arg3 inLanguage:(id)arg4 options:(id)arg5 tagger:(id)arg6 taggerIndex:(unsigned long long)arg7 errorModel:(id)arg8 guessesDictionaries:(id)arg9 ;
-(id)_crudePreviousWordInString:(id)arg1 inRange:(NSRange)arg2 precededBy:(id*)arg3 ;
-(id)_modifiedGrammarDescriptionForDescription:(id)arg1 ;
-(id)_detailWithRange:(NSRange)arg1 description:(id)arg2 corrections:(id)arg3 ;
-(char)looksLikeArticledNoun:(id)arg1 language:(id)arg2 connection:(PR_DB_IO*)arg3 ;
-(char)looksLikeAdverb:(id)arg1 language:(id)arg2 connection:(PR_DB_IO*)arg3 sender:(id)arg4 ;
-(char)looksLikeParticiple:(id)arg1 language:(id)arg2 connection:(PR_DB_IO*)arg3 sender:(id)arg4 ;
-(char)onContractionList:(id)arg1 language:(id)arg2 connection:(PR_DB_IO*)arg3 sender:(id)arg4 ;
-(char)onNoContractionList:(id)arg1 language:(id)arg2 connection:(PR_DB_IO*)arg3 sender:(id)arg4 ;
-(id)_crudeNextWordInString:(id)arg1 inRange:(NSRange)arg2 ;
-(id)_crudePreviousWordInString:(id)arg1 inRange:(NSRange)arg2 ;
-(id)_correctionForSuggestedPhrase:(const char*)arg1 originalBuffer:(const char*)arg2 length:(unsigned long long)arg3 ;
-(id)spellServer:(id)arg1 modificationsForPinyinInputString:(id)arg2 ;
-(id)spellServer:(id)arg1 finalModificationsForPinyinInputString:(id)arg2 ;
-(id)englishStringsFromWordBuffer:(char*)arg1 length:(unsigned long long)arg2 connection:(PR_DB_IO*)arg3 ;
-(id)englishStringFromWordBuffer:(char*)arg1 length:(unsigned long long)arg2 connection:(PR_DB_IO*)arg3 ;
-(void)addSpecialModifiedPinyinToArray:(id)arg1 inBuffer:(char*)arg2 length:(unsigned long long)arg3 atEnd:(char)arg4 ;
-(void)addModifiedPinyinToArray:(id)arg1 connection:(PR_DB_IO*)arg2 fromIndex:(unsigned long long)arg3 prevIndex:(unsigned long long)arg4 prevPrevIndex:(unsigned long long)arg5 startingModificationsAt:(unsigned long long)arg6 inBuffer:(char*)arg7 length:(unsigned long long)arg8 initialSyllableCount:(unsigned long long)arg9 initialScore:(unsigned long long)arg10 prevScore:(unsigned long long)arg11 prevPrevScore:(unsigned long long)arg12 lastSyllableScore:(unsigned long long)arg13 couldBeAbbreviatedPinyin:(char)arg14 ;
-(void)addModifiedPartialPinyinToArray:(id)arg1 connection:(PR_DB_IO*)arg2 fromIndex:(unsigned long long)arg3 prevIndex:(unsigned long long)arg4 prevPrevIndex:(unsigned long long)arg5 prePrevPrevIndex:(unsigned long long)arg6 startingModificationsAt:(unsigned long long)arg7 inBuffer:(char*)arg8 length:(unsigned long long)arg9 initialSyllableCount:(unsigned long long)arg10 initialScore:(unsigned long long)arg11 prevScore:(unsigned long long)arg12 prevPrevScore:(unsigned long long)arg13 lastSyllableScore:(unsigned long long)arg14 ;
-(id)_pinyinStringByCombiningPinyinString:(id)arg1 withPinyinString:(id)arg2 ;
-(id)_primitiveRetainedAlternativesForPinyinInputString:(id)arg1 ;
-(unsigned long long)_getSplitIndexes:(unsigned long long*)arg1 maxCount:(unsigned long long)arg2 forPinyinInputString:(id)arg3 ;
-(id)_recursiveRetainedAlternativesForPinyinInputString:(id)arg1 depth:(unsigned long long)arg2 ;
-(id)_retainedAlternativesByCombiningAlternatives:(id)arg1 withAlternatives:(id)arg2 andAddingAlternatives:(id)arg3 ;
-(id)spellServer:(id)arg1 _retainedAlternativesForPinyinInputString:(id)arg2 extended:(char)arg3 ;
-(id)spellServer:(id)arg1 _retainedPrefixesForPinyinInputString:(id)arg2 ;
-(id)spellServer:(id)arg1 _retainedCorrectionsForPinyinInputString:(id)arg2 ;
-(id)spellServer:(id)arg1 _retainedModificationsForPinyinInputString:(id)arg2 geometryModelData:(id)arg3 ;
-(id)spellServer:(id)arg1 _retainedFinalModificationsForPinyinInputString:(id)arg2 geometryModelData:(id)arg3 ;
-(id)spellServer:(id)arg1 modificationsForPinyinInputString:(id)arg2 geometryModelData:(id)arg3 ;
-(void)addGuessesForKoreanWord:(id)arg1 includeAdditionalGuesses:(char)arg2 toGuesses:(id)arg3 ;
@end
