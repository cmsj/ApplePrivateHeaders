/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, _MRTransactionKeyProtobuf, NSData;

@interface _MRTransactionPacketProtobuf : PBCodable <NSCopying> {

	unsigned long long _totalLength;
	unsigned long long _totalWritePosition;
	NSString* _identifier;
	_MRTransactionKeyProtobuf* _key;
	NSData* _packetData;
	SCD_Struct_MR2 _has;

}
+(void)initialize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)customDictionaryRepresentation;
@end

