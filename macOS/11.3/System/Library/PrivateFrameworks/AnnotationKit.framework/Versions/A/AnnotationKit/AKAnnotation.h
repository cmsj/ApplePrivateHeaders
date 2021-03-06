/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface AKAnnotation : NSObject <NSSecureCoding, NSCopying> {

	/*^block*/id _appearanceOverride;
	char _shouldUseAppearanceOverride;
	char _isObservingForAppearance;
	CGPDFDocumentRef _appearanceOverridePDF;
	char _isObservingForIsEdited;
	char _isReallyObservingForIsEdited;
	char _conformsToAKStrokedAnnotationProtocol;
	char _conformsToAKFilledAnnotationProtocol;
	char _conformsToAKRectangularAnnotationProtocol;
	char _conformsToAKFlippableAnnotationProtocol;
	char _conformsToAKRotatableAnnotationProtocol;
	char _conformsToAKTextAnnotationProtocol;
	char _conformsToAKParentAnnotationProtocol;
	char _editsDisableAppearanceOverride;
	char _isEdited;
	char _isTranslating;
	char _isDraggingHandle;
	char _isEditingText;
	char _textIsFixedWidth;
	char _textIsFixedHeight;
	char _textIsClipped;
	char _shouldUsePlaceholderText;
	char _isBeingCopied;
	NSString* _UUID;
	NSString* _customPlaceholderText;
	double _originalModelBaseScaleFactor;
	long long _originalExifOrientation;
	NSDate* _modificationDate;
	NSString* _author;
	long long _akSerializationVersion;
	long long _akSerializationPlatform;
	AKAnnotation* _parentAnnotation;
	AKAnnotation* _childAnnotation;
	CGRect _initialDrawingBoundsForAppearanceOverride;

}

