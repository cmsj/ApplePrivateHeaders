/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBPersonalizationBucket : PBCodable <NSCopying> {

	long long _maximum;
	long long _minimum;
	long long _treatmentId;
	SCD_Struct_NT5 _has;

}

@property (assign,nonatomic) char hasMinimum; 
@property (assign,nonatomic) long long minimum;                  //@synthesize minimum=_minimum - In the implementation block
@property (assign,nonatomic) char hasMaximum; 
@property (assign,nonatomic) long long maximum;                  //@synthesize maximum=_maximum - In the implementation block
@property (assign,nonatomic) char hasTreatmentId; 
@property (assign,nonatomic) long long treatmentId;              //@synthesize treatmentId=_treatmentId - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(long long)minimum;
-(long long)maximum;
-(void)setMinimum:(long long)arg1 ;
-(void)setMaximum:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(long long)treatmentId;
-(void)setTreatmentId:(long long)arg1 ;
-(char)hasTreatmentId;
-(void)setHasTreatmentId:(char)arg1 ;
-(void)setHasMinimum:(char)arg1 ;
-(char)hasMinimum;
-(void)setHasMaximum:(char)arg1 ;
-(char)hasMaximum;
@end
