/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenReader.framework/Versions/A/Frameworks/BrailleTranslation.framework/Versions/A/BrailleTranslation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BrailleTranslation/BrailleTranslation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface BRLTTranslationParameters : NSObject <NSSecureCoding> {

	char _partial;
	char _useTechnicalTableIfPossible;
	NSString* _language;
	unsigned long long _mode;
	NSRange _textPositionsRange;

}

@property (nonatomic,copy,readonly) NSString * language;                      //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) unsigned long long mode;                       //@synthesize mode=_mode - In the implementation block
@property (getter=isPartial,nonatomic,readonly) char partial;                 //@synthesize partial=_partial - In the implementation block
@property (nonatomic,readonly) char useTechnicalTableIfPossible;              //@synthesize useTechnicalTableIfPossible=_useTechnicalTableIfPossible - In the implementation block
@property (nonatomic,readonly) NSRange textPositionsRange;                    //@synthesize textPositionsRange=_textPositionsRange - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)language;
-(unsigned long long)mode;
-(char)isPartial;
-(char)useTechnicalTableIfPossible;
-(NSRange)textPositionsRange;
-(id)initWithLanguage:(id)arg1 mode:(unsigned long long)arg2 partial:(char)arg3 useTechnicalTable:(char)arg4 textPositionsRange:(NSRange)arg5 ;
@end

