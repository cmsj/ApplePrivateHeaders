/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/Versions/A/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class CHSpellCheckerErrorModel;

@interface CHSpellChecker : NSObject {

	AppleSpellRef _spellServer;
	CHSpellCheckerErrorModel* _errorModel;

}

@property (nonatomic,retain) CHSpellCheckerErrorModel * errorModel;              //@synthesize errorModel=_errorModel - In the implementation block
+(AppleSpellRef)sharedSpellServer;
+(id)newErrorModel;
-(void)dealloc;
-(id)init;
-(char)isWordInUserDictionaries:(id)arg1 caseSensitive:(char)arg2 ;
-(id)correctionsForString:(id)arg1 shouldUseErrorModel:(char)arg2 forLocale:(id)arg3 ;
-(id)topCorrectionForString:(id)arg1 contextBeforeToken:(id)arg2 contextSeparator:(id)arg3 shouldUseErrorModel:(char)arg4 forLanguage:(id)arg5 ;
-(CHSpellCheckerErrorModel *)errorModel;
-(void)setErrorModel:(CHSpellCheckerErrorModel *)arg1 ;
@end
