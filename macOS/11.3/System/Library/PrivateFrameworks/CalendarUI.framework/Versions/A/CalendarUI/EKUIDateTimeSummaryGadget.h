/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUI/EKUISingleViewGadget.h>
#import <libobjc.A.dylib/EKUISummary.h>

@class NSView, EKUISummaryTextButton, NSTextField, NSString;

@interface EKUIDateTimeSummaryGadget : EKUISingleViewGadget <EKUISummary> {

	NSView* _container;
	EKUISummaryTextButton* _leftTextField;
	NSTextField* _rightTextField;

}

@property (retain) NSView * container;                                 //@synthesize container=_container - In the implementation block
@property (retain) EKUISummaryTextButton * leftTextField;              //@synthesize leftTextField=_leftTextField - In the implementation block
@property (retain) NSTextField * rightTextField;                       //@synthesize rightTextField=_rightTextField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interestedChangeKeys;
-(NSView *)container;
-(void)setContainer:(NSView *)arg1 ;
-(id)control;
-(id)initWithViewController:(id)arg1 ;
-(id)summaryString;
-(char)shouldDisplay;
-(id)attributedSummaryString;
-(void)setActiveKeyboardHover:(char)arg1 ;
-(void)updateWithChanges:(id)arg1 ;
-(EKUISummaryTextButton *)leftTextField;
-(NSTextField *)rightTextField;
-(void)setLeftTextField:(EKUISummaryTextButton *)arg1 ;
-(void)setRightTextField:(NSTextField *)arg1 ;
@end

