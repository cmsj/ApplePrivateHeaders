/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/Versions/A/AudioToolboxCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
@class NSString, NSViewController, AUParameterTree, NSMutableArray, NSExtension, NSUUID, NSXPCConnection, NSObject, NSArray, AUAudioUnitPreset, NSURL, AUv3HostIdentifier, AUAudioUnitBusArray, NSDictionary;

@interface AUAudioUnit : NSObject {

	OpaqueAudioComponentRef _component;
	NSString* _componentName;
	unsigned _componentVersion;
	NSViewController* _cachedViewController;
	unsigned _maximumFramesToRender;
	long long _MIDIOutputBufferSizeHint;
	RealtimeState* _realtimeState;
	AUParameterTree* _parameterTree;
	NSMutableArray* _userPresets;
	NSExtension* _extension;
	NSUUID* _requestIdentifier;
	NSXPCConnection* _xpcConnectionToExtension;
	BOOL _isLoadedInProcess;
	NSObject*<OS_dispatch_queue> _presetMonitoringQueue;
	NSObject*<OS_dispatch_source> _presetFolderWatcher;
	char _renderResourcesAllocated;
	char _allParameterValues;
	char _supportsUserPresets;
	char _shouldBypassEffect;
	char _canProcessInPlace;
	char _renderingOffline;
	char _supportsMPE;
	char _requestViewControllerSynchronously;
	NSString* _audioUnitShortName;
	long long _virtualMIDICableCount;
	/*^block*/id _MIDIOutputEventBlock;
	NSArray* _factoryPresets;
	AUAudioUnitPreset* _currentPreset;
	double _latency;
	double _tailTime;
	long long _renderQuality;
	/*^block*/id _musicalContextBlock;
	/*^block*/id _transportStateBlock;
	NSString* _contextName;
	NSArray* _channelMap;
	/*^block*/id _profileChangedBlock;
	NSURL* _iconURL;
	AUv3HostIdentifier* _hostIdentifier;
	AudioComponentDescription _componentDescription;

}

