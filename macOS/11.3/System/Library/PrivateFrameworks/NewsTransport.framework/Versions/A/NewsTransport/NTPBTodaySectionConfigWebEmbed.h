/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBTodaySectionConfigWebEmbed : PBCodable <NSCopying> {

	unsigned long long _preferredSlotAllocation;
	NSString* _urlString;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) char hasUrlString; 
@property (nonatomic,retain) NSString * urlString;                                    //@synthesize urlString=_urlString - In the implementation block
@property (assign,nonatomic) char hasPreferredSlotAllocation; 
@property (assign,nonatomic) unsigned long long preferredSlotAllocation;              //@synthesize preferredSlotAllocation=_preferredSlotAllocation - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)urlString;
-(void)setUrlString:(NSString *)arg1 ;
-(char)hasUrlString;
-(void)setPreferredSlotAllocation:(unsigned long long)arg1 ;
-(void)setHasPreferredSlotAllocation:(char)arg1 ;
-(char)hasPreferredSlotAllocation;
-(unsigned long long)preferredSlotAllocation;
@end

