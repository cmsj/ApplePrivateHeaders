/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSString;

@interface HMDCloudZoneInformationModel : HMDBackingStoreModelObject {

	char _requiresHomeManagerUpdate;

}

@property (nonatomic,retain) NSString * ownerName; 
@property (assign,nonatomic) char requiresHomeManagerUpdate;              //@synthesize requiresHomeManagerUpdate=_requiresHomeManagerUpdate - In the implementation block
+(id)properties;
-(id)dependentUUIDs;
-(char)requiresHomeManagerUpdate;
-(void)setRequiresHomeManagerUpdate:(char)arg1 ;
@end

