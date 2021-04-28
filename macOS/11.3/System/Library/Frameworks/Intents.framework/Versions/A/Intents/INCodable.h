/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class INCodableDescription, NSMutableDictionary;

@interface INCodable : PBCodable <NSCopying> {

	INCodableDescription* _objectDescription;
	NSMutableDictionary* _customValueForKeyDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * customValueForKeyDictionary;                                    //@synthesize customValueForKeyDictionary=_customValueForKeyDictionary - In the implementation block
@property (setter=_setObjectDescription:,nonatomic,retain) INCodableDescription * _objectDescription;              //@synthesize objectDescription=_objectDescription - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(INCodableDescription *)_objectDescription;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithCodableDescription:(id)arg1 data:(id)arg2 ;
-(id)_initWithCodableDescription:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(void)setNilValueForAllKeys;
-(char)isValidKey:(id)arg1 ;
-(id)_dictionaryRepresentationWithNullValues:(char)arg1 ;
-(char)_isAttribute:(id)arg1 equalTo:(id)arg2 ;
-(char)_isStringAttribute:(id)arg1 equalTo:(id)arg2 ;
-(id)_nonNilAttributes;
-(id)_nonNilRepeatedAttributes;
-(char)_readFrom:(id)arg1 error:(id*)arg2 ;
-(char)_writeTo:(id)arg1 error:(id*)arg2 ;
-(id)_dataWithError:(id*)arg1 ;
-(void)_setEmptyArrayForNonNilRepeatedAttributes:(id)arg1 ;
-(id)_copyWithZone:(NSZone*)arg1 error:(id*)arg2 ;
-(void)_setObject:(id)arg1 forAttribute:(id)arg2 ;
-(void)_setValue:(void*)arg1 forAttribute:(id)arg2 ;
-(void)_setDoubleValue:(double)arg1 forAttribute:(id)arg2 ;
-(void)_setFloatValue:(float)arg1 forAttribute:(id)arg2 ;
-(void)_setInt32Value:(int)arg1 forAttribute:(id)arg2 ;
-(void)_setInt64Value:(long long)arg1 forAttribute:(id)arg2 ;
-(void)_setUInt32Value:(unsigned)arg1 forAttribute:(id)arg2 ;
-(void)_setUInt64Value:(unsigned long long)arg1 forAttribute:(id)arg2 ;
-(void)_setBoolValue:(char)arg1 forAttribute:(id)arg2 ;
-(double)_doubleValueForAttribute:(id)arg1 ;
-(float)_floatValueForAttribute:(id)arg1 ;
-(int)_int32ValueForAttribute:(id)arg1 ;
-(long long)_int64ValueForAttribute:(id)arg1 ;
-(unsigned)_UInt32ValueForAttribute:(id)arg1 ;
-(unsigned long long)_UInt64ValueForAttribute:(id)arg1 ;
-(char)_boolValueForAttribute:(id)arg1 ;
-(id)_valueForAttribute:(id)arg1 ;
-(id)_valueForAttribute:(id)arg1 ofClass:(Class)arg2 ;
-(void)_setObjectDescription:(id)arg1 ;
-(NSMutableDictionary *)customValueForKeyDictionary;
-(void)setCustomValueForKeyDictionary:(NSMutableDictionary *)arg1 ;
@end
