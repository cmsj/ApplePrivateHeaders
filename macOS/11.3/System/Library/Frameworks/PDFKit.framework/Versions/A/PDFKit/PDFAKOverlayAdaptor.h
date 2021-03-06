/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PDFAKOverlayAdaptorPrivate, PDFView;

@interface PDFAKOverlayAdaptor : NSObject {

	PDFAKOverlayAdaptorPrivate* _private;

}

@property (nonatomic,__weak,readonly) PDFView * pdfView; 
+(id)instanceForPlatformWithPDFView:(id)arg1 ;
-(void)dealloc;
-(void)_teardown;
-(void)teardown;
-(void)pdfView:(id)arg1 didAddView:(id)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4 ;
-(void)pdfView:(id)arg1 willRemoveView:(id)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4 ;
-(id)_annotationController;
-(PDFView *)pdfView;
-(id)_pdfView;
-(id)initWithPDFView:(id)arg1 ;
-(void)_installOverlayForPageView:(id)arg1 ofPage:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)_uninstallOverlayAtIndex:(unsigned long long)arg1 ;
-(void)_currentPageChanged:(id)arg1 ;
-(void)_teardownGestureRecognizersForView:(id)arg1 andDocument:(id)arg2 ;
-(void)_uninstallAllOverlays;
-(void)_setupGestureRecognizersForView:(id)arg1 andDocument:(id)arg2 ;
-(void)_setupRotationNotificationObservationForPageAtIndex:(unsigned long long)arg1 ;
-(void)_teardownRotationNotificationObservationForPageAtIndex:(unsigned long long)arg1 ;
-(void)_pageRotationChanged:(id)arg1 ;
-(void)pdfView:(id)arg1 willSetDocument:(id)arg2 ;
-(void)pdfView:(id)arg1 didSetDocument:(id)arg2 ;
-(void)_selectionChanged:(id)arg1 ;
-(void)_selectionWillBeginChanging:(id)arg1 ;
-(void)_selectionDidEndChanging:(id)arg1 ;
@end

