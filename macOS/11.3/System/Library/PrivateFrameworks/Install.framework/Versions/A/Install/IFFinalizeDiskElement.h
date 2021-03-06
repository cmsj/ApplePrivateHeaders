/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Versions/A/Install
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Install/IFInstallQueueElement.h>

@class IFDiskObject;

@interface IFFinalizeDiskElement : IFInstallQueueElement {

	IFDiskObject* _targetVolume;
	IFDiskObject* _sourceVolume;
	int _installKey;

}
-(long long)run;
-(void)dealloc;
-(id)description;
-(id)logDescription;
-(char)runAfterError;
-(id)initWithTargetVolume:(id)arg1 sourceVolume:(id)arg2 ;
-(void)_runWithManager:(id)arg1 ;
@end

