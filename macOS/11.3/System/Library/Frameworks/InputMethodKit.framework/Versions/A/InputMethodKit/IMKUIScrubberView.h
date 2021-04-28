/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InputMethodKit/InputMethodKit-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/NSAccessibilityList.h>

@protocol IMKUIScrubberViewDelegate;
@class NSMutableArray, IMKCandidate, IMKUICandidateAccessibilityElement, NSArray, NSString;

@interface IMKUIScrubberView : NSView <NSAccessibilityList> {

	NSMutableArray* _accessibilityChildren;
	char _currentTouchInteractionInsideView;
	id<IMKUIScrubberViewDelegate> _delegate;
	CGRect _drawingFrame;
	double _fontSize;
	double _horizontalPosition;
	double _minimumWidth;
	char _roundsLeftCorners;
	char _roundsRightCorners;
	IMKCandidate* _selectedCandidate;
	IMKUICandidateAccessibilityElement* _selectedCandidateAccessibilityElement;
	char _showsChevron;
	long long _style;
	NSArray* _UICandidates;

}

@property (nonatomic,retain) NSMutableArray * accessibilityChildren;                                                  //@synthesize accessibilityChildren=_accessibilityChildren - In the implementation block
@property (assign,nonatomic) char currentTouchInteractionInsideView;                                                  //@synthesize currentTouchInteractionInsideView=_currentTouchInteractionInsideView - In the implementation block
@property (assign,nonatomic,__weak) id<IMKUIScrubberViewDelegate> delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGRect drawingFrame;                                                                     //@synthesize drawingFrame=_drawingFrame - In the implementation block
@property (assign,nonatomic) double fontSize;                                                                         //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) double horizontalPosition;                                                               //@synthesize horizontalPosition=_horizontalPosition - In the implementation block
@property (assign,nonatomic) double minimumWidth;                                                                     //@synthesize minimumWidth=_minimumWidth - In the implementation block
@property (assign,nonatomic) char roundsLeftCorners;                                                                  //@synthesize roundsLeftCorners=_roundsLeftCorners - In the implementation block
@property (assign,nonatomic) char roundsRightCorners;                                                                 //@synthesize roundsRightCorners=_roundsRightCorners - In the implementation block
@property (nonatomic,retain) IMKCandidate * selectedCandidate;                                                        //@synthesize selectedCandidate=_selectedCandidate - In the implementation block
@property (nonatomic,retain) IMKUICandidateAccessibilityElement * selectedCandidateAccessibilityElement;              //@synthesize selectedCandidateAccessibilityElement=_selectedCandidateAccessibilityElement - In the implementation block
@property (assign,nonatomic) char showsChevron;                                                                       //@synthesize showsChevron=_showsChevron - In the implementation block
@property (assign,nonatomic) long long style;                                                                         //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) NSArray * UICandidates;                                                                  //@synthesize UICandidates=_UICandidates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGPoint)locationInViewWithEvent:(id)arg1 ;
-(void)elementPressed:(id)arg1 ;
-(void)elementQueried:(id)arg1 ;
-(IMKUICandidateAccessibilityElement *)selectedCandidateAccessibilityElement;
-(char)roundsLeftCorners;
-(char)roundsRightCorners;
-(void)setRoundsLeftCorners:(char)arg1 ;
-(void)setRoundsRightCorners:(char)arg1 ;
-(NSArray *)UICandidates;
-(void)setSelectedCandidateAccessibilityElement:(IMKUICandidateAccessibilityElement *)arg1 ;
-(void)drawCandidate:(id)arg1 inFrame:(CGRect)arg2 index:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4 ;
-(id)UICandidateAtPosition:(CGPoint)arg1 ;
-(CGPoint)pointInViewFromMouseLocation:(CGPoint)arg1 ;
-(void)checkCandidateSelectionForPoint:(CGPoint)arg1 ;
-(void)setCurrentTouchInteractionInsideView:(char)arg1 ;
-(char)pointIsInsideView:(CGPoint)arg1 ;
-(char)currentTouchInteractionInsideView;
-(id)accessibilityElementForUICandidate:(id)arg1 ;
-(void)setUICandidates:(NSArray *)arg1 ;
-(id<IMKUIScrubberViewDelegate>)delegate;
-(void)setDelegate:(id<IMKUIScrubberViewDelegate>)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(NSMutableArray *)accessibilityChildren;
-(id)accessibilityLabel;
-(id)accessibilityVisibleChildren;
-(id)accessibilitySelectedChildren;
-(void)setAccessibilitySelectedChildren:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityTitle;
-(char)isAccessibilityEnabled;
-(void)setAccessibilityChildren:(NSMutableArray *)arg1 ;
-(id)accessibilityRows;
-(double)minimumWidth;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)touchesBeganWithEvent:(id)arg1 ;
-(void)touchesMovedWithEvent:(id)arg1 ;
-(void)touchesEndedWithEvent:(id)arg1 ;
-(void)setMinimumWidth:(double)arg1 ;
-(void)setSelectedCandidate:(IMKCandidate *)arg1 ;
-(double)fontSize;
-(void)setFontSize:(double)arg1 ;
-(IMKCandidate *)selectedCandidate;
-(double)horizontalPosition;
-(void)setHorizontalPosition:(double)arg1 ;
-(CGRect)drawingFrame;
-(void)setDrawingFrame:(CGRect)arg1 ;
-(void)setShowsChevron:(char)arg1 ;
-(char)showsChevron;
@end
