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

@class CKDPRequestedFields;

@interface CKDPRecordRetrieveRequestRetrieveAssetURL : PBCodable <NSCopying> {

	long long _requestedTTL;
	CKDPRequestedFields* _assetFields;
	int _type;
	SCD_Struct_CK4 _has;

}

@property (nonatomic,readonly) char hasAssetFields; 
@property (nonatomic,retain) CKDPRequestedFields * assetFields;              //@synthesize assetFields=_assetFields - In the implementation block
@property (assign,nonatomic) char hasRequestedTTL; 
@property (assign,nonatomic) long long requestedTTL;                         //@synthesize requestedTTL=_requestedTTL - In the implementation block
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                                       //@synthesize type=_type - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(long long)requestedTTL;
-(void)setRequestedTTL:(long long)arg1 ;
-(void)setAssetFields:(CKDPRequestedFields *)arg1 ;
-(CKDPRequestedFields *)assetFields;
-(char)hasAssetFields;
-(void)setHasRequestedTTL:(char)arg1 ;
-(char)hasRequestedTTL;
@end
