/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <AppKit/NSView.h>

@class NSMutableArray, NSLayoutConstraint;

@interface CalUIFastStackView : NSView {

	NSMutableArray* _views;
	long long _orientation;
	long long _distribution;
	double _spacing;
	NSLayoutConstraint* _firstConstraint;
	NSLayoutConstraint* _lastConstraint;
	NSEdgeInsets _edgeInsets;

}

@property (retain) NSMutableArray * views;                            //@synthesize views=_views - In the implementation block
@property (retain) NSLayoutConstraint * firstConstraint;              //@synthesize firstConstraint=_firstConstraint - In the implementation block
@property (retain) NSLayoutConstraint * lastConstraint;               //@synthesize lastConstraint=_lastConstraint - In the implementation block
@property (assign) long long orientation;                             //@synthesize orientation=_orientation - In the implementation block
@property (assign) NSEdgeInsets edgeInsets;                           //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign) long long distribution;                            //@synthesize distribution=_distribution - In the implementation block
@property (assign) double spacing;                                    //@synthesize spacing=_spacing - In the implementation block
-(id)init;
-(void)setEdgeInsets:(NSEdgeInsets)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(double)spacing;
-(void)setSpacing:(double)arg1 ;
-(void)removeView:(id)arg1 ;
-(void)setDistribution:(long long)arg1 ;
-(NSEdgeInsets)edgeInsets;
-(NSMutableArray *)views;
-(long long)orientation;
-(void)setViews:(NSMutableArray *)arg1 ;
-(long long)distribution;
-(void)removeAllSubviews;
-(void)prependView:(id)arg1 ;
-(void)appendView:(id)arg1 ;
-(void)removeFirstView;
-(void)removeLastView;
-(void)_constrainNonOrientationEdges:(id)arg1 ;
-(void)_constrainFirstView;
-(void)_constrainViewLeft:(id)arg1 right:(id)arg2 ;
-(void)_constrainLastView;
-(NSLayoutConstraint *)firstConstraint;
-(void)setFirstConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)lastConstraint;
-(void)setLastConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_activateHighPriorityConstraint:(id)arg1 ;
-(void)_activateLowPriorityConstraint:(id)arg1 ;
@end

