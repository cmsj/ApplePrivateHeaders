/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/Versions/A/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmailCore/EmailCore-Structs.h>
@class NSString, NSData;

@interface ECEncodedWordEncoder : NSObject {

	unsigned long long _stringEncoding;
	NSString* _language;
	NSString* _string;
	NSString* _characterSet;
	long long _encodedWordEncoding;
	NSData* _decodedText;
	unsigned long long _singleEncodedWordLength;

}

@property (nonatomic,readonly) unsigned long long stringEncoding;                          //@synthesize stringEncoding=_stringEncoding - In the implementation block
@property (nonatomic,copy,readonly) NSString * language;                                   //@synthesize language=_language - In the implementation block
@property (nonatomic,copy,readonly) NSString * string;                                     //@synthesize string=_string - In the implementation block
@property (nonatomic,copy) NSString * characterSet;                                        //@synthesize characterSet=_characterSet - In the implementation block
@property (assign,nonatomic) long long encodedWordEncoding;                                //@synthesize encodedWordEncoding=_encodedWordEncoding - In the implementation block
@property (nonatomic,copy) NSData * decodedText;                                           //@synthesize decodedText=_decodedText - In the implementation block
@property (assign,nonatomic) unsigned long long singleEncodedWordLength;                   //@synthesize singleEncodedWordLength=_singleEncodedWordLength - In the implementation block
@property (nonatomic,readonly) unsigned long long minimumLengthOfEncodedWord; 
-(id)description;
-(id)init;
-(NSString *)string;
-(NSString *)language;
-(unsigned long long)stringEncoding;
-(NSString *)characterSet;
-(void)setCharacterSet:(NSString *)arg1 ;
-(void)setEncodedWordEncoding:(long long)arg1 ;
-(long long)encodedWordEncoding;
-(void)_prepareForEncoding;
-(unsigned long long)singleEncodedWordLength;
-(unsigned long long)_lengthOfQEncodedTextForBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)setDecodedText:(NSData *)arg1 ;
-(void)setSingleEncodedWordLength:(unsigned long long)arg1 ;
-(unsigned long long)_bEncodeToHeaderData:(id)arg1 currentLineLength:(unsigned long long)arg2 ;
-(unsigned long long)_qEncodeToHeaderData:(id)arg1 currentLineLength:(unsigned long long)arg2 ;
-(unsigned long long)_writeEncodedWordPreambleToBuffer:(char*)arg1 length:(unsigned long long)arg2 ;
-(NSData *)decodedText;
-(void)_writeQEncodedTextAndEndSequenceToHeaderBytes:(char*)arg1 fromDecodedBytes:(const char*)arg2 length:(unsigned long long)arg3 ;
-(char)_getBytesWithoutSplittingComposedCharacters:(void*)arg1 targetQEncodedTextLength:(unsigned long long)arg2 usedLength:(unsigned long long*)arg3 splitComposedCharacterSequence:(char*)arg4 usedQEncodedTextLength:(unsigned long long*)arg5 extraLength:(unsigned long long*)arg6 extraQEncodedTextLength:(unsigned long long*)arg7 fromString:(id)arg8 stringEncoding:(unsigned long long)arg9 range:(NSRange)arg10 remainingRange:(NSRange*)arg11 ;
-(const char*)_findNextByteThatNeedsQEncodingBetweenStartByte:(const char*)arg1 endByte:(const char*)arg2 ;
-(id)initWithString:(id)arg1 stringEncoding:(unsigned long long)arg2 language:(id)arg3 ;
-(unsigned long long)minimumLengthOfEncodedWord;
-(unsigned long long)encodeToHeaderData:(id)arg1 currentLineLength:(unsigned long long)arg2 ;
@end

