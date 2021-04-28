/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <NewsCore/FCHeadline.h>
#import <libobjc.A.dylib/FCHeadlineStocksFields.h>
#import <libobjc.A.dylib/FCArticleAccessCheckable.h>
#import <libobjc.A.dylib/FCContentArchivable.h>

@protocol FCChannelProviding;
@class NSString, FCHeadlineExperimentalTitleMetadata, NSDate, FCHeadlineThumbnail, NSURL, NSArray, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, FCIssue, FCTopStoriesStyleConfiguration, FCCoverArt, FCArticleAudioTrack, COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector, NTPBArticleRecord, FCInterestToken, FCContentArchive;

@interface FCArticleHeadline : FCHeadline <FCHeadlineStocksFields, FCArticleAccessCheckable, FCContentArchivable> {

	char _hasThumbnail;
	char _sponsored;
	char _deleted;
	char _isDraft;
	char _isLocalDraft;
	char _featureCandidate;
	char _needsRapidUpdates;
	char _showMinimalChrome;
	char _boundToContext;
	char _hiddenFromFeeds;
	char _pressRelease;
	char _hiddenFromAutoFavorites;
	char _webEmbedsEnabled;
	char _issueOnly;
	char _paid;
	char _bundlePaid;
	char _canBePurchased;
	char _showBundleSoftPaywall;
	char _useTransparentNavigationBar;
	NSString* _versionIdentifier;
	NSString* _identifier;
	NSString* _articleID;
	NSString* _referencedArticleID;
	NSString* _clusterID;
	unsigned long long _contentType;
	NSString* _title;
	NSString* _titleCompact;
	FCHeadlineExperimentalTitleMetadata* _experimentalTitleMetadata;
	NSString* _primaryAudience;
	NSDate* _publishDate;
	long long _publisherArticleVersion;
	long long _backendArticleVersion;
	id<FCChannelProviding> _sourceChannel;
	NSString* _sourceName;
	FCHeadlineThumbnail* _thumbnailLQ;
	FCHeadlineThumbnail* _thumbnail;
	FCHeadlineThumbnail* _thumbnailMedium;
	FCHeadlineThumbnail* _thumbnailHQ;
	FCHeadlineThumbnail* _thumbnailUltraHQ;
	FCHeadlineThumbnail* _thumbnailWidgetLQ;
	FCHeadlineThumbnail* _thumbnailWidget;
	FCHeadlineThumbnail* _thumbnailWidgetHQ;
	NSString* _shortExcerpt;
	NSString* _accessoryText;
	NSURL* _contentURL;
	NSDate* _lastModifiedDate;
	NSDate* _lastFetchedDate;
	NSArray* _topics;
	NSArray* _topicIDs;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList* _globalCohorts;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList* _publisherCohorts;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats* _globalConversionStats;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats* _publisherConversionStats;
	NSURL* _videoURL;
	double _videoDuration;
	NSArray* _iAdCategories;
	NSArray* _iAdKeywords;
	NSArray* _iAdSectionIDs;
	NSArray* _blockedStorefrontIDs;
	NSArray* _allowedStorefrontIDs;
	NSArray* _relatedArticleIDs;
	NSArray* _moreFromPublisherArticleIDs;
	FCIssue* _masterIssue;
	unsigned long long _storyType;
	FCTopStoriesStyleConfiguration* _storyStyle;
	long long _minimumNewsVersion;
	FCCoverArt* _coverArt;
	NSString* _videoCallToActionTitle;
	NSURL* _videoCallToActionURL;
	NSString* _language;
	unsigned long long _role;
	unsigned long long _halfLife;
	NSArray* _linkedArticleIDs;
	NSArray* _linkedIssueIDs;
	long long _bodyTextLength;
	FCArticleAudioTrack* _narrativeTrack;
	FCArticleAudioTrack* _narrativeTrackSample;
	NSString* _narrativeTrackTextRanges;
	COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector* _personalizationVector;
	COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector* _personalizationVectorAlt;
	NSString* _layeredThumbnailJSON;
	double _layeredThumbnailAspectRatio;
	NTPBArticleRecord* _articleRecord;
	FCInterestToken* _articleInterestToken;
	long long _behaviorFlags;
	CGRect _thumbnailFocalFrame;

}

