/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface PDScheduledActivityCriteria : NSObject <NSSecureCoding, NSCopying> {

	NSString* _priorityKey;
	long long _gracePeriod;
	char _requireMainsPower;
	char _requireScreenSleep;
	char _requireNetworkConnectivity;
	char _repeating;
	NSDate* _startDate;
	NSDate* _endDate;
	double _repeatInterval;
	NSString* _reason;

}

@property (nonatomic,retain) NSDate * startDate;                             //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                               //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) char requireMainsPower;                         //@synthesize requireMainsPower=_requireMainsPower - In the implementation block
@property (assign,nonatomic) char requireScreenSleep;                        //@synthesize requireScreenSleep=_requireScreenSleep - In the implementation block
@property (assign,nonatomic) char requireNetworkConnectivity;                //@synthesize requireNetworkConnectivity=_requireNetworkConnectivity - In the implementation block
@property (assign,getter=isRepeating,nonatomic) char repeating;              //@synthesize repeating=_repeating - In the implementation block
@property (assign,nonatomic) double repeatInterval;                          //@synthesize repeatInterval=_repeatInterval - In the implementation block
@property (nonatomic,copy) NSString * reason;                                //@synthesize reason=_reason - In the implementation block
+(char)supportsSecureCoding;
+(id)priorityActivityCriteriaWithStartDate:(id)arg1 ;
+(id)maintenanceActivityCriteriaWithStartDate:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reason;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(void)setReason:(NSString *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(double)repeatInterval;
-(void)setRepeating:(char)arg1 ;
-(void)setRepeatInterval:(double)arg1 ;
-(char)requireNetworkConnectivity;
-(id)initWithPriorityKey:(id)arg1 gracePeriod:(long long)arg2 startDate:(id)arg3 ;
-(char)isEqualToScheduledAcivityCriteria:(id)arg1 ;
-(id)xpcActivityCriteria;
-(char)requireMainsPower;
-(void)setRequireMainsPower:(char)arg1 ;
-(char)requireScreenSleep;
-(void)setRequireScreenSleep:(char)arg1 ;
-(void)setRequireNetworkConnectivity:(char)arg1 ;
-(char)isRepeating;
@end

