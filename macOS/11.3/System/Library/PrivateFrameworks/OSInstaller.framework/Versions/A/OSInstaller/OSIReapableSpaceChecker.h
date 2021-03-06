/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OSInstaller.framework/Versions/A/OSInstaller
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SMPaths, OSInstallOptions;

@interface OSIReapableSpaceChecker : NSObject {

	SMPaths* _pather;
	OSInstallOptions* _options;

}

@property (retain) OSInstallOptions * options;              //@synthesize options=_options - In the implementation block
@property (retain) SMPaths * pather;                        //@synthesize pather=_pather - In the implementation block
+(void)initialize;
-(void)setOptions:(OSInstallOptions *)arg1 ;
-(OSInstallOptions *)options;
-(id)initWithOptions:(id)arg1 ;
-(SMPaths *)pather;
-(void)setPather:(SMPaths *)arg1 ;
-(char)willBlock;
-(id)reapableSpace;
-(id)reapableFiles;
-(void)_calculateSystemPathsAndSize;
@end

