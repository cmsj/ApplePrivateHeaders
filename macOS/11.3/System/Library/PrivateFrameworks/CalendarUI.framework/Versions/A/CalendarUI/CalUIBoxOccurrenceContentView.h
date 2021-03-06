/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <CalendarUI/CalUILayerBackedView.h>
#import <libobjc.A.dylib/CUIKSingleDayTimelineViewItem.h>

@protocol CalUIBoxOccurrenceContentDelegate;
@class NSDate, EKEvent, CalDrawOccurrenceColor, CalDrawOccurrenceColorImage, CalUIBoxOccurrenceTextField, CalUIBoxOccurrenceTravelTimeView, CalUILayerBackedView, CalUIRowView, NSImageView, NSMutableArray, NSDictionary, NSMutableDictionary, NSLayoutConstraint, NSString;

@interface CalUIBoxOccurrenceContentView : CalUILayerBackedView <CUIKSingleDayTimelineViewItem> {

	char _visibleHeightLocked;
	char _showsAccountIcon;
	char _showsStatusIcons;
	char _showsLocation;
	char _showsAttachmentIcon;
	char _showsAttendeesIcon;
	char _showsBirthdayIcon;
	char _showsTravelTime;
	char _hideTimeDueToOccurrenceStartingOnPreviousDay;
	char _titleIsMultiLine;
	int _attendeesStatus;
	int _titleLayoutState;
	int _locationLayoutState;
	EKEvent* _event;
	id<CalUIBoxOccurrenceContentDelegate> _delegate;
	CalDrawOccurrenceColor* _color;
	CalDrawOccurrenceColorImage* _backgroundImage;
	CalUIBoxOccurrenceTextField* _timeField;
	CalUIBoxOccurrenceTextField* _startTimeField;
	CalUIBoxOccurrenceTextField* _endTimeField;
	CalUIBoxOccurrenceTextField* _titleField;
	CalUIBoxOccurrenceTextField* _locationField;
	CalUIBoxOccurrenceTravelTimeView* _travelTimeView;
	CalUILayerBackedView* _accountView;
	CalUIRowView* _statusView;
	NSImageView* _attachmentView;
	NSImageView* _attendeeView;
	NSMutableArray* _statusSizeConstraints;
	CalUILayerBackedView* _topAlignmentView;
	double _currentFontSize;
	NSDictionary* _views;
	NSDictionary* _metrics;
	NSMutableDictionary* _cachedConstraints;
	NSLayoutConstraint* _constraintForCenteringTitle;
	NSLayoutConstraint* _constraintForCenteringAccount;
	NSLayoutConstraint* _constraintForTravelTimePosition;
	NSLayoutConstraint* _constraintForAccountVerticalOffsetFromTime;
	NSLayoutConstraint* _constraintForAccountVerticalOffsetFromTitle;
	NSLayoutConstraint* _constraintForAccountVerticalOffsetFromTop;
	NSLayoutConstraint* _constraintForPinningTopAlignmentViewToTop;
	NSLayoutConstraint* _constraintForPinningTopAlignmentViewToTravel;
	NSLayoutConstraint* _constraintForPushingDownTopAlignmentView;
	NSLayoutConstraint* _constraintForTitleInset;
	NSLayoutConstraint* _constraintForAccountInset;
	NSLayoutConstraint* _constraintForStatusInset;
	NSLayoutConstraint* _constraintForMinTitleHeight;
	NSLayoutConstraint* _constraintForMaxTitleHeight;
	NSLayoutConstraint* _constraintForMaxLocationHeight;
	NSMutableArray* _titleFieldConstraints;
	NSMutableArray* _locationFieldConstraints;
	NSMutableArray* _statusViewConstraintsInvolvingTitleField;
	NSMutableArray* _accountViewConstraintsInvolvingTitleField;
	double _visibleHeight;
	double _travelTimeHeight;
	CGSize _singleLineTitleSize;

}

