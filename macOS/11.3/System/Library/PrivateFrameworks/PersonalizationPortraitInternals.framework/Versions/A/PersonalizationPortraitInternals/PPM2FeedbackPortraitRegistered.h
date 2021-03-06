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

@class NSString, NSMutableArray;

@interface PPM2FeedbackPortraitRegistered : PBCodable <NSCopying> {

	NSString* _activeTreatments;
	NSString* _clientId;
	int _domain;
	int _feedbackDomainStatus;
	NSString* _mappingId;
	NSMutableArray* _records;
	int _type;
	SCD_Struct_PP4 _has;

}

@property (nonatomic,readonly) char hasClientId; 
@property (nonatomic,retain) NSString * clientId;                       //@synthesize clientId=_clientId - In the implementation block
@property (assign,nonatomic) char hasDomain; 
@property (assign,nonatomic) int domain;                                //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char hasMappingId; 
@property (nonatomic,retain) NSString * mappingId;                      //@synthesize mappingId=_mappingId - In the implementation block
@property (nonatomic,retain) NSMutableArray * records;                  //@synthesize records=_records - In the implementation block
@property (nonatomic,readonly) char hasActiveTreatments; 
@property (nonatomic,retain) NSString * activeTreatments;               //@synthesize activeTreatments=_activeTreatments - In the implementation block
@property (assign,nonatomic) char hasFeedbackDomainStatus; 
@property (assign,nonatomic) int feedbackDomainStatus;                  //@synthesize feedbackDomainStatus=_feedbackDomainStatus - In the implementation block
+(id)options;
+(Class)recordsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)domain;
-(int)type;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDomain:(int)arg1 ;
-(NSString *)clientId;
-(char)hasDomain;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(id)domainAsString:(int)arg1 ;
-(int)StringAsDomain:(id)arg1 ;
-(void)clearRecords;
-(void)setClientId:(NSString *)arg1 ;
-(NSMutableArray *)records;
-(void)setRecords:(NSMutableArray *)arg1 ;
-(void)addRecords:(id)arg1 ;
-(unsigned long long)recordsCount;
-(id)recordsAtIndex:(unsigned long long)arg1 ;
-(char)hasClientId;
-(NSString *)mappingId;
-(void)setHasDomain:(char)arg1 ;
-(char)hasActiveTreatments;
-(NSString *)activeTreatments;
-(void)setActiveTreatments:(NSString *)arg1 ;
-(char)hasMappingId;
-(int)feedbackDomainStatus;
-(void)setFeedbackDomainStatus:(int)arg1 ;
-(void)setHasFeedbackDomainStatus:(char)arg1 ;
-(char)hasFeedbackDomainStatus;
-(id)feedbackDomainStatusAsString:(int)arg1 ;
-(int)StringAsFeedbackDomainStatus:(id)arg1 ;
-(void)setMappingId:(NSString *)arg1 ;
@end

