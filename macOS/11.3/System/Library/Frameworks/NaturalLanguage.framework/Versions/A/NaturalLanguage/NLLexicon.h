/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/Versions/A/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NaturalLanguage/NaturalLanguage-Structs.h>
@class NSString;

@interface NLLexicon : NSObject {

	NSString* _localization;
	const void* _lexicon;

}

@property (copy,readonly) NSString * localization; 
-(void)dealloc;
-(id)description;
-(LXLexiconRef)lexicon;
-(NSString *)localization;
-(id)initWithLocalization:(id)arg1 ;
-(char)getProbabilityForTokenID:(unsigned)arg1 probability:(double*)arg2 ;
-(id)entryForString:(id)arg1 ;
-(id)entryForTokenID:(unsigned)arg1 ;
-(void)_enumerateEntriesForString:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)getProbabilityForString:(id)arg1 probability:(double*)arg2 ;
-(void)enumerateCompletionsForPrefix:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end
