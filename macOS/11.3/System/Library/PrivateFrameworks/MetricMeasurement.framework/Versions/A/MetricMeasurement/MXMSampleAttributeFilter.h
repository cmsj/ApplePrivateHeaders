/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/Versions/A/MetricMeasurement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricMeasurement/MetricMeasurement-Structs.h>
#import <MetricMeasurement/MXMSampleAttribute.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSSet, NSString, NSNumber;

@interface MXMSampleAttributeFilter : MXMSampleAttribute <NSCopying, NSSecureCoding> {

	NSArray* _matchingStringAttributeValues;
	NSArray* _matchingNumericAttributeValues;

}

@property (nonatomic,readonly) char finite; 
@property (getter=finite,nonatomic,readonly) char isFinite; 
@property (nonatomic,copy,readonly) id value; 
@property (nonatomic,copy,readonly) NSSet * values; 
@property (nonatomic,copy,readonly) NSString * stringValue; 
@property (nonatomic,copy,readonly) NSNumber * numericValue; 
@property (nonatomic,copy,readonly) NSSet * stringValues; 
@property (nonatomic,copy,readonly) NSSet * numericValues; 
+(char)supportsSecureCoding;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(NSSet *)values;
-(id)value;
-(NSSet *)stringValues;
-(NSNumber *)numericValue;
-(id)initWithAttributeName:(id)arg1 numericValue:(id)arg2 ;
-(id)initWithAttributeName:(id)arg1 stringValue:(id)arg2 ;
-(char)finite;
-(NSSet *)numericValues;
-(id)initWithAttributeName:(id)arg1 valueType:(long long)arg2 value:(id)arg3 ;
-(id)initWithAttributeName:(id)arg1 stringValues:(id)arg2 ;
-(id)initWithAttributeName:(id)arg1 numericValues:(id)arg2 ;
-(char)_matchesSampleAttributeNameWithName:(id)arg1 ;
-(char)_matchesSampleAttributeValueTypeWithAttributeValueType:(long long)arg1 ;
-(char)_matchesSampleAttributeValueWithValue:(id)arg1 ;
-(id)initWithAttribute:(id)arg1 ;
-(char)matchesSampleWithAttribute:(id)arg1 ;
@end