@property (nonatomic,readonly) id internalRenderBlock; 
@property (nonatomic,readonly) id renderContextObserver; 
@property (assign) long long MIDIOutputBufferSizeHint; 
@property (nonatomic,readonly) NSURL * iconURL;                                          //@synthesize iconURL=_iconURL - In the implementation block
@property (nonatomic,retain) AUv3HostIdentifier * hostIdentifier;                        //@synthesize hostIdentifier=_hostIdentifier - In the implementation block
@property (assign) char requestViewControllerSynchronously;                              //@synthesize requestViewControllerSynchronously=_requestViewControllerSynchronously - In the implementation block
@property (readonly) AudioComponentDescription componentDescription;                     //@synthesize componentDescription=_componentDescription - In the implementation block
@property (readonly) OpaqueAudioComponentRef component; 
@property (copy,readonly) NSString * componentName; 
@property (copy,readonly) NSString * audioUnitName; 
@property (copy,readonly) NSString * manufacturerName; 
@property (copy,readonly) NSString * audioUnitShortName;                                 //@synthesize audioUnitShortName=_audioUnitShortName - In the implementation block
@property (readonly) unsigned componentVersion; 
@property (readonly) char renderResourcesAllocated;                                      //@synthesize renderResourcesAllocated=_renderResourcesAllocated - In the implementation block
@property (readonly) AUAudioUnitBusArray * inputBusses; 
@property (readonly) AUAudioUnitBusArray * outputBusses; 
@property (readonly) id renderBlock; 
@property (readonly) id scheduleParameterBlock; 
@property (assign) unsigned maximumFramesToRender; 
@property (retain) AUParameterTree * parameterTree; 
@property (readonly) char allParameterValues;                                            //@synthesize allParameterValues=_allParameterValues - In the implementation block
@property (getter=isMusicDeviceOrEffect,readonly) char musicDeviceOrEffect; 
@property (readonly) long long virtualMIDICableCount;                                    //@synthesize virtualMIDICableCount=_virtualMIDICableCount - In the implementation block
@property (readonly) id scheduleMIDIEventBlock; 
@property (copy,readonly) NSArray * MIDIOutputNames; 
@property (readonly) char providesUserInterface; 
@property (copy) id MIDIOutputEventBlock;                                                //@synthesize MIDIOutputEventBlock=_MIDIOutputEventBlock - In the implementation block
@property (copy) NSDictionary * fullState; 
@property (copy) NSDictionary * fullStateForDocument; 
@property (copy,readonly) NSArray * factoryPresets;                                      //@synthesize factoryPresets=_factoryPresets - In the implementation block
@property (copy,readonly) NSArray * userPresets; 
@property (readonly) char supportsUserPresets;                                           //@synthesize supportsUserPresets=_supportsUserPresets - In the implementation block
@property (readonly) char isLoadedInProcess; 
@property (retain) AUAudioUnitPreset * currentPreset;                                    //@synthesize currentPreset=_currentPreset - In the implementation block
@property (readonly) double latency;                                                     //@synthesize latency=_latency - In the implementation block
@property (readonly) double tailTime;                                                    //@synthesize tailTime=_tailTime - In the implementation block
@property (assign) long long renderQuality;                                              //@synthesize renderQuality=_renderQuality - In the implementation block
@property (assign) char shouldBypassEffect;                                              //@synthesize shouldBypassEffect=_shouldBypassEffect - In the implementation block
@property (readonly) char canProcessInPlace;                                             //@synthesize canProcessInPlace=_canProcessInPlace - In the implementation block
@property (getter=isRenderingOffline) char renderingOffline;                             //@synthesize renderingOffline=_renderingOffline - In the implementation block
@property (copy,readonly) NSArray * channelCapabilities; 
@property (copy) id musicalContextBlock;                                                 //@synthesize musicalContextBlock=_musicalContextBlock - In the implementation block
@property (copy) id transportStateBlock;                                                 //@synthesize transportStateBlock=_transportStateBlock - In the implementation block
@property (copy) NSString * contextName;                                                 //@synthesize contextName=_contextName - In the implementation block
@property (readonly) char supportsMPE;                                                   //@synthesize supportsMPE=_supportsMPE - In the implementation block
@property (copy) NSArray * channelMap;                                                   //@synthesize channelMap=_channelMap - In the implementation block
@property (nonatomic,copy) id profileChangedBlock;                                       //@synthesize profileChangedBlock=_profileChangedBlock - In the implementation block
+(id)__userPresetPath:(id)arg1 error:(id*)arg2 ;
+(id)__presetFromPath:(id)arg1 ;
+(char)_saveUserPreset:(id)arg1 state:(id)arg2 error:(id*)arg3 ;
+(char)_deleteUserPreset:(id)arg1 error:(id*)arg2 ;
+(id)_presetStateFor:(id)arg1 error:(id*)arg2 ;
+(void)_loadUserPresets:(id)arg1 error:(id*)arg2 ;
+(id)_monitorUserPresets:(id)arg1 callback:(/*^block*/id)arg2 ;
+(id)__sanitizeFileName:(id)arg1 ;
+(void)__sanitizePresetNumber:(id)arg1 ;
+(void)instantiateWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)instantiateWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 connectionProvider:(function<NSXPCConnection *(NSUUID *)>*)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)auAudioUnitForAudioUnit:(OpaqueAudioComponentInstanceRef)arg1 ;
+(id)keyPathsForValuesAffectingAllParameterValues;
+(id)audioComponentBundle:(id)arg1 ;
+(void)registerSubclass:(Class)arg1 asComponentDescription:(AudioComponentDescription)arg2 name:(id)arg3 version:(unsigned)arg4 ;
-(void)dealloc;
-(id)init;
-(id)valueForUndefinedKey:(id)arg1 ;
-(NSURL *)iconURL;
-(void)reset;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)startUserPresetFolderMonitoring;
-(OpaqueAudioComponentInstanceRef)audioUnit;
-(AudioComponentDescription)componentDescription;
-(void)requestViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(AUAudioUnitBusArray *)inputBusses;
-(AUAudioUnitBusArray *)outputBusses;
-(void)setMusicalContextBlock:(id)arg1 ;
-(void)setTransportStateBlock:(id)arg1 ;
-(char)allocateRenderResourcesAndReturnError:(id*)arg1 ;
-(void)internalDeallocateRenderResources;
-(id)internalRenderBlock;
-(AUParameterTree *)parameterTree;
-(AUParameterTree *)parameterTree;
-(float)getV2Parameter:(unsigned long long)arg1 sequenceNumber:(unsigned)arg2 ;
-(id)parametersForOverviewWithCount:(long long)arg1 ;
-(id)supportedViewConfigurations:(id)arg1 ;
-(void)selectViewConfiguration:(id)arg1 ;
-(char)providesUserInterface;
-(id)profileStateForCable:(unsigned char)arg1 channel:(unsigned char)arg2 ;
-(char)enableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id*)arg4 ;
-(char)disableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id*)arg4 ;
-(void)setFullState:(NSDictionary *)arg1 ;
-(void)setFullStateForDocument:(NSDictionary *)arg1 ;
-(void)setCurrentPreset:(AUAudioUnitPreset *)arg1 ;
-(char)saveUserPreset:(id)arg1 error:(id*)arg2 ;
-(char)deleteUserPreset:(id)arg1 error:(id*)arg2 ;
-(id)presetStateFor:(id)arg1 error:(id*)arg2 ;
-(NSArray *)userPresets;
-(char)isLoadedInProcess;
-(int)remoteProcessIdentifier;
-(id)_valueForProperty:(id)arg1 error:(id*)arg2 ;
-(void)_setValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(void)setLoadedOutOfProcess;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 error:(id*)arg2 ;
-(void)invalidateAudioUnit;
-(OpaqueAudioComponentRef)component;
-(NSString *)componentName;
-(NSString *)audioUnitName;
-(NSString *)manufacturerName;
-(unsigned)componentVersion;
-(AUEventSchedule*)eventSchedule;
-(AUScheduledParameterRefresher2*)scheduledParameterRefresher;
-(AUv2GetParameterSynchronizer*)auv2GetParameterSynchronizer;
-(id)renderBlock;
-(void)deliverV2Parameters:(const AURenderEvent*)arg1 ;
-(id)scheduleParameterBlock;
-(void)setV2Parameter:(unsigned long long)arg1 value:(float)arg2 bufferOffset:(unsigned)arg3 sequenceNumber:(unsigned)arg4 ;
-(char)isMusicDeviceOrEffect;
-(id)scheduleMIDIEventBlock;
-(NSArray *)MIDIOutputNames;
-(long long)tokenByAddingRenderObserver:(/*^block*/id)arg1 ;
-(void)removeRenderObserver:(long long)arg1 ;
-(void)addRenderObserver:(/*function pointer*/void*)arg1 userData:(void*)arg2 ;
-(void)removeRenderObserver:(/*function pointer*/void*)arg1 userData:(void*)arg2 ;
-(void)deallocateRenderResources;
-(void)setParameterTree:(AUParameterTree *)arg1 ;
-(void)flushEventSchedule;
-(NSArray *)channelCapabilities;
-(NSDictionary *)fullState;
-(NSDictionary *)fullStateForDocument;
-(id)cachedViewController;
-(void)setCachedViewController:(id)arg1 ;
-(void)setMaximumFramesToRender:(unsigned)arg1 ;
-(unsigned)maximumFramesToRender;
-(void)setMIDIOutputBufferSizeHint:(long long)arg1 ;
-(long long)MIDIOutputBufferSizeHint;
-(char)connectToExtension;
-(char)launchExtension;
-(void)tearDownExtension;
-(id)osWorkgroup;
-(char)isSpeechSynthesisProvider;
-(NSString *)audioUnitShortName;
-(char)renderResourcesAllocated;
-(char)allParameterValues;
-(long long)virtualMIDICableCount;
-(id)MIDIOutputEventBlock;
-(void)setMIDIOutputEventBlock:(id)arg1 ;
-(NSArray *)factoryPresets;
-(char)supportsUserPresets;
-(char)supportsUserPresets;
-(AUAudioUnitPreset *)currentPreset;
-(double)latency;
-(double)tailTime;
-(long long)renderQuality;
-(void)setRenderQuality:(long long)arg1 ;
-(char)shouldBypassEffect;
-(void)setShouldBypassEffect:(char)arg1 ;
-(char)canProcessInPlace;
-(char)isRenderingOffline;
-(void)setRenderingOffline:(char)arg1 ;
-(id)musicalContextBlock;
-(id)transportStateBlock;
-(NSString *)contextName;
-(void)setContextName:(NSString *)arg1 ;
-(char)supportsMPE;
-(NSArray *)channelMap;
-(void)setChannelMap:(NSArray *)arg1 ;
-(id)profileChangedBlock;
-(void)setProfileChangedBlock:(id)arg1 ;
-(AUv3HostIdentifier *)hostIdentifier;
-(void)setHostIdentifier:(AUv3HostIdentifier *)arg1 ;
-(char)requestViewControllerSynchronously;
-(void)setRequestViewControllerSynchronously:(char)arg1 ;
-(id)renderContextObserver;
-(char)shouldChangeToFormat:(id)arg1 forBus:(id)arg2 ;
-(void)setRenderResourcesAllocated:(char)arg1 ;
@end

