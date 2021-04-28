/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/Versions/A/PassKitUIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
@class NSCache, SCNMaterial, NSObject, NSMutableArray;

@interface PKPeerPayment3DStore : NSObject {

	NSCache* _cache;
	SCNMaterial* _textMaterial;
	NSObject*<OS_dispatch_queue> _scenesQueue;
	NSObject*<OS_dispatch_queue> _sceneLoadingQueue;
	NSMutableArray* _activeScenes;
	SCD_Struct_PK0 _rotationMatrix;
	 _skew;
	 _lastRollPitch;
	SCD_Struct_PK0 _staticRotationMatrix;
	 _staticSkew;

}
+(id)sharedInstance;
-(id)init;
-(id)material;
-(void)sceneDidBecomeActive:(id)arg1 ;
-(void)newSceneWithCompletion:(/*^block*/id)arg1 synchronously:(char)arg2 ;
-(void)relinquishScene:(id)arg1 ;
-(void)charactersForText:(id)arg1 completion:(/*^block*/id)arg2 synchronously:(char)arg3 ;
-(id)nodeForCharacter:(id)arg1 ;
-(void)sceneDidBecomeInactive:(id)arg1 ;
-(void)setRollPitch:;
@end
