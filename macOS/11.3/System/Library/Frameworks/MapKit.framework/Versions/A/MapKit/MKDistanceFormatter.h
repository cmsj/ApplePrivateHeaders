/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSLocale;

@interface MKDistanceFormatter : NSFormatter {

	NSLocale* _locale;
	unsigned long long _units;
	unsigned long long _unitStyle;

}

@property (copy) NSLocale * locale;                           //@synthesize locale=_locale - In the implementation block
@property (assign) unsigned long long units;                  //@synthesize units=_units - In the implementation block
@property (assign) unsigned long long unitStyle;              //@synthesize unitStyle=_unitStyle - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(char)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
-(void)setUnitStyle:(unsigned long long)arg1 ;
-(unsigned long long)unitStyle;
-(char)isPartialStringValid:(id*)arg1 proposedSelectedRange:(NSRange*)arg2 originalString:(id)arg3 originalSelectedRange:(NSRange)arg4 errorDescription:(id*)arg5 ;
-(unsigned long long)units;
-(void)setUnits:(unsigned long long)arg1 ;
-(char)_useMetric;
-(id)stringFromDistance:(double)arg1 ;
-(double)distanceFromString:(id)arg1 ;
@end

