/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilitiesCore.framework/Versions/A/FlightUtilitiesCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class FUAirline;

@interface FUFlightCodeShare : NSObject <NSSecureCoding> {

	FUAirline* _airline;
	unsigned long long _flightNumber;

}

@property (retain) FUAirline * airline;                          //@synthesize airline=_airline - In the implementation block
@property (assign) unsigned long long flightNumber;              //@synthesize flightNumber=_flightNumber - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(FUAirline *)airline;
-(unsigned long long)flightNumber;
-(void)setAirline:(FUAirline *)arg1 ;
-(void)setFlightNumber:(unsigned long long)arg1 ;
@end

