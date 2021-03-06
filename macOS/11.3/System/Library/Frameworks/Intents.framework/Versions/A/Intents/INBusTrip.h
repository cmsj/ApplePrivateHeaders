/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, INDateComponentsRange, CLPlacemark;

@interface INBusTrip : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	NSString* _provider;
	NSString* _busName;
	NSString* _busNumber;
	INDateComponentsRange* _tripDuration;
	CLPlacemark* _departureBusStopLocation;
	NSString* _departurePlatform;
	CLPlacemark* _arrivalBusStopLocation;
	NSString* _arrivalPlatform;

}

@property (copy,readonly) NSString * provider;                                 //@synthesize provider=_provider - In the implementation block
@property (copy,readonly) NSString * busName;                                  //@synthesize busName=_busName - In the implementation block
@property (copy,readonly) NSString * busNumber;                                //@synthesize busNumber=_busNumber - In the implementation block
@property (copy,readonly) INDateComponentsRange * tripDuration;                //@synthesize tripDuration=_tripDuration - In the implementation block
@property (copy,readonly) CLPlacemark * departureBusStopLocation;              //@synthesize departureBusStopLocation=_departureBusStopLocation - In the implementation block
@property (copy,readonly) NSString * departurePlatform;                        //@synthesize departurePlatform=_departurePlatform - In the implementation block
@property (copy,readonly) CLPlacemark * arrivalBusStopLocation;                //@synthesize arrivalBusStopLocation=_arrivalBusStopLocation - In the implementation block
@property (copy,readonly) NSString * arrivalPlatform;                          //@synthesize arrivalPlatform=_arrivalPlatform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)provider;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSString *)arrivalPlatform;
-(NSString *)departurePlatform;
-(INDateComponentsRange *)tripDuration;
-(CLPlacemark *)arrivalBusStopLocation;
-(NSString *)busName;
-(NSString *)busNumber;
-(CLPlacemark *)departureBusStopLocation;
-(id)initWithProvider:(id)arg1 busName:(id)arg2 busNumber:(id)arg3 tripDuration:(id)arg4 departureBusStopLocation:(id)arg5 departurePlatform:(id)arg6 arrivalBusStopLocation:(id)arg7 arrivalPlatform:(id)arg8 ;
@end

