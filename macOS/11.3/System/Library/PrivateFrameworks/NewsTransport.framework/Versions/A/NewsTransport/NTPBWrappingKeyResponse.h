/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBWrappingKeyResponse : PBCodable <NSCopying> {

	NSMutableArray* _wrappingKeyMapEntries;

}

@property (nonatomic,retain) NSMutableArray * wrappingKeyMapEntries;              //@synthesize wrappingKeyMapEntries=_wrappingKeyMapEntries - In the implementation block
+(Class)wrappingKeyMapEntriesType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addWrappingKeyMapEntries:(id)arg1 ;
-(void)clearWrappingKeyMapEntries;
-(unsigned long long)wrappingKeyMapEntriesCount;
-(id)wrappingKeyMapEntriesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)wrappingKeyMapEntries;
-(void)setWrappingKeyMapEntries:(NSMutableArray *)arg1 ;
@end

