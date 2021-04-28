/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarDraw.framework/Versions/A/CalendarDraw
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDraw/CalendarDraw-Structs.h>
#import <CalendarDraw/CalDrawOccurrence.h>

@class NSIndexSet, NSArray;

@interface CalDrawDayOccurrence : CalDrawOccurrence {

	double _hourHeight;
	NSIndexSet* _eventTimeMetrics;
	NSIndexSet* _titleMetrics;
	NSIndexSet* _locationMetrics;
	CGPoint _eventTimeEndPoint;
	CGPoint _titleEndPoint;
	double _textEndY;
	CGRect _eventTimeRect;
	CGRect _titleRect;
	double _titleLeftInset;
	CGRect _locationRect;
	char _drawBackgroundOnly;
	NSArray* _icons;
	char _capLeftSide;
	char _capRightSide;

}

@property (assign) double hourHeight;                          //@synthesize hourHeight=_hourHeight - In the implementation block
@property (retain) NSIndexSet * eventTimeMetrics;              //@synthesize eventTimeMetrics=_eventTimeMetrics - In the implementation block
@property (retain) NSIndexSet * titleMetrics;                  //@synthesize titleMetrics=_titleMetrics - In the implementation block
@property (retain) NSIndexSet * locationMetrics;               //@synthesize locationMetrics=_locationMetrics - In the implementation block
@property (assign) CGPoint eventTimeEndPoint;                  //@synthesize eventTimeEndPoint=_eventTimeEndPoint - In the implementation block
@property (assign) CGPoint titleEndPoint;                      //@synthesize titleEndPoint=_titleEndPoint - In the implementation block
@property (assign) double textEndY;                            //@synthesize textEndY=_textEndY - In the implementation block
@property (assign) CGRect eventTimeRect;                       //@synthesize eventTimeRect=_eventTimeRect - In the implementation block
@property (assign) CGRect titleRect;                           //@synthesize titleRect=_titleRect - In the implementation block
@property (assign) double titleLeftInset;                      //@synthesize titleLeftInset=_titleLeftInset - In the implementation block
@property (assign) CGRect locationRect;                        //@synthesize locationRect=_locationRect - In the implementation block
@property (assign) char drawBackgroundOnly;                    //@synthesize drawBackgroundOnly=_drawBackgroundOnly - In the implementation block
@property (copy) NSArray * icons;                              //@synthesize icons=_icons - In the implementation block
@property (assign) char capLeftSide;                           //@synthesize capLeftSide=_capLeftSide - In the implementation block
@property (assign) char capRightSide;                          //@synthesize capRightSide=_capRightSide - In the implementation block
-(id)init;
-(NSArray *)icons;
-(CGRect)titleRect;
-(char)hasIcon;
-(void)setIcons:(NSArray *)arg1 ;
-(double)hourHeight;
-(CGColorRef)createCurrentTextColor;
-(id)initWithWritingDirection:(long long)arg1 ;
-(void)setHourHeight:(double)arg1 ;
-(void)setEventTimeMetrics:(NSIndexSet *)arg1 ;
-(void)setTitleMetrics:(NSIndexSet *)arg1 ;
-(void)setLocationMetrics:(NSIndexSet *)arg1 ;
-(void)setEventTimeEndPoint:(CGPoint)arg1 ;
-(void)setTitleEndPoint:(CGPoint)arg1 ;
-(void)setTextEndY:(double)arg1 ;
-(void)setEventTimeRect:(CGRect)arg1 ;
-(void)setTitleRect:(CGRect)arg1 ;
-(void)setLocationRect:(CGRect)arg1 ;
-(void)setDrawBackgroundOnly:(char)arg1 ;
-(void)setCapLeftSide:(char)arg1 ;
-(void)setCapRightSide:(char)arg1 ;
-(void)invalidateMetrics;
-(char)capLeftSide;
-(char)capRightSide;
-(char)drawBackgroundOnly;
-(id)eventTimeMetricsInTextRect:(CGRect)arg1 withFont:(CTFontRef)arg2 ;
-(id)titleMetricsInTextRect:(CGRect)arg1 withFont:(CTFontRef)arg2 ;
-(id)locationMetricsInTextRect:(CGRect)arg1 withFont:(CTFontRef)arg2 ;
-(CGRect)eventTimeRect;
-(CGRect)locationRect;
-(CGPoint)titleEndPoint;
-(double)iconWidth;
-(void)drawRect;
-(double)borderSize;
-(NSIndexSet *)eventTimeMetrics;
-(NSIndexSet *)titleMetrics;
-(NSIndexSet *)locationMetrics;
-(CGPoint)eventTimeEndPoint;
-(double)textEndY;
-(double)titleLeftInset;
-(void)setTitleLeftInset:(double)arg1 ;
@end
