/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SyncServices/ISyncRecordView.h>

@class ISDRecordStore, ISyncRecordSnapshot, NSDictionary, NSMutableDictionary, ISDConflictManager;

@interface ISyncConcreteRecordView : ISyncRecordView {

	ISDRecordStore* _recordStore;
	ISyncRecordSnapshot* _snapshot;
	NSDictionary* _clientStoreIdToTruthIdMap;
	NSDictionary* _truthIdToClientStoreIdMap;
	NSMutableDictionary* _cachedRecords;
	ISDConflictManager* _conflictManager;

}
-(void)dealloc;
-(void)resetCache;
-(id)initWithRecordStore:(id)arg1 identityMatchedIdMapper:(id)arg2 entityNames:(id)arg3 ;
-(id)formattedAwayPropertiesForRecordWithIdentifier:(id)arg1 ;
-(id)recordGraphNodesWithIdentifiers:(id)arg1 ;
-(void)flushAndResetConflictManager;
-(id)recordByApplyingIdentityMatchedIdMapToRecord:(id)arg1 withRecordId:(id)arg2 ;
-(id)actualRecordsWithIdentifiers:(id)arg1 ;
@end

