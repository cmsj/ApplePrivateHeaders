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

@interface NTPBPaidSubscriptionConversionPointExposure : PBCodable <NSCopying> {

	NSString* _articleId;
	NSData* _articleViewingSessionId;
	NSData* _feedViewExposureId;
	NSString* _groupFeedId;
	int _groupType;
	NSString* _iadQtoken;
	NTPBIssueData* _issueData;
	int _paidSubscriptionConversionPointExposureLocation;
	int _paidSubscriptionConversionPointExposurePresentationReason;
	int _paidSubscriptionConversionPointType;
	NSString* _parentFeedId;
	int _parentFeedType;
	NSString* _purchaseId;
	int _purchaseType;
	NSString* _sectionId;
	NSString* _sourceChannelId;
	NSData* _subscriptionPurchaseSessionId;
	int _userAction;
	char _arrivedFromAd;
	char _subscriptionOnlyArticlePreview;
	SCD_Struct_NT4 _has;

}

@property (assign,nonatomic) char hasPaidSubscriptionConversionPointType; 
@property (assign,nonatomic) int paidSubscriptionConversionPointType;                                        //@synthesize paidSubscriptionConversionPointType=_paidSubscriptionConversionPointType - In the implementation block
@property (assign,nonatomic) char hasUserAction; 
@property (assign,nonatomic) int userAction;                                                                 //@synthesize userAction=_userAction - In the implementation block
@property (nonatomic,readonly) char hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                                                     //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (assign,nonatomic) char hasPaidSubscriptionConversionPointExposureLocation; 
@property (assign,nonatomic) int paidSubscriptionConversionPointExposureLocation;                            //@synthesize paidSubscriptionConversionPointExposureLocation=_paidSubscriptionConversionPointExposureLocation - In the implementation block
@property (assign,nonatomic) char hasPaidSubscriptionConversionPointExposurePresentationReason; 
@property (assign,nonatomic) int paidSubscriptionConversionPointExposurePresentationReason;                  //@synthesize paidSubscriptionConversionPointExposurePresentationReason=_paidSubscriptionConversionPointExposurePresentationReason - In the implementation block
@property (nonatomic,readonly) char hasSectionId; 
@property (nonatomic,retain) NSString * sectionId;                                                           //@synthesize sectionId=_sectionId - In the implementation block
@property (nonatomic,readonly) char hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                                           //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) char hasArticleViewingSessionId; 
@property (nonatomic,retain) NSData * articleViewingSessionId;                                               //@synthesize articleViewingSessionId=_articleViewingSessionId - In the implementation block
@property (assign,nonatomic) char hasParentFeedType; 
@property (assign,nonatomic) int parentFeedType;                                                             //@synthesize parentFeedType=_parentFeedType - In the implementation block
@property (assign,nonatomic) char hasSubscriptionOnlyArticlePreview; 
@property (assign,nonatomic) char subscriptionOnlyArticlePreview;                                            //@synthesize subscriptionOnlyArticlePreview=_subscriptionOnlyArticlePreview - In the implementation block
@property (assign,nonatomic) char hasArrivedFromAd; 
@property (assign,nonatomic) char arrivedFromAd;                                                             //@synthesize arrivedFromAd=_arrivedFromAd - In the implementation block
@property (nonatomic,readonly) char hasIadQtoken; 
@property (nonatomic,retain) NSString * iadQtoken;                                                           //@synthesize iadQtoken=_iadQtoken - In the implementation block
@property (nonatomic,readonly) char hasSubscriptionPurchaseSessionId; 
@property (nonatomic,retain) NSData * subscriptionPurchaseSessionId;                                         //@synthesize subscriptionPurchaseSessionId=_subscriptionPurchaseSessionId - In the implementation block
@property (nonatomic,readonly) char hasFeedViewExposureId; 
@property (nonatomic,retain) NSData * feedViewExposureId;                                                    //@synthesize feedViewExposureId=_feedViewExposureId - In the implementation block
@property (assign,nonatomic) char hasGroupType; 
@property (assign,nonatomic) int groupType;                                                                  //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,readonly) char hasPurchaseId; 
@property (nonatomic,retain) NSString * purchaseId;                                                          //@synthesize purchaseId=_purchaseId - In the implementation block
@property (nonatomic,readonly) char hasGroupFeedId; 
@property (nonatomic,retain) NSString * groupFeedId;                                                         //@synthesize groupFeedId=_groupFeedId - In the implementation block
@property (nonatomic,readonly) char hasParentFeedId; 
@property (nonatomic,retain) NSString * parentFeedId;                                                        //@synthesize parentFeedId=_parentFeedId - In the implementation block
@property (nonatomic,readonly) char hasIssueData; 
@property (nonatomic,retain) NTPBIssueData * issueData;                                                      //@synthesize issueData=_issueData - In the implementation block
@property (assign,nonatomic) char hasPurchaseType; 
@property (assign,nonatomic) int purchaseType;                                                               //@synthesize purchaseType=_purchaseType - In the implementation block
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
-(int)userAction;
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
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(char)hasFeedViewExposureId;
-(NSData *)feedViewExposureId;
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
-(void)setParentFeedId:(NSString *)arg1 ;
-(char)hasIssueData;
-(int)parentFeedType;
-(void)setParentFeedType:(int)arg1 ;
-(void)setHasParentFeedType:(char)arg1 ;
-(char)hasParentFeedType;
-(id)parentFeedTypeAsString:(int)arg1 ;
-(int)StringAsParentFeedType:(id)arg1 ;
-(char)hasParentFeedId;
-(NTPBIssueData *)issueData;
-(NSString *)parentFeedId;
-(void)setUserAction:(int)arg1 ;
-(void)setHasUserAction:(char)arg1 ;
-(char)hasUserAction;
-(int)paidSubscriptionConversionPointType;
-(void)setPaidSubscriptionConversionPointType:(int)arg1 ;
-(void)setHasPaidSubscriptionConversionPointType:(char)arg1 ;
-(char)hasPaidSubscriptionConversionPointType;
-(id)paidSubscriptionConversionPointTypeAsString:(int)arg1 ;
-(int)StringAsPaidSubscriptionConversionPointType:(id)arg1 ;
-(void)setGroupFeedId:(NSString *)arg1 ;
-(char)hasGroupFeedId;
-(NSString *)groupFeedId;
-(void)setIadQtoken:(NSString *)arg1 ;
-(void)setSubscriptionOnlyArticlePreview:(char)arg1 ;
-(void)setHasSubscriptionOnlyArticlePreview:(char)arg1 ;
-(char)hasSubscriptionOnlyArticlePreview;
-(void)setArrivedFromAd:(char)arg1 ;
-(void)setHasArrivedFromAd:(char)arg1 ;
-(char)hasArrivedFromAd;
-(char)hasIadQtoken;
-(char)subscriptionOnlyArticlePreview;
-(char)arrivedFromAd;
-(NSString *)iadQtoken;
-(void)setSubscriptionPurchaseSessionId:(NSData *)arg1 ;
-(char)hasSubscriptionPurchaseSessionId;
-(NSData *)subscriptionPurchaseSessionId;
-(int)paidSubscriptionConversionPointExposureLocation;
-(void)setPaidSubscriptionConversionPointExposureLocation:(int)arg1 ;
-(void)setHasPaidSubscriptionConversionPointExposureLocation:(char)arg1 ;
-(char)hasPaidSubscriptionConversionPointExposureLocation;
-(id)paidSubscriptionConversionPointExposureLocationAsString:(int)arg1 ;
-(int)StringAsPaidSubscriptionConversionPointExposureLocation:(id)arg1 ;
-(int)paidSubscriptionConversionPointExposurePresentationReason;
-(void)setPaidSubscriptionConversionPointExposurePresentationReason:(int)arg1 ;
-(void)setHasPaidSubscriptionConversionPointExposurePresentationReason:(char)arg1 ;
-(char)hasPaidSubscriptionConversionPointExposurePresentationReason;
@end

