/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/Versions/A/CoreSuggestionsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUI/CalUIDayViewGadgetDefaultAppearance.h>

@class EKEvent;

@interface SGUISuggestedEventDayViewAppearanceDelegate : CalUIDayViewGadgetDefaultAppearance {

	EKEvent* _displayedEvent;

}

@property (nonatomic,retain) EKEvent * displayedEvent;              //@synthesize displayedEvent=_displayedEvent - In the implementation block
-(long long)backgroundStyle;
-(long long)displayType;
-(double)hourHeight;
-(id)displayEnd;
-(id)displayStart;
-(char)shouldDisplayCurrentTime;
-(char)shouldDisplayPreviewEventsAsTentative;
-(char)shouldAllDayEventsShowColorBar;
-(EKEvent *)displayedEvent;
-(void)setDisplayedEvent:(EKEvent *)arg1 ;
@end
