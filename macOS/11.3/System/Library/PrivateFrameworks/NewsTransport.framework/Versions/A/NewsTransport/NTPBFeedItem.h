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

@class NSString, COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleConversionStats, COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores, NSMutableArray;

@interface NTPBFeedItem : PBCodable <NSCopying> {

	long long _bodyTextLength;
	unsigned long long _contentType;
	unsigned long long _feedHalfLifeMilliseconds;
	double _globalUserFeedback;
	long long _minimumNewsVersion;
	unsigned long long _order;
	unsigned long long _publishDateMilliseconds;
	long long _publisherArticleVersion;
	NSString* _articleID;
	NSString* _clusterID;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleConversionStats* _conversionStats;
	NSString* _feedID;
	NSString* _parentIssueID;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores* _scores;
	NSString* _sourceArticleListID;
	NSString* _sourceChannelID;
	NSMutableArray* _topicIDs;
	char _hasAudioTrack;
	char _hasThumbnail;
	char _hasVideo;
	char _isBundlePaid;
	char _isEvergreen;
	char _isExplicitContent;
	char _isFeatured;
	char _isFromBlockedStorefront;
	char _isHiddenFromAutoFavorites;
	char _isPaid;
	SCD_Struct_NT17 _has;

}

@property (nonatomic,readonly) char hasFeedID; 
@property (nonatomic,retain) NSString * feedID;                                                                      //@synthesize feedID=_feedID - In the implementation block
@property (nonatomic,readonly) char hasArticleID; 
@property (nonatomic,retain) NSString * articleID;                                                                   //@synthesize articleID=_articleID - In the implementation block
@property (assign,nonatomic) char hasOrder; 
@property (assign,nonatomic) unsigned long long order;                                                               //@synthesize order=_order - In the implementation block
@property (assign,nonatomic) char hasPublishDateMilliseconds; 
@property (assign,nonatomic) unsigned long long publishDateMilliseconds;                                             //@synthesize publishDateMilliseconds=_publishDateMilliseconds - In the implementation block
@property (assign,nonatomic) char hasFeedHalfLifeMilliseconds; 
@property (assign,nonatomic) unsigned long long feedHalfLifeMilliseconds;                                            //@synthesize feedHalfLifeMilliseconds=_feedHalfLifeMilliseconds - In the implementation block
@property (assign,nonatomic) char hasGlobalUserFeedback; 
@property (assign,nonatomic) double globalUserFeedback;                                                              //@synthesize globalUserFeedback=_globalUserFeedback - In the implementation block
@property (nonatomic,readonly) char hasClusterID; 
@property (nonatomic,retain) NSString * clusterID;                                                                   //@synthesize clusterID=_clusterID - In the implementation block
@property (nonatomic,readonly) char hasSourceChannelID; 
@property (nonatomic,retain) NSString * sourceChannelID;                                                             //@synthesize sourceChannelID=_sourceChannelID - In the implementation block
@property (assign,nonatomic) char hasHasThumbnail; 
@property (assign,nonatomic) char hasThumbnail;                                                                      //@synthesize hasThumbnail=_hasThumbnail - In the implementation block
@property (assign,nonatomic) char hasIsFromBlockedStorefront; 
@property (assign,nonatomic) char isFromBlockedStorefront;                                                           //@synthesize isFromBlockedStorefront=_isFromBlockedStorefront - In the implementation block
@property (assign,nonatomic) char hasIsExplicitContent; 
@property (assign,nonatomic) char isExplicitContent;                                                                 //@synthesize isExplicitContent=_isExplicitContent - In the implementation block
@property (assign,nonatomic) char hasMinimumNewsVersion; 
@property (assign,nonatomic) long long minimumNewsVersion;                                                           //@synthesize minimumNewsVersion=_minimumNewsVersion - In the implementation block
@property (assign,nonatomic) char hasContentType; 
@property (assign,nonatomic) unsigned long long contentType;                                                         //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,retain) NSMutableArray * topicIDs;                                                              //@synthesize topicIDs=_topicIDs - In the implementation block
@property (assign,nonatomic) char hasIsPaid; 
@property (assign,nonatomic) char isPaid;                                                                            //@synthesize isPaid=_isPaid - In the implementation block
@property (assign,nonatomic) char hasHasVideo; 
@property (assign,nonatomic) char hasVideo;                                                                          //@synthesize hasVideo=_hasVideo - In the implementation block
@property (assign,nonatomic) char hasPublisherArticleVersion; 
@property (assign,nonatomic) long long publisherArticleVersion;                                                      //@synthesize publisherArticleVersion=_publisherArticleVersion - In the implementation block
@property (nonatomic,readonly) char hasScores; 
@property (nonatomic,retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores * scores;                                //@synthesize scores=_scores - In the implementation block
@property (assign,nonatomic) char hasIsHiddenFromAutoFavorites; 
@property (assign,nonatomic) char isHiddenFromAutoFavorites;                                                         //@synthesize isHiddenFromAutoFavorites=_isHiddenFromAutoFavorites - In the implementation block
@property (nonatomic,readonly) char hasParentIssueID; 
@property (nonatomic,retain) NSString * parentIssueID;                                                               //@synthesize parentIssueID=_parentIssueID - In the implementation block
@property (assign,nonatomic) char hasIsBundlePaid; 
@property (assign,nonatomic) char isBundlePaid;                                                                      //@synthesize isBundlePaid=_isBundlePaid - In the implementation block
@property (assign,nonatomic) char hasBodyTextLength; 
@property (assign,nonatomic) long long bodyTextLength;                                                               //@synthesize bodyTextLength=_bodyTextLength - In the implementation block
@property (assign,nonatomic) char hasIsFeatured; 
@property (assign,nonatomic) char isFeatured;                                                                        //@synthesize isFeatured=_isFeatured - In the implementation block
@property (assign,nonatomic) char hasHasAudioTrack; 
@property (assign,nonatomic) char hasAudioTrack;                                                                     //@synthesize hasAudioTrack=_hasAudioTrack - In the implementation block
@property (nonatomic,readonly) char hasConversionStats; 
@property (nonatomic,retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleConversionStats * conversionStats;              //@synthesize conversionStats=_conversionStats - In the implementation block
@property (assign,nonatomic) char hasIsEvergreen; 
@property (assign,nonatomic) char isEvergreen;                                                                       //@synthesize isEvergreen=_isEvergreen - In the implementation block
@property (nonatomic,readonly) char hasSourceArticleListID; 
@property (nonatomic,retain) NSString * sourceArticleListID;                                                         //@synthesize sourceArticleListID=_sourceArticleListID - In the implementation block
+(Class)topicIDsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)order;
-(unsigned long long)contentType;
-(void)setContentType:(unsigned long long)arg1 ;
-(char)hasThumbnail;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasThumbnail:(char)arg1 ;
-(void)setOrder:(unsigned long long)arg1 ;
-(char)hasVideo;
-(NSString *)clusterID;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores *)scores;
-(void)setScores:(COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores *)arg1 ;
-(void)setClusterID:(NSString *)arg1 ;
-(char)isPaid;
-(void)setHasVideo:(char)arg1 ;
-(char)isExplicitContent;
-(void)setHasHasVideo:(char)arg1 ;
-(char)hasHasVideo;
-(void)setHasOrder:(char)arg1 ;
-(char)hasOrder;
-(char)isFeatured;
-(void)setIsFeatured:(char)arg1 ;
-(NSString *)articleID;
-(void)setArticleID:(NSString *)arg1 ;
-(void)setConversionStats:(COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleConversionStats *)arg1 ;
-(char)hasConversionStats;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleConversionStats *)conversionStats;
-(void)setPublisherArticleVersion:(long long)arg1 ;
-(void)setHasPublisherArticleVersion:(char)arg1 ;
-(char)hasPublisherArticleVersion;
-(long long)publisherArticleVersion;
-(char)hasArticleID;
-(void)setFeedID:(NSString *)arg1 ;
-(void)setSourceChannelID:(NSString *)arg1 ;
-(void)setTopicIDs:(NSMutableArray *)arg1 ;
-(void)setParentIssueID:(NSString *)arg1 ;
-(void)setSourceArticleListID:(NSString *)arg1 ;
-(void)addTopicIDs:(id)arg1 ;
-(char)hasFeedID;
-(void)setPublishDateMilliseconds:(unsigned long long)arg1 ;
-(void)setHasPublishDateMilliseconds:(char)arg1 ;
-(char)hasPublishDateMilliseconds;
-(void)setFeedHalfLifeMilliseconds:(unsigned long long)arg1 ;
-(void)setHasFeedHalfLifeMilliseconds:(char)arg1 ;
-(char)hasFeedHalfLifeMilliseconds;
-(void)setGlobalUserFeedback:(double)arg1 ;
-(void)setHasGlobalUserFeedback:(char)arg1 ;
-(char)hasGlobalUserFeedback;
-(char)hasClusterID;
-(char)hasSourceChannelID;
-(void)setHasHasThumbnail:(char)arg1 ;
-(char)hasHasThumbnail;
-(void)setIsFromBlockedStorefront:(char)arg1 ;
-(void)setHasIsFromBlockedStorefront:(char)arg1 ;
-(char)hasIsFromBlockedStorefront;
-(void)setIsExplicitContent:(char)arg1 ;
-(void)setHasIsExplicitContent:(char)arg1 ;
-(char)hasIsExplicitContent;
-(void)setMinimumNewsVersion:(long long)arg1 ;
-(void)setHasMinimumNewsVersion:(char)arg1 ;
-(char)hasMinimumNewsVersion;
-(void)setHasContentType:(char)arg1 ;
-(char)hasContentType;
-(void)clearTopicIDs;
-(unsigned long long)topicIDsCount;
-(id)topicIDsAtIndex:(unsigned long long)arg1 ;
-(void)setIsPaid:(char)arg1 ;
-(void)setHasIsPaid:(char)arg1 ;
-(char)hasIsPaid;
-(char)hasScores;
-(void)setIsHiddenFromAutoFavorites:(char)arg1 ;
-(void)setHasIsHiddenFromAutoFavorites:(char)arg1 ;
-(char)hasIsHiddenFromAutoFavorites;
-(char)hasParentIssueID;
-(void)setIsBundlePaid:(char)arg1 ;
-(void)setHasIsBundlePaid:(char)arg1 ;
-(char)hasIsBundlePaid;
-(void)setBodyTextLength:(long long)arg1 ;
-(void)setHasBodyTextLength:(char)arg1 ;
-(char)hasBodyTextLength;
-(void)setHasIsFeatured:(char)arg1 ;
-(char)hasIsFeatured;
-(void)setHasAudioTrack:(char)arg1 ;
-(void)setHasHasAudioTrack:(char)arg1 ;
-(char)hasHasAudioTrack;
-(void)setIsEvergreen:(char)arg1 ;
-(void)setHasIsEvergreen:(char)arg1 ;
-(char)hasIsEvergreen;
-(char)hasSourceArticleListID;
-(NSString *)feedID;
-(unsigned long long)publishDateMilliseconds;
-(unsigned long long)feedHalfLifeMilliseconds;
-(double)globalUserFeedback;
-(NSString *)sourceChannelID;
-(char)isFromBlockedStorefront;
-(long long)minimumNewsVersion;
-(NSMutableArray *)topicIDs;
-(char)isHiddenFromAutoFavorites;
-(NSString *)parentIssueID;
-(char)isBundlePaid;
-(long long)bodyTextLength;
-(char)hasAudioTrack;
-(char)isEvergreen;
-(NSString *)sourceArticleListID;
@end

