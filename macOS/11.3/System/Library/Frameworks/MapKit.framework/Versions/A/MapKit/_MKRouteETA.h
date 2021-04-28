/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _MKRouteETA : NSObject {

	int _status;
	double _distance;
	unsigned long long _transportType;
	double _travelTime;
	double _responseTime;

}

@property (assign,nonatomic) int status;                                    //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) double distance;                               //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) double travelTime;                             //@synthesize travelTime=_travelTime - In the implementation block
@property (assign,nonatomic) unsigned long long transportType;              //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) double responseTime;                         //@synthesize responseTime=_responseTime - In the implementation block
+(id)routeETAWithDistance:(double)arg1 travelTime:(double)arg2 transportType:(unsigned long long)arg3 status:(int)arg4 ;
+(id)routeETAWithDistance:(double)arg1 travelTime:(double)arg2 transportType:(unsigned long long)arg3 ;
-(int)status;
-(unsigned long long)transportType;
-(void)setStatus:(int)arg1 ;
-(void)setTransportType:(unsigned long long)arg1 ;
-(double)distance;
-(void)setTravelTime:(double)arg1 ;
-(double)travelTime;
-(double)responseTime;
-(void)setDistance:(double)arg1 ;
@end
