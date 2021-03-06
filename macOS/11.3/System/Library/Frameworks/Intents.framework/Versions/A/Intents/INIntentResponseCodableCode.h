/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/INCodableCoding.h>

@class NSString, INIntentResponseCodableDescription, NSArray;

@interface INIntentResponseCodableCode : NSObject <NSSecureCoding, INCodableCoding> {

	char _success;
	long long _value;
	NSString* _name;
	NSString* _formatString;
	NSString* _formatStringLocID;
	NSString* _conciseFormatString;
	NSString* _conciseFormatStringLocID;
	INIntentResponseCodableDescription* __codableDescription;

}

@property (assign,setter=_setCodableDescription:,nonatomic,__weak) INIntentResponseCodableDescription * _codableDescription;              //@synthesize _codableDescription=__codableDescription - In the implementation block
@property (assign,nonatomic) long long value;                                                                                             //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * name;                                                                                               //@synthesize name=_name - In the implementation block
@property (assign,getter=isSuccess,nonatomic) char success;                                                                               //@synthesize success=_success - In the implementation block
@property (nonatomic,copy) NSString * formatString;                                                                                       //@synthesize formatString=_formatString - In the implementation block
@property (nonatomic,copy) NSString * formatStringLocID;                                                                                  //@synthesize formatStringLocID=_formatStringLocID - In the implementation block
@property (nonatomic,copy) NSString * conciseFormatString;                                                                                //@synthesize conciseFormatString=_conciseFormatString - In the implementation block
@property (nonatomic,copy) NSString * conciseFormatStringLocID;                                                                           //@synthesize conciseFormatStringLocID=_conciseFormatStringLocID - In the implementation block
@property (nonatomic,readonly) NSArray * parameterNames; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(long long)value;
-(id)dictionaryRepresentation;
-(void)setValue:(long long)arg1 ;
-(char)isSuccess;
-(void)setSuccess:(char)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(INIntentResponseCodableDescription *)_codableDescription;
-(NSString *)formatString;
-(void)setFormatString:(NSString *)arg1 ;
-(id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
-(id)__INCodableDescriptionFormatStringDictionaryKey;
-(id)__INCodableDescriptionFormatStringLanguageCodeKey;
-(id)__INCodableDescriptionFormatStringIDKey;
-(id)__INCodableDescriptionFormatStringKey;
-(NSArray *)parameterNames;
-(void)_setCodableDescription:(id)arg1 ;
-(id)__INCodableDescriptionNameKey;
-(id)_parameterNamesFromString:(id)arg1 ;
-(NSString *)formatStringLocID;
-(void)setFormatStringLocID:(NSString *)arg1 ;
-(NSString *)conciseFormatString;
-(void)setConciseFormatString:(NSString *)arg1 ;
-(NSString *)conciseFormatStringLocID;
-(void)setConciseFormatStringLocID:(NSString *)arg1 ;
-(id)__INCodableDescriptionConciseFormatStringDictionaryLanguageCodeKey;
-(id)__INCodableDescriptionConciseFormatStringDictionaryKey;
-(id)__INCodableDescriptionConciseFormatStringLanguageCodeKey;
-(id)__INCodableDescriptionSuccessKey;
-(id)__INCodableDescriptionConciseFormatStringIDKey;
-(id)__INCodableDescriptionConciseFormatStringKey;
@end

