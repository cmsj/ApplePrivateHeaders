/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface CalFreeBusyEventDetails : NSObject <NSSecureCoding> {

	NSString* _title;
	NSString* _uid;
	NSDate* _startTime;
	NSDate* _endTime;

}

@property (retain) NSString * title;                //@synthesize title=_title - In the implementation block
@property (retain) NSString * uid;                  //@synthesize uid=_uid - In the implementation block
@property (retain) NSDate * startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (retain) NSDate * endTime;                //@synthesize endTime=_endTime - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uid;
-(void)setUid:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSString *)title;
-(void)setEndTime:(NSDate *)arg1 ;
-(NSDate *)endTime;
@end
