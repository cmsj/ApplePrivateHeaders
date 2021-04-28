/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PDFViewDelegate, OS_dispatch_queue;
#import <PDFKit/PDFKit-Structs.h>
@class PDFDocument, PDFScrollView, PDFViewController, PDFSelection, PDFViewLayout, PDFRenderingProperties, PDFPage, PDFTimer, NSObject, NSMutableArray, NSArray, PDFCoachMarkManager, PDFPasswordViewController, PDFAnnotation, PDFAKOverlayAdaptor, PDFPageView, NSTrackingArea, NSImmediateActionGestureRecognizer, PDFRevealManager, NSCursor;

@interface PDFViewPrivate : NSObject {

	PDFDocument* document;
	PDFScrollView* scrollView;
	PDFViewController* controller;
	PDFSelection* currentSelection;
	BOOL autoScale;
	BOOL scaling;
	double zoomIncrement;
	id<PDFViewDelegate> delegate;
	BOOL delegateWillScale;
	BOOL delegateOrdersPageDrawing;
	double gutterWide;
	BOOL displaysPageBreaks;
	NSEdgeInsets pageBreakMargins;
	NSEdgeInsets documentMargins;
	long long displayMode;
	long long displayDirection;
	PDFViewLayout* viewLayout;
	BOOL displaysAsBook;
	BOOL displaysRTL;
	PDFRenderingProperties* renderingProperties;
	unsigned long long lastVerticalScrollDirection;
	unsigned long long lastHorizontalScrollDirection;
	BOOL displaysBookmarksForPages;
	unsigned long long currentPageIndex;
	unsigned long long firstVisiblePage;
	unsigned long long lastVisiblePage;
	BOOL inhibitAutoScroll;
	PDFPage* fromPage;
	PDFTimer* pageSyncTimer;
	NSObject*<OS_dispatch_queue> pagePreloadQueue;
	NSMutableArray* destinationHistory;
	long long historyIndex;
	NSArray* highlights;
	PDFCoachMarkManager* coachMarkManager;
	PDFPasswordViewController* passwordViewController;
	PDFAnnotation* currentTextWidget;
	PDFAKOverlayAdaptor* akOverlayAdaptor;
	BOOL showsScrollIndicators;
	BOOL dataDetectorsEnabled;
	BOOL debugDrawCGPDFNodeLayer[11];
	BOOL wantsForceUpdate;
	double blockingWaitDuration;
	unsigned long long activeMarkupStyle;
	PDFPageView* rotatingPageView;
	CGRect rotatingPageOriginalFrame;
	BOOL enableSwipeGestures;
	BOOL isActivelyFluidSwiping;
	CGRect originalCurrentPageViewFrames[2];
	CGRect originalTopPageViewFrames[2];
	CGRect sourcePageFrames[2];
	CGRect targetPageFrames[2];
	NSTrackingArea* trackingArea;
	BOOL enableMouseEvents;
	NSImmediateActionGestureRecognizer* deepPressRecognizer;
	PDFRevealManager* revealManager;
	BOOL isPresentingRVItem;
	NSCursor* annotationCursor;
	BOOL allowsDragging;
	PDFAnnotation* currentRedaction;

}
@end