@property (assign) char isEdited;                                                 //@synthesize isEdited=_isEdited - In the implementation block
@property (assign) long long akSerializationVersion;                              //@synthesize akSerializationVersion=_akSerializationVersion - In the implementation block
@property (assign) long long akSerializationPlatform;                             //@synthesize akSerializationPlatform=_akSerializationPlatform - In the implementation block
@property (assign) char isEditingText;                                            //@synthesize isEditingText=_isEditingText - In the implementation block
@property (assign) char textIsFixedWidth;                                         //@synthesize textIsFixedWidth=_textIsFixedWidth - In the implementation block
@property (assign) char textIsFixedHeight;                                        //@synthesize textIsFixedHeight=_textIsFixedHeight - In the implementation block
@property (assign) char textIsClipped;                                            //@synthesize textIsClipped=_textIsClipped - In the implementation block
@property (assign) char shouldUsePlaceholderText;                                 //@synthesize shouldUsePlaceholderText=_shouldUsePlaceholderText - In the implementation block
@property (__weak) AKAnnotation * parentAnnotation;                               //@synthesize parentAnnotation=_parentAnnotation - In the implementation block
@property (__weak) AKAnnotation * childAnnotation;                                //@synthesize childAnnotation=_childAnnotation - In the implementation block
@property (assign) CGRect initialDrawingBoundsForAppearanceOverride;              //@synthesize initialDrawingBoundsForAppearanceOverride=_initialDrawingBoundsForAppearanceOverride - In the implementation block
@property (assign) char shouldUseAppearanceOverride; 
@property (assign) char shouldObserveEdits; 
@property (assign) char isBeingCopied;                                            //@synthesize isBeingCopied=_isBeingCopied - In the implementation block
@property (readonly) NSString * UUID;                                             //@synthesize UUID=_UUID - In the implementation block
@property (readonly) NSString * displayName; 
@property (copy) NSString * customPlaceholderText;                                //@synthesize customPlaceholderText=_customPlaceholderText - In the implementation block
@property (assign,nonatomic) double originalModelBaseScaleFactor;                 //@synthesize originalModelBaseScaleFactor=_originalModelBaseScaleFactor - In the implementation block
@property (assign,nonatomic) long long originalExifOrientation;                   //@synthesize originalExifOrientation=_originalExifOrientation - In the implementation block
@property (readonly) CGRect hitTestBounds; 
@property (readonly) CGRect drawingBounds; 
@property (readonly) CGRect integralDrawingBounds; 
@property (copy) id appearanceOverride; 
@property (readonly) char isUsingAppearanceOverride; 
@property (assign) char editsDisableAppearanceOverride;                           //@synthesize editsDisableAppearanceOverride=_editsDisableAppearanceOverride - In the implementation block
@property (readonly) char shouldBurnIn; 
@property (retain) NSDate * modificationDate;                                     //@synthesize modificationDate=_modificationDate - In the implementation block
@property (copy) NSString * author;                                               //@synthesize author=_author - In the implementation block
@property (assign) char isTranslating;                                            //@synthesize isTranslating=_isTranslating - In the implementation block
@property (assign) char isDraggingHandle;                                         //@synthesize isDraggingHandle=_isDraggingHandle - In the implementation block
+(char)supportsSecureCoding;
+(id)annotationWithData:(id)arg1 ;
+(id)keyPathsForValuesAffectingHitTestBounds;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
+(id)defaultPlaceholderText;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dataRepresentation;
-(NSString *)displayName;
-(NSString *)UUID;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSDate *)modificationDate;
-(void)translateBy:(CGPoint)arg1 ;
-(char)isEdited;
-(CGRect)drawingBounds;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(CGRect)integralDrawingBounds;
-(void)setShouldUsePlaceholderText:(char)arg1 ;
-(void)setAppearanceOverride:(id)arg1 ;
-(void)setCustomPlaceholderText:(NSString *)arg1 ;
-(AKAnnotation *)childAnnotation;
-(char)conformsToAKStrokedAnnotationProtocol;
-(char)conformsToAKTextAnnotationProtocol;
-(char)conformsToAKFilledAnnotationProtocol;
-(double)originalModelBaseScaleFactor;
-(void)setOriginalModelBaseScaleFactor:(double)arg1 ;
-(long long)originalExifOrientation;
-(void)setOriginalExifOrientation:(long long)arg1 ;
-(void)setTextIsFixedWidth:(char)arg1 ;
-(void)setTextIsFixedHeight:(char)arg1 ;
-(void)setEditsDisableAppearanceOverride:(char)arg1 ;
-(NSString *)customPlaceholderText;
-(id)keysForValuesToObserveForUndo;
-(id)keysForValuesToObserveForRedrawing;
-(id)keysForValuesToObserveForAdornments;
-(void)adjustModelToCompensateForOriginalExif;
-(char)isTranslating;
-(void)setIsTranslating:(char)arg1 ;
-(CGRect)hitTestBounds;
-(void)flattenModelExifOrientation:(long long)arg1 withModelSize:(CGSize)arg2 ;
-(char)conformsToAKRectangularAnnotationProtocol;
-(char)textIsClipped;
-(void)setTextIsClipped:(char)arg1 ;
-(char)textIsFixedWidth;
-(char)textIsFixedHeight;
-(char)shouldUsePlaceholderText;
-(char)isEditingText;
-(void)setIsEditingText:(char)arg1 ;
-(char)shouldBurnIn;
-(void)setIsBeingCopied:(char)arg1 ;
-(long long)akSerializationVersion;
-(void)setShouldUseAppearanceOverride:(char)arg1 ;
-(char)conformsToAKParentAnnotationProtocol;
-(char)conformsToAKRotatableAnnotationProtocol;
-(char)shouldObserveEdits;
-(void)setShouldObserveEdits:(char)arg1 ;
-(char)shouldUseAppearanceOverride;
-(id)appearanceOverride;
-(char)conformsToAKFlippableAnnotationProtocol;
-(void)setChildAnnotation:(AKAnnotation *)arg1 ;
-(AKAnnotation *)parentAnnotation;
-(char)isDraggingHandle;
-(void)setIsDraggingHandle:(char)arg1 ;
-(CGRect)initialDrawingBoundsForAppearanceOverride;
-(char)editsDisableAppearanceOverride;
-(void)setInitialDrawingBoundsForAppearanceOverride:(CGRect)arg1 ;
-(void)setIsEdited:(char)arg1 ;
-(void)setAkSerializationVersion:(long long)arg1 ;
-(void)setAkSerializationPlatform:(long long)arg1 ;
-(long long)akSerializationPlatform;
-(char)isBeingCopied;
-(char)isUsingAppearanceOverride;
-(void)setParentAnnotation:(AKAnnotation *)arg1 ;
@end

