/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKContainerID, NSSet;

@interface CKDContainerPrivacySettings : NSObject {

	CKContainerID* _containerID;
	NSSet* _applicationBundleIDs;
	long long _discoverable;

}

@property (nonatomic,copy) CKContainerID * containerID;               //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,copy) NSSet * applicationBundleIDs;              //@synthesize applicationBundleIDs=_applicationBundleIDs - In the implementation block
@property (assign,nonatomic) long long discoverable;                  //@synthesize discoverable=_discoverable - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CKContainerID *)containerID;
-(id)CKPropertiesDescription;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(void)setApplicationBundleIDs:(NSSet *)arg1 ;
-(NSSet *)applicationBundleIDs;
-(long long)discoverable;
-(void)setDiscoverable:(long long)arg1 ;
@end

