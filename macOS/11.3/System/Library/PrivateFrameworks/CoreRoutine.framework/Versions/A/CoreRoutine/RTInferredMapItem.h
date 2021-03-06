/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/Versions/A/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/RTCoreDataReadable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class RTMapItem, NSString;

@interface RTInferredMapItem : NSObject <RTCoreDataReadable, NSCopying, NSSecureCoding> {

	RTMapItem* _mapItem;
	double _confidence;
	unsigned long long _source;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) RTMapItem * mapItem;                    //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) double confidence;                      //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) unsigned long long source;              //@synthesize source=_source - In the implementation block
+(id)createWithManagedObject:(id)arg1 ;
+(id)createWithLearnedVisitMO:(id)arg1 ;
+(char)supportsSecureCoding;
+(id)heaviestMapItemFrom:(id)arg1 closestToLocation:(id)arg2 distanceCalculator:(id)arg3 error:(id*)arg4 ;
+(char)hasKnownTypeItem:(id)arg1 ;
+(double)consolidatedConfidenceFromConfidences:(id)arg1 ;
+(unsigned long long)consolidatedSourceFromInferredMapItems:(id)arg1 ;
+(id)dedupeInferredMapItems:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)source;
-(double)confidence;
-(RTMapItem *)mapItem;
-(id)initWithMapItem:(id)arg1 confidence:(double)arg2 source:(unsigned long long)arg3 ;
@end

