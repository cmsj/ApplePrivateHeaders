/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/INCodableCoding.h>

@class INIntentCodableDescription, NSString;

@interface INIntentCodablePhrase : NSObject <NSSecureCoding, NSCopying, INCodableCoding> {

	INIntentCodableDescription* _codableDescription;
	NSString* _pronunciationHint;
	NSString* _pronunciationHintLocID;
	NSString* _phrase;
	NSString* _phraseLocID;

}

@property (assign,setter=_setCodableDescription:,nonatomic,__weak) INIntentCodableDescription * _codableDescription;              //@synthesize codableDescription=_codableDescription - In the implementation block
@property (nonatomic,copy) NSString * pronunciationHint;                                                                          //@synthesize pronunciationHint=_pronunciationHint - In the implementation block
@property (nonatomic,copy) NSString * pronunciationHintLocID;                                                                     //@synthesize pronunciationHintLocID=_pronunciationHintLocID - In the implementation block
@property (nonatomic,copy) NSString * phrase;                                                                                     //@synthesize phrase=_phrase - In the implementation block
@property (nonatomic,copy) NSString * phraseLocID;                                                                                //@synthesize phraseLocID=_phraseLocID - In the implementation block
@property (copy,readonly) NSString * localizedPhrase; 
@property (copy,readonly) NSString * localizedPronunciationHint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)phrase;
-(void)setPhrase:(NSString *)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(INIntentCodableDescription *)_codableDescription;
-(NSString *)pronunciationHint;
-(void)setPronunciationHint:(NSString *)arg1 ;
-(NSString *)localizedPhrase;
-(id)localizedPhraseForLanguage:(id)arg1 ;
-(id)localizedPhraseWithLocalizer:(id)arg1 ;
-(NSString *)localizedPronunciationHint;
-(id)localizedPronunciationHintForLanguage:(id)arg1 ;
-(id)localizedPronunciationHintWithLocalizer:(id)arg1 ;
-(void)_setCodableDescription:(id)arg1 ;
-(NSString *)pronunciationHintLocID;
-(void)setPronunciationHintLocID:(NSString *)arg1 ;
-(NSString *)phraseLocID;
-(void)setPhraseLocID:(NSString *)arg1 ;
-(id)__INCodableDescriptionPronunciationHintIDKey;
-(id)__INCodableDescriptionPronunciationHintKey;
-(id)__INCodableDescriptionPhraseIDKey;
-(id)__INCodableDescriptionPhraseKey;
@end
