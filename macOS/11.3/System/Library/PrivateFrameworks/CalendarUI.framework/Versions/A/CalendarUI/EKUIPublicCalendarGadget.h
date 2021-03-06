/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUI/EKUISingleViewGadget.h>

@class NSButton, NSView;

@interface EKUIPublicCalendarGadget : EKUISingleViewGadget {

	NSButton* _publicCalendarCheckbox;
	NSView* _publicLinkDescriptionContainer;

}

@property (retain) NSButton * publicCalendarCheckbox;                    //@synthesize publicCalendarCheckbox=_publicCalendarCheckbox - In the implementation block
@property (retain) NSView * publicLinkDescriptionContainer;              //@synthesize publicLinkDescriptionContainer=_publicLinkDescriptionContainer - In the implementation block
-(id)control;
-(id)initWithViewController:(id)arg1 ;
-(char)shouldDisplay;
-(void)updateWithChanges:(id)arg1 ;
-(void)publicURLBoxClicked:(id)arg1 ;
-(NSView *)publicLinkDescriptionContainer;
-(NSButton *)publicCalendarCheckbox;
-(void)setPublicCalendarCheckbox:(NSButton *)arg1 ;
-(void)setPublicLinkDescriptionContainer:(NSView *)arg1 ;
@end

