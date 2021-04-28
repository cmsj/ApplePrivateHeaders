/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/Versions/A/ChronoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChronoServices/ChronoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface CHSWidgetMetricsSpecification : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSDictionary* _metricsByFamily;

}

@property (nonatomic,copy,readonly) NSDictionary * metricsByFamily;              //@synthesize metricsByFamily=_metricsByFamily - In the implementation block
@property (nonatomic,readonly) unsigned long long families; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMetricsByFamily:(id)arg1 ;
-(NSDictionary *)metricsByFamily;
-(id)_initWithMetricsByFamily:(id)arg1 ;
-(id)initWithMetricsSpecification:(id)arg1 ;
-(unsigned long long)families;
-(id)metricsForFamily:(long long)arg1 ;
@end