@property (nonatomic,retain) NTPBArticleRecord * articleRecord;                        //@synthesize articleRecord=_articleRecord - In the implementation block
@property (nonatomic,retain) FCInterestToken * articleInterestToken;                   //@synthesize articleInterestToken=_articleInterestToken - In the implementation block
@property (nonatomic,copy) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long behaviorFlags;                                  //@synthesize behaviorFlags=_behaviorFlags - In the implementation block
@property (nonatomic,copy,readonly) NSString * stocksClusterID; 
@property (nonatomic,copy,readonly) NSString * stocksMetadataJSON; 
@property (nonatomic,copy,readonly) NSString * stocksScoresJSON; 
@property (nonatomic,copy,readonly) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) char isBlockedExplicitContent; 
@property (nonatomic,copy,readonly) id<FCChannelProviding> sourceChannel;              //@synthesize sourceChannel=_sourceChannel - In the implementation block
@property (nonatomic,readonly) char isDraft;                                           //@synthesize isDraft=_isDraft - In the implementation block
@property (nonatomic,readonly) char isLocalDraft;                                      //@synthesize isLocalDraft=_isLocalDraft - In the implementation block
@property (nonatomic,readonly) long long minimumNewsVersion;                           //@synthesize minimumNewsVersion=_minimumNewsVersion - In the implementation block
@property (getter=isPaid,nonatomic,readonly) char paid;                                //@synthesize paid=_paid - In the implementation block
@property (getter=isBundlePaid,nonatomic,readonly) char bundlePaid;                    //@synthesize bundlePaid=_bundlePaid - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceChannelID; 
@property (nonatomic,copy,readonly) NSArray * blockedStorefrontIDs;                    //@synthesize blockedStorefrontIDs=_blockedStorefrontIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allowedStorefrontIDs;                    //@synthesize allowedStorefrontIDs=_allowedStorefrontIDs - In the implementation block
@property (nonatomic,readonly) FCContentArchive * contentArchive; 
-(id)init;
-(NSString *)identifier;
-(unsigned long long)role;
-(id)versionIdentifier;
-(void)setTitle:(NSString *)arg1 ;
-(id)language;
-(id)publisherID;
-(NSString *)title;
-(unsigned long long)contentType;
-(void)setContentType:(unsigned long long)arg1 ;
-(char)hasThumbnail;
-(char)isDraft;
-(void)setThumbnail:(id)arg1 ;
-(id)thumbnail;
-(id)contentURL;
-(void)setRole:(unsigned long long)arg1 ;
-(char)isDeleted;
-(void)setHasThumbnail:(char)arg1 ;
-(id)topics;
-(id)lastModifiedDate;
-(void)setDeleted:(char)arg1 ;
-(void)setSourceName:(id)arg1 ;
-(id)sourceName;
-(id)clusterID;
-(void)setPublishDate:(id)arg1 ;
-(id)publishDate;
-(void)setClusterID:(id)arg1 ;
-(char)isPaid;
-(id)videoURL;
-(double)videoDuration;
-(id)lastFetchedDate;
-(id)articleID;
-(void)setArticleID:(id)arg1 ;
-(id)globalConversionStats;
-(long long)publisherArticleVersion;
-(void)setStoryType:(unsigned long long)arg1 ;
-(unsigned long long)storyType;
-(long long)backendArticleVersion;
-(void)setTopicIDs:(id)arg1 ;
-(long long)minimumNewsVersion;
-(id)topicIDs;
-(char)isHiddenFromAutoFavorites;
-(char)isBundlePaid;
-(long long)bodyTextLength;
-(char)hasAudioTrack;
-(id)globalCohorts;
-(void)setShortExcerpt:(id)arg1 ;
-(void)setAccessoryText:(id)arg1 ;
-(void)setTitleCompact:(id)arg1 ;
-(void)setThumbnailFocalFrame:(CGRect)arg1 ;
-(void)setBehaviorFlags:(long long)arg1 ;
-(id)referencedArticleID;
-(id)primaryAudience;
-(id)shortExcerpt;
-(id)accessoryText;
-(char)isFeatureCandidate;
-(char)isSponsored;
-(id)iAdCategories;
-(id)iAdKeywords;
-(id)iAdSectionIDs;
-(NSArray *)blockedStorefrontIDs;
-(NSArray *)allowedStorefrontIDs;
-(id)relatedArticleIDs;
-(id)moreFromPublisherArticleIDs;
-(CGRect)thumbnailFocalFrame;
-(long long)behaviorFlags;
-(id)coverArt;
-(id)titleCompact;
-(id)videoCallToActionTitle;
-(id)videoCallToActionURL;
-(NSString *)stocksClusterID;
-(id)linkedArticleIDs;
-(id)linkedIssueIDs;
-(char)isIssueOnly;
-(id)personalizationVector;
-(id)personalizationVectorAlt;
-(id)narrativeTrackTextRanges;
-(id<FCChannelProviding>)sourceChannel;
-(FCContentArchive *)contentArchive;
-(unsigned long long)halfLife;
-(id)publisherCohorts;
-(id)publisherConversionStats;
-(char)canBePurchased;
-(id)contentWithContext:(id)arg1 ;
-(char)isLocalDraft;
-(char)useTransparentNavigationBar;
-(char)webEmbedsEnabled;
-(id)articleRecirculationConfigJSON;
-(id)thumbnailLQ;
-(void)setThumbnailLQ:(id)arg1 ;
-(id)thumbnailMedium;
-(void)setThumbnailMedium:(id)arg1 ;
-(id)thumbnailHQ;
-(void)setThumbnailHQ:(id)arg1 ;
-(id)thumbnailUltraHQ;
-(void)setThumbnailUltraHQ:(id)arg1 ;
-(void)setSponsored:(char)arg1 ;
-(id)publisherSpecifiedArticleIDs;
-(id)storyStyle;
-(void)setStoryStyle:(id)arg1 ;
-(char)needsRapidUpdates;
-(char)showMinimalChrome;
-(char)isBoundToContext;
-(char)isHiddenFromFeeds;
-(char)isPressRelease;
-(char)showBundleSoftPaywall;
-(id)narrativeTrack;
-(id)narrativeTrackSample;
-(id)layeredThumbnailJSON;
-(double)layeredThumbnailAspectRatio;
-(id)masterIssue;
-(id)initWithArticleRecord:(id)arg1 articleInterestToken:(id)arg2 sourceChannel:(id)arg3 masterIssue:(id)arg4 storyStyleConfigs:(id)arg5 storyTypeTimeout:(long long)arg6 rapidUpdatesTimeout:(long long)arg7 assetManager:(id)arg8 experimentalTitleProvider:(id)arg9 ;
-(id)thumbnailWidgetLQ;
-(id)thumbnailWidget;
-(id)thumbnailWidgetHQ;
-(id)stocksFields;
-(id)backingArticleRecordData;
-(id)experimentalTitleMetadata;
-(void)setHalfLife:(unsigned long long)arg1 ;
-(NTPBArticleRecord *)articleRecord;
-(NSString *)stocksMetadataJSON;
-(NSString *)stocksScoresJSON;
-(id)initWithArticleRecordData:(id)arg1 sourceChannel:(id)arg2 masterIssue:(id)arg3 assetManager:(id)arg4 ;
-(void)setArticleRecord:(NTPBArticleRecord *)arg1 ;
-(FCInterestToken *)articleInterestToken;
-(void)setArticleInterestToken:(FCInterestToken *)arg1 ;
@end
