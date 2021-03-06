/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNEventHandler.h>

@class SCNNode;

@interface SCNCameraControlEventHandler : SCNEventHandler {

	SCNNode* _freeViewCameraNode;
	CGPoint _initialPoint;
	C3DMatrix4x4 _initialMatrix;
	float _initialZoom;
	float _originalFovX;
	float _originalFovY;
	float _originalOrthoScale;
	float _zoomFactor;
	 _clickOrigin;
	char _stickyMove;
	CGPoint _stickyDirection;
	unsigned long long _currentStickyAxis;
	CGPoint _lastDragLocation;
	double _lastDragTime;
	unsigned long long _stickyAxis;
	C3DSphere _viewedObjectSphere;
	unsigned _isViewedObjectSphereComputed : 1;
	os_unfair_lock_s _stateLock;
	unsigned _enabled : 1;
	unsigned _hasAutomaticCameraTarget : 1;
	unsigned _automaticCameraTargetUpToDate : 1;
	unsigned _inertia : 1;
	unsigned _didEverFocusNode : 1;
	unsigned _allowsTranslation : 1;
	unsigned _pinchShouldMoveCamera : 1;
	unsigned _alternateMode : 1;
	unsigned _upDirIsSet : 1;
	unsigned _gimbalLockMode : 1;
	unsigned _inertiaRunning : 1;
	long long _browseMode;
	 _upDir;
	SCNVector3 _cameraTarget;
	SCNVector3 _autoCameraTarget;
	float _browseScaleFactor;
	double _friction;
	CGPoint _totalDragWithInertia;
	CGPoint _inertiaVelocity;
	double _lastSimulationTime;

}

@property (assign) char gimbalLockMode; 
@property (assign) SCNVector3 gimbalLockVector; 
@property (assign) unsigned long long stickyAxis; 
@property (assign) char enableInertia; 
@property (assign) double friction; 
@property (assign) char allowsTranslation; 
@property (assign) char automaticCameraTarget; 
@property (assign) SCNVector3 cameraTarget; 
+(2)frontVectorWithPointOfView:(id)arg1 ;
+(CATransform3D)matrixWithNoRoll:(CATransform3D)arg1 ;
-(void)dealloc;
-(id)init;
-(char)enabled;
-(void)setEnabled:(char)arg1 ;
-(char)mouseDown:(id)arg1 ;
-(char)keyDown:(id)arg1 ;
-(char)scrollWheel:(id)arg1 ;
-(char)mouseDragged:(id)arg1 ;
-(char)mouseUp:(id)arg1 ;
-(char)magnifyWithEvent:(id)arg1 ;
-(char)keyUp:(id)arg1 ;
-(char)flagsChanged:(id)arg1 ;
-(char)rotateWithEvent:(id)arg1 ;
-(double)zoomFactor;
-(void)setFriction:(double)arg1 ;
-(double)friction;
-(void)setZoomFactor:(double)arg1 ;
-(char)wantsRedraw;
-(void)cameraWillChange;
-(void)cameraDidChange;
-(void)setEnableInertia:(char)arg1 ;
-(void)rotateOf:(double)arg1 ;
-(void)sceneWillChange;
-(void)sceneDidChange;
-(char)_freeCameraActivated;
-(C3DSphereRef)viewedObjectSphere;
-(void)_switchToFreeViewCamera;
-(void)zoomBy:(float)arg1 animate:(char)arg2 ;
-(float)_translationCoef;
-(void)_resetFreeViewCamera;
-(void)_rotateWithDrag:(CGPoint)arg1 mode:(long long)arg2 stickyAxis:(unsigned long long)arg3 ;
-(void)_onInertiaTimer;
-(void)endDraggingWithVelocity:(CGPoint)arg1 ;
-(1)frontVector;
-(SCNVector3)cameraTarget;
-(SCNVector3)gimbalLockVector;
-(float)_scrollWheelMultiplier;
-(void)translateByX:(float)arg1 Y:(float)arg2 Z:(float)arg3 ;
-(void)_beginTranslateAtLocation:(CGPoint)arg1 ;
-(void)_startBrowsingIfNeeded:(CGPoint)arg1 ;
-(void)_computeStickyAxisIfNeeded:(CGPoint)arg1 ;
-(void)_didDragTo:(CGPoint)arg1 ;
-(void)_translateTo:(CGPoint)arg1 ;
-(void)endDragging;
-(char)enableInertia;
-(char)gimbalLockMode;
-(void)setGimbalLockMode:(char)arg1 ;
-(void)setGimbalLockVector:(SCNVector3)arg1 ;
-(char)automaticCameraTarget;
-(void)setAutomaticCameraTarget:(char)arg1 ;
-(void)setCameraTarget:(SCNVector3)arg1 ;
-(void)zoomBy:(float)arg1 ;
-(void)invalidateCameraTarget;
-(void)_prepareFreeViewCamera;
-(void)_installFreeViewCameraIfNeeded;
-(char)allowsTranslation;
-(void)setAllowsTranslation:(char)arg1 ;
-(void)viewWillDrawAtTime:(double)arg1 ;
-(void)activateFreeCamera;
-(void)setEnableFreeCamera:(char)arg1 ;
-(id)freeCamera;
-(void)focusNode:(id)arg1 ;
-(unsigned long long)stickyAxis;
-(void)setStickyAxis:(unsigned long long)arg1 ;
-(SCNVector3)cameraAutomaticTargetPoint;
-(void)_setInertiaRunning:(char)arg1 ;
-(void)clearRoll;
-(double)_browseScale;
-(void)updateBrowseScaleFactor;
-(void)computeAutomaticTargetPoint;
-(void)_resetBrowseScaleFactor;
-(char)_isInertiaRunning;
-(char)_3DConnexionIsPressed;
-(char)computeBoundingSphereOmittingFloorsForNode:(C3DNodeRef)arg1 sphere:(C3DSphereRef)arg2 ;
-(void)rotateWithVector:(long long)arg1 ;
@end

