/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_MPStateDumpPropertyListTransformable.h>

@protocol OS_dispatch_queue, MPRemoteCommandDelegate_Internal, MPRemoteCommandDelegate_Private;
@class NSObject, NSMutableDictionary, NSString;

@interface MPRemoteCommand : NSObject <_MPStateDumpPropertyListTransformable> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _handlers;
	char _enabled;
	char _observing;
	char _skipSerializedEventDelivery;
	unsigned _mediaRemoteCommandType;
	id<MPRemoteCommandDelegate_Internal> _commandCenterDelegate;
	id<MPRemoteCommandDelegate_Private> _delegate;

}

@property (assign,nonatomic,__weak) id<MPRemoteCommandDelegate_Internal> commandCenterDelegate;              //@synthesize commandCenterDelegate=_commandCenterDelegate - In the implementation block
@property (assign,getter=isObserving,nonatomic) char observing;                                              //@synthesize observing=_observing - In the implementation block
@property (nonatomic,readonly) char hasTargets; 
@property (getter=isSupported,nonatomic,readonly) char supported; 
@property (getter=isSupportedAndEnabled,nonatomic,readonly) char supportedAndEnabled; 
@property (nonatomic,readonly) unsigned mediaRemoteCommandType;                                              //@synthesize mediaRemoteCommandType=_mediaRemoteCommandType - In the implementation block
@property (assign,nonatomic,__weak) id<MPRemoteCommandDelegate_Private> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char skipSerializedEventDelivery;                                               //@synthesize skipSerializedEventDelivery=_skipSerializedEventDelivery - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled;                                                  //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id<MPRemoteCommandDelegate_Private>)delegate;
-(void)setDelegate:(id<MPRemoteCommandDelegate_Private>)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
-(char)isSupported;
-(void)setObserving:(char)arg1 ;
-(char)isObserving;
-(char)isSupportedAndEnabled;
-(id)_stateDumpObject;
-(unsigned)mediaRemoteCommandType;
-(id)initWithMediaRemoteCommandType:(unsigned)arg1 ;
-(char)isSupportedForContentItemIdentifier:(id)arg1 ;
-(char)isEnabledForContentItemIdentifier:(id)arg1 ;
-(void)removeTarget:(id)arg1 ;
-(id)addTargetWithHandler:(/*^block*/id)arg1 ;
-(char)hasTargets;
-(void)invokeCommandWithEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void*)createCommandInfoRepresentation;
-(void)notifyPropagatablePropertyChanged;
-(id)newCommandEvent;
-(id)newCommandEventWithContentItemIdentifier:(id)arg1 ;
-(id)newCommandEventWithPlaybackQueueOffset:(long long)arg1 ;
-(id)newCommandEventWithCommandType:(unsigned)arg1 options:(id)arg2 ;
-(id)newSeekCommandEventWithType:(unsigned long long)arg1 ;
-(id)_mediaRemoteCommandInfoOptions;
-(id<MPRemoteCommandDelegate_Internal>)commandCenterDelegate;
-(void)setCommandCenterDelegate:(id<MPRemoteCommandDelegate_Internal>)arg1 ;
-(char)skipSerializedEventDelivery;
-(void)setSkipSerializedEventDelivery:(char)arg1 ;
@end

