/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSApplication.framework/Versions/A/TSApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSApplication/TSApplication-Structs.h>
#import <TSApplication/TSKRenderingExporter.h>

@protocol OS_dispatch_queue, TSARenderingExporterDelegate;
@class TSADocumentRoot, TSDImager, NSObject, TSUProgressContext, NSDictionary, TSDBitmapRenderingQualityInfo, TSAPdfTagger, TSUProgress, NSString;

@interface TSARenderingExporter : NSObject <TSKRenderingExporter> {

	TSADocumentRoot* mDocumentRoot;
	TSDImager* mImager;
	NSObject*<OS_dispatch_queue> mImagerAccessLock;
	NSObject*<TSARenderingExporterDelegate> mRenderingExporterDelegate;
	char mIsCancelled;
	char mIsQuit;
	char mPaginate;
	char mDoesDrawAllPages;
	TSUProgressContext* mProgressContext;
	NSDictionary* mOptions;
	TSDBitmapRenderingQualityInfo* mBitmapRenderingQualityInfo;
	TSAPdfTagger* mPdfTagger;

}

@property (retain) TSUProgressContext * progressContext; 
@property (nonatomic,readonly) CGRect boundsRect; 
@property (nonatomic,readonly) CGRect unscaledClipRect; 
@property (nonatomic,readonly) double progressForCurrentPage; 
@property (nonatomic,readonly) unsigned long long pageCount; 
@property (assign,nonatomic) char paginate; 
@property (nonatomic,readonly) char isCancelled; 
@property (nonatomic,readonly) TSUProgress * progress; 
@property (nonatomic,readonly) char needsSupplementalFiles; 
@property (nonatomic,copy) NSString * typeUTI; 
@property (nonatomic,readonly) NSString * savePanelMessage; 
@property (nonatomic,readonly) NSString * documentSpecificTypeUTI; 
@property (nonatomic,readonly) char isExportSupported; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)pdfTaggerClass;
-(void)setOptions:(id)arg1 ;
-(void)cancel;
-(char)isCancelled;
-(unsigned long long)pageCount;
-(void)quit;
-(void)setup;
-(void)teardown;
-(void)setProgressContext:(TSUProgressContext *)arg1 ;
-(TSUProgressContext *)progressContext;
-(char)isQuit;
-(id)documentRoot;
-(id)initWithDocumentRoot:(id)arg1 ;
-(CGRect)unscaledClipRect;
-(char)exportToURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3 ;
-(CGRect)boundsRect;
-(char)incrementPage;
-(id)p_renderingExporterDelegate;
-(id)currentInfos;
-(char)drawCurrentPageInContext:(CGContextRef)arg1 viewScale:(double)arg2 unscaledClipRect:(CGRect)arg3 createPage:(char)arg4 ;
-(id)bitmapRenderingQualityInfo;
-(id)initWithDocumentRoot:(id)arg1 imager:(id)arg2 ;
-(char)exportToURL:(id)arg1 pageNumber:(unsigned long long)arg2 delegate:(id)arg3 error:(id*)arg4 ;
-(char)preparePage:(unsigned long long)arg1 ;
-(double)progressForCurrentPage;
-(void)setPaginate:(char)arg1 ;
-(char)paginate;
-(void)performBlockWithImager:(/*^block*/id)arg1 ;
-(void)drawCurrentPageWithContext:(CGContextRef)arg1 returnSuccess:(char*)arg2 ;
-(Class)imagerClass;
-(char)shouldSuppressBackgroundsForCurrentPage;
-(double)totalProgess;
-(char)setInfosToCurrentPage;
-(void)setUpPdfTaggerWithOptions:(id)arg1 ;
-(char)setUpAndDrawCurrentPageInContext:(CGContextRef)arg1 viewScale:(double)arg2 unscaledClipRect:(CGRect)arg3 createPage:(char)arg4 ;
-(void)waitForRecalcToFinish;
-(void)p_drawCurrentPageWithContext:(CGContextRef)arg1 returnSuccess:(char*)arg2 createPage:(char)arg3 ;
-(void)drawAllPagesWithContext:(CGContextRef)arg1 returnSuccess:(char*)arg2 ;
-(void)finalizeContext:(CGContextRef)arg1 ;
-(char)p_exportToURL:(id)arg1 pageNumber:(unsigned long long)arg2 delegate:(id)arg3 error:(id*)arg4 ;
-(id)pdfTagger;
-(id)imager;
@end

