/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedOSInstall.framework/Versions/A/EmbeddedOSInstall
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDate, NSObject, NSURL;

@interface EOSBootDiagnostics : NSObject {

	NSDate* _startDate;
	NSObject*<OS_dispatch_queue> _collectionQueue;
	NSObject*<OS_dispatch_queue> _bridgeSysdiagnoseQueue;
	NSURL* _workingDirectoryURL;
	NSURL* _outputURL;

}

@property (retain) NSDate * startDate;                                               //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> collectionQueue;                     //@synthesize collectionQueue=_collectionQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> bridgeSysdiagnoseQueue;              //@synthesize bridgeSysdiagnoseQueue=_bridgeSysdiagnoseQueue - In the implementation block
@property (retain) NSURL * workingDirectoryURL;                                      //@synthesize workingDirectoryURL=_workingDirectoryURL - In the implementation block
@property (retain) NSURL * outputURL;                                                //@synthesize outputURL=_outputURL - In the implementation block
+(char)collectDiagnosticsForFailedBoot;
-(id)init;
-(NSDate *)startDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setOutputURL:(NSURL *)arg1 ;
-(NSURL *)outputURL;
-(id)_generateOutputURL;
-(id)_createWorkingDirectory;
-(void)_collectDiagnosticsForFailedBoot;
-(NSObject*<OS_dispatch_queue>)collectionQueue;
-(NSURL *)workingDirectoryURL;
-(NSObject*<OS_dispatch_queue>)bridgeSysdiagnoseQueue;
-(void)_collectBridgeSysdiagnose;
-(void)_collectFullHostSysdiagnose;
-(void)_collectSpindump;
-(void)_collectIORegistry;
-(void)_collectNetworkInterfaces;
-(void)_collectSCNetworkConfiguration;
-(void)_collectSCDynamicStore;
-(void)_collectUSBTermOutput;
-(char)_compressResults;
-(void)setCollectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setBridgeSysdiagnoseQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setWorkingDirectoryURL:(NSURL *)arg1 ;
@end

