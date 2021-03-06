/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FetchableItem.h>

@class WebBookmarkLeaf, NSMutableDictionary, NSImage, NSDate, NSString, NSArray, NSURL;

@interface ReadingListItem : NSObject <FetchableItem> {

	WebBookmarkLeaf* _bookmark;
	char _hasDefaultSiteIcon;
	char _isReaderAvailable;
	char _isFetchInProgress;
	NSMutableDictionary* _pageURLStringToPageNumberMap;
	id _faviconToken;
	char _lastRetrievedFallbackIconIsGenerated;
	NSImage* _icon;
	NSImage* _lastRetrievedFallbackIcon;

}

@property (nonatomic,copy) NSDate * dateAdded; 
@property (assign,nonatomic) char addedLocally; 
@property (nonatomic,copy) NSString * localTitle; 
@property (nonatomic,copy) NSString * localPreviewText; 
@property (assign,nonatomic) char hasDefaultSiteIcon;                                                               //@synthesize hasDefaultSiteIcon=_hasDefaultSiteIcon - In the implementation block
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,copy) NSString * title; 
@property (setter=setURLString:,nonatomic,copy) NSString * urlString; 
@property (nonatomic,copy) NSString * previewText; 
@property (nonatomic,copy) NSString * siteName; 
@property (nonatomic,copy) NSDate * dateLastViewed; 
@property (assign,getter=isUnread,nonatomic) char unread; 
@property (nonatomic,copy) NSDate * dateLastFetched; 
@property (nonatomic,readonly) char needsInfoUpdated; 
@property (assign,nonatomic) char isFetchInProgress;                                                                //@synthesize isFetchInProgress=_isFetchInProgress - In the implementation block
@property (assign,nonatomic) int fetchResult; 
@property (nonatomic,readonly) unsigned long long numberOfFailedLoadsWithUnknownOrNonRecoverableError; 
@property (nonatomic,readonly) char hasErrorDuringFetch; 
@property (assign,nonatomic) char isReaderAvailable;                                                                //@synthesize isReaderAvailable=_isReaderAvailable - In the implementation block
@property (assign,nonatomic) char isArchiveOnDisk; 
@property (nonatomic,readonly) NSArray * urlStringsForAdditionalPages; 
@property (assign,nonatomic) char didUserExplicitlyRequestOfflineArchive; 
@property (assign,nonatomic) char didAttemptToFetchIconFromImageURL; 
@property (nonatomic,readonly) WebBookmarkLeaf * bookmark;                                                          //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,readonly) NSString * domainString; 
@property (nonatomic,readonly) NSImage * icon;                                                                      //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) NSURL * leadingImageURL; 
@property (retain) NSImage * lastRetrievedFallbackIcon;                                                             //@synthesize lastRetrievedFallbackIcon=_lastRetrievedFallbackIcon - In the implementation block
@property (assign) char lastRetrievedFallbackIconIsGenerated;                                                       //@synthesize lastRetrievedFallbackIconIsGenerated=_lastRetrievedFallbackIconIsGenerated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)firstPageNumber;
+(id)keyPathsForValuesAffectingIcon;
+(id)keyPathsForValuesAffectingHasDefaultSiteIcon;
+(id)keyPathsForValuesAffectingUnread;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)UUID;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSImage *)icon;
-(WebBookmarkLeaf *)bookmark;
-(int)fetchResult;
-(NSString *)urlString;
-(NSDate *)dateAdded;
-(void)setUnread:(char)arg1 ;
-(void)setDateAdded:(NSDate *)arg1 ;
-(NSString *)siteName;
-(void)setSiteName:(NSString *)arg1 ;
-(char)isUnread;
-(char)isReaderAvailable;
-(NSImage *)lastRetrievedFallbackIcon;
-(NSString *)previewText;
-(unsigned long long)pageNumberFromURLString:(id)arg1 ;
-(id)urlStringFromPageNumber:(unsigned long long)arg1 ;
-(void)setURLString:(id)arg1 ;
-(char)hasDefaultSiteIcon;
-(void)setDateLastViewed:(NSDate *)arg1 ;
-(char)lastRetrievedFallbackIconIsGenerated;
-(void)setHasDefaultSiteIcon:(char)arg1 ;
-(NSDate *)dateLastViewed;
-(void)resetImageURLIconFetchAndOfflineArchiveRequestState;
-(char)isArchiveOnDisk;
-(NSArray *)urlStringsForAdditionalPages;
-(void)setIsArchiveOnDisk:(char)arg1 ;
-(char)isFetchInProgress;
-(char)didUserExplicitlyRequestOfflineArchive;
-(void)setIsFetchInProgress:(char)arg1 ;
-(void)setFetchResult:(int)arg1 ;
-(void)clearURLStringsForAdditionalPages;
-(void)addURLStringForAdditionalPage:(id)arg1 ;
-(id)initAsNewItemWithBookmark:(id)arg1 ;
-(void)setLastRetrievedFallbackIcon:(NSImage *)arg1 ;
-(void)setLastRetrievedFallbackIconIsGenerated:(char)arg1 ;
-(void)setDidAttemptToFetchIconFromImageURL:(char)arg1 ;
-(void)updateWithFetchedInfo:(id)arg1 ;
-(void)didFailFetchingItemWithResult:(int)arg1 ;
-(char)hasErrorDuringFetch;
-(char)needsInfoUpdated;
-(NSURL *)leadingImageURL;
-(char)didAttemptToFetchIconFromImageURL;
-(char)addedLocally;
-(id)initAsExistingItemWithBookmark:(id)arg1 ;
-(void)setAddedLocally:(char)arg1 ;
-(NSString *)localTitle;
-(void)removeLocalTitle;
-(NSString *)localPreviewText;
-(void)removeLocalPreviewText;
-(id)extraNonSyncAttributeValueForKey:(id)arg1 ;
-(void)setExtraNonSyncAttributeValue:(id)arg1 forKey:(id)arg2 ;
-(void)removeNonSyncAttributeValueForKey:(id)arg1 ;
-(NSDate *)dateLastFetched;
-(unsigned long long)numberOfFailedLoadsWithUnknownOrNonRecoverableError;
-(void)_setExtraNonSyncAttributeValue:(id)arg1 forKey:(id)arg2 shouldSuppressChangeNotification:(char)arg3 ;
-(void)removeDateLastViewed;
-(void)setPreviewText:(NSString *)arg1 ;
-(void)setLocalTitle:(NSString *)arg1 ;
-(void)setLocalPreviewText:(NSString *)arg1 ;
-(void)setLeadingImageURL:(NSURL *)arg1 ;
-(void)setDateLastFetched:(NSDate *)arg1 ;
-(void)setDidUserExplicitlyRequestOfflineArchive:(char)arg1 ;
-(NSString *)domainString;
-(id)extraAttributeValueForKey:(id)arg1 ;
-(void)setExtraAttributeValue:(id)arg1 forKey:(id)arg2 ;
-(void)setIsReaderAvailable:(char)arg1 ;
@end

