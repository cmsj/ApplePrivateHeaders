/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iPodUpdater.framework/Versions/A/iPodUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iPodUpdater/iPodUpdater-Structs.h>
@class Pod;

@interface BreadCrumb : NSObject {

	SCD_Struct_Br7 _infoRec;
	Pod* _pod;
	long long _offset;

}
-(void)dealloc;
-(id)description;
-(int)host;
-(int)connectionType;
-(void)setHost:(int)arg1 ;
-(long long)offset;
-(id)startTime;
-(void)setOffset:(long long)arg1 ;
-(id)applicationName;
-(int)architecture;
-(id)errorCode;
-(NumVersion)osVersion;
-(void)setConnectionType:(int)arg1 ;
-(void)setPowered:(char)arg1 ;
-(void)setErrorCode:(id)arg1 ;
-(char)powered;
-(id)previousBuildVersion;
-(void)setPreviousBuildVersion:(id)arg1 ;
-(int)write;
-(id)finishTime;
-(id)osVersionString;
-(SCD_Struct_Br7*)infoRecord;
-(void)setRestoreType:(int)arg1 ;
-(void)setRecoveryType:(int)arg1 ;
-(void)setArchitecture;
-(void)setUpdaterHost:(int)arg1 ;
-(void)setOSVersion;
-(void)setOSVersionString;
-(void)setApplicationName;
-(void)setUpdaterVersion;
-(void)setPreviousFirmwareVersion:(NumVersion)arg1 ;
-(void)setUpdatingFirmwareVersion:(NumVersion)arg1 ;
-(void)setNewBuildVersion:(id)arg1 ;
-(void)setStartTimeToNow;
-(void)setFinishTimeToNow;
-(id)initWithPod:(id)arg1 atOffset:(long long)arg2 version:(unsigned short)arg3 ;
-(long long)compareStartingTime:(id)arg1 ;
-(id)initNewCrumbWithPod:(id)arg1 atOffset:(long long)arg2 ;
-(int)readWithVersion:(unsigned short)arg1 ;
-(char)appearsValid;
-(int)restoreType;
-(int)recoveryType;
-(int)updaterHost;
-(NumVersion)previousFirmwareVersion;
-(NumVersion)updatingFirmwareVersion;
-(id)newBuildVersion;
-(NumVersion)updaterVersion;
@end

