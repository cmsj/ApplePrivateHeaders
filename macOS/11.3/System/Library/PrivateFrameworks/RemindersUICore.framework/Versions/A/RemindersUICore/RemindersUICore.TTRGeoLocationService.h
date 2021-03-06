/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemindersUICore.framework/Versions/A/RemindersUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@interface RemindersUICore.TTRGeoLocationService : NSObject <CLLocationManagerDelegate> {

	 delegate;
	 locationAccuraceUpperBound;
	 maximumLocationUpdatingTime;
	??? _addressToResolvedLocationCache;
	??? _locationToResolvedLocationCache;
	 currentlyGeocodingLocation;
	??? _lastKnownCurrentLocation;
	 pendingLocationsToResolve;
	 locationManager;
	 blockToPerformAfterRequestingInUseAuthorization;

}
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManagerDidChangeAuthorization:(id)arg1 ;
-(id)init;
@end

