/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString, GEOPDTipUser;

@interface GEOPDTip : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _snippets;
	NSString* _tipId;
	double _tipTime;
	GEOPDTipUser* _tipster;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_tipTime : 1;
		unsigned read_unknownFields : 1;
		unsigned read_snippets : 1;
		unsigned read_tipId : 1;
		unsigned read_tipster : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * snippets; 
@property (assign,nonatomic) char hasTipTime; 
@property (assign,nonatomic) double tipTime; 
@property (nonatomic,readonly) char hasTipster; 
@property (nonatomic,retain) GEOPDTipUser * tipster; 
@property (nonatomic,readonly) char hasTipId; 
@property (nonatomic,retain) NSString * tipId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(id)tipsForPlaceData:(id)arg1 ;
+(Class)snippetType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(NSMutableArray *)snippets;
-(char)hasTipTime;
-(double)tipTime;
-(GEOPDTipUser *)tipster;
-(char)hasTipId;
-(NSString *)tipId;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(void)addSnippet:(id)arg1 ;
-(unsigned long long)snippetsCount;
-(void)clearSnippets;
-(id)snippetAtIndex:(unsigned long long)arg1 ;
-(void)setSnippets:(NSMutableArray *)arg1 ;
-(void)setTipTime:(double)arg1 ;
-(void)setTipster:(GEOPDTipUser *)arg1 ;
-(void)setTipId:(NSString *)arg1 ;
-(void)setHasTipTime:(char)arg1 ;
-(char)hasTipster;
@end
