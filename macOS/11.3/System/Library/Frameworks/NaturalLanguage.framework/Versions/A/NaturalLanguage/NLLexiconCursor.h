/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/Versions/A/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NaturalLanguage/NaturalLanguage-Structs.h>
@class NLLexicon, NSString;

@interface NLLexiconCursor : NSObject {

	NLLexicon* _lexicon;
	LXCursorRef _cursor;

}

@property (readonly) char hasEntries; 
@property (readonly) char hasChildren; 
@property (readonly) double prefixProbability; 
@property (readonly) double terminationProbability; 
@property (copy,readonly) NSString * traversedString; 
-(void)dealloc;
-(char)hasChildren;
-(void)enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithLexicon:(id)arg1 cursor:(LXCursorRef)arg2 ;
-(void)_enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithLexicon:(id)arg1 string:(id)arg2 ;
-(id)cursorByAdvancingWithString:(id)arg1 ;
-(char)hasEntries;
-(double)prefixProbability;
-(double)terminationProbability;
-(NSString *)traversedString;
-(void)enumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateCompletionsUsingBlock:(/*^block*/id)arg1 ;
@end
