/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/Versions/A/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PMLAWDMetricQueryDelegate.h>
#import <libobjc.A.dylib/PMLTrainingProtocol.h>

@class DESRecordStore, PMLAWDAvailableSessionsTracker, NSDictionary, PMLTrainingStore, NSString;

@interface PMLTraining : NSObject <PMLAWDMetricQueryDelegate, PMLTrainingProtocol> {

	DESRecordStore* _fidesStore;
	PMLAWDAvailableSessionsTracker* _availableSessionsTracker;
	NSDictionary* _isMultiLabel;
	PMLTrainingStore* _store;

}

@property (nonatomic,readonly) PMLTrainingStore * store;              //@synthesize store=_store - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSingletonWithDirectory:(id)arg1 ;
-(id)init;
-(PMLTrainingStore *)store;
-(void)deleteSessionsWithBundleID:(id)arg1 ;
-(void)deleteSessionsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2 ;
-(void)deleteSessionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 ;
-(id)planReceivedWithRecipe:(id)arg1 attachments:(id)arg2 error:(id*)arg3 ;
-(void)setSourceRecoverer:(/*^block*/id)arg1 ;
-(id)planReceivedWithPayload:(id)arg1 error:(id*)arg2 ;
-(void)trimDbWithDeferralBlock:(/*^block*/id)arg1 ;
-(void)addSessionWithCovariates:(id)arg1 source:(id)arg2 label:(long long)arg3 sessionDescriptor:(id)arg4 spotlightReference:(id)arg5 isInternal:(char)arg6 ;
-(id)lastTrainingFeaturizationForModelName:(id)arg1 andLocale:(id)arg2 ;
-(void)updateSessionsAndLabelForModel:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)updateLastTrainingFeaturizationForModel:(id)arg1 andData:(id)arg2 ;
-(void)addSessionWithCovariates:(id)arg1 label:(long long)arg2 sessionDescriptor:(id)arg3 spotlightReference:(id)arg4 isInternal:(char)arg5 ;
-(void)availableSessionsStatsReportedToAWD;
-(id)initWithStore:(id)arg1 fidesStore:(id)arg2 availableSessionsTracker:(id)arg3 ;
-(char)isMultiLabelModel:(id)arg1 ;
-(void)sendSessionStatsToFides;
-(void)_sendStatsToFidesForModel:(id)arg1 sessionCount:(unsigned long long)arg2 positivesCount:(unsigned long long)arg3 negativesCount:(unsigned long long)arg4 support:(float)arg5 ;
-(void)_sendStatsToFidesForMultiLabelModel:(id)arg1 sessionCount:(unsigned long long)arg2 labeledStats:(id)arg3 ;
-(void)_deleteAllSavedRecordsFromFidesStoreSync;
-(id)_trainWithRecipe:(id)arg1 chunkData:(id)arg2 args:(id)arg3 error:(id*)arg4 ;
@end

