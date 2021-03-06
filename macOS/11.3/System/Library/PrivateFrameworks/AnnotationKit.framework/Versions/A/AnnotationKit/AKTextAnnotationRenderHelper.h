/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@interface AKTextAnnotationRenderHelper : NSObject
+(void)getAnnotationRectangle:(CGRect*)arg1 textBounds:(CGRect*)arg2 containerSize:(CGSize*)arg3 exclusionPaths:(id*)arg4 isTextClipped:(char*)arg5 forAnnotation:(id)arg6 onPageController:(id)arg7 orInContext:(CGContextRef)arg8 shouldAlignToPixels:(char)arg9 optionalText:(id)arg10 optionalCenter:(CGPoint)arg11 optionalProposedRectangle:(CGRect)arg12 ;
+(CGSize)unconstrainedSizeForText:(id)arg1 ;
+(void)renderAnnotationText:(id)arg1 intoContext:(CGContextRef)arg2 isForScreen:(char)arg3 pageControllerOrNil:(id)arg4 ;
+(char)hitTestPoint:(CGPoint)arg1 againstActualTextForAnnotation:(id)arg2 onPageController:(id)arg3 ;
+(id)_sharedLayoutManager;
+(char)_hitTestPoint:(CGPoint)arg1 againstActualTextForAnnotation:(id)arg2 onPageController:(id)arg3 contextForVisualDebugging:(CGContextRef)arg4 ;
@end

