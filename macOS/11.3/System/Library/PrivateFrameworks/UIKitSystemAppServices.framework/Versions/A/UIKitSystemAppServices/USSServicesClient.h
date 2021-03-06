/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIKitSystemAppServices.framework/Versions/A/UIKitSystemAppServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitSystemAppServices/UIKitSystemAppServices-Structs.h>
@class FBSWorkspace, FBSScene, NSMutableDictionary;

@interface USSServicesClient : NSObject {

	FBSWorkspace* _workspace;
	FBSScene* _lock_defaultScene;
	NSMutableDictionary* _lock_scenesByID;
	NSMutableDictionary* _lock_scenesByPersistenceID;
	os_unfair_lock_s _lock;
	CGSize _defaultSceneSize;

}

@property (assign,nonatomic) CGSize defaultSceneSize;              //@synthesize defaultSceneSize=_defaultSceneSize - In the implementation block
+(id)sharedInstance;
-(id)_init;
-(void)connect;
-(void)_noteSceneWillDisconnect:(id)arg1 ;
-(void)_noteSceneDidConnect:(id)arg1 ;
-(id)sceneForIdentifier:(id)arg1 ;
-(void)createNewSceneWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateSceneWithID:(id)arg1 withUpdater:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_defaultScene;
-(void)waitForServerToBeReady;
-(void)createNewSceneOfSize:(CGSize)arg1 background:(char)arg2 persistenceIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)forgetPersistentScenesWithIdentifiers:(id)arg1 ;
-(void)submitSceneResizeRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)submitSceneActiveRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)submitOpenURLRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)submitActivityContinuationRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)submitUserNotificationResponseRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)submitBackgroundLaunchRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned)hostingContextIDForSceneWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)submitEnableApplicationAccessibilityRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CGSize)defaultSceneSize;
-(void)setDefaultSceneSize:(CGSize)arg1 ;
@end

