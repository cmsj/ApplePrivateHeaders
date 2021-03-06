/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSStackView, NSMutableArray, NSMapTable, NSArray;

@interface NSStackViewContainer : NSView {

	NSStackView* _stackView;
	NSMutableArray* _views;
	NSMutableArray* _detachedViews;
	NSMapTable* _customSpaceMapping;
	NSMapTable* _visibilityPriorityMapping;

}

@property (__weak) NSStackView * stackView;                     //@synthesize stackView=_stackView - In the implementation block
@property (copy) NSArray * views; 
@property (copy,readonly) NSArray * detachedViews; 
@property (copy,readonly) NSArray * attachedViews; 
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)insertView:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeView:(id)arg1 ;
-(NSArray *)views;
-(void)setCustomSpacing:(double)arg1 afterView:(id)arg2 ;
-(void)replaceSubview:(id)arg1 with:(id)arg2 ;
-(char)shouldBeArchived;
-(void)setViews:(NSArray *)arg1 ;
-(NSStackView *)stackView;
-(void)setStackView:(NSStackView *)arg1 ;
-(void)setVisibilityPriority:(float)arg1 forView:(id)arg2 ;
-(double)customSpacingAfterView:(id)arg1 ;
-(id)_valueOfCustomSpacingAfterView:(id)arg1 ;
-(char)containsView:(id)arg1 ;
-(id)initWithStackView:(id)arg1 ;
-(NSArray *)detachedViews;
-(void)replaceView:(id)arg1 with:(id)arg2 ;
-(id)_valueOfVisibilityPriorityForView:(id)arg1 ;
-(void)_setValueOfCustomSpacing:(id)arg1 afterView:(id)arg2 ;
-(void)_setValueOfVisibilityPriority:(id)arg1 forView:(id)arg2 ;
-(NSArray *)attachedViews;
-(float)visibilityPriorityForView:(id)arg1 ;
-(void)detachViews:(id)arg1 ;
-(void)reattachViews:(id)arg1 ;
-(id)customSpaceMapping;
-(id)visibilityPriorityMapping;
@end

