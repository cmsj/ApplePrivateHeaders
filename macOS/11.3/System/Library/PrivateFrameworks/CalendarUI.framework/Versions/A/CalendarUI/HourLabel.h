/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <AppKit/NSTextField.h>

@class NSDate;

@interface HourLabel : NSTextField {

	NSDate* _time;

}

@property (retain) NSDate * time;              //@synthesize time=_time - In the implementation block
-(NSDate *)time;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTime:(NSDate *)arg1 ;
@end

