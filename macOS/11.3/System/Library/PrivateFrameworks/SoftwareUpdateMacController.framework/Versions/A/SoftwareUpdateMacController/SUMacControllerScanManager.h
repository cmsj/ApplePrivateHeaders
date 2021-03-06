/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateMacController.framework/Versions/A/SoftwareUpdateMacController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SUCoreFSMDelegate.h>

@protocol OS_dispatch_queue;
@class SUCoreLog, NSObject, SUCoreScan, SUCoreFSM, SUMacControllerBridgeOSManager, SUMacControllerRosettaManager, SUMacControllerClientRequest, SUMacControllerScanEventInfo, NSString;

@interface SUMacControllerScanManager : NSObject <SUCoreFSMDelegate> {

	SUCoreLog* _logger;
	NSObject*<OS_dispatch_queue> _completionDispatchQueue;
	SUCoreScan* _coreScanner;
	SUCoreFSM* _stateMachine;
	SUMacControllerBridgeOSManager* _bridgeOSManager;
	SUMacControllerRosettaManager* _rosettaManager;
	SUMacControllerClientRequest* _currentClientRequest;
	SUMacControllerScanEventInfo* _pendingEvent;

}

@property (nonatomic,retain) SUCoreLog * logger;                                                //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionDispatchQueue;              //@synthesize completionDispatchQueue=_completionDispatchQueue - In the implementation block
@property (nonatomic,retain) SUCoreScan * coreScanner;                                          //@synthesize coreScanner=_coreScanner - In the implementation block
@property (nonatomic,retain) SUCoreFSM * stateMachine;                                          //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) SUMacControllerBridgeOSManager * bridgeOSManager;                  //@synthesize bridgeOSManager=_bridgeOSManager - In the implementation block
@property (nonatomic,retain) SUMacControllerRosettaManager * rosettaManager;                    //@synthesize rosettaManager=_rosettaManager - In the implementation block
@property (nonatomic,retain) SUMacControllerClientRequest * currentClientRequest;               //@synthesize currentClientRequest=_currentClientRequest - In the implementation block
@property (nonatomic,retain) SUMacControllerScanEventInfo * pendingEvent;                       //@synthesize pendingEvent=_pendingEvent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_getSUMacControllerScanManagerStateTable;
-(void)scanForUpdateWithClientRequest:(id)arg1 ;
-(void)scanForSFRUpdateWithClientRequest:(id)arg1 targetRestoreVersion:(id)arg2 targetBuildVersion:(id)arg3 targetProductVersion:(id)arg4 ;
-(void)queryCurrentStateWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_registerStateMachineHandlers;
-(long long)actionReportScanProgress:(id)arg1 error:(id*)arg2 ;
-(long long)actionRequestScanControl:(id)arg1 error:(id*)arg2 ;
-(long long)actionScanControlDenied:(id)arg1 error:(id*)arg2 ;
-(long long)actionScanDecideSupportSoftware:(id)arg1 error:(id*)arg2 ;
-(long long)actionDecideRequiresDocs:(id)arg1 error:(id*)arg2 ;
-(long long)actionDecideRequiresMinorDocs:(id)arg1 error:(id*)arg2 ;
-(long long)actionStartupScanManager:(id)arg1 error:(id*)arg2 ;
-(long long)actionScanForSoftwareUpdates:(id)arg1 error:(id*)arg2 ;
-(long long)actionScanForSFR:(id)arg1 error:(id*)arg2 ;
-(long long)actionScanDecideRosetta:(id)arg1 error:(id*)arg2 ;
-(long long)actionScanForRosetta:(id)arg1 error:(id*)arg2 ;
-(long long)actionScanForBridgeOS:(id)arg1 error:(id*)arg2 ;
-(long long)actionScanForUpdateBrain:(id)arg1 error:(id*)arg2 ;
-(long long)actionScanForMajorDocumentation:(id)arg1 error:(id*)arg2 ;
-(long long)actionScanForMinorDocumentation:(id)arg1 error:(id*)arg2 ;
-(long long)actionCancelCompleted:(id)arg1 error:(id*)arg2 ;
-(long long)actionScanCompleted:(id)arg1 error:(id*)arg2 ;
-(SUMacControllerClientRequest *)currentClientRequest;
-(void)_stateSafeReportCurrentRequestScanFailedWithMajorError:(id)arg1 minorError:(id)arg2 ;
-(void)_reportScanFailedWithMajorError:(id)arg1 minorError:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setCurrentClientRequest:(SUMacControllerClientRequest *)arg1 ;
-(void)setCoreScanner:(SUCoreScan *)arg1 ;
-(SUCoreScan *)coreScanner;
-(void)_stateSafeProcessStartProgressAtPhase:(int)arg1 eventInfo:(id)arg2 ;
-(id)_overridesFromClientRequest:(id)arg1 ;
-(void)_processEndProgressAtPhase:(int)arg1 eventInfo:(id)arg2 ;
-(id)_scanReturnError:(id)arg1 description:(id)arg2 ;
-(void)setRosettaManager:(SUMacControllerRosettaManager *)arg1 ;
-(SUMacControllerRosettaManager *)rosettaManager;
-(char)_processMajorRosettaUpdateResult:(char)arg1 version:(id)arg2 underlyingError:(id)arg3 eventInfo:(id)arg4 ;
-(char)_processMinorRosettaUpdateResult:(char)arg1 version:(id)arg2 underlyingError:(id)arg3 eventInfo:(id)arg4 ;
-(char)_rosettaUpdateRequired;
-(void)setBridgeOSManager:(SUMacControllerBridgeOSManager *)arg1 ;
-(SUMacControllerBridgeOSManager *)bridgeOSManager;
-(void)_processUpdateBrainResultWithOverrides:(id)arg1 majorBuildVersion:(id)arg2 minorBuildVersion:(id)arg3 majorBrainDescriptor:(id)arg4 minorBrainDescriptor:(id)arg5 majorBrainError:(id)arg6 minorBrainError:(id)arg7 eventInfo:(id)arg8 ;
-(void)_stateSafeSFRScanCompletedWithEvent:(id)arg1 ;
-(void)_stateSafeSwapCurrentClientRequestWithNewRequest:(id)arg1 ;
-(void)_stateSafeTransferControlSettingPendingEvent:(id)arg1 ;
-(id)_progressNameForPhase:(int)arg1 ;
-(float)_progressPercentForPhase:(int)arg1 atStart:(char)arg2 ;
-(void)setCompletionDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(long long)actionUnknownAction:(id)arg1 error:(id*)arg2 ;
-(long long)performAction:(id)arg1 onEvent:(id)arg2 inState:(id)arg3 withInfo:(id)arg4 nextState:(id)arg5 error:(id*)arg6 ;
-(id)init;
-(SUCoreLog *)logger;
-(SUCoreFSM *)stateMachine;
-(void)setStateMachine:(SUCoreFSM *)arg1 ;
-(void)setLogger:(SUCoreLog *)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionDispatchQueue;
-(void)setPendingEvent:(SUMacControllerScanEventInfo *)arg1 ;
-(SUMacControllerScanEventInfo *)pendingEvent;
@end

