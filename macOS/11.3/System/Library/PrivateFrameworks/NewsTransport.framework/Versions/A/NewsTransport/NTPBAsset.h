/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NTPBAsset : PBCodable <NSCopying> {

	int _error;
	unsigned _size;
	NSData* _wrappingKeyID;
	SCD_Struct_CO1 _has;

}

@property (nonatomic,readonly) char hasWrappingKeyID; 
@property (nonatomic,retain) NSData * wrappingKeyID;               //@synthesize wrappingKeyID=_wrappingKeyID - In the implementation block
@property (assign,nonatomic) char hasError; 
@property (assign,nonatomic) int error;                            //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) char hasSize; 
@property (assign,nonatomic) unsigned size;                        //@synthesize size=_size - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)size;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)error;
-(void)setError:(int)arg1 ;
-(void)setSize:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasError;
-(char)hasSize;
-(void)setHasSize:(char)arg1 ;
-(void)setHasError:(char)arg1 ;
-(void)setWrappingKeyID:(NSData *)arg1 ;
-(char)hasWrappingKeyID;
-(NSData *)wrappingKeyID;
@end
