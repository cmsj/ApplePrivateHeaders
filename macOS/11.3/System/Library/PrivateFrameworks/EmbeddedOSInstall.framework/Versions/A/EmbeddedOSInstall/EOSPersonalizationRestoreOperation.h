/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedOSInstall.framework/Versions/A/EmbeddedOSInstall
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmbeddedOSInstall/EOSRestoreOperation.h>

@interface EOSPersonalizationRestoreOperation : EOSRestoreOperation
-(id)activityObject;
-(long long)restorePhase;
-(double)deviceConnectionTimeout;
-(long long)matchDeviceModes;
-(char)preOperation;
-(long long)expectedDeviceMode;
-(void)deviceConnected:(id)arg1 ;
-(char)waitForDeviceDisconnected;
-(char)_generateRestoreOptionsForDevice:(id)arg1 ;
-(char)_deletePreviousPersonalizedBundle;
-(char)_personalizeBundleForDevice:(id)arg1 error:(id*)arg2 ;
-(char)_shouldRetryPersonalizationAfterError:(id)arg1 ;
-(char)_copyExistingFDRDataIfExists;
@end

