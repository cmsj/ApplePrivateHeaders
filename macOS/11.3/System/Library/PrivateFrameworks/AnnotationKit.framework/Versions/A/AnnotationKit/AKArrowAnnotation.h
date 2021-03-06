/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKShapeAnnotation.h>
#import <libobjc.A.dylib/AKTextAnnotationProtocol.h>

@class NSTextStorage, NSDictionary, NSString;

@interface AKArrowAnnotation : AKShapeAnnotation <AKTextAnnotationProtocol> {

	unsigned long long _arrowHeadStyle;
	NSTextStorage* _annotationText;
	NSDictionary* _typingAttributes;
	CGPoint _startPoint;
	CGPoint _endPoint;
	CGPoint _midPoint;

}

@property (assign) CGPoint startPoint;                              //@synthesize startPoint=_startPoint - In the implementation block
@property (assign) CGPoint endPoint;                                //@synthesize endPoint=_endPoint - In the implementation block
@property (assign) CGPoint midPoint;                                //@synthesize midPoint=_midPoint - In the implementation block
@property (assign) unsigned long long arrowHeadStyle;               //@synthesize arrowHeadStyle=_arrowHeadStyle - In the implementation block
@property (retain) NSTextStorage * annotationText;                  //@synthesize annotationText=_annotationText - In the implementation block
@property (copy) NSDictionary * typingAttributes;                   //@synthesize typingAttributes=_typingAttributes - In the implementation block
@property (assign) char isEditingText; 
@property (assign) char textIsFixedWidth; 
@property (assign) char textIsFixedHeight; 
@property (assign) char textIsClipped; 
@property (assign) char shouldUsePlaceholderText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)keyPathsForValuesAffectingHitTestBounds;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)displayName;
-(NSDictionary *)typingAttributes;
-(void)setTypingAttributes:(NSDictionary *)arg1 ;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(void)translateBy:(CGPoint)arg1 ;
-(CGPoint)startPoint;
-(void)setMidPoint:(CGPoint)arg1 ;
-(void)setArrowHeadStyle:(unsigned long long)arg1 ;
-(CGPoint)endPoint;
-(unsigned long long)arrowHeadStyle;
-(void)setAnnotationText:(NSTextStorage *)arg1 ;
-(NSTextStorage *)annotationText;
-(id)keysForValuesToObserveForUndo;
-(id)keysForValuesToObserveForRedrawing;
-(id)keysForValuesToObserveForAdornments;
-(void)adjustModelToCompensateForOriginalExif;
-(CGRect)hitTestBounds;
-(void)flattenModelExifOrientation:(long long)arg1 withModelSize:(CGSize)arg2 ;
-(CGPoint)midPoint;
@end

