/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKProtobufShippingMethod : PBCodable <NSCopying> {

	long long _amount;
	NSString* _detail;
	NSString* _identifier;
	NSString* _label;
	unsigned _type;
	SCD_Struct_PK8 _has;

}

@property (assign,nonatomic) char hasAmount; 
@property (assign,nonatomic) long long amount;                   //@synthesize amount=_amount - In the implementation block
@property (nonatomic,readonly) char hasLabel; 
@property (nonatomic,retain) NSString * label;                   //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) unsigned type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) char hasDetail; 
@property (nonatomic,retain) NSString * detail;                  //@synthesize detail=_detail - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)detail;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(char)hasIdentifier;
-(char)hasLabel;
-(void)setDetail:(NSString *)arg1 ;
-(char)hasDetail;
-(void)setAmount:(long long)arg1 ;
-(long long)amount;
-(void)setHasAmount:(char)arg1 ;
-(char)hasAmount;
@end

