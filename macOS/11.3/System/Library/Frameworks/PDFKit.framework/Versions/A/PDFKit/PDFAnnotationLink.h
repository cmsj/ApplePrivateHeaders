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

@class PDFAnnotationLinkPrivateVars;

@interface PDFAnnotationLink : PDFAnnotation <NSCopying> {

	PDFAnnotationLinkPrivateVars* _private2;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)URL;
-(void)setURL:(id)arg1 ;
-(id)destination;
-(void)setDestination:(id)arg1 ;
-(void)commonInit;
-(id)initWithAnnotationDictionary:(CGPDFDictionaryRef)arg1 forPage:(id)arg2 ;
-(CFDictionaryRef)commonCreateDictionaryRef;
-(void)drawWithBox:(long long)arg1 inContext:(CGContextRef)arg2 ;
-(id)mouseDownStyle;
-(void)setMouseDownStyle:(id)arg1 ;
@end
