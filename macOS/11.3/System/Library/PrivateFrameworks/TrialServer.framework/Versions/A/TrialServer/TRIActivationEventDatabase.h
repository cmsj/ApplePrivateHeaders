/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/Versions/A/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TrialServer/TrialServer-Structs.h>
@class TRIDatabase;

@interface TRIActivationEventDatabase : NSObject {

	TRIDatabase* _db;

}
-(id)init;
-(id)initWithDatabase:(id)arg1 ;
-(PASDBTransactionCompletion_)writeTransactionWithFailableBlock:(/*^block*/id)arg1 ;
-(PASDBTransactionCompletion_)readTransactionWithFailableBlock:(/*^block*/id)arg1 ;
-(unsigned long long)addRecordWithExperimentId:(id)arg1 treatmentId:(id)arg2 deploymentId:(int)arg3 osBuild:(id)arg4 languageCode:(id)arg5 regionCode:(id)arg6 transaction:(id)arg7 ;
-(id)activationEventRecordWithExperimentId:(id)arg1 treatmentId:(id)arg2 deploymentId:(int)arg3 ;
-(unsigned long long)deleteRecordWithExperimentId:(id)arg1 treatmentId:(id)arg2 deploymentId:(int)arg3 ;
@end

