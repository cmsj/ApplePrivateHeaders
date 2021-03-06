/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/Versions/A/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUIKit/CalendarUIKit-Structs.h>
#import <IconServices/ISIcon.h>

@protocol CUIKIconGenerator;
@class NSDateComponents, NSCalendar;

@interface CUIKIcon : ISIcon {

	NSDateComponents* _dateComponents;
	NSCalendar* _calendar;
	long long _format;
	id<CUIKIconGenerator> _iconGenerator;

}

@property (nonatomic,copy,readonly) NSDateComponents * dateComponents;              //@synthesize dateComponents=_dateComponents - In the implementation block
@property (nonatomic,copy,readonly) NSCalendar * calendar;                          //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) long long format;                                    //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) id<CUIKIconGenerator> iconGenerator;                 //@synthesize iconGenerator=_iconGenerator - In the implementation block
-(NSCalendar *)calendar;
-(long long)format;
-(void)prepareImagesForImageDescriptors:(id)arg1 ;
-(CGImageRef)CGImageForImageDescriptor:(id)arg1 ;
-(NSDateComponents *)dateComponents;
-(id)imageForImageDescriptor:(id)arg1 ;
-(id)initWithDate:(id)arg1 calendar:(id)arg2 format:(long long)arg3 ;
-(id)initWithDateComponents:(id)arg1 calendar:(id)arg2 format:(long long)arg3 ;
-(id<CUIKIconGenerator>)iconGenerator;
-(void)getImageForImageDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getCGImageForImageDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

