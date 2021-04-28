/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRModifyOutputContextRequestMessage : MRProtocolMessage

@property (nonatomic,readonly) NSArray * addingOutputDeviceUIDs; 
@property (nonatomic,readonly) NSArray * removingOutputDeviceUIDs; 
@property (nonatomic,readonly) NSArray * settingOutputDeviceUIDs; 
-(id)description;
-(unsigned long long)type;
-(unsigned)contextType;
-(id)initWithAddingDeviceUIDs:(id)arg1 removingDeviceUIDs:(id)arg2 settingDeviceUIDs:(id)arg3 clusterAwareAddingOutputDeviceUIDs:(id)arg4 clusterAwareRemovingOutputDeviceUIDs:(id)arg5 clusterAwareSettingOutputDeviceUIDs:(id)arg6 ;
-(NSArray *)addingOutputDeviceUIDs;
-(NSArray *)removingOutputDeviceUIDs;
-(NSArray *)settingOutputDeviceUIDs;
@end
