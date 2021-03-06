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

@class NSString, NSData, NTPBIssueData;

@interface NTPBPaywallButtonTap : PBCodable <NSCopying> {

	NSString* _articleId;
	NSData* _articleViewingSessionId;
	int _groupType;
	NTPBIssueData* _issueData;
	int _paidSubscriptionConversionPointType;
	int _parentFeedType;
	NSString* _purchaseId;
	int _purchaseType;
	NSString* _sectionId;
	NSString* _sourceChannelId;
	int _subscriptionButtonTargetType;
	SCD_Struct_NT11 _has;

}

@property (nonatomic,readonly) char hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                               //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (nonatomic,readonly) char hasSectionId; 
@property (nonatomic,retain) NSString * sectionId;                                     //@synthesize sectionId=_sectionId - In the implementation block
@property (nonatomic,readonly) char hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                     //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) char hasArticleViewingSessionId; 
@property (nonatomic,retain) NSData * articleViewingSessionId;                         //@synthesize articleViewingSessionId=_articleViewingSessionId - In the implementation block
@property (assign,nonatomic) char hasParentFeedType; 
@property (assign,nonatomic) int parentFeedType;                                       //@synthesize parentFeedType=_parentFeedType - In the implementation block
@property (assign,nonatomic) char hasGroupType; 
@property (assign,nonatomic) int groupType;                                            //@synthesize groupType=_groupType - In the implementation block
@property (assign,nonatomic) char hasPaidSubscriptionConversionPointType; 
@property (assign,nonatomic) int paidSubscriptionConversionPointType;                  //@synthesize paidSubscriptionConversionPointType=_paidSubscriptionConversionPointType - In the implementation block
@property (nonatomic,readonly) char hasPurchaseId; 
@property (nonatomic,retain) NSString * purchaseId;                                    //@synthesize purchaseId=_purchaseId - In the implementation block
@property (assign,nonatomic) char hasSubscriptionButtonTargetType; 
@property (assign,nonatomic) int subscriptionButtonTargetType;                         //@synthesize subscriptionButtonTargetType=_subscriptionButtonTargetType - In the implementation block
@property (nonatomic,readonly) char hasIssueData; 
@property (nonatomic,retain) NTPBIssueData * issueData;                                //@synthesize issueData=_issueData - In the implementation block
@property (assign,nonatomic) char hasPurchaseType; 
@property (assign,nonatomic) int purchaseType;                                         //@synthesize purchaseType=_purchaseType - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSectionId:(NSString *)arg1 ;
-(NSString *)sectionId;
-(char)hasSectionId;
-(int)groupType;
-(void)setGroupType:(int)arg1 ;
-(int)purchaseType;
-(void)setPurchaseType:(int)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(void)setArticleViewingSessionId:(NSData *)arg1 ;
-(char)hasArticleId;
-(char)hasSourceChannelId;
-(char)hasArticleViewingSessionId;
-(NSString *)articleId;
-(NSString *)sourceChannelId;
-(NSData *)articleViewingSessionId;
-(void)setHasGroupType:(char)arg1 ;
-(char)hasGroupType;
-(id)groupTypeAsString:(int)arg1 ;
-(int)StringAsGroupType:(id)arg1 ;
-(void)setPurchaseId:(NSString *)arg1 ;
-(char)hasPurchaseId;
-(void)setHasPurchaseType:(char)arg1 ;
-(char)hasPurchaseType;
-(id)purchaseTypeAsString:(int)arg1 ;
-(int)StringAsPurchaseType:(id)arg1 ;
-(NSString *)purchaseId;
-(void)setIssueData:(NTPBIssueData *)arg1 ;
-(char)hasIssueData;
-(int)parentFeedType;
-(void)setParentFeedType:(int)arg1 ;
-(void)setHasParentFeedType:(char)arg1 ;
-(char)hasParentFeedType;
-(id)parentFeedTypeAsString:(int)arg1 ;
-(int)StringAsParentFeedType:(id)arg1 ;
-(NTPBIssueData *)issueData;
-(int)paidSubscriptionConversionPointType;
-(void)setPaidSubscriptionConversionPointType:(int)arg1 ;
-(void)setHasPaidSubscriptionConversionPointType:(char)arg1 ;
-(char)hasPaidSubscriptionConversionPointType;
-(id)paidSubscriptionConversionPointTypeAsString:(int)arg1 ;
-(int)StringAsPaidSubscriptionConversionPointType:(id)arg1 ;
-(int)subscriptionButtonTargetType;
-(void)setSubscriptionButtonTargetType:(int)arg1 ;
-(void)setHasSubscriptionButtonTargetType:(char)arg1 ;
-(char)hasSubscriptionButtonTargetType;
-(id)subscriptionButtonTargetTypeAsString:(int)arg1 ;
-(int)StringAsSubscriptionButtonTargetType:(id)arg1 ;
@end

