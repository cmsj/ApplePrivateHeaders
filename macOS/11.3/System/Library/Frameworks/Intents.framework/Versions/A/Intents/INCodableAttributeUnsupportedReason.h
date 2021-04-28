/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INCodableAttributeDialog.h>

@class NSString;

@interface INCodableAttributeUnsupportedReason : INCodableAttributeDialog {

	NSString* _code;

}

@property (nonatomic,copy) NSString * code;                                  //@synthesize code=_code - In the implementation block
@property (nonatomic,copy,readonly) NSString * predicateFormat; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)code;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCode:(NSString *)arg1 ;
-(NSString *)predicateFormat;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(id)__INCodableDescriptionCodeKey;
-(id)__INTypeCodableDescriptionCodeKey;
-(id)__INCodableDescriptionKey;
-(id)__INIntentResponseCodableDescriptionKey;
-(id)__INTypeCodableDescriptionKey;
-(id)__INIntentResponseCodableDescriptionCodeKey;
-(id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
-(id)__INCodableDescriptionFormatStringDictionaryKey;
-(id)__INCodableDescriptionFormatStringLanguageCodeKey;
-(id)__INCodableDescriptionFormatStringIDKey;
-(id)__INCodableDescriptionFormatStringKey;
@end
