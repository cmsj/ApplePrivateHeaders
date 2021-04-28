/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TimeMachine.framework/Versions/A/TimeMachine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TMVolumeStoreInfo.h>

@protocol TMMachineStoreInfo;
@class NSString, NSURL, NSNumber, NSDate;

@interface TMSessionVolumeStore : NSObject <TMVolumeStoreInfo> {

	char _isCaseSensitive;
	NSString* _name;
	NSURL* _url;
	NSString* _volumeUUID;
	NSString* _fstype;
	NSString* _volumeGroupUUID;
	NSNumber* _volumeRole;
	NSDate* _dateBackupCompleted;
	id<TMMachineStoreInfo> _machineStoreInfo;

}

@property (copy,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSURL * url;                                     //@synthesize url=_url - In the implementation block
@property (copy,readonly) NSString * volumeUUID;                           //@synthesize volumeUUID=_volumeUUID - In the implementation block
@property (copy,readonly) NSString * fstype;                               //@synthesize fstype=_fstype - In the implementation block
@property (copy,readonly) NSString * volumeGroupUUID;                      //@synthesize volumeGroupUUID=_volumeGroupUUID - In the implementation block
@property (copy,readonly) NSNumber * volumeRole;                           //@synthesize volumeRole=_volumeRole - In the implementation block
@property (readonly) char isCaseSensitive;                                 //@synthesize isCaseSensitive=_isCaseSensitive - In the implementation block
@property (readonly) NSDate * dateBackupCompleted;                         //@synthesize dateBackupCompleted=_dateBackupCompleted - In the implementation block
@property (readonly) id<TMMachineStoreInfo> machineStoreInfo;              //@synthesize machineStoreInfo=_machineStoreInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSString *)name;
-(NSURL *)url;
-(char)isCaseSensitive;
-(NSString *)volumeUUID;
-(NSString *)volumeGroupUUID;
-(NSNumber *)volumeRole;
-(NSString *)fstype;
-(id)initWithVolumeStore:(id)arg1 machineStoreInfo:(id)arg2 backup:(id)arg3 ;
-(NSDate *)dateBackupCompleted;
-(id<TMMachineStoreInfo>)machineStoreInfo;
@end
