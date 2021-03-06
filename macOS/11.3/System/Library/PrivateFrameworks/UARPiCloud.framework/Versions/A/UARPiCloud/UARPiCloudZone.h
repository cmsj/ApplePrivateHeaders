/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UARPiCloud.framework/Versions/A/UARPiCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKServerChangeToken, CKRecordZoneID, NSString;

@interface UARPiCloudZone : NSObject {

	CKServerChangeToken* _changeToken;
	CKRecordZoneID* _zoneID;
	NSString* _containerID;

}

@property (copy) CKRecordZoneID * zoneID;                        //@synthesize zoneID=_zoneID - In the implementation block
@property (copy) CKServerChangeToken * changeToken;              //@synthesize changeToken=_changeToken - In the implementation block
@property (copy) NSString * containerID;                         //@synthesize containerID=_containerID - In the implementation block
-(NSString *)containerID;
-(CKRecordZoneID *)zoneID;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(void)setContainerID:(NSString *)arg1 ;
-(CKServerChangeToken *)changeToken;
-(void)setChangeToken:(CKServerChangeToken *)arg1 ;
-(id)initWithZoneID:(id)arg1 containerID:(id)arg2 ;
@end

