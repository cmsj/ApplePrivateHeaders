/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/Versions/A/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DPMaintenance.h>

@protocol OS_xpc_object;
@class NSObject, NSDate;

@interface _DPBlacklistServerStorage : NSObject <_DPMaintenance> {

	NSObject*<OS_xpc_object> _activity;

}

@property (nonatomic,retain) NSDate * lastUpdateDate; 
@property (assign,nonatomic,__weak) NSObject*<OS_xpc_object> activity;              //@synthesize activity=_activity - In the implementation block
-(NSObject*<OS_xpc_object>)activity;
-(void)setActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setLastUpdateDate:(NSDate *)arg1 ;
-(NSDate *)lastUpdateDate;
-(void)scheduleMaintenanceWithName:(id)arg1 database:(id)arg2 ;
-(char)requestLatestBlacklistsSynchronously:(id*)arg1 error:(id*)arg2 lastRecordModifiedAt:(id*)arg3 ;
-(char)prepareRuntimeBlacklistFolder:(id*)arg1 ;
-(id)saveBlacklistsToRuntimeFolder:(id)arg1 ;
-(void)_requestLatestBlacklists:(/*^block*/id)arg1 ;
-(char)updateRuntimeBlacklistsFromServer;
-(id)_predicateForFetchQuery;
-(void)_attributeQueryOperation:(id)arg1 ;
-(id)_queryOperationFromCursor:(id)arg1 ;
-(void)_executeQueryOperation:(id)arg1 onOperationQueue:(id)arg2 onCompletion:(/*^block*/id)arg3 ;
-(id)_blacklistURLByKeyFrom:(id)arg1 ;
-(id)_publicDatabaseForBlacklists;
@end

