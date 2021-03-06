/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface WBSSiriIntelligenceDonor : NSObject {

	NSObject*<OS_dispatch_queue> _coreSpotlightDonationSerialQueue;

}
+(id)sharedInstance;
+(id)_historyItemIdentifierForURLString:(id)arg1 ;
+(id)_coreSpotlightItemIdentifierForURLString:(id)arg1 ;
+(id)coreSpotlightPageDonationIdentifier;
+(id)_bookmarkItemIdentifierForURLString:(id)arg1 ;
+(id)historyItemIdentifierForURL:(id)arg1 ;
-(id)init;
-(void)processRemovedHistoryItems:(id)arg1 ;
-(void)removeAllCoreSpotlightHistoryDataDonatedBySafari;
-(char)donateTextInWebView:(id)arg1 extractedReaderText:(id)arg2 canDonateFullPageText:(char)arg3 extractInnerText:(/*^block*/id)arg4 ;
-(void)donateSafariBookmarksToCoreSpotlight:(id)arg1 ;
-(void)donateDataForPageWithURL:(id)arg1 fullPageText:(id)arg2 readerText:(id)arg3 ;
-(void)_donateDataForPageWithURL:(id)arg1 fullPageText:(id)arg2 readerText:(id)arg3 ;
-(void)_indexHistoryItemsToCoreSpotlight:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_computeCoreSpotlightIDsForBookmarks:(id)arg1 ;
-(id)_indexedBookmarksIDs:(id*)arg1 ;
-(void)_computeCoreSpotlightIndexingRequirementsForAllBookmarksIDs:(id)arg1 indexedBookmarksIDs:(id)arg2 outIndexIDs:(id*)arg3 outRemoveIDs:(id*)arg4 ;
-(void)_removeCoreSpotlightDataWithIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_searchableItemsForIDs:(id)arg1 allBookmarks:(id)arg2 ;
-(void)_indexCoreSpotlightData:(id)arg1 ;
-(id)_contentDescriptionForURL:(id)arg1 ;
-(void)_sanitizeAttributeSet:(id)arg1 ;
-(void)export30DaysWorthOfHistoryToCoreSpotlightWithCompletionHandler:(/*^block*/id)arg1 ;
@end

