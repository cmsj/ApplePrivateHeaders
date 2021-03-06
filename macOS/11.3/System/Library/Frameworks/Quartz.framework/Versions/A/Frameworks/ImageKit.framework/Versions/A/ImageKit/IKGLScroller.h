/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@class NSView;

@interface IKGLScroller : NSObject {

	NSView* _owner;
	CGPoint _hotPoint;
	float _hotValue;
	float _value;
	float _proportion;
	float _lineScroll;
	float _pageScroll;
	CGRect _frame;
	SEL _action;
	id _target;
	int _portionClicked;
	int _portionPushed;
	id _renderer;
	char _arrowScrolling;
	int _arrowRepeatCount;
	char _white;
	char _bluish;

}
-(char)mouseDown:(id)arg1 inView:(id)arg2 ;
-(void)setWhite:(char)arg1 ;
-(double)_gutterInset;
-(CGRect)_knobFrame;
-(void)_arrowScrollingCallback;
-(void)_arrowScrolling;
-(CGPoint)_localPointForEvent:(id)arg1 inView:(id)arg2 ;
-(int)_partAtLocation:(CGPoint)arg1 ;
-(char)_jumpToHereMode:(id)arg1 ;
-(void)startArrowScrolling;
-(void)recoverArrowScrolling;
-(char)mouseUp:(id)arg1 inView:(id)arg2 ;
-(char)mouseDragged:(id)arg1 inView:(id)arg2 ;
-(char)bluish;
-(void)setBluish:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(float)floatValue;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setOwner:(id)arg1 ;
-(SEL)action;
-(void)setAction:(SEL)arg1 ;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2 ;
-(id)accessibilityActionNames;
-(id)accessibilityActionDescription:(id)arg1 ;
-(void)accessibilityPerformAction:(id)arg1 ;
-(void)setFloatValue:(float)arg1 ;
-(CGRect)rectForPart:(unsigned long long)arg1 ;
-(void)setLineScroll:(float)arg1 ;
-(unsigned long long)testPart:(CGPoint)arg1 ;
-(void)setKnobProportion:(float)arg1 ;
-(float)knobProportion;
-(void)_decrementLine:(id)arg1 ;
-(void)_incrementLine:(id)arg1 ;
-(void)_decrementPage:(id)arg1 ;
-(void)_incrementPage:(id)arg1 ;
-(float)lineScroll;
-(void)setPageScroll:(float)arg1 ;
-(float)pageScroll;
-(char)white;
-(double)_scrollHeight;
-(CGRect)_gutterFrame;
-(void)drawInView:(id)arg1 ;
@end

