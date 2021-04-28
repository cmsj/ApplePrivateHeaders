/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AKDFRAnnotationPropertiesController.h>

@class NSTouchBarItem, NSStepperTouchBarItem, NSStackView;

@interface AKDFRShapeController : AKDFRAnnotationPropertiesController {

	NSTouchBarItem* _lineStyleItem;
	NSStepperTouchBarItem* _lineWidthStepperItem;
	NSStackView* _lineStyleView;

}

@property (retain) NSTouchBarItem * lineStyleItem;                            //@synthesize lineStyleItem=_lineStyleItem - In the implementation block
@property (retain) NSStepperTouchBarItem * lineWidthStepperItem;              //@synthesize lineWidthStepperItem=_lineWidthStepperItem - In the implementation block
@property (retain) NSStackView * lineStyleView;                               //@synthesize lineStyleView=_lineStyleView - In the implementation block
+(id)_imageFromTag:(long long)arg1 ;
+(id)_accessibilityLabelFromTag:(long long)arg1 ;
+(id)_accessibilityIdentifierForTag:(long long)arg1 ;
-(id)itemIdentifiers;
-(id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 delegate:(id)arg2 ;
-(id)_createButtonWithTag:(long long)arg1 ;
-(NSTouchBarItem *)lineStyleItem;
-(NSStepperTouchBarItem *)lineWidthStepperItem;
-(NSStackView *)lineStyleView;
-(void)_initializeLineStyleView;
-(void)_createLineWidthStepperItem;
-(void)setLineStyleItem:(NSTouchBarItem *)arg1 ;
-(void)_lineWidthDidChange;
-(void)setLineStyleView:(NSStackView *)arg1 ;
-(void)setLineWidthStepperItem:(NSStepperTouchBarItem *)arg1 ;
@end
