/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/PagesQuicklook.framework/Versions/A/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PagesQuicklook/PagesQuicklook-Structs.h>
#import <libobjc.A.dylib/TSWPTextWrap.h>

@class TPDocumentRoot;

@interface TPTextWrapController : NSObject <TSWPTextWrap> {

	CGAffineTransform _canvasSpaceToWrapSpace;
	CGAffineTransform _wrapSpaceToCanvasSpace;
	TPDocumentRoot* _documentRoot;

}

@property (nonatomic,__weak,readonly) TPDocumentRoot * documentRoot;              //@synthesize documentRoot=_documentRoot - In the implementation block
-(TPDocumentRoot *)documentRoot;
-(double)nextUnobstructedSpanStartingAt:(CGRect)arg1 wrappableAttachments:(id)arg2 userInfo:(id)arg3 ;
-(id)initWithDocumentRoot:(id)arg1 ;
-(void)setUpCanvasToWrapSpaceAffineTransformation:(CGAffineTransform)arg1 ;
-(id)p_groupInfoContainingWrappable:(id)arg1 ;
-(char)p_shouldTextFlowAroundWrappable:(id)arg1 inTarget:(id)arg2 inColumn:(id)arg3 ;
-(void)p_splitLine:(CGRect)arg1 lineSegmentRects:(id)arg2 wrappable:(id)arg3 cookie:(id)arg4 skipHint:(double*)arg5 ;
-(id)p_wrapDrawables:(id)arg1 userInfo:(id)arg2 ;
-(id)beginWrappingToColumn:(id)arg1 columnTransformFromWP:(CGAffineTransform)arg2 target:(id)arg3 hasWrappables:(out char*)arg4 ;
-(void)splitLine:(CGRect)arg1 lineSegmentRects:(inout id)arg2 wrappableAttachments:(id)arg3 ignoreFloatingGraphics:(char)arg4 canvasCausedWrap:(out char*)arg5 skipHint:(out double*)arg6 userInfo:(id)arg7 ;
-(BOOL)checkForUnobstructedSpan:(CGRect)arg1 wrappableAttachments:(id)arg2 userInfo:(id)arg3 ;
@end

