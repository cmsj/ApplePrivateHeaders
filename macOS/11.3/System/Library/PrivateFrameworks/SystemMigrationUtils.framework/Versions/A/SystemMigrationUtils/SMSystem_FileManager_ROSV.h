/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigrationUtils.framework/Versions/A/SystemMigrationUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemMigrationUtils/SMSystem_FileManager_DiskBased.h>

@class SKAPFSDisk;

@interface SMSystem_FileManager_ROSV : SMSystem_FileManager_DiskBased {

	char _pointedAtDataVolume;
	char _pointedAtMountedROSVVolume;
	SKAPFSDisk* _systemVolume;
	SKAPFSDisk* _dataVolume;

}

@property (assign) char pointedAtDataVolume;                     //@synthesize pointedAtDataVolume=_pointedAtDataVolume - In the implementation block
@property (assign) char pointedAtMountedROSVVolume;              //@synthesize pointedAtMountedROSVVolume=_pointedAtMountedROSVVolume - In the implementation block
@property (retain) SKAPFSDisk * systemVolume;                    //@synthesize systemVolume=_systemVolume - In the implementation block
@property (retain) SKAPFSDisk * dataVolume;                      //@synthesize dataVolume=_dataVolume - In the implementation block
+(char)isRootROSV:(id)arg1 ;
-(id)productVersion;
-(id)slash;
-(id)userContentRoot;
-(id)pathToRemoteFile:(id)arg1 exists:(char*)arg2 makeAvailable:(char)arg3 ;
-(id)bundleInformationAtPaths:(id)arg1 ;
-(void)setSystemVolume:(SKAPFSDisk *)arg1 ;
-(SKAPFSDisk *)systemVolume;
-(id)resourceValuesForKeys:(id)arg1 onPaths:(id)arg2 error:(id*)arg3 ;
-(id)userHomeRoot;
-(void)setDataVolume:(SKAPFSDisk *)arg1 ;
-(SKAPFSDisk *)dataVolume;
-(id)initAtRoot:(id)arg1 ;
-(void)setPointedAtMountedROSVVolume:(char)arg1 ;
-(void)setPointedAtDataVolume:(char)arg1 ;
-(char)pointedAtDataVolume;
-(char)pointedAtMountedROSVVolume;
@end

