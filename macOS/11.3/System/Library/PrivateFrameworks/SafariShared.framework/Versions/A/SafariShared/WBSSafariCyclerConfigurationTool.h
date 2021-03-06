/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WBSCyclerServiceProxy;

@interface WBSSafariCyclerConfigurationTool : NSObject {

	WBSCyclerServiceProxy* _cyclerProxy;

}
-(void)run;
-(id)init;
-(id)_supportedCommands;
-(id)_descriptionForErrorCode:(long long)arg1 ;
-(id)_errorWithCode:(long long)arg1 ;
-(void)_exitWithError:(id)arg1 ;
-(void)_printUsage;
-(id)_commandWithName:(id)arg1 ;
-(void)_runTest:(id)arg1 ;
-(void)_startCycler:(id)arg1 ;
-(void)_stopCycler:(id)arg1 ;
-(void)_resumeCycler:(id)arg1 ;
-(void)_setConfigurationOption:(id)arg1 ;
-(void)_sendRequestToTest:(id)arg1 ;
-(void)_configureDevice:(id)arg1 ;
-(void)_fetchStatus:(id)arg1 ;
-(void)_waitForCyclerToFinish:(id)arg1 ;
@end

