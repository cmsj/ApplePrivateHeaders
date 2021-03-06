/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSDrawables/TSDImageProvider.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject;

@interface TSDPDFImageProvider : TSDImageProvider {

	NSObject*<OS_dispatch_queue> _accessQueue;
	CGPDFDocumentRef _PDFDocument;
	CGSize _naturalSize;
	NSObject*<OS_dispatch_semaphore> _flushableContentLock;
	char _hasFlushableContent;

}

@property (nonatomic,readonly) CGPDFDocumentRef CGPDFDocument; 
@property (nonatomic,readonly) long long pageAngle; 
-(void)dealloc;
-(char)isValid;
-(void)flush;
-(CGSize)naturalSize;
-(void)drawImageInContext:(CGContextRef)arg1 rect:(CGRect)arg2 ;
-(CGPDFDocumentRef)CGPDFDocument;
-(void)i_commonInit;
-(void)p_loadIfNecessary;
-(CGPDFDocumentRef)p_load;
-(long long)pageAngle;
-(char)i_hasFlushableContent;
-(unsigned long long)i_flushableMemoryEstimate;
@end

