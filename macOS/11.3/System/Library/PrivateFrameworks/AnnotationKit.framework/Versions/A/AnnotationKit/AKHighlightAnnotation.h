/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKAnnotation.h>
#import <libobjc.A.dylib/AKParentAnnotationProtocol.h>

@class NSColor, NSArray, AKAnnotation, NSString;

@interface AKHighlightAnnotation : AKAnnotation <AKParentAnnotationProtocol> {

	unsigned long long _style;
	NSColor* _color;
	NSArray* _quadPoints;

}

@property (assign) unsigned long long style;                        //@synthesize style=_style - In the implementation block
@property (retain) NSColor * color;                                 //@synthesize color=_color - In the implementation block
@property (retain) NSArray * quadPoints;                            //@synthesize quadPoints=_quadPoints - In the implementation block
@property (__weak) AKAnnotation * childAnnotation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)keyPathsForValuesAffectingHitTestBounds;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)displayName;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(NSColor *)color;
-(void)setColor:(NSColor *)arg1 ;
-(void)translateBy:(CGPoint)arg1 ;
-(void)setQuadPoints:(NSArray *)arg1 ;
-(NSArray *)quadPoints;
-(id)keysForValuesToObserveForUndo;
-(id)keysForValuesToObserveForRedrawing;
-(CGRect)hitTestBounds;
-(void)flattenModelExifOrientation:(long long)arg1 withModelSize:(CGSize)arg2 ;
@end
