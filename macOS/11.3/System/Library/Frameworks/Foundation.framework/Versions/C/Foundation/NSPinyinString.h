/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@class NSString;

@interface NSPinyinString : NSString {

	NSString* _string;
	unsigned long long _syllableCount;
	unsigned long long _score;
	unsigned long long _rangeCount;
	unsigned long long _replacementCount;
	unsigned long long _transpositionCount;
	unsigned long long _insertionCount;
	unsigned long long _deletionCount;
	unsigned long long _firstModificationIndex;
	NSRange* _ranges;
	char _lastSyllableIsPartial;

}
+(id)_alternativesForInputString:(id)arg1 ;
+(id)_prefixesForInputString:(id)arg1 ;
+(id)alternativesForInputString:(id)arg1 ;
+(id)prefixesForInputString:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)string;
-(unsigned long long)length;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(unsigned long long)score;
-(id)initWithString:(id)arg1 syllableCount:(unsigned long long)arg2 lastSyllableIsPartial:(char)arg3 score:(unsigned long long)arg4 replacementCount:(unsigned long long)arg5 transpositionCount:(unsigned long long)arg6 insertionCount:(unsigned long long)arg7 deletionCount:(unsigned long long)arg8 indexOfFirstModification:(unsigned long long)arg9 rangeCount:(unsigned long long)arg10 ranges:(NSRange*)arg11 ;
-(id)initWithString:(id)arg1 syllableCount:(unsigned long long)arg2 lastSyllableIsPartial:(char)arg3 score:(unsigned long long)arg4 replacementCount:(unsigned long long)arg5 transpositionCount:(unsigned long long)arg6 insertionCount:(unsigned long long)arg7 deletionCount:(unsigned long long)arg8 rangeCount:(unsigned long long)arg9 ranges:(NSRange*)arg10 ;
-(unsigned long long)syllableCount;
-(char)lastSyllableIsPartial;
-(unsigned long long)numberOfNonPinyinRanges;
-(unsigned long long)numberOfReplacements;
-(unsigned long long)numberOfTranspositions;
-(unsigned long long)numberOfInsertions;
-(unsigned long long)numberOfDeletions;
-(unsigned long long)indexOfFirstModification;
-(NSRange)nonPinyinRangeAtIndex:(unsigned long long)arg1 ;
-(id)nonPinyinIndexSet;
@end

