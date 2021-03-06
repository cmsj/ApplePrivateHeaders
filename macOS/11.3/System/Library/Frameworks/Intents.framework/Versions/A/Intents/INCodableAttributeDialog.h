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

@class INCodableAttribute, NSString, INCodableDescription;

@interface INCodableAttributeDialog : NSObject <NSSecureCoding, NSCopying, INCodableCoding> {

	char _defaultDialog;
	INCodableAttribute* _codableAttribute;
	NSString* _formatString;
	NSString* _formatStringID;

}

@property (assign,setter=_setCodableAttribute:,nonatomic,__weak) INCodableAttribute * _codableAttribute;              //@synthesize codableAttribute=_codableAttribute - In the implementation block
@property (nonatomic,__weak,readonly) INCodableDescription * _codableDescription; 
@property (nonatomic,copy) NSString * formatString;                                                                   //@synthesize formatString=_formatString - In the implementation block
@property (nonatomic,copy) NSString * formatStringID;                                                                 //@synthesize formatStringID=_formatStringID - In the implementation block
@property (assign,getter=isDefaultDialog,nonatomic) char defaultDialog;                                               //@synthesize defaultDialog=_defaultDialog - In the implementation block
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
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(INCodableAttribute *)_codableAttribute;
-(id)localizedDialogWithIntent:(id)arg1 tokens:(id)arg2 ;
-(id)localizedDialogWithIntent:(id)arg1 tokens:(id)arg2 forLanguage:(id)arg3 ;
-(id)localizedDialogWithIntent:(id)arg1 tokens:(id)arg2 localizer:(id)arg3 ;
-(INCodableDescription *)_codableDescription;
-(void)_setCodableAttribute:(id)arg1 ;
-(NSString *)formatString;
-(void)setFormatString:(NSString *)arg1 ;
-(NSString *)formatStringID;
-(void)setFormatStringID:(NSString *)arg1 ;
-(char)isDefaultDialog;
-(void)setDefaultDialog:(char)arg1 ;
-(id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
-(id)__INCodableDescriptionFormatStringDictionaryKey;
-(id)__INCodableDescriptionFormatStringLanguageCodeKey;
-(id)__INCodableDescriptionFormatStringIDKey;
-(id)__INCodableDescriptionFormatStringKey;
@end

