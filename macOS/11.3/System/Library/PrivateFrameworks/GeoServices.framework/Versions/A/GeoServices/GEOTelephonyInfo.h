/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOTelephonyInfo : NSObject
+(id)sharedInfo;
+(char)hasCellularCapability;
-(id)init;
-(id)cellularCarrierIfAvailable;
-(id)isDeviceAuthorizedForCellularIfAvailable;
-(void)isMapsAuthorizedForCellular:(id)arg1 result:(/*^block*/id)arg2 ;
-(id)isMapsAuthorizedForCellularIfAvailable;
-(void)_updateMapsAuthed;
-(int)cellularDataStateIfAvailable;
@end

