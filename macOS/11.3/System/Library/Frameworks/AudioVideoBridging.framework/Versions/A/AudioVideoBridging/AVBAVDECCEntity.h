/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/Versions/A/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSMutableArray, AVB17221AEMEntity, AVBInterface, AVB17221Entity, AVBAVDECCController, NSObject;

@interface AVBAVDECCEntity : NSObject {

	char _acquired;
	char _connected;
	char _acquiredByAnotherController;
	int _acquireCount;
	NSMutableArray* _interfaces;
	AVB17221AEMEntity* _entityModel;
	AVBInterface* _activeInterface;
	AVB17221Entity* _activeEntity;
	AVBAVDECCController* _entityController;
	NSObject*<OS_dispatch_queue> _controllerQueue;
	unsigned long long _acquiredControllerEntityID;
	NSObject*<OS_dispatch_queue> _aecpQueue;
	NSObject*<OS_dispatch_semaphore> _aecpLimiter;
	NSObject*<OS_dispatch_queue> _acquireQueue;
	NSObject*<OS_dispatch_queue> _acmpQueue;
	NSObject*<OS_dispatch_semaphore> _acmpLimiter;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> controllerQueue;                     //@synthesize controllerQueue=_controllerQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> aecpQueue;                           //@synthesize aecpQueue=_aecpQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> aecpLimiter;                     //@synthesize aecpLimiter=_aecpLimiter - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> acquireQueue;                        //@synthesize acquireQueue=_acquireQueue - In the implementation block
@property (assign,nonatomic) int acquireCount;                                                 //@synthesize acquireCount=_acquireCount - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> acmpQueue;                           //@synthesize acmpQueue=_acmpQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> acmpLimiter;                     //@synthesize acmpLimiter=_acmpLimiter - In the implementation block
@property (nonatomic,retain) NSMutableArray * interfaces;                                      //@synthesize interfaces=_interfaces - In the implementation block
@property (nonatomic,retain) AVB17221AEMEntity * entityModel;                                  //@synthesize entityModel=_entityModel - In the implementation block
@property (assign,nonatomic,__weak) AVBInterface * activeInterface;                            //@synthesize activeInterface=_activeInterface - In the implementation block
@property (assign,nonatomic,__weak) AVB17221Entity * activeEntity;                             //@synthesize activeEntity=_activeEntity - In the implementation block
@property (assign,nonatomic,__weak) AVBAVDECCController * entityController;                    //@synthesize entityController=_entityController - In the implementation block
@property (assign,getter=isAcquired,nonatomic) char acquired;                                  //@synthesize acquired=_acquired - In the implementation block
@property (assign,getter=isConnected,nonatomic) char connected;                                //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic) char acquiredByAnotherController;                                 //@synthesize acquiredByAnotherController=_acquiredByAnotherController - In the implementation block
@property (assign,nonatomic) unsigned long long acquiredControllerEntityID;                    //@synthesize acquiredControllerEntityID=_acquiredControllerEntityID - In the implementation block
@property (getter=isDirectlyConnected,nonatomic,readonly) char directlyConnected; 
-(id)init;
-(char)isConnected;
-(NSMutableArray *)interfaces;
-(void)setConnected:(char)arg1 ;
-(char)relinquish;
-(char)isAcquired;
-(char)acquire;
-(void)setInterfaces:(NSMutableArray *)arg1 ;
-(void)enumerate;
-(id)entityForInterface:(id)arg1 ;
-(void)removeInterface:(id)arg1 ;
-(AVB17221AEMEntity *)entityModel;
-(char)addEntity:(id)arg1 andInterface:(id)arg2 ;
-(id)initWithEntity:(id)arg1 andInterface:(id)arg2 ;
-(void)setEntityController:(AVBAVDECCController *)arg1 ;
-(AVB17221Entity *)activeEntity;
-(void)setAcquiredByAnotherController:(char)arg1 ;
-(void)setAcquiredControllerEntityID:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)controllerQueue;
-(AVBInterface *)activeInterface;
-(char)makeNextInterfaceActive;
-(void)setActiveInterface:(AVBInterface *)arg1 ;
-(void)setActiveEntity:(AVB17221Entity *)arg1 ;
-(AVBAVDECCController *)entityController;
-(void)setEntityModel:(AVB17221AEMEntity *)arg1 ;
-(NSObject*<OS_dispatch_queue>)acquireQueue;
-(int)acquireCount;
-(void)setAcquired:(char)arg1 ;
-(char)sendAECPMessage:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setAcquireCount:(int)arg1 ;
-(NSObject*<OS_dispatch_queue>)aecpQueue;
-(NSObject*<OS_dispatch_semaphore>)aecpLimiter;
-(void)addressAccessReadAtAddress:(unsigned long long)arg1 ofLength:(unsigned long long)arg2 appendToData:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(char)sendACMPMessage:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)acmpQueue;
-(NSObject*<OS_dispatch_semaphore>)acmpLimiter;
-(/*function pointer*/void**)descriptorFieldsFromAEMResponse:(id)arg1 descriptorLength:(unsigned short)arg2 ;
-(void)logReadDescriptorFailureOfType:(unsigned short)arg1 index:(unsigned short)arg2 configuration:(unsigned short)arg3 withError:(unsigned char)arg4 fromMethodName:(const char*)arg5 ;
-(void)directReadDescriptorOfType:(unsigned short)arg1 withID:(unsigned short)arg2 inConfiguration:(unsigned short)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(char)localInterfaceMatchesRemoteInterfaceObject:(id)arg1 ;
-(char)localInterfaceMatchesRemoteInterfaceDescriptorWithID:(unsigned short)arg1 inConfiguration:(unsigned short)arg2 ;
-(unsigned short)numberOfAVBInterfacesFromConfigurationID:(unsigned short)arg1 ;
-(char)makeFirstInterfaceActive;
-(char)makeInterfaceActive:(id)arg1 ;
-(void)enumerateIfNecessary;
-(char)acquireEntityObjectOfType:(unsigned short)arg1 withIndex:(unsigned short)arg2 andFlags:(unsigned)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(char)entityAvailableWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)registerForUnsolicitedNotificationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)deregisterForUnsolicitedNotificationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)setObjectOfType:(unsigned short)arg1 withIndex:(unsigned short)arg2 inConfiguration:(unsigned short)arg3 toName:(id)arg4 atIndex:(unsigned short)arg5 withCompletionHandler:(/*^block*/id)arg6 ;
-(char)startInputStreamWithIndex:(unsigned short)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)startOutputStreamWithIndex:(unsigned short)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)stopInputStreamWithIndex:(unsigned short)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)stopOutputStreamWithIndex:(unsigned short)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)setAudioUnitWithIndex:(unsigned short)arg1 toSamplingRate:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)setVideoClusterWithIndex:(unsigned short)arg1 toFormatSpecific:(id)arg2 aspectRatio:(id)arg3 videoSize:(id)arg4 andColorSpace:(unsigned short)arg5 withCompletionHandler:(/*^block*/id)arg6 ;
-(char)setVideoClusterWithIndex:(unsigned short)arg1 toFrameRate:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)setClockDomainWithIndex:(unsigned short)arg1 toClockSourceWithIndex:(unsigned short)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)setIdentifyWithIndex:(unsigned short)arg1 toEnabled:(char)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)setInputStreamWithIndex:(unsigned short)arg1 toStreamFormat:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)setOutputStreamWithIndex:(unsigned short)arg1 toStreamFormat:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)setControlWithIndex:(unsigned short)arg1 toValue:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)getControlWithIndex:(unsigned short)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)startOperation:(unsigned short)arg1 onDescriptorOfType:(unsigned short)arg2 andIndex:(unsigned short)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(char)setConfiguration:(unsigned short)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)getConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)getInputStreamInfoWithIndex:(unsigned short)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)getOutputStreamInfoWithIndex:(unsigned short)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)getCountersOfObjectWithType:(unsigned short)arg1 andIndex:(unsigned short)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)readMemoryObject:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(char)getInputStreamStateWithUniqueIndex:(unsigned short)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)getOutputStreamStateWithUniqueIndex:(unsigned short)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)getOutputStreamConnectionWithUniqueIndex:(unsigned short)arg1 andConnectionIndex:(unsigned short)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)_disconnectListenerEntityID:(unsigned long long)arg1 uniqueID:(unsigned short)arg2 fromTalkerEntityID:(unsigned long long)arg3 uniqueID:(unsigned short)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(char)disconnectInputStreamWithUniqueIndex:(unsigned short)arg1 fromTalkerEntityID:(unsigned long long)arg2 uniqueID:(unsigned short)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(char)disconnectOutputStreamWithUniqueIndex:(unsigned short)arg1 fromListenerEntityID:(unsigned long long)arg2 uniqueID:(unsigned short)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(char)_connectListenerEntityID:(unsigned long long)arg1 uniqueID:(unsigned short)arg2 fromTalkerEntityID:(unsigned long long)arg3 uniqueID:(unsigned short)arg4 streamingWait:(char)arg5 classB:(char)arg6 withCompletionHandler:(/*^block*/id)arg7 ;
-(char)connectInputStreamWithUniqueIndex:(unsigned short)arg1 toTalkerEntityID:(unsigned long long)arg2 uniqueID:(unsigned short)arg3 streamingWait:(char)arg4 classB:(char)arg5 withCompletionHandler:(/*^block*/id)arg6 ;
-(char)connectOutputStreamWithUniqueIndex:(unsigned short)arg1 toListenerEntityID:(unsigned long long)arg2 uniqueID:(unsigned short)arg3 streamingWait:(char)arg4 classB:(char)arg5 withCompletionHandler:(/*^block*/id)arg6 ;
-(char)isDirectlyConnected;
-(char)readCurrentConfigurationFromEntityDescriptor:(unsigned short*)arg1 ;
-(char)fetchCurrentConfiguration:(unsigned short*)arg1 ;
-(void)setControllerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)acquiredByAnotherController;
-(unsigned long long)acquiredControllerEntityID;
-(void)setAecpQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAecpLimiter:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setAcquireQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAcmpQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAcmpLimiter:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end

