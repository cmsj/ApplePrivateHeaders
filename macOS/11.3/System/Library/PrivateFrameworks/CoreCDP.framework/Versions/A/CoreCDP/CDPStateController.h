/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/Versions/A/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreCDP/CDPController.h>

@interface CDPStateController : CDPController
-(char)isManateeAvailable:(id*)arg1 ;
-(void)handleCloudDataProtectionStateWithCompletion:(/*^block*/id)arg1 ;
-(void)attemptToEscrowPreRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleURLActionWithInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)repairCloudDataProtectionStateWithCompletion:(/*^block*/id)arg1 ;
-(void)finishOfflineLocalSecretChangeWithCompletion:(/*^block*/id)arg1 ;
-(void)generateNewRecoveryKey:(/*^block*/id)arg1 ;
-(void)startCircleApplicationApprovalServer:(/*^block*/id)arg1 ;
-(void)recoverAndSynchronizeWithSquirrel:(/*^block*/id)arg1 ;
-(void)recoverWithSquirrel:(/*^block*/id)arg1 ;
-(void)attemptToEscrowPreRecord:(id)arg1 preRecordUUID:(id)arg2 secretType:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)finishCyrusFlowAfterTermsAgreementWithContext:(/*^block*/id)arg1 ;
-(char)shouldPerformRepairWithOptionForceFetch:(char)arg1 error:(id*)arg2 ;
-(void)deleteRecoveryKey:(/*^block*/id)arg1 ;
-(char)deleteRecoveryKeyWithError:(id*)arg1 ;
-(id)generateRandomRecoveryKey:(id*)arg1 ;
-(void)handleURLActionWithInfo:(id)arg1 ;
@end

