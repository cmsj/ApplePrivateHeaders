/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSString;

@interface BWStats : NSObject {

	double _multiplier;
	NSString* _unitDesignator;
	long long _numberOfSamples;
	double _min;
	double _max;
	double _sumX;
	double _sumXX;

}

@property (assign,nonatomic) double multiplier;                        //@synthesize multiplier=_multiplier - In the implementation block
@property (nonatomic,copy) NSString * unitDesignator;                  //@synthesize unitDesignator=_unitDesignator - In the implementation block
@property (nonatomic,readonly) long long numberOfSamples;              //@synthesize numberOfSamples=_numberOfSamples - In the implementation block
@property (nonatomic,readonly) double min;                             //@synthesize min=_min - In the implementation block
@property (nonatomic,readonly) double max;                             //@synthesize max=_max - In the implementation block
@property (nonatomic,readonly) double average; 
@property (nonatomic,readonly) double standardDeviation; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)init;
-(double)multiplier;
-(void)setMultiplier:(double)arg1 ;
-(double)max;
-(double)min;
-(double)standardDeviation;
-(double)average;
-(long long)numberOfSamples;
-(void)addDataPoint:(double)arg1 ;
-(NSString *)unitDesignator;
-(void)setUnitDesignator:(NSString *)arg1 ;
-(id)initWithStats:(id)arg1 ;
-(void)removeDataPoint:(double)arg1 ;
@end

