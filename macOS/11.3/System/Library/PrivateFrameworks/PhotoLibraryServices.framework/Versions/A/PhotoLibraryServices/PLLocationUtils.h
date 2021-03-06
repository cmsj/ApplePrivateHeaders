/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLLocationUtils : NSObject
+(char)canUseCoordinate:(CLLocationCoordinate2D)arg1 ;
+(char)horizontalAccuracyIsCoarse:(double)arg1 ;
+(CLLocationCoordinate2D)defaultLocationCoordinate2D;
+(id)predicateForAssetWithLocation;
+(id)predicateForMomentWithLocation;
+(char)locationIsCoarse:(id)arg1 ;
+(PLCartesianCoordinate3D)cartesianCoordinateFromLatitude:(float)arg1 longitude:(float)arg2 ;
@end

