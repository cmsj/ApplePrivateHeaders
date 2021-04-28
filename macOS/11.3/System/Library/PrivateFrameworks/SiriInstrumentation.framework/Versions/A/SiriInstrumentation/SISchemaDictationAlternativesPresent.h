/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/Versions/A/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class SISchemaLocaleIdentifier, NSData;

@interface SISchemaDictationAlternativesPresent : SISchemaInstrumentationMessage {

	int _numberOfUnderlines;
	int _countOfWordsUnderlined;
	SISchemaLocaleIdentifier* _alternativesLocale;
	char _multilingualIsLowConfidence;
	SCD_Struct_LT1 _has;
	char _hasAlternativesLocale;

}

@property (assign,nonatomic) int numberOfUnderlines;                                     //@synthesize numberOfUnderlines=_numberOfUnderlines - In the implementation block
@property (assign,nonatomic) char hasNumberOfUnderlines; 
@property (assign,nonatomic) int countOfWordsUnderlined;                                 //@synthesize countOfWordsUnderlined=_countOfWordsUnderlined - In the implementation block
@property (assign,nonatomic) char hasCountOfWordsUnderlined; 
@property (nonatomic,retain) SISchemaLocaleIdentifier * alternativesLocale;              //@synthesize alternativesLocale=_alternativesLocale - In the implementation block
@property (assign,nonatomic) char hasAlternativesLocale;                                 //@synthesize hasAlternativesLocale=_hasAlternativesLocale - In the implementation block
@property (assign,nonatomic) char multilingualIsLowConfidence;                           //@synthesize multilingualIsLowConfidence=_multilingualIsLowConfidence - In the implementation block
@property (assign,nonatomic) char hasMultilingualIsLowConfidence; 
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)setAlternativesLocale:(SISchemaLocaleIdentifier *)arg1 ;
-(SISchemaLocaleIdentifier *)alternativesLocale;
-(char)hasAlternativesLocale;
-(void)setHasAlternativesLocale:(char)arg1 ;
-(void)setNumberOfUnderlines:(int)arg1 ;
-(void)setCountOfWordsUnderlined:(int)arg1 ;
-(void)setMultilingualIsLowConfidence:(char)arg1 ;
-(int)numberOfUnderlines;
-(int)countOfWordsUnderlined;
-(char)multilingualIsLowConfidence;
-(char)hasNumberOfUnderlines;
-(void)setHasNumberOfUnderlines:(char)arg1 ;
-(char)hasCountOfWordsUnderlined;
-(void)setHasCountOfWordsUnderlined:(char)arg1 ;
-(char)hasMultilingualIsLowConfidence;
-(void)setHasMultilingualIsLowConfidence:(char)arg1 ;
@end
