/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/Versions/A/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPPBFeedbackMetadata : PBCodable <NSCopying> {

	unsigned long long _unixTimestampSec;
	NSString* _clientBundleId;
	NSString* _clientIdentifier;
	NSString* _mappingId;
	char _isMapped;
	SCD_Struct_PP2 _has;

}

@property (nonatomic,readonly) char hasClientBundleId; 
@property (nonatomic,retain) NSString * clientBundleId;                        //@synthesize clientBundleId=_clientBundleId - In the implementation block
@property (nonatomic,readonly) char hasClientIdentifier; 
@property (nonatomic,retain) NSString * clientIdentifier;                      //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,readonly) char hasMappingId; 
@property (nonatomic,retain) NSString * mappingId;                             //@synthesize mappingId=_mappingId - In the implementation block
@property (assign,nonatomic) char hasUnixTimestampSec; 
@property (assign,nonatomic) unsigned long long unixTimestampSec;              //@synthesize unixTimestampSec=_unixTimestampSec - In the implementation block
@property (assign,nonatomic) char hasIsMapped; 
@property (assign,nonatomic) char isMapped;                                    //@synthesize isMapped=_isMapped - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)clientIdentifier;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)setClientBundleId:(NSString *)arg1 ;
-(char)hasClientBundleId;
-(NSString *)clientBundleId;
-(char)hasClientIdentifier;
-(char)isMapped;
-(NSString *)mappingId;
-(char)hasMappingId;
-(void)setMappingId:(NSString *)arg1 ;
-(void)setUnixTimestampSec:(unsigned long long)arg1 ;
-(void)setHasUnixTimestampSec:(char)arg1 ;
-(char)hasUnixTimestampSec;
-(unsigned long long)unixTimestampSec;
-(void)setIsMapped:(char)arg1 ;
-(void)setHasIsMapped:(char)arg1 ;
-(char)hasIsMapped;
@end
