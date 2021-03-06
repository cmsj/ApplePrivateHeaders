/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriObservation.framework/Versions/A/SiriObservation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriObservation/SiriObservation-Structs.h>
#import <libobjc.A.dylib/SOAlarmMutating.h>

@class SOAlarm, NSUUID, NSURL, NSString;

@interface _SOAlarmMutation : NSObject <SOAlarmMutating> {

	SOAlarm* _baseModel;
	NSUUID* _alarmID;
	NSURL* _alarmURL;
	NSString* _title;
	unsigned long long _hour;
	unsigned long long _minute;
	unsigned long long _repeatSchedule;
	char _isEnabled;
	char _isFiring;
	struct {
		unsigned isDirty : 1;
		unsigned hasAlarmID : 1;
		unsigned hasAlarmURL : 1;
		unsigned hasTitle : 1;
		unsigned hasHour : 1;
		unsigned hasMinute : 1;
		unsigned hasRepeatSchedule : 1;
		unsigned hasIsEnabled : 1;
		unsigned hasIsFiring : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setHour:(unsigned long long)arg1 ;
-(void)setMinute:(unsigned long long)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)setIsEnabled:(char)arg1 ;
-(void)setIsFiring:(char)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(id)generate;
-(void)setAlarmID:(id)arg1 ;
-(void)setAlarmURL:(id)arg1 ;
-(void)setRepeatSchedule:(unsigned long long)arg1 ;
@end

