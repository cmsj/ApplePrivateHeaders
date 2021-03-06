/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUI/EKUICompositeGadget.h>

@class EKUITitleGadget, EKUICalendarGadget, EKUIHeaderImageView, EKUISubtitleGadget, NSArray, NSLayoutConstraint;

@interface EKUITitleCalendarCompositeGadget : EKUICompositeGadget {

	EKUITitleGadget* _titleGadget;
	EKUICalendarGadget* _calendarGadget;
	EKUIHeaderImageView* _headerImageView;
	EKUISubtitleGadget* _subtitleGadget;
	NSArray* _titleCalendarHorizontalConstraints;
	NSArray* _titleWithoutCalendarHorizontalConstraints;
	NSLayoutConstraint* _calendarGadgetCollapsedWidthConstraint;
	NSLayoutConstraint* _calendarGadgetMaxWidthConstraint;
	NSLayoutConstraint* _calendarGadgetPreferredWidthConstraint;

}

@property (retain) EKUITitleGadget * titleGadget;                                            //@synthesize titleGadget=_titleGadget - In the implementation block
@property (retain) EKUICalendarGadget * calendarGadget;                                      //@synthesize calendarGadget=_calendarGadget - In the implementation block
@property (retain) EKUIHeaderImageView * headerImageView;                                    //@synthesize headerImageView=_headerImageView - In the implementation block
@property (retain) EKUISubtitleGadget * subtitleGadget;                                      //@synthesize subtitleGadget=_subtitleGadget - In the implementation block
@property (retain) NSArray * titleCalendarHorizontalConstraints;                             //@synthesize titleCalendarHorizontalConstraints=_titleCalendarHorizontalConstraints - In the implementation block
@property (retain) NSArray * titleWithoutCalendarHorizontalConstraints;                      //@synthesize titleWithoutCalendarHorizontalConstraints=_titleWithoutCalendarHorizontalConstraints - In the implementation block
@property (retain) NSLayoutConstraint * calendarGadgetCollapsedWidthConstraint;              //@synthesize calendarGadgetCollapsedWidthConstraint=_calendarGadgetCollapsedWidthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * calendarGadgetMaxWidthConstraint;                    //@synthesize calendarGadgetMaxWidthConstraint=_calendarGadgetMaxWidthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * calendarGadgetPreferredWidthConstraint;              //@synthesize calendarGadgetPreferredWidthConstraint=_calendarGadgetPreferredWidthConstraint - In the implementation block
-(void)updateConstraints;
-(char)performDragOperation:(id)arg1 ;
-(id)initWithViewController:(id)arg1 ;
-(char)updateWithDiff:(id)arg1 ;
-(char)shouldBeFullWidth;
-(id)claimedPboardTypes;
-(EKUITitleGadget *)titleGadget;
-(void)selectTitleWithTrailingCursor:(char)arg1 ;
-(void)setTitleGadget:(EKUITitleGadget *)arg1 ;
-(char)adjustConstraintsInResponseToLayout;
-(id)subgadgets;
-(EKUICalendarGadget *)calendarGadget;
-(EKUISubtitleGadget *)subtitleGadget;
-(void)setCalendarGadgetCollapsedWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setCalendarGadgetMaxWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)calendarGadgetMaxWidthConstraint;
-(void)setCalendarGadgetPreferredWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)calendarGadgetPreferredWidthConstraint;
-(void)setTitleCalendarHorizontalConstraints:(NSArray *)arg1 ;
-(void)setTitleWithoutCalendarHorizontalConstraints:(NSArray *)arg1 ;
-(NSLayoutConstraint *)calendarGadgetCollapsedWidthConstraint;
-(NSArray *)titleWithoutCalendarHorizontalConstraints;
-(NSArray *)titleCalendarHorizontalConstraints;
-(EKUIHeaderImageView *)headerImageView;
-(void)setCalendarGadget:(EKUICalendarGadget *)arg1 ;
-(void)setHeaderImageView:(EKUIHeaderImageView *)arg1 ;
-(void)setSubtitleGadget:(EKUISubtitleGadget *)arg1 ;
@end

