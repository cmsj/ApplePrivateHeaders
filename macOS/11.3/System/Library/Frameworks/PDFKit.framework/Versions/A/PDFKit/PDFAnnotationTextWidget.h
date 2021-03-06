/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/PDFAnnotation.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDFAnnotationTextWidgetPrivateVars;

@interface PDFAnnotationTextWidget : PDFAnnotation <NSCopying> {

	PDFAnnotationTextWidgetPrivateVars* _private2;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)stringValue;
-(id)defaultStringValue;
-(void)setAlignment:(long long)arg1 ;
-(long long)rotation;
-(long long)alignment;
-(void)setStringValue:(id)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(id)font;
-(void)setFont:(id)arg1 ;
-(id)attributedStringValue;
-(void)setAttributedStringValue:(id)arg1 ;
-(void)setRotation:(int)arg1 ;
-(char)isReadOnly;
-(void)commonInit;
-(id)fieldName;
-(void)setFieldName:(id)arg1 ;
-(char)isMultiline;
-(void)setMaximumLength:(unsigned long long)arg1 ;
-(void)setIsReadOnly:(char)arg1 ;
-(id)fontColor;
-(id)alternateFieldName;
-(void)setFontColor:(id)arg1 ;
-(id)initWithAnnotationDictionary:(CGPDFDictionaryRef)arg1 forPage:(id)arg2 ;
-(CFDictionaryRef)commonCreateDictionaryRef;
-(void)drawWithBox:(long long)arg1 inContext:(CGContextRef)arg2 ;
-(void)setDefaultStringValue:(id)arg1 ;
-(void)setAlternateFieldName:(id)arg1 ;
-(unsigned long long)maximumLength;
-(void)setIsMultiline:(char)arg1 ;
@end

