/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NTPBWrappingKeyMapEntry : PBCodable <NSCopying> {

	NSData* _wrappingKey;
	NSData* _wrappingKeyId;

}

@property (nonatomic,readonly) char hasWrappingKeyId; 
@property (nonatomic,retain) NSData * wrappingKeyId;               //@synthesize wrappingKeyId=_wrappingKeyId - In the implementation block
@property (nonatomic,readonly) char hasWrappingKey; 
@property (nonatomic,retain) NSData * wrappingKey;                 //@synthesize wrappingKey=_wrappingKey - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setWrappingKeyId:(NSData *)arg1 ;
-(void)setWrappingKey:(NSData *)arg1 ;
-(char)hasWrappingKeyId;
-(char)hasWrappingKey;
-(NSData *)wrappingKeyId;
-(NSData *)wrappingKey;
@end
