/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKBatchChangeInfo.h>

@class NSDate;

@interface EKEventSliceInfo : EKBatchChangeInfo {

	long long _sliceType;
	NSDate* _sliceDate;
	NSDate* _currentDate;

}

@property (assign) long long sliceType;               //@synthesize sliceType=_sliceType - In the implementation block
@property (retain) NSDate * sliceDate;                //@synthesize sliceDate=_sliceDate - In the implementation block
@property (retain) NSDate * currentDate;              //@synthesize currentDate=_currentDate - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSDate *)currentDate;
-(NSDate *)sliceDate;
-(char)affectsObject:(id)arg1 ;
-(id)updatedIdentifier:(id)arg1 ;
-(void)setSliceDate:(NSDate *)arg1 ;
-(long long)sliceType;
-(void)setSliceType:(long long)arg1 ;
-(void)setCurrentDate:(NSDate *)arg1 ;
@end
