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

@class NSString;

@interface NTPBSearchBegin : PBCodable <NSCopying> {

	NSString* _campaignId;
	NSString* _campaignType;
	NSString* _creativeId;
	int _searchLocation;
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) char hasSearchLocation; 
@property (assign,nonatomic) int searchLocation;                   //@synthesize searchLocation=_searchLocation - In the implementation block
@property (nonatomic,readonly) char hasCampaignId; 
@property (nonatomic,retain) NSString * campaignId;                //@synthesize campaignId=_campaignId - In the implementation block
@property (nonatomic,readonly) char hasCampaignType; 
@property (nonatomic,retain) NSString * campaignType;              //@synthesize campaignType=_campaignType - In the implementation block
@property (nonatomic,readonly) char hasCreativeId; 
@property (nonatomic,retain) NSString * creativeId;                //@synthesize creativeId=_creativeId - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)searchLocation;
-(void)setSearchLocation:(int)arg1 ;
-(char)hasSearchLocation;
-(NSString *)campaignId;
-(void)setCampaignId:(NSString *)arg1 ;
-(void)setCampaignType:(NSString *)arg1 ;
-(void)setCreativeId:(NSString *)arg1 ;
-(char)hasCampaignId;
-(char)hasCampaignType;
-(char)hasCreativeId;
-(NSString *)campaignType;
-(NSString *)creativeId;
-(void)setHasSearchLocation:(char)arg1 ;
-(id)searchLocationAsString:(int)arg1 ;
-(int)StringAsSearchLocation:(id)arg1 ;
@end
