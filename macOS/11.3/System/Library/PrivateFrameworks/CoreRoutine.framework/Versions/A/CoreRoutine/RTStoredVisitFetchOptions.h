/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/Versions/A/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSDateInterval;

@interface RTStoredVisitFetchOptions : NSObject <NSSecureCoding> {

	char _ascending;
	char _labelVisit;
	NSNumber* _confidence;
	NSDateInterval* _dateInterval;
	NSNumber* _limit;

}

@property (nonatomic,readonly) char ascending;                         //@synthesize ascending=_ascending - In the implementation block
@property (nonatomic,readonly) NSNumber * confidence;                  //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,copy) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) char labelVisit;                        //@synthesize labelVisit=_labelVisit - In the implementation block
@property (nonatomic,readonly) NSNumber * limit;                       //@synthesize limit=_limit - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)limit;
-(NSNumber *)confidence;
-(char)ascending;
-(NSDateInterval *)dateInterval;
-(id)initWithAscending:(char)arg1 confidence:(id)arg2 dateInterval:(id)arg3 labelVisit:(char)arg4 limit:(id)arg5 ;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(char)labelVisit;
-(char)isEqualToFetchOptions:(id)arg1 ;
-(id)initWithAscending:(char)arg1 confidence:(id)arg2 dateInterval:(id)arg3 limit:(id)arg4 ;
@end

