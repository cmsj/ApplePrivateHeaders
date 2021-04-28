/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol GEOTransitRoutingIncidentMessage;
@class GEOAlert, NSArray, NSString;

@interface GEODirectionsError : NSObject <NSSecureCoding> {

	GEOAlert* _alert;
	GEOProblemDetail* _problemDetails;
	unsigned long long _problemDetailsCount;
	id<GEOTransitRoutingIncidentMessage> _routingIncidentMessage;
	NSArray* _internalServerErrors;

}

@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * localizedDescription; 
@property (nonatomic,readonly) NSArray * internalServerErrors;                                    //@synthesize internalServerErrors=_internalServerErrors - In the implementation block
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> incidentMessage; 
@property (nonatomic,readonly) long long firstDirectionsErrorCode; 
+(char)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(NSString *)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)localizedTitle;
-(void)_copyProblemDetails:(GEOProblemDetail*)arg1 count:(unsigned long long)arg2 ;
-(long long)_errorCodeForProblemDetail:(GEOProblemDetail)arg1 ;
-(char)_errorCode:(long long)arg1 toProblem:(out int*)arg2 ;
-(id)initWithResponse:(id)arg1 ;
-(id)initWithWaypointIndex:(unsigned long long)arg1 ;
-(id<GEOTransitRoutingIncidentMessage>)incidentMessage;
-(long long)firstDirectionsErrorCode;
-(char)hasError:(long long)arg1 ;
-(NSArray *)internalServerErrors;
@end
