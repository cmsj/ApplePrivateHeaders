/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreRoutineMagicalMomentsRecommendedAppsHistogramInstance : PBCodable <NSCopying> {

	NSString* _bundleId;
	int _confidence;
	int _rank;
	SCD_Struct_AW2 _has;

}

@property (nonatomic,readonly) char hasBundleId; 
@property (nonatomic,retain) NSString * bundleId;              //@synthesize bundleId=_bundleId - In the implementation block
@property (assign,nonatomic) char hasRank; 
@property (assign,nonatomic) int rank;                         //@synthesize rank=_rank - In the implementation block
@property (assign,nonatomic) char hasConfidence; 
@property (assign,nonatomic) int confidence;                   //@synthesize confidence=_confidence - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(int)confidence;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(void)setConfidence:(int)arg1 ;
-(void)setRank:(int)arg1 ;
-(int)rank;
-(void)setHasConfidence:(char)arg1 ;
-(char)hasConfidence;
-(void)setHasRank:(char)arg1 ;
-(char)hasRank;
-(char)hasBundleId;
@end

