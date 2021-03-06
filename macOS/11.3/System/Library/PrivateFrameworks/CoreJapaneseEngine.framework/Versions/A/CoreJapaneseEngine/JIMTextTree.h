/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreJapaneseEngine.framework/Versions/A/CoreJapaneseEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreJapaneseEngine/CoreJapaneseEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSMutableString, NSString;

@interface JIMTextTree : NSObject <NSCopying> {

	char _hasCompleteChars;
	char _hasIncompleteChars;
	char _hasIncompleteEnd;
	char _generatedByKanaTyping;
	char _noRebuild;
	long long _insertionPoint;
	NSMutableArray* _inputTextArray;
	NSMutableArray* _surfaceTextArray;
	long long _romajiInsertionPoint;
	NSMutableString* _cachedString;
	NSMutableString* _cachedRegularWidthRomajiString;
	NSString* _cachedNormalizedRomajiString;

}

@property (retain) NSMutableArray * inputTextArray;                                     //@synthesize inputTextArray=_inputTextArray - In the implementation block
@property (retain) NSMutableArray * surfaceTextArray;                                   //@synthesize surfaceTextArray=_surfaceTextArray - In the implementation block
@property (assign) long long romajiInsertionPoint;                                      //@synthesize romajiInsertionPoint=_romajiInsertionPoint - In the implementation block
@property (retain) NSMutableString * cachedString;                                      //@synthesize cachedString=_cachedString - In the implementation block
@property (retain) NSMutableString * cachedRegularWidthRomajiString;                    //@synthesize cachedRegularWidthRomajiString=_cachedRegularWidthRomajiString - In the implementation block
@property (retain) NSString * cachedNormalizedRomajiString;                             //@synthesize cachedNormalizedRomajiString=_cachedNormalizedRomajiString - In the implementation block
@property (assign) char noRebuild;                                                      //@synthesize noRebuild=_noRebuild - In the implementation block
@property (assign) char generatedByKanaTyping;                                          //@synthesize generatedByKanaTyping=_generatedByKanaTyping - In the implementation block
@property (assign) char hasCompleteChars;                                               //@synthesize hasCompleteChars=_hasCompleteChars - In the implementation block
@property (assign) char hasIncompleteChars;                                             //@synthesize hasIncompleteChars=_hasIncompleteChars - In the implementation block
@property (assign) char hasIncompleteEnd;                                               //@synthesize hasIncompleteEnd=_hasIncompleteEnd - In the implementation block
@property (readonly) JIMTextTree * normalizedCopy; 
@property (copy,readonly) NSString * string; 
@property (copy,readonly) NSString * stringWithRegularWidthRomajiFragment; 
@property (copy,readonly) NSString * romajiString; 
@property (copy,readonly) NSString * normalizedRomajiString; 
@property (copy,readonly) NSString * rawString; 
@property (assign,nonatomic) long long insertionPoint;                                  //@synthesize insertionPoint=_insertionPoint - In the implementation block
@property (readonly) char hasKanaLetters; 
@property (readonly) unsigned long long transliterationType; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)init;
-(NSString *)string;
-(unsigned long long)transliterationType;
-(NSString *)rawString;
-(long long)insertionPoint;
-(void)setInsertionPoint:(long long)arg1 ;
-(NSString *)romajiString;
-(char)generatedByKanaTyping;
-(id)initWithTextTree:(id)arg1 range:(NSRange)arg2 ;
-(void)appendTextTree:(id)arg1 ;
-(id)initWithTextTree:(id)arg1 romajiRange:(NSRange)arg2 ;
-(id)initWithString:(id)arg1 withTransliteration:(unsigned long long)arg2 ;
-(void)cleanUpTail;
-(char)hasIncompleteEnd;
-(void)transliterateTo:(unsigned long long)arg1 ;
-(void)insertCharacter:(id)arg1 rawCharacter:(id)arg2 withTransliteration:(unsigned long long)arg3 ;
-(void)transliterateSourceRange:(NSRange)arg1 to:(unsigned long long)arg2 ;
-(void)replaceCharacterAtIndex:(unsigned long long)arg1 withCharacter:(id)arg2 rawCharacter:(id)arg3 transliteration:(unsigned long long)arg4 ;
-(void)deleteAllCharacters;
-(void)deleteCharacter;
-(NSString *)normalizedRomajiString;
-(unsigned long long)transliterationTypeAtIndex:(unsigned long long)arg1 ;
-(JIMTextTree *)normalizedCopy;
-(id)stringWithRegularWidthRomajiFragmentForRange:(NSRange)arg1 ;
-(NSString *)stringWithRegularWidthRomajiFragment;
-(void)deleteAllCharactersAndFlushCache;
-(id)romajiStringForRange:(NSRange)arg1 ;
-(id)rawStringForRange:(NSRange)arg1 ;
-(unsigned long long)_romajiIndexAt:(long long)arg1 forOperation:(unsigned long long)arg2 ;
-(void)_rebuildSurfaceTextArray:(char)arg1 ;
-(NSMutableArray *)inputTextArray;
-(void)setInputTextArray:(NSMutableArray *)arg1 ;
-(void)setSurfaceTextArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)surfaceTextArray;
-(void)setRomajiInsertionPoint:(long long)arg1 ;
-(void)setGeneratedByKanaTyping:(char)arg1 ;
-(void)setHasCompleteChars:(char)arg1 ;
-(void)setHasIncompleteChars:(char)arg1 ;
-(void)setHasIncompleteEnd:(char)arg1 ;
-(void)_clearStringCaches;
-(id)_inputStringForTag:(id)arg1 inRange:(NSRange)arg2 ;
-(long long)_insertRomajiArrayToArray:(id)arg1 atIndex:(long long)arg2 fromString:(id)arg3 transliteration:(unsigned long long)arg4 completeFlag:(char)arg5 ;
-(char)hasKanaLetters;
-(char)hasCompleteChars;
-(char)hasIncompleteChars;
-(long long)romajiInsertionPoint;
-(NSMutableString *)cachedString;
-(void)setCachedString:(NSMutableString *)arg1 ;
-(NSMutableString *)cachedRegularWidthRomajiString;
-(void)setCachedRegularWidthRomajiString:(NSMutableString *)arg1 ;
-(NSString *)cachedNormalizedRomajiString;
-(void)setCachedNormalizedRomajiString:(NSString *)arg1 ;
-(char)noRebuild;
-(void)setNoRebuild:(char)arg1 ;
@end

