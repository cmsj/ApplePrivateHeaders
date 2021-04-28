/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/Versions/A/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PPM2ObjectsDeleted : PBCodable <NSCopying> {

	int _domain;
	int _donationSource;
	char _error;
	SCD_Struct_PP4 _has;

}

@property (assign,nonatomic) char hasDomain; 
@property (assign,nonatomic) int domain;                          //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) char hasError; 
@property (assign,nonatomic) char error;                          //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) char hasDonationSource; 
@property (assign,nonatomic) int donationSource;                  //@synthesize donationSource=_donationSource - In the implementation block
+(id)options;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)domain;
-(char)error;
-(void)setError:(char)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDomain:(int)arg1 ;
-(char)hasDomain;
-(char)hasError;
-(id)domainAsString:(int)arg1 ;
-(int)StringAsDomain:(id)arg1 ;
-(void)setHasError:(char)arg1 ;
-(void)setHasDomain:(char)arg1 ;
-(int)donationSource;
-(void)setDonationSource:(int)arg1 ;
-(void)setHasDonationSource:(char)arg1 ;
-(char)hasDonationSource;
-(id)donationSourceAsString:(int)arg1 ;
-(int)StringAsDonationSource:(id)arg1 ;
@end
