/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/Versions/A/PowerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
#import <PowerUI/PowerUI-Structs.h>
@class TRIClient, NSString, TRITrackingId, NSObject, NSMutableArray;

@interface PowerUITrialManager : NSObject {

	os_unfair_lock_s _lock;
	TRIClient* _trialClient;
	NSString* _treatmentID;
	NSString* _experimentID;
	NSString* _trialNamespaceName;
	TRITrackingId* _trialTrackingID;
	NSObject*<OS_os_log> _log;
	NSMutableArray* _updateHandlers;

}

@property (assign,nonatomic) os_unfair_lock_s lock;                        //@synthesize lock=_lock - In the implementation block
@property (retain) TRITrackingId * trialTrackingID;                        //@synthesize trialTrackingID=_trialTrackingID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                     //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) NSMutableArray * updateHandlers;              //@synthesize updateHandlers=_updateHandlers - In the implementation block
@property (nonatomic,retain) TRIClient * trialClient;                      //@synthesize trialClient=_trialClient - In the implementation block
@property (retain) NSString * treatmentID;                                 //@synthesize treatmentID=_treatmentID - In the implementation block
@property (retain) NSString * experimentID;                                //@synthesize experimentID=_experimentID - In the implementation block
@property (nonatomic,retain) NSString * trialNamespaceName;                //@synthesize trialNamespaceName=_trialNamespaceName - In the implementation block
-(os_unfair_lock_s)lock;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(TRIClient *)trialClient;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(NSMutableArray *)updateHandlers;
-(void)loadTrialUpdates;
-(id)trialFactor:(id)arg1 ;
-(id)loadModelFromPath:(id)arg1 deleteExistingFiles:(char)arg2 ;
-(id)initWithDefaultsDomain:(id)arg1 ;
-(long long)longFactorForName:(id)arg1 ;
-(double)doubleFactorForName:(id)arg1 ;
-(id)factorForName:(id)arg1 ;
-(void)addUpdateHandler:(/*^block*/id)arg1 ;
-(id)loadTrialEngageModelByDeletingExistingModel:(char)arg1 ;
-(id)loadTrialDurationModelByDeletingExistingModel:(char)arg1 ;
-(double)loadTrialThreshold;
-(double)loadTrialAdjustedHours;
-(double)loadTrialMinInputChargeDuration;
-(id)loadTrialDischargeModelByDeletingExistingModel:(char)arg1 ;
-(double)loadTrialDischargeThreshold;
-(double)loadTrialDesktopModeEntryThreshold;
-(void)setTrialClient:(TRIClient *)arg1 ;
-(NSString *)treatmentID;
-(void)setTreatmentID:(NSString *)arg1 ;
-(NSString *)experimentID;
-(void)setExperimentID:(NSString *)arg1 ;
-(NSString *)trialNamespaceName;
-(void)setTrialNamespaceName:(NSString *)arg1 ;
-(TRITrackingId *)trialTrackingID;
-(void)setTrialTrackingID:(TRITrackingId *)arg1 ;
-(void)setUpdateHandlers:(NSMutableArray *)arg1 ;
@end

