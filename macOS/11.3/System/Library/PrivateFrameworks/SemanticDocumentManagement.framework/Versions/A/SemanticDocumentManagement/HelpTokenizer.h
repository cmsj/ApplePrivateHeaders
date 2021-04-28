/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SemanticDocumentManagement.framework/Versions/A/SemanticDocumentManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCharacterSet;

@interface HelpTokenizer : NSObject {

	NSCharacterSet* whitespaceCharSet;
	unsigned languageProcessingFlags;

}
+(int)countOfGramsInTokenString:(id)arg1 usingSeparator:(id)arg2 ;
+(id)tokenizerForLanguage:(id)arg1 ;
+(int)countOfGramsInTokenString:(id)arg1 ;
+(id)sdmLocalizationForLanguage:(id)arg1 ;
-(void)dealloc;
-(id)initWithKnownPhraseArray:(id)arg1 language:(id)arg2 ;
-(id)nGramTokenCountFromString:(id)arg1 options:(id)arg2 ;
-(id)tokenCountFromString:(id)arg1 options:(id)arg2 ;
-(id)tokenizedStringFromString:(id)arg1 ;
-(id)stringFromTokenizedString:(id)arg1 ;
-(id)nGramsFromTokenizedString:(id)arg1 ;
-(char)isValidSuggestionTokenString:(id)arg1 ;
@end
