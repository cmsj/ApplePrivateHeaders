/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSString, NSURL;


@protocol EKProtocolMutableAlarm <EKProtocolAlarm,EKProtocolMutableObject>
@property (nonatomic,copy) NSDate * absoluteDate; 
@property (assign,nonatomic) double relativeOffset; 
@property (nonatomic,copy) NSDate * acknowledgedDate; 
@property (nonatomic,copy) NSString * actionString; 
@property (nonatomic,copy) NSString * emailAddress; 
@property (nonatomic,copy) NSString * soundName; 
@property (nonatomic,copy) NSURL * url; 
@property (nonatomic,copy) NSString * proximityString; 
@property (assign,nonatomic) char notRelativeToTravelTime; 
@property (assign,nonatomic) char isTimeToLeaveAlarm; 
@property (nonatomic,copy) id<EKProtocolMutableStructuredLocation> structuredLocation; 
@required
-(NSURL *)url;
-(void)setUrl:(id)arg1;
-(NSString *)soundName;
-(void)setSoundName:(id)arg1;
-(void)setEmailAddress:(id)arg1;
-(NSString *)emailAddress;
-(id<EKProtocolMutableStructuredLocation>)structuredLocation;
-(void)setStructuredLocation:(id)arg1;
-(NSDate *)absoluteDate;
-(NSString *)actionString;
-(double)relativeOffset;
-(void)setRelativeOffset:(double)arg1;
-(void)setAbsoluteDate:(id)arg1;
-(char)isTimeToLeaveAlarm;
-(void)setIsTimeToLeaveAlarm:(char)arg1;
-(NSString *)proximityString;
-(NSDate *)acknowledgedDate;
-(char)notRelativeToTravelTime;
-(void)setNotRelativeToTravelTime:(char)arg1;
-(void)setActionString:(id)arg1;
-(void)setProximityString:(id)arg1;
-(void)setAcknowledgedDate:(id)arg1;

@end

