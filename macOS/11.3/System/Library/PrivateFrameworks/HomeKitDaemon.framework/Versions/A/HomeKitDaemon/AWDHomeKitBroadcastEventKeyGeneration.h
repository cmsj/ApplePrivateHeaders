/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDHomeKitVendorInformation;

@interface AWDHomeKitBroadcastEventKeyGeneration : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _certified;
	int _reason;
	AWDHomeKitVendorInformation* _vendorDetails;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasVendorDetails; 
@property (nonatomic,retain) AWDHomeKitVendorInformation * vendorDetails;              //@synthesize vendorDetails=_vendorDetails - In the implementation block
@property (assign,nonatomic) char hasReason; 
@property (assign,nonatomic) int reason;                                               //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) char hasCertified; 
@property (assign,nonatomic) int certified;                                            //@synthesize certified=_certified - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)reason;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)setReason:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(id)reasonAsString:(int)arg1 ;
-(int)StringAsReason:(id)arg1 ;
-(char)hasReason;
-(void)setHasReason:(char)arg1 ;
-(AWDHomeKitVendorInformation *)vendorDetails;
-(void)setVendorDetails:(AWDHomeKitVendorInformation *)arg1 ;
-(char)hasVendorDetails;
-(int)certified;
-(void)setCertified:(int)arg1 ;
-(void)setHasCertified:(char)arg1 ;
-(char)hasCertified;
-(id)certifiedAsString:(int)arg1 ;
-(int)StringAsCertified:(id)arg1 ;
@end

