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

@class PBDataReader, PBUnknownFields, NSString;

@interface GEORPPostedBy : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _nickname;
	NSString* _userDsid;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _role;
	struct {
		unsigned has_role : 1;
		unsigned read_unknownFields : 1;
		unsigned read_nickname : 1;
		unsigned read_userDsid : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasRole; 
@property (assign,nonatomic) int role; 
@property (nonatomic,readonly) char hasUserDsid; 
@property (nonatomic,retain) NSString * userDsid; 
@property (nonatomic,readonly) char hasNickname; 
@property (nonatomic,retain) NSString * nickname; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(int)role;
-(id)dictionaryRepresentation;
-(NSString *)nickname;
-(void)setNickname:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRole:(int)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(NSString *)userDsid;
-(void)setUserDsid:(NSString *)arg1 ;
-(void)setHasRole:(char)arg1 ;
-(char)hasRole;
-(id)roleAsString:(int)arg1 ;
-(int)StringAsRole:(id)arg1 ;
-(char)hasUserDsid;
-(char)hasNickname;
@end
