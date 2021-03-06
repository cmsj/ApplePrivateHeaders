/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/SCNEventHandler.h>
#import <libobjc.A.dylib/SCNCameraControllerDelegate.h>

@protocol SCNCameraNavigationControllerDelegate;
@class SCNNode, SCNView, SCNCameraController, NSString;

@interface SCNCameraNavigationController : NSObject <SCNEventHandler, SCNCameraControllerDelegate> {

	long long _browseMode;
	float _cameraOriginalFieldOfView;
	float _fieldOfViewZoomFactor;
	float _originalOrthoScale;
	float _orthographicZoomFactor;
	BOOL _enabled;
	BOOL _translationAllowed;
	BOOL _didEverFocusNode;
	BOOL _isSceneBoundingSphereComputed;
	BOOL _cameraTargetComputed;
	BOOL _pinchShouldMoveCamera;
	BOOL _shouldUpdateTarget;
	BOOL _shouldIgnoreMomentumEvents;
	BOOL _isOrbiting;
	BOOL _recordingPointOfViewEvents;
	BOOL _mouseDown;
	SCD_Union_SC32 _sceneBoundingSphere;
	 _translationOrigin;
	float _initialZoom;
	 _initialPointOfViewWorldPosition;
	double _lastKeyInputTime;
	double _flyModeVelocity;
	double _panSensitivity;
	double _truckSensitivity;
	double _rotationSensitivity;
	CGPoint _initialInputLocation;
	CGPoint _lastInputLocation;
	CGPoint _accumulatedDrag;
	double _lastRotationAngle;
	os_unfair_lock_s _drawAtTimeLock;
	SCD_Struct_SC35 _stickyAxis;
	SCD_Struct_SC36 _target;
	SCD_Struct_SC37 _inertia;
	SCD_Struct_SC45* _keyboard;
	SCD_Struct_SC36 _scrollWheelModifiers;
	char _enableFreeCamera;
	char _autoSwitchToFreeCamera;
	SCNCameraController* _cameraController;
	id<SCNCameraNavigationControllerDelegate> _delegate;
	SCNView* _view;
	SCNNode* _freeViewCameraNode;

}

