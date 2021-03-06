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

@class NTPBChannelData, NSMutableArray, NTPBIssueData, NTPBIssueExposureData, NSString;

@interface NTPBIssueExposure : PBCodable <NSCopying> {

	double _agedPersonalizationScore;
	double _agedUserFeedbackScore;
	double _autoSubscribeCtr;
	double _computedGlobalScoreCoefficient;
	double _diversifiedPersonalizationScore;
	double _featureCtr;
	double _globalScore;
	double _paidNonpaidSubscriptionCtr;
	double _personalizationScore;
	double _subscribedChannelCtr;
	double _userFeedbackScore;
	NTPBChannelData* _channelData;
	int _displayRank;
	NSMutableArray* _fractionalCohortMemberships;
	int _groupType;
	NTPBIssueData* _issueData;
	NTPBIssueExposureData* _issueExposureData;
	NSString* _language;
	NSString* _parentFeedId;
	int _parentFeedType;
	NSString* _sourceChannelId;
	NSString* _surfacedByChannelId;
	char _adSupportedChannel;
	char _isPaidSubscriberToSourceChannel;
	SCD_Struct_NT8 _has;

}

@property (nonatomic,readonly) char hasIssueData; 
@property (nonatomic,retain) NTPBIssueData * issueData;                                 //@synthesize issueData=_issueData - In the implementation block
@property (nonatomic,readonly) char hasIssueExposureData; 
@property (nonatomic,retain) NTPBIssueExposureData * issueExposureData;                 //@synthesize issueExposureData=_issueExposureData - In the implementation block
@property (nonatomic,readonly) char hasChannelData; 
@property (nonatomic,retain) NTPBChannelData * channelData;                             //@synthesize channelData=_channelData - In the implementation block
@property (nonatomic,readonly) char hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                                //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (assign,nonatomic) char hasParentFeedType; 
@property (assign,nonatomic) int parentFeedType;                                        //@synthesize parentFeedType=_parentFeedType - In the implementation block
@property (assign,nonatomic) char hasGroupType; 
@property (assign,nonatomic) int groupType;                                             //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,readonly) char hasParentFeedId; 
@property (nonatomic,retain) NSString * parentFeedId;                                   //@synthesize parentFeedId=_parentFeedId - In the implementation block
@property (assign,nonatomic) char hasDisplayRank; 
@property (assign,nonatomic) int displayRank;                                           //@synthesize displayRank=_displayRank - In the implementation block
@property (assign,nonatomic) char hasAdSupportedChannel; 
@property (assign,nonatomic) char adSupportedChannel;                                   //@synthesize adSupportedChannel=_adSupportedChannel - In the implementation block
@property (assign,nonatomic) char hasIsPaidSubscriberToSourceChannel; 
@property (assign,nonatomic) char isPaidSubscriberToSourceChannel;                      //@synthesize isPaidSubscriberToSourceChannel=_isPaidSubscriberToSourceChannel - In the implementation block
@property (nonatomic,retain) NSMutableArray * fractionalCohortMemberships;              //@synthesize fractionalCohortMemberships=_fractionalCohortMemberships - In the implementation block
@property (assign,nonatomic) char hasPersonalizationScore; 
@property (assign,nonatomic) double personalizationScore;                               //@synthesize personalizationScore=_personalizationScore - In the implementation block
@property (assign,nonatomic) char hasFeatureCtr; 
@property (assign,nonatomic) double featureCtr;                                         //@synthesize featureCtr=_featureCtr - In the implementation block
@property (assign,nonatomic) char hasPaidNonpaidSubscriptionCtr; 
@property (assign,nonatomic) double paidNonpaidSubscriptionCtr;                         //@synthesize paidNonpaidSubscriptionCtr=_paidNonpaidSubscriptionCtr - In the implementation block
@property (assign,nonatomic) char hasAutoSubscribeCtr; 
@property (assign,nonatomic) double autoSubscribeCtr;                                   //@synthesize autoSubscribeCtr=_autoSubscribeCtr - In the implementation block
@property (assign,nonatomic) char hasComputedGlobalScoreCoefficient; 
@property (assign,nonatomic) double computedGlobalScoreCoefficient;                     //@synthesize computedGlobalScoreCoefficient=_computedGlobalScoreCoefficient - In the implementation block
@property (assign,nonatomic) char hasGlobalScore; 
@property (assign,nonatomic) double globalScore;                                        //@synthesize globalScore=_globalScore - In the implementation block
@property (assign,nonatomic) char hasUserFeedbackScore; 
@property (assign,nonatomic) double userFeedbackScore;                                  //@synthesize userFeedbackScore=_userFeedbackScore - In the implementation block
@property (assign,nonatomic) char hasAgedUserFeedbackScore; 
@property (assign,nonatomic) double agedUserFeedbackScore;                              //@synthesize agedUserFeedbackScore=_agedUserFeedbackScore - In the implementation block
@property (assign,nonatomic) char hasAgedPersonalizationScore; 
@property (assign,nonatomic) double agedPersonalizationScore;                           //@synthesize agedPersonalizationScore=_agedPersonalizationScore - In the implementation block
@property (assign,nonatomic) char hasDiversifiedPersonalizationScore; 
@property (assign,nonatomic) double diversifiedPersonalizationScore;                    //@synthesize diversifiedPersonalizationScore=_diversifiedPersonalizationScore - In the implementation block
@property (assign,nonatomic) char hasSubscribedChannelCtr; 
@property (assign,nonatomic) double subscribedChannelCtr;                               //@synthesize subscribedChannelCtr=_subscribedChannelCtr - In the implementation block
@property (nonatomic,readonly) char hasLanguage; 
@property (nonatomic,retain) NSString * language;                                       //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) char hasSurfacedByChannelId; 
@property (nonatomic,retain) NSString * surfacedByChannelId;                            //@synthesize surfacedByChannelId=_surfacedByChannelId - In the implementation block
+(Class)fractionalCohortMembershipType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasLanguage;
-(int)groupType;
-(void)setGroupType:(int)arg1 ;
-(void)setPersonalizationScore:(double)arg1 ;
-(double)personalizationScore;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(char)hasSourceChannelId;
-(NSString *)sourceChannelId;
-(void)setHasGroupType:(char)arg1 ;
-(char)hasGroupType;
-(id)groupTypeAsString:(int)arg1 ;
-(int)StringAsGroupType:(id)arg1 ;
-(void)setDisplayRank:(int)arg1 ;
-(void)setHasDisplayRank:(char)arg1 ;
-(char)hasDisplayRank;
-(int)displayRank;
-(void)setIssueData:(NTPBIssueData *)arg1 ;
-(void)setIssueExposureData:(NTPBIssueExposureData *)arg1 ;
-(void)setParentFeedId:(NSString *)arg1 ;
-(char)hasIssueData;
-(char)hasIssueExposureData;
-(int)parentFeedType;
-(void)setParentFeedType:(int)arg1 ;
-(void)setHasParentFeedType:(char)arg1 ;
-(char)hasParentFeedType;
-(id)parentFeedTypeAsString:(int)arg1 ;
-(int)StringAsParentFeedType:(id)arg1 ;
-(char)hasParentFeedId;
-(void)setAdSupportedChannel:(char)arg1 ;
-(void)setHasAdSupportedChannel:(char)arg1 ;
-(char)hasAdSupportedChannel;
-(NTPBIssueData *)issueData;
-(NTPBIssueExposureData *)issueExposureData;
-(NSString *)parentFeedId;
-(char)adSupportedChannel;
-(void)addFractionalCohortMembership:(id)arg1 ;
-(void)setSurfacedByChannelId:(NSString *)arg1 ;
-(char)hasSurfacedByChannelId;
-(void)clearFractionalCohortMemberships;
-(unsigned long long)fractionalCohortMembershipsCount;
-(id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1 ;
-(NSString *)surfacedByChannelId;
-(NSMutableArray *)fractionalCohortMemberships;
-(void)setFractionalCohortMemberships:(NSMutableArray *)arg1 ;
-(void)setChannelData:(NTPBChannelData *)arg1 ;
-(void)setIsPaidSubscriberToSourceChannel:(char)arg1 ;
-(void)setHasIsPaidSubscriberToSourceChannel:(char)arg1 ;
-(char)hasIsPaidSubscriberToSourceChannel;
-(char)hasChannelData;
-(char)isPaidSubscriberToSourceChannel;
-(NTPBChannelData *)channelData;
-(void)setHasPersonalizationScore:(char)arg1 ;
-(char)hasPersonalizationScore;
-(void)setFeatureCtr:(double)arg1 ;
-(void)setHasFeatureCtr:(char)arg1 ;
-(char)hasFeatureCtr;
-(void)setPaidNonpaidSubscriptionCtr:(double)arg1 ;
-(void)setHasPaidNonpaidSubscriptionCtr:(char)arg1 ;
-(char)hasPaidNonpaidSubscriptionCtr;
-(void)setAutoSubscribeCtr:(double)arg1 ;
-(void)setHasAutoSubscribeCtr:(char)arg1 ;
-(char)hasAutoSubscribeCtr;
-(void)setComputedGlobalScoreCoefficient:(double)arg1 ;
-(void)setHasComputedGlobalScoreCoefficient:(char)arg1 ;
-(char)hasComputedGlobalScoreCoefficient;
-(void)setGlobalScore:(double)arg1 ;
-(void)setHasGlobalScore:(char)arg1 ;
-(char)hasGlobalScore;
-(void)setUserFeedbackScore:(double)arg1 ;
-(void)setHasUserFeedbackScore:(char)arg1 ;
-(char)hasUserFeedbackScore;
-(void)setAgedUserFeedbackScore:(double)arg1 ;
-(void)setHasAgedUserFeedbackScore:(char)arg1 ;
-(char)hasAgedUserFeedbackScore;
-(void)setAgedPersonalizationScore:(double)arg1 ;
-(void)setHasAgedPersonalizationScore:(char)arg1 ;
-(char)hasAgedPersonalizationScore;
-(void)setDiversifiedPersonalizationScore:(double)arg1 ;
-(void)setHasDiversifiedPersonalizationScore:(char)arg1 ;
-(char)hasDiversifiedPersonalizationScore;
-(void)setSubscribedChannelCtr:(double)arg1 ;
-(void)setHasSubscribedChannelCtr:(char)arg1 ;
-(char)hasSubscribedChannelCtr;
-(double)featureCtr;
-(double)paidNonpaidSubscriptionCtr;
-(double)autoSubscribeCtr;
-(double)computedGlobalScoreCoefficient;
-(double)globalScore;
-(double)userFeedbackScore;
-(double)agedUserFeedbackScore;
-(double)agedPersonalizationScore;
-(double)diversifiedPersonalizationScore;
-(double)subscribedChannelCtr;
@end

