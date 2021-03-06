/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ISyncSession : NSObject
+(id)beginSessionWithClient:(id)arg1 entityNames:(id)arg2 beforeDate:(id)arg3 clientHasTruthForEntityNames:(id)arg4 quietlyPushTruth:(char)arg5 ;
+(id)beginSessionWithClient:(id)arg1 entityNames:(id)arg2 beforeDate:(id)arg3 ;
+(char)client:(id)arg1 hasPendingChangesForEntityNames:(id)arg2 ;
+(char)hasChangesForClient:(id)arg1 entityNames:(id)arg2 ;
+(void)_validateClient:(id)arg1 entityNames:(id)arg2 beforeDate:(id)arg3 clientHasTruthForEntityNames:(id)arg4 target:(id)arg5 selector:(SEL)arg6 ;
+(id)_sessionWithClient:(id)arg1 entityNames:(id)arg2 beforeDate:(id)arg3 clientHasTruthForEntityNames:(id)arg4 quietlyPushTruth:(char)arg5 target:(id)arg6 selector:(SEL)arg7 anchors:(id)arg8 hasChanges:(char)arg9 skip:(char)arg10 error:(id*)arg11 ;
+(id)beginSessionWithClient:(id)arg1 entityNames:(id)arg2 beforeDate:(id)arg3 lastAnchors:(id)arg4 ;
+(id)beginSessionWithClient:(id)arg1 entityNames:(id)arg2 beforeDate:(id)arg3 clientHasTruthForEntityNames:(id)arg4 ;
+(void)beginSessionInBackgroundWithClient:(id)arg1 entityNames:(id)arg2 target:(id)arg3 selector:(SEL)arg4 ;
+(void)beginSessionInBackgroundWithClient:(id)arg1 entityNames:(id)arg2 target:(id)arg3 selector:(SEL)arg4 lastAnchors:(id)arg5 ;
+(id)beginSessionWithClient:(id)arg1 entityNames:(id)arg2 beforeDate:(id)arg3 hasChanges:(char)arg4 error:(id*)arg5 ;
+(id)beginSessionWithClient:(id)arg1 entityNames:(id)arg2 beforeDate:(id)arg3 hasChanges:(char)arg4 skipSyncAfterClients:(char)arg5 error:(id*)arg6 ;
+(id)beginSessionWithClient:(id)arg1 entityNames:(id)arg2 beforeDate:(id)arg3 lastAnchors:(id)arg4 hasChanges:(char)arg5 error:(id*)arg6 ;
+(id)beginSessionWithClient:(id)arg1 entityNames:(id)arg2 beforeDate:(id)arg3 lastAnchors:(id)arg4 hasChanges:(char)arg5 skipSyncAfterClients:(char)arg6 error:(id*)arg7 ;
+(void)cancelPreviousBeginSessionWithClient:(id)arg1 ;
-(char)isCancelled;
-(void)ping;
-(void)finishSyncing;
-(char)prepareToPullChangesForEntityNames:(id)arg1 beforeDate:(id)arg2 ;
-(void)cancelSyncing;
-(char)shouldPullChangesForEntityName:(id)arg1 ;
-(char)shouldPushChangesForEntityName:(id)arg1 ;
-(void)pushChangesFromRecord:(id)arg1 withIdentifier:(id)arg2 ;
-(void)clientAcceptedChangesForRecordWithIdentifier:(id)arg1 formattedRecord:(id)arg2 newRecordIdentifier:(id)arg3 keepAwayFromServer:(char)arg4 ;
-(void)clientChangedRecordIdentifiers:(id)arg1 ;
-(id)clientInfoForRecordWithIdentifier:(id)arg1 ;
-(void)setClientInfo:(id)arg1 forRecordWithIdentifier:(id)arg2 ;
-(id)snapshotOfRecordsInTruth;
-(void)clientLostRecordWithIdentifier:(id)arg1 shouldReplaceOnNextSync:(char)arg2 ;
-(void)clientDidResetEntityNames:(id)arg1 ;
-(void)clientWantsToPushAllRecordsForEntityNames:(id)arg1 ;
-(char)shouldPushAllRecordsForEntityName:(id)arg1 ;
-(char)shouldReplaceAllRecordsOnClientForEntityName:(id)arg1 ;
-(void)setEntityName:(id)arg1 forRecordId:(id)arg2 ;
-(void)pushChange:(id)arg1 ;
-(void)deleteRecordWithIdentifier:(id)arg1 ;
-(void)clientFinishedPushingChangesWithNextAnchors:(id)arg1 ;
-(void)prepareToPullChangesInBackgroundForEntityNames:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(id)changeEnumeratorForEntityNames:(id)arg1 ;
-(void)clientAcceptedChangesForRecordWithIdentifier:(id)arg1 formattedRecord:(id)arg2 newRecordIdentifier:(id)arg3 ;
-(void)clientRefusedChangesForRecordWithIdentifier:(id)arg1 ;
-(void)clientCommittedAcceptedChanges;
-(void)clientCommittedAcceptedChangesWithNextAnchors:(id)arg1 ;
-(void)addTargetNames:(id)arg1 forEntityName:(id)arg2 relationshipName:(id)arg3 ;
-(void)addTargetIds:(id)arg1 forRecordId:(id)arg2 relationshipName:(id)arg3 ;
@end

