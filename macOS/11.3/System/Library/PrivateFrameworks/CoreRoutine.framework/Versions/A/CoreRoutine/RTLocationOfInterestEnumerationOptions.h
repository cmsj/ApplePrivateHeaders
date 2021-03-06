/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/Versions/A/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <CoreRoutine/RTEnumerationOptions.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateInterval;

@interface RTLocationOfInterestEnumerationOptions : RTEnumerationOptions <NSCopying, NSSecureCoding> {

	char _ascending;
	char _wrappedVisit;
	unsigned long long _batchSize;
	NSDateInterval* _dateInterval;

}

@property (nonatomic,readonly) char ascending;                            //@synthesize ascending=_ascending - In the implementation block
@property (nonatomic,readonly) unsigned long long batchSize;              //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,copy) NSDateInterval * dateInterval;                 //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) char wrappedVisit;                         //@synthesize wrappedVisit=_wrappedVisit - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)ascending;
-(NSDateInterval *)dateInterval;
-(unsigned long long)batchSize;
-(Class)enumeratedType;
-(char)wrappedVisit;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(/*^block*/id)processingBlock;
-(id)initWithAscending:(char)arg1 batchSize:(unsigned long long)arg2 dateInterval:(id)arg3 wrappedVisit:(char)arg4 ;
@end

