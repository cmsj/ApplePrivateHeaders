/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUI/EKUIDateTimeGadget.h>

@interface EKUIProposedTimeDateTimeGadget : EKUIDateTimeGadget {

	char _shouldSuppressMiniCal;

}

@property (assign) char shouldSuppressMiniCal;              //@synthesize shouldSuppressMiniCal=_shouldSuppressMiniCal - In the implementation block
+(id)interestedChangeKeys;
-(char)isExpanded;
-(id)control;
-(id)labelString;
-(id)initWithViewController:(id)arg1 ;
-(void)updateWithChanges:(id)arg1 ;
-(void)datePickerChangedToDate:(id)arg1 ;
-(void)setShouldSuppressMiniCal:(char)arg1 ;
-(char)shouldSuppressMiniCal;
-(void)_updateDatePickerDate;
@end

