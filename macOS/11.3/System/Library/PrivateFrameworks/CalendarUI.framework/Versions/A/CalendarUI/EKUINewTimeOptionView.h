/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUI/CalUIControlView.h>
#import <libobjc.A.dylib/NSAccessibilityButton.h>

@protocol EKUINewTimeOptionViewDelegate;
@class EKInviteeAlternativeTime, EKViewController, NSImageView, CalUILabel, NSImage, NSString;

@interface EKUINewTimeOptionView : CalUIControlView <NSAccessibilityButton> {

	char _selected;
	id<EKUINewTimeOptionViewDelegate> _delegate;
	EKInviteeAlternativeTime* _alternativeTime;
	EKViewController* _viewController;
	NSImageView* _selectionImageView;
	CalUILabel* _dayLabel;
	CalUILabel* _timeLabel;
	CalUILabel* _attendeesLabel;
	NSImage* _busyStatusIcon;

}

@property (__weak) EKViewController * viewController;                                 //@synthesize viewController=_viewController - In the implementation block
@property (retain) NSImageView * selectionImageView;                                  //@synthesize selectionImageView=_selectionImageView - In the implementation block
@property (retain) CalUILabel * dayLabel;                                             //@synthesize dayLabel=_dayLabel - In the implementation block
@property (retain) CalUILabel * timeLabel;                                            //@synthesize timeLabel=_timeLabel - In the implementation block
@property (retain) CalUILabel * attendeesLabel;                                       //@synthesize attendeesLabel=_attendeesLabel - In the implementation block
@property (retain) NSImage * busyStatusIcon;                                          //@synthesize busyStatusIcon=_busyStatusIcon - In the implementation block
@property (__weak) id<EKUINewTimeOptionViewDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) EKInviteeAlternativeTime * alternativeTime;              //@synthesize alternativeTime=_alternativeTime - In the implementation block
@property (assign,nonatomic) char selected;                                           //@synthesize selected=_selected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<EKUINewTimeOptionViewDelegate>)delegate;
-(void)setDelegate:(id<EKUINewTimeOptionViewDelegate>)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(id)accessibilityLabel;
-(char)accessibilityPerformPress;
-(void)keyDown:(id)arg1 ;
-(void)setViewController:(EKViewController *)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(EKViewController *)viewController;
-(char)selected;
-(void)setSelected:(char)arg1 ;
-(NSImage *)busyStatusIcon;
-(void)setAlternativeTime:(EKInviteeAlternativeTime *)arg1 ;
-(EKInviteeAlternativeTime *)alternativeTime;
-(CalUILabel *)dayLabel;
-(CalUILabel *)timeLabel;
-(CalUILabel *)attendeesLabel;
-(char)hasConflictedParticipants;
-(NSImageView *)selectionImageView;
-(id)initWithController:(id)arg1 delegate:(id)arg2 alternativeTime:(id)arg3 ;
-(void)setSelectionImageView:(NSImageView *)arg1 ;
-(void)setDayLabel:(CalUILabel *)arg1 ;
-(void)setTimeLabel:(CalUILabel *)arg1 ;
-(void)setAttendeesLabel:(CalUILabel *)arg1 ;
-(void)setBusyStatusIcon:(NSImage *)arg1 ;
@end

