/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEORPFeedbackCommonContext, GEORPFeedbackCommonCorrections, GEORPFeedbackDetails;

@interface GEORPFeedbackSubmissionParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _clientSubmissionUuid;
	GEORPFeedbackCommonContext* _commonContext;
	GEORPFeedbackCommonCorrections* _commonCorrections;
	GEORPFeedbackDetails* _details;
	NSString* _parentFeedbackId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _type;
	struct {
		unsigned has_type : 1;
		unsigned read_unknownFields : 1;
		unsigned read_clientSubmissionUuid : 1;
		unsigned read_commonContext : 1;
		unsigned read_commonCorrections : 1;
		unsigned read_details : 1;
		unsigned read_parentFeedbackId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasClientSubmissionUuid; 
@property (nonatomic,retain) NSString * clientSubmissionUuid; 
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) char hasDetails; 
@property (nonatomic,retain) GEORPFeedbackDetails * details; 
@property (nonatomic,readonly) char hasCommonContext; 
@property (nonatomic,retain) GEORPFeedbackCommonContext * commonContext; 
@property (nonatomic,readonly) char hasCommonCorrections; 
@property (nonatomic,retain) GEORPFeedbackCommonCorrections * commonCorrections; 
@property (nonatomic,readonly) char hasParentFeedbackId; 
@property (nonatomic,retain) NSString * parentFeedbackId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)type;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEORPFeedbackDetails *)details;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(NSString *)clientSubmissionUuid;
-(GEORPFeedbackCommonContext *)commonContext;
-(GEORPFeedbackCommonCorrections *)commonCorrections;
-(NSString *)parentFeedbackId;
-(void)setClientSubmissionUuid:(NSString *)arg1 ;
-(void)setDetails:(GEORPFeedbackDetails *)arg1 ;
-(void)setCommonContext:(GEORPFeedbackCommonContext *)arg1 ;
-(void)setCommonCorrections:(GEORPFeedbackCommonCorrections *)arg1 ;
-(void)setParentFeedbackId:(NSString *)arg1 ;
-(char)hasClientSubmissionUuid;
-(char)hasDetails;
-(char)hasCommonContext;
-(char)hasCommonCorrections;
-(char)hasParentFeedbackId;
@end
