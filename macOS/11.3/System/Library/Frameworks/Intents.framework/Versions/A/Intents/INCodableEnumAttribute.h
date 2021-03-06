/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INCodableAttribute.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INCodableEnum, NSString;

@interface INCodableEnumAttribute : INCodableAttribute <NSSecureCoding> {

	INCodableEnum* _codableEnum;
	NSString* _enumNamespace;

}

@property (nonatomic,retain) INCodableEnum * codableEnum;              //@synthesize codableEnum=_codableEnum - In the implementation block
@property (nonatomic,copy) NSString * enumNamespace;                   //@synthesize enumNamespace=_enumNamespace - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)valueType;
-(id)valueWithName:(id)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(Class)resolutionResultClass;
-(Class)_relationshipValueTransformerClass;
-(INCodableEnum *)codableEnum;
-(id)valueForIndex:(unsigned long long)arg1 ;
-(void)setCodableEnum:(INCodableEnum *)arg1 ;
-(NSString *)enumNamespace;
-(void)setEnumNamespace:(NSString *)arg1 ;
-(id)__INCodableDescriptionEnumTypeKey;
-(id)__INCodableDescriptionEnumTypeNamespaceKey;
-(id)__INTypeCodableDescriptionEnumTypeNamespaceKey;
-(id)__INIntentResponseCodableDescriptionEnumTypeKey;
-(id)__INTypeCodableDescriptionEnumTypeKey;
-(id)__INIntentResponseCodableDescriptionEnumTypeNamespaceKey;
@end

