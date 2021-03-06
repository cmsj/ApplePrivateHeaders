/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/Versions/A/DataDetectorsNaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DataDetectorsNaturalLanguage/DataDetectorsNaturalLanguage-Structs.h>
@interface IPRegexToolbox : NSObject
+(id)emailSubjectPrefixRegex;
+(id)regexPatternForLanguageID:(id)arg1 eventVocabularyArray:(id)arg2 ;
+(id)regularExpressionWithKey:(id)arg1 generator:(/*^block*/id)arg2 ;
+(id)matchingKeywordResultsForRegex:(id)arg1 inString:(id)arg2 needsToLowercase:(char)arg3 ;
+(char)isRangeInsideQuotationMarks:(NSRange)arg1 text:(id)arg2 limitToSurroundingText:(char)arg3 ;
+(char)isRangeNearbyExclusionKeyword:(NSRange)arg1 text:(id)arg2 limitToSurroundingText:(char)arg3 language:(id)arg4 ;
+(id)regexPatternWithPrefix:(id)arg1 suffix:(id)arg2 choices:(id)arg3 ;
+(id)regexPatternByUncapturingPattern:(id)arg1 ;
+(unsigned long long)numberOfMatchesForRegex:(id)arg1 inString:(id)arg2 needsToLowercase:(char)arg3 ;
+(id)firstMatchingKeywordForRegex:(id)arg1 inString:(id)arg2 needsToLowercase:(char)arg3 ;
@end

