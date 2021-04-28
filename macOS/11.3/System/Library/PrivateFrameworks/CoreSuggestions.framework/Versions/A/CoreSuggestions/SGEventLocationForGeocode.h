/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/Versions/A/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SGEventLocationForGeocode <NSObject>
@required
-(id)geocodeLabel;
-(id)geocodeAddress;
-(id)geocodeAirportCode;
-(char)geocodeIsStart;
-(char)geocodeIsEnd;
-(double)geocodeLatitude;
-(double)geocodeLongitude;
-(double)geocodeAccuracy;
-(id)geocodeHandle;
-(id)geocodedLocationWithLabel:(id)arg1 address:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 accuracy:(double)arg5 handle:(id)arg6;
-(id)geocodedLocationWithLatitude:(double)arg1 longitude:(double)arg2 accuracy:(double)arg3 handle:(id)arg4;

@end
