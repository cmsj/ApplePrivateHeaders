/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/Versions/A/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface CMVO2MaxInputs : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long fRecordId;
	NSDate* fStartDate;
	double fMets;
	long long fMetSource;
	double fHeartRate;
	double fHeartRateConfidence;
	double fGrade;
	long long fGradeType;
	double fCadence;
	double fPace;
	char fHasGPS;
	char fHasStrideCal;
	long long fWorkoutType;

}

@property (nonatomic,readonly) unsigned long long recordId; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) double mets; 
@property (nonatomic,readonly) long long metSource; 
@property (nonatomic,readonly) double heartRate; 
@property (nonatomic,readonly) double heartRateConfidence; 
@property (nonatomic,readonly) double grade; 
@property (nonatomic,readonly) long long gradeType; 
@property (nonatomic,readonly) double cadence; 
@property (nonatomic,readonly) double pace; 
@property (nonatomic,readonly) char hasGPS; 
@property (nonatomic,readonly) char hasStrideCal; 
@property (nonatomic,readonly) long long workoutType; 
+(char)supportsSecureCoding;
+(VO2MaxInput)VO2MaxInputFromCMVO2MaxInputs:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(double)grade;
-(double)cadence;
-(unsigned long long)recordId;
-(long long)workoutType;
-(double)mets;
-(id)initWithSample:(VO2MaxInput)arg1 ;
-(double)heartRate;
-(double)heartRateConfidence;
-(long long)gradeType;
-(char)hasGPS;
-(char)hasStrideCal;
-(long long)metSource;
-(double)pace;
-(id)initWithRecordId:(unsigned long long)arg1 startDate:(id)arg2 mets:(double)arg3 metSource:(long long)arg4 heartRate:(double)arg5 heartRateConfidence:(double)arg6 grade:(double)arg7 gradeType:(long long)arg8 cadence:(double)arg9 pace:(double)arg10 hasGPS:(char)arg11 hasStrideCal:(char)arg12 workoutType:(long long)arg13 ;
@end

