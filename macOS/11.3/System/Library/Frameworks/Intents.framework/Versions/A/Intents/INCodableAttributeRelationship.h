/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/INCodableCoding.h>

@class NSDictionary, INCodableAttribute, NSArray, INCodableDescription, NSString;

@interface INCodableAttributeRelationship : NSObject <NSSecureCoding, INCodableCoding> {

	NSDictionary* _originalDictionary;
	INCodableAttribute* _parentCodableAttribute;
	unsigned long long _relation;
	NSArray* _values;
	INCodableAttribute* _codableAttribute;

}

@property (setter=_setOriginalDictionary:,nonatomic,retain) NSDictionary * _originalDictionary;              //@synthesize originalDictionary=_originalDictionary - In the implementation block
@property (nonatomic,__weak,readonly) INCodableAttribute * codableAttribute;                                 //@synthesize codableAttribute=_codableAttribute - In the implementation block
@property (nonatomic,__weak,readonly) INCodableDescription * _codableDescription; 
@property (assign,nonatomic,__weak) INCodableAttribute * parentCodableAttribute;                             //@synthesize parentCodableAttribute=_parentCodableAttribute - In the implementation block
@property (assign,nonatomic) unsigned long long relation;                                                    //@synthesize relation=_relation - In the implementation block
@property (nonatomic,retain) NSArray * values;                                                               //@synthesize values=_values - In the implementation block
@property (nonatomic,readonly) Class valueClass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)values;
-(id)dictionaryRepresentation;
-(void)setValues:(NSArray *)arg1 ;
-(unsigned long long)relation;
-(char)compareValue:(id)arg1 ;
-(Class)valueClass;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(INCodableDescription *)_codableDescription;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INCodableAttribute *)codableAttribute;
-(id)initWithCodableAttribute:(id)arg1 ;
-(void)setRelation:(unsigned long long)arg1 ;
-(NSDictionary *)_originalDictionary;
-(void)_establishRelationship;
-(void)_setOriginalDictionary:(id)arg1 ;
-(INCodableAttribute *)parentCodableAttribute;
-(void)setParentCodableAttribute:(INCodableAttribute *)arg1 ;
-(id)__INCodableDescriptionPredicateValueKey;
-(id)__INCodableDescriptionPredicateValuesKey;
-(id)__INCodableDescriptionPredicateNameKey;
-(id)__INCodableDescriptionParentNameKey;
-(id)__INIntentResponseCodableDescriptionParentNameKey;
-(id)__INTypeCodableDescriptionParentNameKey;
-(id)__INIntentResponseCodableDescriptionPredicateNameKey;
-(id)__INTypeCodableDescriptionPredicateNameKey;
-(id)__INIntentResponseCodableDescriptionPredicateValueKey;
-(id)__INTypeCodableDescriptionPredicateValueKey;
-(id)__INIntentResponseCodableDescriptionPredicateValuesKey;
-(id)__INTypeCodableDescriptionPredicateValuesKey;
@end

