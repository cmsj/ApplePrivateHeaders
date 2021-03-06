/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKObject.h>

@class NSNumber, NSUUID;

@interface CKDAssetVolume : CKObject {

	NSNumber* _volumeIndex;
	NSUUID* _volumeUUID;

}

@property (nonatomic,retain) NSNumber * volumeIndex;              //@synthesize volumeIndex=_volumeIndex - In the implementation block
@property (nonatomic,retain) NSUUID * volumeUUID;                 //@synthesize volumeUUID=_volumeUUID - In the implementation block
+(id)CKSQLiteClassName;
-(id)description;
-(id)CKPropertiesDescription;
-(NSUUID *)volumeUUID;
-(void)setVolumeUUID:(NSUUID *)arg1 ;
-(void)setVolumeIndex:(NSNumber *)arg1 ;
-(NSNumber *)volumeIndex;
@end

