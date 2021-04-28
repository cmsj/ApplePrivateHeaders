/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/Versions/A/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioVideoBridging/AVBCentralManager.h>
#import <libobjc.A.dylib/TSClockClient.h>
#import <libobjc.A.dylib/AVB17221EntityDiscoveryDelegate.h>
#import <libobjc.A.dylib/AVB17221AECPClient.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString;

@interface AVBAVDECCController : AVBCentralManager <TSClockClient, AVB17221EntityDiscoveryDelegate, AVB17221AECPClient> {

	char _allocatedControllerEntityID;
	unsigned long long _controllerEntityID;
	NSObject*<OS_dispatch_queue> _entityAccessQueue;
	NSMutableDictionary* _entities;

}

@property (assign,nonatomic) char allocatedControllerEntityID;                              //@synthesize allocatedControllerEntityID=_allocatedControllerEntityID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> entityAccessQueue;              //@synthesize entityAccessQueue=_entityAccessQueue - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * entities;                       //@synthesize entities=_entities - In the implementation block
@property (nonatomic,readonly) unsigned long long controllerEntityID;                       //@synthesize controllerEntityID=_controllerEntityID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(NSMutableDictionary *)entities;
-(Class)entityClass;
-(void)didEndClockGrandmasterChangeForClock:(id)arg1 ;
-(unsigned long long)controllerEntityID;
-(char)AECPDidReceiveResponse:(id)arg1 onInterface:(id)arg2 ;
-(char)AECPDidReceiveCommand:(id)arg1 onInterface:(id)arg2 ;
-(unsigned long long)allocateControllerEntityID;
-(NSObject*<OS_dispatch_queue>)entityAccessQueue;
-(void)removedEntity:(id)arg1 onInterface:(id)arg2 ;
-(void)didRemoveInterface:(id)arg1 ;
-(void)setAllocatedControllerEntityID:(char)arg1 ;
-(id)_entityForEntityID:(unsigned long long)arg1 ;
-(id)entityForEntityID:(unsigned long long)arg1 ;
-(void)updatedEntity:(id)arg1 onInterface:(id)arg2 ;
-(Class)entityClassForEntity:(id)arg1 ;
-(void)addedEntity:(id)arg1 onInterface:(id)arg2 ;
-(void)didAddRemoteEntity:(id)arg1 on17221EntityDiscovery:(id)arg2 ;
-(void)didRemoveRemoteEntity:(id)arg1 on17221EntityDiscovery:(id)arg2 ;
-(void)didAddLocalEntity:(id)arg1 on17221EntityDiscovery:(id)arg2 ;
-(void)didAcquireEntity:(id)arg1 withFlags:(unsigned)arg2 byOwner:(unsigned long long)arg3 forTargetEntityID:(unsigned long long)arg4 ;
-(void)controllerRequestToChangeEntity:(id)arg1 toConfiguration:(unsigned short)arg2 forTargetEntityID:(unsigned long long)arg3 ;
-(void)didChangeEntity:(id)arg1 toConfiguration:(unsigned short)arg2 forTargetEntityID:(unsigned long long)arg3 ;
-(void)controllerRequestToChangeEntity:(id)arg1 descriptorOfType:(unsigned short)arg2 withIndex:(unsigned short)arg3 toStreamFormat:(id)arg4 forTargetEntityID:(unsigned long long)arg5 ;
-(void)didChangeEntity:(id)arg1 descriptorOfType:(unsigned short)arg2 withIndex:(unsigned short)arg3 toStreamFormat:(id)arg4 forTargetEntityID:(unsigned long long)arg5 ;
-(void)controllerRequestToChangeEntity:(id)arg1 setVideoClusterWithIndex:(unsigned short)arg2 toFormatSpecific:(id)arg3 aspectRatio:(id)arg4 colorSpace:(unsigned short)arg5 andFrameSize:(id)arg6 forTargetEntityID:(unsigned long long)arg7 ;
-(void)didChangeEntity:(id)arg1 setVideoClusterWithIndex:(unsigned short)arg2 toFormatSpecific:(id)arg3 aspectRatio:(id)arg4 colorSpace:(unsigned short)arg5 andFrameSize:(id)arg6 forTargetEntityID:(unsigned long long)arg7 ;
-(void)controllerRequestToChangeEntity:(id)arg1 descriptorOfType:(unsigned short)arg2 withIndex:(unsigned short)arg3 configurationIndex:(unsigned short)arg4 nameIndex:(unsigned short)arg5 toName:(id)arg6 forTargetEntityID:(unsigned long long)arg7 ;
-(void)didChangeEntity:(id)arg1 descriptorOfType:(unsigned short)arg2 withIndex:(unsigned short)arg3 configurationIndex:(unsigned short)arg4 nameIndex:(unsigned short)arg5 toName:(id)arg6 forTargetEntityID:(unsigned long long)arg7 ;
-(void)controllerRequestToChangeEntity:(id)arg1 toAssociationID:(unsigned long long)arg2 forTargetEntityID:(unsigned long long)arg3 ;
-(void)didChangeEntity:(id)arg1 toAssociationID:(unsigned long long)arg2 forTargetEntityID:(unsigned long long)arg3 ;
-(void)controllerRequestToChangeEntity:(id)arg1 audioUnitWithIndex:(unsigned short)arg2 toSamplingRate:(id)arg3 forTargetEntityID:(unsigned long long)arg4 ;
-(void)controllerRequestToChangeEntity:(id)arg1 videoClusterWithIndex:(unsigned short)arg2 toSamplingRate:(id)arg3 forTargetEntityID:(unsigned long long)arg4 ;
-(void)controllerRequestToChangeEntity:(id)arg1 sensorClusterWithIndex:(unsigned short)arg2 toSamplingRate:(id)arg3 forTargetEntityID:(unsigned long long)arg4 ;
-(void)didChangeEntity:(id)arg1 audioUnitWithIndex:(unsigned short)arg2 toSamplingRate:(id)arg3 forTargetEntityID:(unsigned long long)arg4 ;
-(void)didChangeEntity:(id)arg1 videoClusterWithIndex:(unsigned short)arg2 toSamplingRate:(id)arg3 forTargetEntityID:(unsigned long long)arg4 ;
-(void)didChangeEntity:(id)arg1 sensorClusterWithIndex:(unsigned short)arg2 toSamplingRate:(id)arg3 forTargetEntityID:(unsigned long long)arg4 ;
-(void)controllerRequestToChangeEntity:(id)arg1 clockDomainWithIndex:(unsigned short)arg2 toClockSourceWithIndex:(unsigned short)arg3 forTargetEntityID:(unsigned long long)arg4 ;
-(void)didChangeEntity:(id)arg1 clockDomainWithIndex:(unsigned short)arg2 toClockSourceWithIndex:(unsigned short)arg3 forTargetEntityID:(unsigned long long)arg4 ;
-(void)controllerRequestToChangeEntity:(id)arg1 controlWithIndex:(unsigned short)arg2 toValue:(id)arg3 forTargetEntityID:(unsigned long long)arg4 ;
-(void)didChangeEntity:(id)arg1 controlWithIndex:(unsigned short)arg2 toValue:(id)arg3 forTargetEntityID:(unsigned long long)arg4 ;
-(char)handleAcquireEntityUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(char)handleUnexpectedUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(char)handleSetConfigurationUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(char)handleSetStreamFormatUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(char)handleSetVideoFormatUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(char)handleSetSensorFormatUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(char)handleSetStreamInfoUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(char)handleSetNameUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(char)handleSetAssociationIDUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(char)handleSetSamplingRateUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(char)handleSetClockSourceUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(char)handleSetControlUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(char)handleGetControlUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(char)handleIncrementControlUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(char)handleDecrementControlUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(char)handleSetSignalSelectorUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(char)handleSetMixerUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(char)handleSetMatrixUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(char)handleStartStreamingUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(char)handleStopStreamingUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(char)handleIdentifyUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(char)handleGetAVBInfoUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(char)handleGetASPathUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(char)handleRebootUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(char)handleAddAudioMappingUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(char)handleRemoveAudioMappingUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(char)handleAddVideoMappingUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(char)handleRemoveVideoMappingUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(char)handleAddSensorMappingUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(char)handleRemoveSensorMappingUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(char)handleOperationStatusUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(char)handleSetMemoryObjectLengthUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(char)handleSetStreamBackupUnsolicitedResponse:(id)arg1 forEntity:(id)arg2 ;
-(void)didRediscoverRemoteEntity:(id)arg1 on17221EntityDiscovery:(id)arg2 ;
-(void)didUpdateRemoteEntity:(id)arg1 changedProperties:(unsigned long long)arg2 on17221EntityDiscovery:(id)arg3 ;
-(void)didRemoveLocalEntity:(id)arg1 on17221EntityDiscovery:(id)arg2 ;
-(void)didRediscoverLocalEntity:(id)arg1 on17221EntityDiscovery:(id)arg2 ;
-(void)didUpdateLocalEntity:(id)arg1 changedProperties:(unsigned long long)arg2 on17221EntityDiscovery:(id)arg3 ;
-(void)didAddInterface:(id)arg1 ;
-(char)acquireEntityWithEntityID:(unsigned long long)arg1 ;
-(char)releaseEntityWithEntityID:(unsigned long long)arg1 ;
-(void)didAddEntityDiscovery:(id)arg1 onInterface:(id)arg2 ;
-(void)didRemoveEntityDiscovery:(id)arg1 onInterface:(id)arg2 ;
-(void)didAddAECP:(id)arg1 onInterface:(id)arg2 ;
-(void)didRemoveAECP:(id)arg1 onInterface:(id)arg2 ;
-(char)allocatedControllerEntityID;
@end