@property (nonatomic,readonly) SCNCameraController * cameraController;                        //@synthesize cameraController=_cameraController - In the implementation block
@property (assign,nonatomic) id<SCNCameraNavigationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long stickyAxis; 
@property (assign,nonatomic) SCNVector3 cameraTarget; 
@property (assign,nonatomic) char gimbalLockMode; 
@property (assign,nonatomic) char enableInertia; 
@property (assign,nonatomic) double friction; 
@property (assign,nonatomic) char automaticCameraTarget; 
@property (assign,nonatomic) char enabled; 
@property (assign,nonatomic) char enableFreeCamera;                                           //@synthesize enableFreeCamera=_enableFreeCamera - In the implementation block
@property (nonatomic,readonly) SCNNode * freeCamera;                                          //@synthesize freeViewCameraNode=_freeViewCameraNode - In the implementation block
@property (assign,nonatomic) SCNView * view;                                                  //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) char autoSwitchToFreeCamera;                                     //@synthesize autoSwitchToFreeCamera=_autoSwitchToFreeCamera - In the implementation block
@property (assign,nonatomic) char allowsTranslation; 
@property (assign,nonatomic) double flyModeVelocity;                                          //@synthesize flyModeVelocity=_flyModeVelocity - In the implementation block
@property (assign,nonatomic) double panSensitivity;                                           //@synthesize panSensitivity=_panSensitivity - In the implementation block
@property (assign,nonatomic) double truckSensitivity;                                         //@synthesize truckSensitivity=_truckSensitivity - In the implementation block
@property (assign,nonatomic) double rotationSensitivity;                                      //@synthesize rotationSensitivity=_rotationSensitivity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<SCNCameraNavigationControllerDelegate>)delegate;
-(void)setDelegate:(id<SCNCameraNavigationControllerDelegate>)arg1 ;
-(char)enabled;
-(void)setEnabled:(char)arg1 ;
-(SCNView *)view;
-(void)setView:(SCNView *)arg1 ;
-(char)mouseDown:(id)arg1 ;
-(char)mouseMoved:(id)arg1 ;
-(char)keyDown:(id)arg1 ;
-(void)resignFirstResponder;
-(void)becomeFirstResponder;
-(char)scrollWheel:(id)arg1 ;
-(char)mouseDragged:(id)arg1 ;
-(char)mouseUp:(id)arg1 ;
-(char)magnifyWithEvent:(id)arg1 ;
-(char)keyUp:(id)arg1 ;
-(char)flagsChanged:(id)arg1 ;
-(id)initWithView:(id)arg1 ;
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
-(id)pointOfView;
-(void)sceneWillChange;
-(void)sceneDidChange;
-(char)_freeCameraActivated;
-(void)_switchToFreeViewCamera;
-(void)zoomBy:(float)arg1 animate:(char)arg2 ;
-(float)_translationCoef;
-(void)_resetFreeViewCamera;
-(SCNVector3)cameraTarget;
-(SCNVector3)gimbalLockVector;
-(float)_scrollWheelMultiplier;
-(void)translateByX:(float)arg1 Y:(float)arg2 Z:(float)arg3 ;
-(void)_startBrowsingIfNeeded:(CGPoint)arg1 ;
-(void)_computeStickyAxisIfNeeded:(CGPoint)arg1 ;
-(char)enableInertia;
-(char)gimbalLockMode;
-(void)setGimbalLockMode:(char)arg1 ;
-(void)setGimbalLockVector:(SCNVector3)arg1 ;
-(char)automaticCameraTarget;
-(void)setAutomaticCameraTarget:(char)arg1 ;
-(void)setCameraTarget:(SCNVector3)arg1 ;
-(void)zoomBy:(float)arg1 ;
-(void)setKeyCodeConfiguration:(id)arg1 ;
-(SCNCameraController *)cameraController;
-(void)invalidateCameraTarget;
-(void)_computeAutomaticTargetPointIfNeeded;
-(void)focusNodes:(id)arg1 ;
-(BOOL)_pointOfViewUsesOrthographicProjection;
-(float)_pointOfViewOrthographicScale;
-(void)_prepareFreeViewCamera;
-(char)enableFreeCamera;
-(void)_installFreeViewCameraIfNeeded;
-(float)_targetDistance;
-(char)autoSwitchToFreeCamera;
-(float)_orthographicScaleForZoomFactor:(float)arg1 ;
-(/*function pointer*/void*)_sceneBoundingSphere;
-(float)_orthographicZoomFactorForProposedZoomFactor:(float)arg1 ;
-(void)_setPointOfViewOrthographicScale:(float)arg1 ;
-(float)_cappedTranslationDelta:(float)arg1 ;
-(void)__didChangePointOfView;
-(2)_defaultTargetForScene:(id)arg1 ;
-(void)_stopInertia;
-(void)_setupUpVector;
-(char)isHandlingKeyboard;
-(void)__willChangePointOfView;
-(char)updateKeyboardStateAndRedrawIfNeeded:(id)arg1 ;
-(void)_willBeginInteraction;
-(void)_computeTranslationOrigin3DFromPoint:(CGPoint)arg1 ;
-(unsigned long long)_effectiveStickyAxis;
-(void)_translateToViewPoint:(CGPoint)arg1 ;
-(double)_modeSensitivity;
-(CGPoint)viewportMousePosition;
-(double)panSensitivity;
-(double)truckSensitivity;
-(double)rotationSensitivity;
-(1)worldFront;
-(void)setAutoSwitchToFreeCamera:(char)arg1 ;
-(char)allowsTranslation;
-(void)setAllowsTranslation:(char)arg1 ;
-(double)flyModeVelocity;
-(void)setFlyModeVelocity:(double)arg1 ;
-(void)setPanSensitivity:(double)arg1 ;
-(void)setTruckSensitivity:(double)arg1 ;
-(void)setRotationSensitivity:(double)arg1 ;
-(void)viewWillDrawAtTime:(double)arg1 ;
-(void)viewDidDrawAtTime:(double)arg1 ;
-(void)activateFreeCamera;
-(void)setEnableFreeCamera:(char)arg1 ;
-(SCNNode *)freeCamera;
-(void)cameraInertiaWillStartForController:(id)arg1 ;
-(void)cameraInertiaDidEndForController:(id)arg1 ;
-(void)focusNode:(id)arg1 ;
-(unsigned long long)stickyAxis;
-(void)setStickyAxis:(unsigned long long)arg1 ;
-(SCNVector3)cameraAutomaticTargetPoint;
-(char)_computeBoundingSphereOmittingFloorsForNode:(C3DNodeRef)arg1 sphere:(C3DSphereRef)arg2 ;
@end

