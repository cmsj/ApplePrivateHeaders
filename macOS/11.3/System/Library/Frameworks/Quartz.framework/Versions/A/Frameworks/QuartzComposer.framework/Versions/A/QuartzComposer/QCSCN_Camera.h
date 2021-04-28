/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <libobjc.A.dylib/QCSCN_Animatable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface QCSCN_Camera : NSObject <QCSCN_Animatable, NSCopying> {

	id _reserved;

}

@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) double xFov; 
@property (assign,nonatomic) double yFov; 
@property (assign,nonatomic) double zNear; 
@property (assign,nonatomic) double zFar; 
@property (assign,nonatomic) char usesOrthographicProjection; 
+(id)camera;
+(char)isSelectorExcludedFromWebScript:(SEL)arg1 ;
+(char)isKeyExcludedFromWebScript:(const char*)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)propertyKeys;
+(id)argumentsForSelector:(SEL)arg1 ;
+(Class)typeForProperty:(id)arg1 ;
+(int)_baseTypeForProperty:(id)arg1 ;
+(id)cameraWithCameraRef:(_C3DCamera*)arg1 ;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(id)animationForKey:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(id)animationKeys;
-(void)removeAllAnimations;
-(void)setAperture:(double)arg1 ;
-(double)aperture;
-(_C3DAnimationTarget*)targetForKey:(id)arg1 ;
-(id)propertyKeys;
-(_C3DScene*)sceneRef;
-(void)_syncObjCModel;
-(id)initWithCameraRef:(_C3DCamera*)arg1 ;
-(void)removeAllAnimationsBeforeDying:(void*)arg1 ;
-(void)_syncObjCAnimations;
-(void)_sceneRefDidChange;
-(_C3DAnimationManager*)animationManager;
-(void)_pauseAnimation:(char)arg1 forKey:(id)arg2 ;
-(void)_syncEntityObjCModel;
-(id)initPresentationCameraWithCameraRef:(_C3DCamera*)arg1 ;
-(_C3DCamera*)cameraRef;
-(double)focalDistance;
-(void)setFocalDistance:(double)arg1 ;
-(double)xFov;
-(void)setXFov:(double)arg1 ;
-(double)yFov;
-(void)setYFov:(double)arg1 ;
-(double)zNear;
-(void)setZNear:(double)arg1 ;
-(double)zFar;
-(void)setZFar:(double)arg1 ;
-(double)xMag;
-(void)setXMag:(double)arg1 ;
-(double)yMag;
-(void)setYMag:(double)arg1 ;
-(char)usesOrthographicProjection;
-(void)setUsesOrthographicProjection:(char)arg1 ;
-(void)addAnimation:(id)arg1 ;
-(void)pauseAnimationForKey:(id)arg1 ;
-(void)resumeAnimationForKey:(id)arg1 ;
-(void)__removeAnimationForKey:(id)arg1 ;
-(id)presentationCamera;
-(void)_registerAsObserver;
-(CATransform3D)projectionTransform;
-(void*)__CFObject;
-(void)setSceneRef:(_C3DScene*)arg1 ;
@end
