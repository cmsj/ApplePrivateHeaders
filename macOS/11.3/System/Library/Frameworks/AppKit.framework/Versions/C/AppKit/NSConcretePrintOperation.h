/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSPrintOperation.h>

@class NSGraphicsContext, NSPrintPanel, NSView, NSPrintInfo, NSMutableData, NSString, NSProgressPanel, NSPDFPanel, NSPrintOperationPrintEventRetrofitInfo;

@interface NSConcretePrintOperation : NSPrintOperation {

	NSGraphicsContext* _graphicsContext;
	long long _pageOrder;
	NSPrintPanel* _printPanel;
	id _accessoryView;
	id _thumbnailView;
	void* jobVars;
	NSView* _view;
	NSPrintInfo* _printInfo;
	CGRect _copyingBounds;
	char _copyingToEPSNotPDF;
	NSMutableData* _copyingData;
	NSString* _copyingPath;
	NSString* _jobStyleHint;
	NSString* _jobTitle;
	NSProgressPanel* _progressPanel;
	NSModalSession* _progressPanelAppModalSession;
	NSPDFPanel* _pdfPanel;
	SCD_Struct_NS82* _modalContextInfo;
	NSPrintOperationPrintEventRetrofitInfo* _printEventRetrofitInfo;
	long long _firstPageNumber;
	long long _lastPageNumber;
	double _pageScaling;
	long long _firstJobPageNumber;
	long long _lastJobPageNumber;
	long long _firstRenderPageNumber;
	long long _lastRenderPageNumber;
	long long _currentPageNumber;
	CGRect _currentPageBounds;
	long long _renderQuality;
	char canSpawnSeparateThread;
	char _showsPrintPanel;
	char _showsProgressPanel;
	char _isCopying;
	char _didRunToCompletion;
	char _paginationIsValid;
	char _viewKnowsPages;
	char _jobPageNumbersAreValid;
	char _isLockingFocus;
	char _isRenderingBorder;
	char _wasCancelledByUser;
	char _didAddSaveURL;
	char _isResponsibleForFileCoordination;

}
-(void)dealloc;
-(id)view;
-(void)setAccessoryView:(id)arg1 ;
-(id)context;
-(id)accessoryView;
-(char)_isRenderingBorder;
-(CGRect)_renderingBounds;
-(long long)currentPage;
-(id)printInfo;
-(void)setPrintInfo:(id)arg1 ;
-(void)setShowsPrintPanel:(char)arg1 ;
-(void)runOperationModalForWindow:(id)arg1 delegate:(id)arg2 didRunSelector:(SEL)arg3 contextInfo:(void*)arg4 ;
-(char)runOperation;
-(id)_initWithView:(id)arg1 printInfo:(id)arg2 ;
-(id)_initWithView:(id)arg1 printInfo:(id)arg2 epsNotPDF:(char)arg3 bounds:(CGRect)arg4 data:(id)arg5 orPath:(id)arg6 ;
-(char)isCopyingOperation;
-(long long)preferredRenderingQuality;
-(void)setJobTitle:(id)arg1 ;
-(id)jobTitle;
-(char)showsPrintPanel;
-(void)setShowsProgressPanel:(char)arg1 ;
-(char)showsProgressPanel;
-(void)setPrintPanel:(id)arg1 ;
-(id)printPanel;
-(void)setPDFPanel:(id)arg1 ;
-(id)PDFPanel;
-(void)setCanSpawnSeparateThread:(char)arg1 ;
-(char)canSpawnSeparateThread;
-(void)setPageOrder:(long long)arg1 ;
-(long long)pageOrder;
-(NSRange)pageRange;
-(id)createContext;
-(void)destroyContext;
-(char)deliverResult;
-(void)cleanUpOperation;
-(void)_forceKnowsPageRangeMessage;
-(void)_invalidatePagination;
-(char)_tryToSetCurrentPageNumber:(long long)arg1 ;
-(long long)_firstJobPageNumber;
-(long long)_lastJobPageNumber;
-(long long)_firstRenderPageNumber;
-(long long)_lastRenderPageNumber;
-(id)_effectiveJobTitle;
-(CGRect)_currentPageBounds;
-(double)_pageScaling;
-(void)_setRenderingBorder:(char)arg1 ;
-(void)_setPreferredRenderingQuality:(long long)arg1 ;
-(char)_isCancelledAfterHandlingUserEvents;
-(PrivatePrintOperationInfo*)_operationInfo;
-(void)_setLockingFocus:(char)arg1 ;
-(char)_isLockingFocus;
-(void)setBaseAffineTransform:(id)arg1 ;
-(id)baseAffineTransform;
-(char)isEPSOperation;
-(long long)_pageSet;
-(char)_isResponsibleForFileCoordination;
-(void)setJobStyleHint:(id)arg1 ;
-(id)jobStyleHint;
-(void)setShowPanels:(char)arg1 ;
-(char)showPanels;
-(char)_showsPreviewByDefault;
-(void)_setThumbnailView:(id)arg1 ;
-(id)_thumbnailView;
-(void)_progressPanelWasCancelled:(id)arg1 contextInfo:(void*)arg2 ;
-(void)_progressPanel:(id)arg1 didEndAndReturn:(long long)arg2 contextInfo:(void*)arg3 ;
-(long long)_lastPageNumber;
-(void)_setPageOrderFromPrintInfo;
-(void)_messageTraceExportAsPDFIfNecessary;
-(char)_renderView;
-(void)_finishModalOperation;
-(void)_createAndShowProgressPanelIfAppropriate:(char)arg1 ;
-(void)_continueModalOperationToTheEnd:(id)arg1 ;
-(void)_beginPDFPanelModalForWindow:(id)arg1 thenContinue:(/*^block*/id)arg2 ;
-(id)_preparedPrintPanel;
-(void)_printPanel:(id)arg1 didEndAndReturn:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)_continueModalOperationPastPrintPanel;
-(long long)_firstPageNumber;
-(long long)_viewKnowsPages;
-(void)_setShowPrintPanel:(char)arg1 ;
-(void)_setShowProgressPanel:(char)arg1 ;
-(void)_validatePagination;
-(long long)_nUpPages;
-(void)_validateJobPageNumbers;
@end

