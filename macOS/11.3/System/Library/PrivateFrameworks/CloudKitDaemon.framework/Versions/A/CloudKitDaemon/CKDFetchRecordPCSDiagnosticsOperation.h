/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableArray;

@interface CKDFetchRecordPCSDiagnosticsOperation : CKDDatabaseOperation {

	NSArray* _zoneIDs;
	NSMutableArray* _fetchedZones;
	NSMutableArray* _mutableCorruptRecords;

}

@property (assign,nonatomic) unsigned long long state; 
@property (nonatomic,retain) NSArray * zoneIDs;                                   //@synthesize zoneIDs=_zoneIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * fetchedZones;                       //@synthesize fetchedZones=_fetchedZones - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableCorruptRecords;              //@synthesize mutableCorruptRecords=_mutableCorruptRecords - In the implementation block
@property (nonatomic,readonly) NSArray * corruptRecords; 
-(void)main;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(NSArray *)zoneIDs;
-(void)setZoneIDs:(NSArray *)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(NSArray *)corruptRecords;
-(id)nameForState:(unsigned long long)arg1 ;
-(char)makeStateTransition;
-(void)_fetchZones;
-(void)_checkRecordPCSForAllZones;
-(NSMutableArray *)fetchedZones;
-(NSMutableArray *)mutableCorruptRecords;
-(void)setFetchedZones:(NSMutableArray *)arg1 ;
-(void)setMutableCorruptRecords:(NSMutableArray *)arg1 ;
@end

