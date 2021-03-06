/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/Versions/A/AccessibilitySharedSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessibilitySharedSupport/AccessibilitySharedSupport-Structs.h>
@interface AXSSLanguageTagger : NSObject
+(id)languageTagsForContent:(id)arg1 ;
+(id)primaryLanguageForContent:(id)arg1 ;
+(void*)_scriptTaggerForContent:(id)arg1 ;
+(char)_isNewline:(id)arg1 ;
+(NSRange)_manuallyProcessContent:(id)arg1 tokenRange:(NSRange)arg2 currentRange:(NSRange)arg3 ;
+(void)_tagRange:(NSRange)arg1 document:(id)arg2 tags:(id)arg3 createdFromNewline:(char)arg4 ;
+(SCD_Struct_AX4*)_calculateLanguageHintsForContent:(id)arg1 ;
+(void)_hypothesesForContent:(id)arg1 withHints:(SCD_Struct_AX4*)arg2 guesses:(SCD_Struct_AX4*)arg3 ;
+(id)langCodeForlangId:(int)arg1 ;
+(void*)_taggerForContent:(id)arg1 tagScheme:(id)arg2 ;
+(id)_createTagForContent:(id)arg1 tokenRange:(NSRange)arg2 document:(id)arg3 createdFromNewline:(char)arg4 ;
+(id)_languageTagForDateIfNecessary:(id)arg1 ;
+(id)_dialectWithHighestProbability:(SCD_Struct_AX4*)arg1 ;
+(id)_secondaryDialects:(SCD_Struct_AX4*)arg1 ;
+(float)_systemLanguageProbabilityForContent:(id)arg1 ;
+(int)langIDforLangCode:(id)arg1 ;
+(SCD_Struct_AX4*)_languageHintsEvenlyDistributedWithProbability:(float)arg1 excludingHints:(id)arg2 ;
+(void*)_tokenTaggerForContent:(id)arg1 ;
+(id)_allLangIDs;
+(NSRange)_extendRange:(NSRange)arg1 forContent:(id)arg2 withRange:(NSRange)arg3 ;
+(id)markupLanguageTagForAttributedString:(id)arg1 ;
+(void*)_languageTaggerForContent:(id)arg1 ;
+(id)_overrideLanguageDetection:(id)arg1 ;
@end

