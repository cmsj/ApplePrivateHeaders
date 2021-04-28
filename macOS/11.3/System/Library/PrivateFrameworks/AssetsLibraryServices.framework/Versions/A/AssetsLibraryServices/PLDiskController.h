/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/Versions/A/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@interface PLDiskController : NSObject {

	double _lastFSCheck;
	long long _bytesRequiredForPhoto;
	struct {
		unsigned needToCheckDiskSpace : 1;
		unsigned probablyLowOnDiskSpace : 1;
		unsigned isAssetsd : 1;
		unsigned extra : 28;
	}  _flags;

}
+(id)sharedInstance;
+(long long)diskSpaceAvailableForPath:(id)arg1 ;
+(long long)freeDiskSpaceThreshold;
+(long long)diskSpaceAvailableForUse;
+(long long)fileSystemSizeForPath:(id)arg1 ;
+(id)mountPointForPath:(id)arg1 ;
+(char)freeSpaceBelowDesiredSpaceThresholdForPath:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_diskSpaceDidBecomeLow;
-(void)_actuallyUpdateCookie;
-(void)_updateCookie;
-(void)updateAvailableDiskSpace;
-(char)hasEnoughDiskToTakePicture;
-(long long)bytesToAutomaticallyClear;
@end
