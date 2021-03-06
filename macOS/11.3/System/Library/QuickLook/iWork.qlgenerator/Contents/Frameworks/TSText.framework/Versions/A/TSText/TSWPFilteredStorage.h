/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSText/TSText-Structs.h>
#import <TSText/TSWPTextSource.h>

@class TSWPStorage, TSWPDeletionRangeMap, NSString;

@interface TSWPFilteredStorage : NSObject <TSWPTextSource> {

	TSWPStorage* _storage;
	TSWPDeletionRangeMap* _rangeMap;
	unsigned long long _length;
	unsigned long long _storageChangeCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)filteredStorageRemovingDeletionsFromStorage:(id)arg1 subRange:(NSRange)arg2 ;
-(id)string;
-(unsigned long long)length;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)substringWithRange:(NSRange)arg1 ;
-(unsigned long long)changeCount;
-(void)enumerateSmartFieldsWithAttributeKind:(unsigned long long)arg1 inRange:(NSRange)arg2 usingBlock:(/*^block*/id)arg3 ;
-(NSRange)wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(char)arg2 ;
-(id)characterStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)paragraphStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(unsigned long long)previousCharacterIndex:(unsigned long long)arg1 ;
-(id)initWithStorage:(id)arg1 subRange:(NSRange)arg2 removeRanges:(id)arg3 ;
-(unsigned long long)nextCharacterIndex:(unsigned long long)arg1 ;
-(char)isWritingDirectionRightToLeftForParagraphAtCharIndex:(unsigned long long)arg1 ;
-(void)attributesAtCharIndex:(unsigned long long)arg1 attributesOfInterest:(char)arg2 attributesTable:(id)arg3 effectiveRange:(NSRange*)arg4 ;
-(unsigned long long)storageLength;
-(char)hasColumnBreakAtCharIndex:(unsigned long long)arg1 ;
-(char)hasColumnStyleForParagraphBreakAtCharIndex:(unsigned long long)arg1 ;
-(id)smartFieldAtCharIndex:(unsigned long long)arg1 attributeKind:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)smartFieldsWithAttributeKind:(unsigned long long)arg1 intersectingRange:(NSRange)arg2 ;
-(id)footnoteReferenceAtCharIndex:(unsigned long long)arg1 ;
-(id)attachmentAtCharIndex:(unsigned long long)arg1 ;
-(id)attachmentOrFootnoteAtCharIndex:(unsigned long long)arg1 ;
-(id)objectAtLocationPriorToMappedCharIndex:(unsigned long long)arg1 forAttributeKind:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(unsigned long long)charIndexMappedToStorage:(unsigned long long)arg1 ;
-(unsigned long long)charIndexMappedFromStorage:(unsigned long long)arg1 ;
-(NSRange)charRangeMappedToStorage:(NSRange)arg1 ;
-(NSRange)charRangeMappedFromStorage:(NSRange)arg1 ;
-(long long)hyphenationLocationBeforeIndex:(long long)arg1 inRange:(NSRange)arg2 locale:(id)arg3 hyphenChar:(unsigned*)arg4 ;
-(unsigned long long)charIndexRemappedFromStorage:(unsigned long long)arg1 ;
-(void)enumerateWithAttributeKind:(unsigned long long)arg1 inRange:(NSRange)arg2 usingBlock:(/*^block*/id)arg3 ;
-(char)hasSmartFieldsInRange:(NSRange)arg1 ;
-(id)initWithStorage:(id)arg1 subRange:(NSRange)arg2 ;
-(NSRange)whiteSpaceRangeAtCharIndex:(unsigned long long)arg1 includingBreaks:(char)arg2 ;
-(NSRange)scanBackwardForWordAtCharIndex:(unsigned long long)arg1 ;
-(NSRange)rangeForSelectionAtCharIndex:(unsigned long long)arg1 caretIndex:(unsigned long long)arg2 ;
-(id)dropCapStyleAtCharIndex:(unsigned long long)arg1 ;
-(id)characterStyleForDropCapAtCharIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(NSRange)rangeOfDropCapAtCharIndex:(unsigned long long)arg1 ;
-(NSRange)wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(char)arg2 includeHyphenation:(char)arg3 ;
-(NSRange)charRangeRemappedFromStorage:(NSRange)arg1 ;
-(char)adjustRangesByDelta:(long long)arg1 startingAt:(unsigned long long)arg2 ;
-(void)updateStorageChangeCount;
-(NSRange)rangeOfDropCapAtCharIndex:(unsigned long long)arg1 actualCharacterCount:(out unsigned long long*)arg2 ;
@end

