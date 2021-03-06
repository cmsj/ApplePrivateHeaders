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

@class NTPBRecordBase, NSData;

@interface NTPBJSONRecord : PBCodable <NSCopying> {

	NTPBRecordBase* _base;
	NSData* _json;

}

@property (nonatomic,readonly) char hasBase; 
@property (nonatomic,retain) NTPBRecordBase * base;              //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) char hasJson; 
@property (nonatomic,retain) NSData * json;                      //@synthesize json=_json - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NTPBRecordBase *)base;
-(void)setBase:(NTPBRecordBase *)arg1 ;
-(NSData *)json;
-(char)hasBase;
-(void)setJson:(NSData *)arg1 ;
-(char)hasJson;
@end

