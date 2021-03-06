/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <libobjc.A.dylib/AMRemoteActionVariableDelegateXPCProtocol.h>

@protocol AMVariableControllerProtocol;
@class AMRemoteAction;

@interface AMRemoteActionVariableDelegate : NSObject <AMRemoteActionVariableDelegateXPCProtocol> {

	char __registeredForNotifications;
	os_unfair_lock_s __lock;
	id<AMVariableControllerProtocol> __localVariableController;
	AMRemoteAction* __remoteAction;

}

@property (assign,nonatomic,__weak) AMRemoteAction * _remoteAction;                                                                             //@synthesize _remoteAction=__remoteAction - In the implementation block
@property (assign,setter=_setRegisteredForNotifications:,nonatomic) char _registeredForNotifications;                                           //@synthesize _registeredForNotifications=__registeredForNotifications - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s _lock;                                                                                            //@synthesize _lock=__lock - In the implementation block
@property (assign,setter=_setLocalVariableController:,nonatomic,__weak) id<AMVariableControllerProtocol> _localVariableController;              //@synthesize _localVariableController=__localVariableController - In the implementation block
@property (__weak) id<AMVariableControllerProtocol> localVariableController; 
-(void)dealloc;
-(void)invalidate;
-(os_unfair_lock_s)_lock;
-(void)start;
-(char)_registeredForNotifications;
-(void)_setRegisteredForNotifications:(char)arg1 ;
-(void)set_lock:(os_unfair_lock_s)arg1 ;
-(void)remoteActionEditVariable:(id)arg1 clickedPoint:(id)arg2 controlFrame:(id)arg3 isTokenField:(id)arg4 ;
-(void)remoteActionAddVariable:(id)arg1 newVariableUUID:(id)arg2 ;
-(void)remoteActionRenameVariable:(id)arg1 name:(id)arg2 ;
-(void)remoteActionUpdateValue:(id)arg1 ofVariable:(id)arg2 ;
-(void)setLocalVariableController:(id<AMVariableControllerProtocol>)arg1 ;
-(AMRemoteAction *)_remoteAction;
-(void)variableChangedNotification:(id)arg1 ;
-(void)variableAddedNotification:(id)arg1 ;
-(void)variableRemovedNotification:(id)arg1 ;
-(void)set_remoteAction:(AMRemoteAction *)arg1 ;
-(void)_setLocalVariableController:(id)arg1 ;
-(id<AMVariableControllerProtocol>)_localVariableController;
-(id)_localVariableForXPCVariable:(id)arg1 ;
-(void)_variablesUpdated;
-(id)initWithLocalVariablesController:(id)arg1 remoteAction:(id)arg2 ;
-(id<AMVariableControllerProtocol>)localVariableController;
@end

