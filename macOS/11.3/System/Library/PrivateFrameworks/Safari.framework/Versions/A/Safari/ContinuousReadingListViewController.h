/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/ContinuousBrowserPageViewController.h>
#import <libobjc.A.dylib/ReaderInstallationTarget.h>

@class NSMutableDictionary, ContinuousReadingListDataSource, WebViewController, NSSet, NSString;

@interface ContinuousReadingListViewController : ContinuousBrowserPageViewController <ReaderInstallationTarget> {

	NSMutableDictionary* _continuousReadingListPageItemsToPageViewControllers;
	char _inReaderMode;
	id _currentItemBeforeLoadingNewContinuousReadingListItem;
	ContinuousReadingListDataSource* _readingListDataSource;

}

@property (assign,getter=isInReaderMode,nonatomic) char inReaderMode;                              //@synthesize inReaderMode=_inReaderMode - In the implementation block
@property (nonatomic,retain) id currentItemBeforeLoadingNewContinuousReadingListItem;              //@synthesize currentItemBeforeLoadingNewContinuousReadingListItem=_currentItemBeforeLoadingNewContinuousReadingListItem - In the implementation block
@property (nonatomic,retain) ContinuousReadingListDataSource * readingListDataSource;              //@synthesize readingListDataSource=_readingListDataSource - In the implementation block
@property (nonatomic,readonly) WebViewController * activeWebViewController; 
@property (nonatomic,copy,readonly) NSSet * allBrowserViewControllers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)lastShownReadingListPageItemForBackForwardListItem:(const BackForwardListItem*)arg1 ;
+(void)setLastShownReadingListPageItem:(id)arg1 forBackForwardListItem:(const BackForwardListItem*)arg2 ;
+(id)continuousReadingListPageItemForReadingListItem:(id)arg1 ;
+(Class)_dataSourceClassForReadingListItem:(id)arg1 ;
-(void)dealloc;
-(void)close;
-(void)viewDidAppear;
-(void)viewDidDisappear;
-(void)didFinishLoadForMainFrameForPage:(Page*)arg1 committedURL:(id)arg2 ;
-(void)setTopContentInset:(double)arg1 ;
-(id)currentContinuousReadingListPageItem;
-(void)stopLoadingPage:(Page*)arg1 ;
-(char)isInReaderMode;
-(void)loadContinuousReadingListPageItem:(id)arg1 ;
-(void)willReloadContinuousReadingViewPage:(Page*)arg1 ;
-(void)didCreateSnapshotForRubberBandingArea:(const Image*)arg1 forPage:(Page*)arg2 ;
-(void)removeTemporaryHeaderBannerViewForBrowserWKView:(id)arg1 ;
-(char)isCurrentContinuousReadingListPage:(Page*)arg1 ;
-(char)shouldIgnoreHistoryForAboutBlankForPage:(Page*)arg1 ;
-(void)addHistoryOperation:(id)arg1 forPage:(Page*)arg2 ;
-(NSSet *)allBrowserViewControllers;
-(void)resetAllPageWithHeaderViewControllers;
-(id)pageWithHeaderViewControllerForItem:(id)arg1 ;
-(id)continuousPageView:(id)arg1 itemBefore:(id)arg2 ;
-(id)continuousPageView:(id)arg1 itemAfter:(id)arg2 ;
-(void)continuousPageView:(id)arg1 willTransitionToPageView:(id)arg2 pageItem:(id)arg3 ;
-(void)continuousPageView:(id)arg1 didTransitionToPageView:(id)arg2 pageItem:(id)arg3 fromPageItem:(id)arg4 previousPageItem:(id)arg5 nextPageItem:(id)arg6 ;
-(void)continuousPageView:(id)arg1 pageViewWillParticipateInTransition:(id)arg2 pageItem:(id)arg3 role:(int)arg4 ;
-(void)continuousPageView:(id)arg1 pageViewDidParticipateInTransition:(id)arg2 pageItem:(id)arg3 ;
-(char)continuousPageView:(id)arg1 canScrollUpPageView:(id)arg2 pageItem:(id)arg3 ;
-(char)continuousPageView:(id)arg1 canScrollDownPageView:(id)arg2 pageItem:(id)arg3 ;
-(char)continuousPageView:(id)arg1 pageViewHasHeaderBanner:(id)arg2 pageItem:(id)arg3 ;
-(char)continuousPageView:(id)arg1 pageViewHasFooterBanner:(id)arg2 pageItem:(id)arg3 ;
-(id)initWithTabContentViewController:(id)arg1 ;
-(WebViewController *)activeWebViewController;
-(void)_updateTopContentInsetOfAllWKViews;
-(void)_displayedContentDidChange:(id)arg1 ;
-(void)setCurrentItemBeforeLoadingNewContinuousReadingListItem:(id)arg1 ;
-(id)_pageWithHeaderViewControllerForPage:(const Page*)arg1 ;
-(void)_setOverhangImagesForPageWithHeaderViewController:(id)arg1 ;
-(id)_pageWithHeaderViewControllerForPreviousItem;
-(id)_pageWithHeaderViewControllerForNextItem;
-(void)_goBackFromAboutBlankIfNecessaryForPage:(Page*)arg1 ;
-(void)_updateRubberBandingAttributesForPageItem:(id)arg1 headerViewController:(id)arg2 ;
-(void)_setCurrentlyLoadedReadingListItem:(id)arg1 forPageWithHeaderViewController:(id)arg2 ;
-(id)_continuousReadingListPageItemPrecedingPageItem:(id)arg1 ;
-(id)_continuousReadingListPageItemFollowingPageItem:(id)arg1 ;
-(id)currentItemBeforeLoadingNewContinuousReadingListItem;
-(void)_clearTopOverhangImageForPageWithHeaderViewController:(id)arg1 ;
-(void)_clearBottomOverhangImageForPageWithHeaderViewController:(id)arg1 ;
-(void)setInReaderMode:(char)arg1 ;
-(id)_pageWithHeaderViewControllerForReaderContainerViewController:(id)arg1 ;
-(ContinuousReadingListDataSource *)readingListDataSource;
-(id)_dataSourceForReadingListItem:(id)arg1 ;
-(id)_dataSourceForContinuousReadingListPageItem:(id)arg1 ;
-(void)setReadingListDataSource:(ContinuousReadingListDataSource *)arg1 ;
-(void)installReaderContainerViewController:(id)arg1 ;
-(void)uninstallReaderContainerViewController:(id)arg1 closedByUser:(char)arg2 ;
-(char)pageHasHeaderBanner:(Page*)arg1 ;
-(id)_pageWithHeaderViewControllerForFrame:(const Frame*)arg1 ;
@end

