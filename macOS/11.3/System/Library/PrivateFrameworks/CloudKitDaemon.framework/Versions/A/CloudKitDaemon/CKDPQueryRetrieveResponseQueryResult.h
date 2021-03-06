/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKDPRecordIdentifier, CKDPRecord;

@interface CKDPQueryRetrieveResponseQueryResult : PBCodable <NSCopying> {

	NSString* _etag;
	CKDPRecordIdentifier* _identifier;
	CKDPRecord* _record;
	int _type;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) char hasIdentifier; 
@property (nonatomic,retain) CKDPRecordIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) char hasEtag; 
@property (nonatomic,retain) NSString * etag;                                //@synthesize etag=_etag - In the implementation block
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char hasRecord; 
@property (nonatomic,retain) CKDPRecord * record;                            //@synthesize record=_record - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(CKDPRecordIdentifier *)identifier;
-(void)setIdentifier:(CKDPRecordIdentifier *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)etag;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(CKDPRecord *)record;
-(void)setRecord:(CKDPRecord *)arg1 ;
-(void)setEtag:(NSString *)arg1 ;
-(char)hasEtag;
-(char)hasIdentifier;
-(char)hasRecord;
@end

