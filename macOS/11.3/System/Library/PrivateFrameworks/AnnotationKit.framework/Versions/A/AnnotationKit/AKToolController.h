/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@class AKController;

@interface AKToolController : NSObject {

	char _allInkEnabled;
	char _pencilInkEnabled;
	char _suppressSuggestedTouchBarChange;
	unsigned long long _toolMode;
	AKController* _controller;

}

@property (__weak) AKController * controller;                          //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic) char allInkEnabled;                       //@synthesize allInkEnabled=_allInkEnabled - In the implementation block
@property (assign,nonatomic) char pencilInkEnabled;                    //@synthesize pencilInkEnabled=_pencilInkEnabled - In the implementation block
@property (assign) char suppressSuggestedTouchBarChange;               //@synthesize suppressSuggestedTouchBarChange=_suppressSuggestedTouchBarChange - In the implementation block
@property (nonatomic,readonly) char isInDefaultMode; 
@property (assign,nonatomic) unsigned long long toolMode;              //@synthesize toolMode=_toolMode - In the implementation block
+(void)cascadeAnnotations:(id)arg1 onPageController:(id)arg2 forPaste:(char)arg3 ;
-(void)dealloc;
-(AKController *)controller;
-(id)initWithController:(id)arg1 ;
-(void)setController:(AKController *)arg1 ;
-(char)isOptionKeyPressed;
-(unsigned long long)toolMode;
-(void)addNewAnnotation:(id)arg1 onPageController:(id)arg2 shouldSelect:(char)arg3 shouldCascade:(char)arg4 ;
-(void)setToolMode:(unsigned long long)arg1 ;
-(void)setSuppressSuggestedTouchBarChange:(char)arg1 ;
-(CGPoint)_defaultCenterForNewAnnotation;
-(id)createAnnotationOfType:(long long)arg1 centeredAtPoint:(CGPoint)arg2 ;
-(double)_modelBaseScaleFactorForNewAnnotation;
-(id)_defaultFillColorForAnnotationOfClass:(Class)arg1 ;
-(double)_strokeWidthForNewAnnotation;
-(id)_strokeColorForNewAnnotation;
-(CGRect)_defaultRectangleForNewAnnotation:(id)arg1 centeredAtPoint:(CGPoint)arg2 ;
-(id)_defaultTypingAttributes;
-(unsigned long long)_arrowStyleForToolTag:(long long)arg1 ;
-(id)_defaultTextBoxTypingAttributes;
-(id)_defaultHeartTypingAttributesWithFillColor:(id)arg1 ;
-(void)_setRectangleToFitTextOnTextAnnotation:(id)arg1 ;
-(void)setAllInkEnabled:(char)arg1 ;
-(void)setPencilInkEnabled:(char)arg1 ;
-(char)suppressSuggestedTouchBarChange;
-(unsigned long long)defaultToolMode;
-(char)isInDefaultMode;
-(CGRect)_validatedRect:(CGRect)arg1 fitsInVisibleRegionOfOverlayView:(id)arg2 ownedByPageController:(id)arg3 centeredAtPoint:(CGPoint)arg4 ;
-(void)performToolActionForSender:(id)arg1 ;
-(char)isToolSenderEnabled:(id)arg1 ;
-(void)updateToolSenderState:(id)arg1 enabled:(char)arg2 ;
-(void)resetToDefaultMode;
-(CGRect)_centerBounds:(CGRect)arg1 atPoint:(CGPoint)arg2 ;
-(char)allInkEnabled;
-(char)pencilInkEnabled;
@end

