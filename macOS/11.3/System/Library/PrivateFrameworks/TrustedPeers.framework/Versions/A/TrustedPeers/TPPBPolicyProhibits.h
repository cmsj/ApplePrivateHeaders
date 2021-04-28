/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/Versions/A/TrustedPeers
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrustedPeers/TrustedPeers-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TPPBPolicyProhibits : PBCodable <NSCopying> {

	unsigned long long _policyVersion;
	NSString* _candidateCategory;
	NSString* _explanation;
	NSString* _sponsorCategory;
	NSString* _sponsorId;
	SCD_Struct_TP3 _has;

}

@property (assign,nonatomic) char hasPolicyVersion; 
@property (assign,nonatomic) unsigned long long policyVersion;              //@synthesize policyVersion=_policyVersion - In the implementation block
@property (nonatomic,readonly) char hasSponsorId; 
@property (nonatomic,retain) NSString * sponsorId;                          //@synthesize sponsorId=_sponsorId - In the implementation block
@property (nonatomic,readonly) char hasSponsorCategory; 
@property (nonatomic,retain) NSString * sponsorCategory;                    //@synthesize sponsorCategory=_sponsorCategory - In the implementation block
@property (nonatomic,readonly) char hasCandidateCategory; 
@property (nonatomic,retain) NSString * candidateCategory;                  //@synthesize candidateCategory=_candidateCategory - In the implementation block
@property (nonatomic,readonly) char hasExplanation; 
@property (nonatomic,retain) NSString * explanation;                        //@synthesize explanation=_explanation - In the implementation block
-(void)setPolicyVersion:(unsigned long long)arg1 ;
-(void)setHasPolicyVersion:(char)arg1 ;
-(char)hasPolicyVersion;
-(char)hasSponsorId;
-(char)hasSponsorCategory;
-(char)hasCandidateCategory;
-(char)hasExplanation;
-(NSString *)sponsorId;
-(void)setSponsorId:(NSString *)arg1 ;
-(NSString *)sponsorCategory;
-(void)setSponsorCategory:(NSString *)arg1 ;
-(NSString *)candidateCategory;
-(void)setCandidateCategory:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setExplanation:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)explanation;
-(unsigned long long)policyVersion;
@end