@property (__weak) id<CalUIBoxOccurrenceContentDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) EKEvent * event;                                                      //@synthesize event=_event - In the implementation block
@property (retain) CalDrawOccurrenceColor * color;                                                 //@synthesize color=_color - In the implementation block
@property (retain) CalDrawOccurrenceColorImage * backgroundImage;                                  //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (retain) CalUIBoxOccurrenceTextField * timeField;                                        //@synthesize timeField=_timeField - In the implementation block
@property (retain) CalUIBoxOccurrenceTextField * startTimeField;                                   //@synthesize startTimeField=_startTimeField - In the implementation block
@property (retain) CalUIBoxOccurrenceTextField * endTimeField;                                     //@synthesize endTimeField=_endTimeField - In the implementation block
@property (retain) CalUIBoxOccurrenceTextField * titleField;                                       //@synthesize titleField=_titleField - In the implementation block
@property (retain) CalUIBoxOccurrenceTextField * locationField;                                    //@synthesize locationField=_locationField - In the implementation block
@property (retain) CalUIBoxOccurrenceTravelTimeView * travelTimeView;                              //@synthesize travelTimeView=_travelTimeView - In the implementation block
@property (retain) CalUILayerBackedView * accountView;                                             //@synthesize accountView=_accountView - In the implementation block
@property (retain) CalUIRowView * statusView;                                                      //@synthesize statusView=_statusView - In the implementation block
@property (retain) NSImageView * attachmentView;                                                   //@synthesize attachmentView=_attachmentView - In the implementation block
@property (retain) NSImageView * attendeeView;                                                     //@synthesize attendeeView=_attendeeView - In the implementation block
@property (retain) NSMutableArray * statusSizeConstraints;                                         //@synthesize statusSizeConstraints=_statusSizeConstraints - In the implementation block
@property (retain) CalUILayerBackedView * topAlignmentView;                                        //@synthesize topAlignmentView=_topAlignmentView - In the implementation block
@property (assign) char showsAccountIcon;                                                          //@synthesize showsAccountIcon=_showsAccountIcon - In the implementation block
@property (assign) char showsStatusIcons;                                                          //@synthesize showsStatusIcons=_showsStatusIcons - In the implementation block
@property (assign) char showsLocation;                                                             //@synthesize showsLocation=_showsLocation - In the implementation block
@property (assign) char showsAttachmentIcon;                                                       //@synthesize showsAttachmentIcon=_showsAttachmentIcon - In the implementation block
@property (assign) char showsAttendeesIcon;                                                        //@synthesize showsAttendeesIcon=_showsAttendeesIcon - In the implementation block
@property (assign) char showsBirthdayIcon;                                                         //@synthesize showsBirthdayIcon=_showsBirthdayIcon - In the implementation block
@property (assign) char showsTravelTime;                                                           //@synthesize showsTravelTime=_showsTravelTime - In the implementation block
@property (assign) int attendeesStatus;                                                            //@synthesize attendeesStatus=_attendeesStatus - In the implementation block
@property (assign) int titleLayoutState;                                                           //@synthesize titleLayoutState=_titleLayoutState - In the implementation block
@property (assign) int locationLayoutState;                                                        //@synthesize locationLayoutState=_locationLayoutState - In the implementation block
@property (assign) char hideTimeDueToOccurrenceStartingOnPreviousDay;                              //@synthesize hideTimeDueToOccurrenceStartingOnPreviousDay=_hideTimeDueToOccurrenceStartingOnPreviousDay - In the implementation block
@property (assign) CGSize singleLineTitleSize;                                                     //@synthesize singleLineTitleSize=_singleLineTitleSize - In the implementation block
@property (assign) char titleIsMultiLine;                                                          //@synthesize titleIsMultiLine=_titleIsMultiLine - In the implementation block
@property (assign) double currentFontSize;                                                         //@synthesize currentFontSize=_currentFontSize - In the implementation block
@property (retain) NSDictionary * views;                                                           //@synthesize views=_views - In the implementation block
@property (retain) NSDictionary * metrics;                                                         //@synthesize metrics=_metrics - In the implementation block
@property (retain) NSMutableDictionary * cachedConstraints;                                        //@synthesize cachedConstraints=_cachedConstraints - In the implementation block
@property (retain) NSLayoutConstraint * constraintForCenteringTitle;                               //@synthesize constraintForCenteringTitle=_constraintForCenteringTitle - In the implementation block
@property (retain) NSLayoutConstraint * constraintForCenteringAccount;                             //@synthesize constraintForCenteringAccount=_constraintForCenteringAccount - In the implementation block
@property (retain) NSLayoutConstraint * constraintForTravelTimePosition;                           //@synthesize constraintForTravelTimePosition=_constraintForTravelTimePosition - In the implementation block
@property (retain) NSLayoutConstraint * constraintForAccountVerticalOffsetFromTime;                //@synthesize constraintForAccountVerticalOffsetFromTime=_constraintForAccountVerticalOffsetFromTime - In the implementation block
@property (retain) NSLayoutConstraint * constraintForAccountVerticalOffsetFromTitle;               //@synthesize constraintForAccountVerticalOffsetFromTitle=_constraintForAccountVerticalOffsetFromTitle - In the implementation block
@property (retain) NSLayoutConstraint * constraintForAccountVerticalOffsetFromTop;                 //@synthesize constraintForAccountVerticalOffsetFromTop=_constraintForAccountVerticalOffsetFromTop - In the implementation block
@property (retain) NSLayoutConstraint * constraintForPinningTopAlignmentViewToTop;                 //@synthesize constraintForPinningTopAlignmentViewToTop=_constraintForPinningTopAlignmentViewToTop - In the implementation block
@property (retain) NSLayoutConstraint * constraintForPinningTopAlignmentViewToTravel;              //@synthesize constraintForPinningTopAlignmentViewToTravel=_constraintForPinningTopAlignmentViewToTravel - In the implementation block
@property (retain) NSLayoutConstraint * constraintForPushingDownTopAlignmentView;                  //@synthesize constraintForPushingDownTopAlignmentView=_constraintForPushingDownTopAlignmentView - In the implementation block
@property (retain) NSLayoutConstraint * constraintForTitleInset;                                   //@synthesize constraintForTitleInset=_constraintForTitleInset - In the implementation block
@property (retain) NSLayoutConstraint * constraintForAccountInset;                                 //@synthesize constraintForAccountInset=_constraintForAccountInset - In the implementation block
@property (retain) NSLayoutConstraint * constraintForStatusInset;                                  //@synthesize constraintForStatusInset=_constraintForStatusInset - In the implementation block
@property (retain) NSLayoutConstraint * constraintForMinTitleHeight;                               //@synthesize constraintForMinTitleHeight=_constraintForMinTitleHeight - In the implementation block
@property (retain) NSLayoutConstraint * constraintForMaxTitleHeight;                               //@synthesize constraintForMaxTitleHeight=_constraintForMaxTitleHeight - In the implementation block
@property (retain) NSLayoutConstraint * constraintForMaxLocationHeight;                            //@synthesize constraintForMaxLocationHeight=_constraintForMaxLocationHeight - In the implementation block
@property (retain) NSMutableArray * titleFieldConstraints;                                         //@synthesize titleFieldConstraints=_titleFieldConstraints - In the implementation block
@property (retain) NSMutableArray * locationFieldConstraints;                                      //@synthesize locationFieldConstraints=_locationFieldConstraints - In the implementation block
@property (retain) NSMutableArray * statusViewConstraintsInvolvingTitleField;                      //@synthesize statusViewConstraintsInvolvingTitleField=_statusViewConstraintsInvolvingTitleField - In the implementation block
@property (retain) NSMutableArray * accountViewConstraintsInvolvingTitleField;                     //@synthesize accountViewConstraintsInvolvingTitleField=_accountViewConstraintsInvolvingTitleField - In the implementation block
@property (assign,nonatomic) double visibleHeight;                                                 //@synthesize visibleHeight=_visibleHeight - In the implementation block
@property (assign,nonatomic) double travelTimeHeight;                                              //@synthesize travelTimeHeight=_travelTimeHeight - In the implementation block
@property (assign) char visibleHeightLocked;                                                       //@synthesize visibleHeightLocked=_visibleHeightLocked - In the implementation block
@property (nonatomic,readonly) NSDate * startWithTravelTime; 
@property (nonatomic,readonly) NSDate * start; 
@property (nonatomic,readonly) NSDate * end; 
@property (nonatomic,readonly) char hideTravelTime; 
@property (nonatomic,readonly) double enoughHeightForOneLine; 
@property (nonatomic,readonly) double viewMaxNaturalTextHeight; 
@property (assign) CGRect unPinnedViewFrame; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)barToBarHorizontalDistanceIncludingBarWidth;
+(id)aTextField;
-(NSString *)description;
-(id<CalUIBoxOccurrenceContentDelegate>)delegate;
-(void)setDelegate:(id<CalUIBoxOccurrenceContentDelegate>)arg1 ;
-(NSDate *)start;
-(void)layout;
-(EKEvent *)event;
-(id)endDate;
-(id)startDate;
-(NSDate *)end;
-(char)updateWithEvent:(id)arg1 ;
-(char)wantsUpdateLayer;
-(void)updateLayer;
-(id)accessibilityAttributeNames;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(NSDictionary *)views;
-(CalDrawOccurrenceColor *)color;
-(void)setColor:(CalDrawOccurrenceColor *)arg1 ;
-(id)titleFont;
-(void)viewDidMoveToSuperview;
-(long long)backgroundStyle;
-(id)initWithDelegate:(id)arg1 ;
-(char)isSelected;
-(CalDrawOccurrenceColorImage *)backgroundImage;
-(void)setBackgroundImage:(CalDrawOccurrenceColorImage *)arg1 ;
-(void)setViews:(NSDictionary *)arg1 ;
-(void)setEvent:(EKEvent *)arg1 ;
-(NSDictionary *)metrics;
-(void)setMetrics:(NSDictionary *)arg1 ;
-(int)attendeesStatus;
-(char)isProposal;
-(char)shouldShowTime;
-(id)locationFont;
-(char)shouldDragCompletionProposeNewTime;
-(char)shouldAlwaysShowColorBar;
-(id)timeFont;
-(id)timeZoneFont;
-(long long)myParticipantStatus;
-(void)setTitleField:(CalUIBoxOccurrenceTextField *)arg1 ;
-(CalUIBoxOccurrenceTextField *)titleField;
-(void)setCachedConstraints:(NSMutableDictionary *)arg1 ;
-(void)setSingleLineTitleSize:(CGSize)arg1 ;
-(void)setAccountView:(CalUILayerBackedView *)arg1 ;
-(CalUILayerBackedView *)accountView;
-(void)setStatusView:(CalUIRowView *)arg1 ;
-(CalUIRowView *)statusView;
-(void)setTimeField:(CalUIBoxOccurrenceTextField *)arg1 ;
-(void)setStartTimeField:(CalUIBoxOccurrenceTextField *)arg1 ;
-(void)setEndTimeField:(CalUIBoxOccurrenceTextField *)arg1 ;
-(void)setLocationField:(CalUIBoxOccurrenceTextField *)arg1 ;
-(CalUIBoxOccurrenceTextField *)timeField;
-(CalUIBoxOccurrenceTextField *)startTimeField;
-(CalUIBoxOccurrenceTextField *)endTimeField;
-(CalUIBoxOccurrenceTextField *)locationField;
-(void)setAttendeeView:(NSImageView *)arg1 ;
-(void)setAttachmentView:(NSImageView *)arg1 ;
-(NSImageView *)attendeeView;
-(NSImageView *)attachmentView;
-(void)setTravelTimeView:(CalUIBoxOccurrenceTravelTimeView *)arg1 ;
-(CalUIBoxOccurrenceTravelTimeView *)travelTimeView;
-(void)setTopAlignmentView:(CalUILayerBackedView *)arg1 ;
-(CalUILayerBackedView *)topAlignmentView;
-(void)setConstraintForCenteringTitle:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)constraintForCenteringTitle;
-(void)setConstraintForCenteringAccount:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)constraintForCenteringAccount;
-(void)setConstraintForTravelTimePosition:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)constraintForTravelTimePosition;
-(void)setConstraintForAccountVerticalOffsetFromTime:(NSLayoutConstraint *)arg1 ;
-(void)setConstraintForAccountVerticalOffsetFromTitle:(NSLayoutConstraint *)arg1 ;
-(void)setConstraintForAccountVerticalOffsetFromTop:(NSLayoutConstraint *)arg1 ;
-(void)setConstraintForPinningTopAlignmentViewToTop:(NSLayoutConstraint *)arg1 ;
-(void)setConstraintForPinningTopAlignmentViewToTravel:(NSLayoutConstraint *)arg1 ;
-(void)setConstraintForPushingDownTopAlignmentView:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)constraintForPinningTopAlignmentViewToTop;
-(NSLayoutConstraint *)constraintForPinningTopAlignmentViewToTravel;
-(NSLayoutConstraint *)constraintForPushingDownTopAlignmentView;
-(void)addConstraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 ;
-(void)setConstraintForTitleInset:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)constraintForTitleInset;
-(void)setConstraintForAccountInset:(NSLayoutConstraint *)arg1 ;
-(void)setConstraintForStatusInset:(NSLayoutConstraint *)arg1 ;
-(void)setConstraintForMinTitleHeight:(NSLayoutConstraint *)arg1 ;
-(void)setConstraintForMaxTitleHeight:(NSLayoutConstraint *)arg1 ;
-(void)setConstraintForMaxLocationHeight:(NSLayoutConstraint *)arg1 ;
-(void)setTitleLayoutState:(int)arg1 ;
-(void)setLocationLayoutState:(int)arg1 ;
-(void)setTitleFieldConstraints:(NSMutableArray *)arg1 ;
-(void)setLocationFieldConstraints:(NSMutableArray *)arg1 ;
-(void)setStatusViewConstraintsInvolvingTitleField:(NSMutableArray *)arg1 ;
-(void)setAccountViewConstraintsInvolvingTitleField:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)cachedConstraints;
-(id)constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 ;
-(char)showsAccountIcon;
-(NSLayoutConstraint *)constraintForAccountVerticalOffsetFromTitle;
-(NSLayoutConstraint *)constraintForAccountVerticalOffsetFromTime;
-(NSLayoutConstraint *)constraintForAccountVerticalOffsetFromTop;
-(char)titleIsMultiLine;
-(char)isDimmed;
-(char)wantsTentativeAppearance;
-(double)currentFontSize;
-(void)setCurrentFontSize:(double)arg1 ;
-(id)newCurrentTextColor;
-(NSLayoutConstraint *)constraintForMaxTitleHeight;
-(CGSize)singleLineTitleSize;
-(NSLayoutConstraint *)constraintForMinTitleHeight;
-(char)showsTravelTime;
-(void)updateTravelTimeColors;
-(char)showsBirthdayIcon;
-(NSMutableArray *)statusSizeConstraints;
-(void)setStatusSizeConstraints:(NSMutableArray *)arg1 ;
-(char)showsAttachmentIcon;
-(char)showsAttendeesIcon;
-(id)_attendeesIconForCurrentStatus;
-(void)updateAccountIconVerticalPositionConstraint;
-(NSMutableArray *)titleFieldConstraints;
-(NSMutableArray *)statusViewConstraintsInvolvingTitleField;
-(NSMutableArray *)accountViewConstraintsInvolvingTitleField;
-(NSMutableArray *)locationFieldConstraints;
-(NSLayoutConstraint *)constraintForMaxLocationHeight;
-(void)removeStatusConstraintsInvolvingTitle;
-(void)removeAccountConstraintsInvolvingTitle;
-(CGRect)_innerBoundsWithTravelTime:(char)arg1 ;
-(void)_updateInsetsWithInnerBounds:(CGRect)arg1 ;
-(char)showsStatusIcons;
-(char)occurrenceIsFirstVisibleDayOfEvent;
-(void)setHideTimeDueToOccurrenceStartingOnPreviousDay:(char)arg1 ;
-(char)visibleHeightLocked;
-(double)visibleHeight;
-(int)titleLayoutState;
-(void)addTitleFieldIfNeeded;
-(void)removeExistingTitleFieldConstraints;
-(void)addAccountConstraintsInvolvingTitle:(id)arg1 ;
-(void)addStatusConstraintsInvolvingTitle:(id)arg1 ;
-(void)addTitleConstraints:(id)arg1 ;
-(char)shouldShowStartEndTime;
-(NSLayoutConstraint *)constraintForAccountInset;
-(char)showsLocation;
-(void)removeExistingLocationFieldConstraints;
-(void)addLocationConstraints:(id)arg1 ;
-(void)setTitleIsMultiLine:(char)arg1 ;
-(void)rebuildString;
-(char)hideTimeDueToOccurrenceStartingOnPreviousDay;
-(int)locationLayoutState;
-(void)addOrRemoveAccountConstraints;
-(void)_updateMaskedCorners;
-(char)updateWithEvent:(id)arg1 rebuild:(char)arg2 ;
-(void)updateTravelTimeView;
-(void)setShowsAccountIcon:(char)arg1 ;
-(void)setShowsBirthdayIcon:(char)arg1 ;
-(void)setShowsAttachmentIcon:(char)arg1 ;
-(void)setAttendeesStatus:(int)arg1 ;
-(void)setShowsAttendeesIcon:(char)arg1 ;
-(NSLayoutConstraint *)constraintForStatusInset;
-(void)setShowsStatusIcons:(char)arg1 ;
-(void)setShowsLocation:(char)arg1 ;
-(char)shouldShowTravelTime;
-(void)setShowsTravelTime:(char)arg1 ;
-(char)shouldInsetForEnclosingScrollView;
-(double)travelTimeHeight;
-(char)titleOnFirstRowForFrame:(CGRect)arg1 ;
-(void)updateInsets;
-(id)tileOptions;
-(double)sideBySideGracePeriodForFrame:(CGRect)arg1 ;
-(void)setVisibleHeightLocked:(char)arg1 ;
-(id)_accessibilityLabelForBoxOccurance;
-(id)_accessibilityDateOnlyForStart:(id)arg1 end:(id)arg2 ;
-(id)_accessibilityDateAndTimeForStart:(id)arg1 end:(id)arg2 calendar:(id)arg3 ;
-(id)_accessibilityDateAndTimeFromDate:(id)arg1 ;
-(id)_accessibilityTimeForStart:(id)arg1 end:(id)arg2 calendar:(id)arg3 ;
-(id)_accessibilityTimeFromDate:(id)arg1 ;
-(id)_accessibilityLabelForAttendeesStatus:(int)arg1 ;
-(void)setStagedFrame:(CGRect)arg1 ;
-(CGRect)stagedFrame;
-(void)setVisibleHeight:(double)arg1 ;
-(void)setTravelTimeHeight:(double)arg1 ;
-(NSDate *)startWithTravelTime;
-(char)hideTravelTime;
-(double)enoughHeightForOneLine;
-(double)viewMaxNaturalTextHeight;
-(CGRect)unPinnedViewFrame;
-(void)setUnPinnedViewFrame:(CGRect)arg1 ;
-(void)removeMaxLocationHeightConstraint;
-(id)firstTextField;
-(void)resetInsets;
-(double)currentYInDayGrid;
-(double)properYInDayGrid;
@end

