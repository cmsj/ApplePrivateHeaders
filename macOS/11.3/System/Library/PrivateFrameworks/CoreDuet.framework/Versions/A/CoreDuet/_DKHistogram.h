/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSDateInterval, NSUUID, NSString, _DKEventStream, NSArray, NSDictionary;

@interface _DKHistogram : NSObject <NSSecureCoding> {

	NSMutableDictionary* _histogram;
	unsigned long long _countOverAllValues;
	NSDateInterval* _interval;
	NSUUID* _identifier;
	NSString* _customIdentifier;
	_DKEventStream* _stream;
	NSArray* _deviceIdentifiers;

}

@property (nonatomic,retain) NSUUID * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * customIdentifier;                        //@synthesize customIdentifier=_customIdentifier - In the implementation block
@property (nonatomic,retain) NSDateInterval * interval;                          //@synthesize interval=_interval - In the implementation block
@property (nonatomic,retain) NSDictionary * histogram;                           //@synthesize histogram=_histogram - In the implementation block
@property (assign,nonatomic) unsigned long long countOverAllValues;              //@synthesize countOverAllValues=_countOverAllValues - In the implementation block
@property (nonatomic,retain) _DKEventStream * stream;                            //@synthesize stream=_stream - In the implementation block
@property (nonatomic,retain) NSArray * deviceIdentifiers;                        //@synthesize deviceIdentifiers=_deviceIdentifiers - In the implementation block
+(char)supportsSecureCoding;
+(id)entityName;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(_DKEventStream *)stream;
-(NSDateInterval *)interval;
-(void)setInterval:(NSDateInterval *)arg1 ;
-(void)addValue:(id)arg1 ;
-(NSString *)customIdentifier;
-(NSDictionary *)histogram;
-(void)setCustomIdentifier:(NSString *)arg1 ;
-(id)countDictionary;
-(NSArray *)deviceIdentifiers;
-(void)_addPropertiesFrom:(id)arg1 ;
-(double)countForValueDouble:(id)arg1 ;
-(unsigned long long)countForValue:(id)arg1 ;
-(unsigned long long)countOverAllValues;
-(id)initWithHistogram:(id)arg1 ;
-(void)setDeviceIdentifiers:(NSArray *)arg1 ;
-(void)setStream:(_DKEventStream *)arg1 ;
-(id)initWithValues:(id)arg1 ;
-(double)relativeFrequencyForValue:(id)arg1 ;
-(void)addValue:(id)arg1 withCount:(double)arg2 ;
-(void)subtractValue:(id)arg1 ;
-(void)addHistogram:(id)arg1 ;
-(void)addHistogram:(id)arg1 decayingExistingCounts:(double)arg2 ;
-(void)subtractHistogram:(id)arg1 ;
-(void)setHistogram:(NSDictionary *)arg1 ;
-(void)setCountOverAllValues:(unsigned long long)arg1 ;
-(id)insertInManagedObjectContext:(id)arg1 ;
-(id)initWithManagedObject:(id)arg1 ;
@end

