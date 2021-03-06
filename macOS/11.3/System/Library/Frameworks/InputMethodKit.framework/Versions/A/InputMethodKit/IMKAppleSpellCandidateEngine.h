/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InputMethodKit/InputMethodKit-Structs.h>
#import <InputMethodKit/IMKCandidateEngine.h>

@protocol IMKMacSpellChecker;
@class NSString;

@interface IMKAppleSpellCandidateEngine : IMKCandidateEngine {

	char _shouldLearn;
	long long _processID;
	long long _spellDocumentTag;
	NSString* _bundleID;
	id<IMKMacSpellChecker> _spellChecker;

}

@property (assign,nonatomic) long long processID;                                //@synthesize processID=_processID - In the implementation block
@property (assign,nonatomic) long long spellDocumentTag;                         //@synthesize spellDocumentTag=_spellDocumentTag - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                                //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) id<IMKMacSpellChecker> spellChecker;              //@synthesize spellChecker=_spellChecker - In the implementation block
@property (assign,nonatomic) char shouldLearn;                                   //@synthesize shouldLearn=_shouldLearn - In the implementation block
-(unsigned long long)textCheckingTypes;
-(id)_candidateListFromChecker:(id)arg1 withContext:(id)arg2 cursorPosition:(long long)arg3 ;
-(long long)spellDocumentTag;
-(id)contentForRange:(NSRange)arg1 forCursorPosition:(long long)arg2 inDocument:(id)arg3 ;
-(id)initWithSpellChecker:(id)arg1 ;
-(void)generateCandidatesFor:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(void)setSpellDocumentTag:(long long)arg1 ;
-(char)shouldLearn;
-(void)setShouldLearn:(char)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(void)preflight;
-(long long)processID;
-(void)setProcessID:(long long)arg1 ;
-(id<IMKMacSpellChecker>)spellChecker;
@end

