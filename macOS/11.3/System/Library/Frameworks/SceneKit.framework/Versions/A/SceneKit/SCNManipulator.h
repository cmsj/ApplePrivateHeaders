/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class SCNAuthoringEnvironment, NSOrderedSet, SCNNode, NSMutableIndexSet, SCNBillboardConstraint;

@interface SCNManipulator : NSObject {

	SCNAuthoringEnvironment* _authoringEnvironment;
	NSOrderedSet* _targets;
	SCNNode* _node;
	C3DMatrix4x4 _xAxisToZAxisTransform;
	C3DMatrix4x4 _yAxisToZAxisTransform;
	C3DMatrix4x4 _xyPlaneToYZPlaneTransform;
	C3DMatrix4x4 _xyPlaneToXZPlaneTransform;
	unsigned short _selectedAxis;
	SCD_Union_SC163 _actionData;
	char _isMouseDown;
	char _readonly;
	unsigned long long _lastModifierFlags;
	unsigned short _action;
	CGPoint _originalMouseLocation;
	SCD_Struct_SC164* _originalData;
	unsigned _originalDataCount;
	C3DMatrix4x4 _worldInitialMatrix;
	C3DMatrix4x4 _worldMatrix;
	long long _snapToAlignCount;
	SCD_Struct_SC165* _snapToAlignOnX;
	SCD_Struct_SC165* _snapToAlignOnY;
	SCD_Struct_SC165* _snapToAlignOnZ;
	NSMutableIndexSet* _snapXIndexes;
	NSMutableIndexSet* _snapYIndexes;
	NSMutableIndexSet* _snapZIndexes;
	long long _xAlignment;
	long long _yAlignment;
	long long _zAlignment;
	SCNNode* _planarTranslationHandleXY;
	SCNNode* _planarTranslationHandleYZ;
	SCNNode* _planarTranslationHandleXZ;
	SCNNode* _planarTranslationHandles;
	SCNNode* _axis;
	SCNNode* _arcHandleXY;
	SCNNode* _arcHandleYZ;
	SCNNode* _arcHandleXZ;
	SCNNode* _arcHandles;
	SCNNode* _scaleNode;
	SCNNode* _screenSpaceRotation;
	SCNNode* _highlightNode;
	 _planarTranslationLayout;
	char _layoutLocked;
	SCNNode* _zArrow;
	SCNNode* _rotationHandles;
	SCNNode* _occluder;
	SCNNode* _translateHandles;
	SCNBillboardConstraint* _billboard;
	NSOrderedSet* _cloneSet;
	char _cloning;
	unsigned long long _features;
	char _alternateMode;

}

@property (readonly) SCNAuthoringEnvironment * authoringEnvironment; 
@property (readonly) CATransform3D transform; 
@property (readonly) SCNNode * manipulatorNode; 
@property (nonatomic,retain) NSOrderedSet * targets; 
@property (nonatomic,retain) SCNNode * target; 
@property (assign,nonatomic) long long xAlignment;                                //@synthesize xAlignment=_xAlignment - In the implementation block
@property (assign,nonatomic) long long yAlignment;                                //@synthesize yAlignment=_yAlignment - In the implementation block
@property (assign,nonatomic) long long zAlignment;                                //@synthesize zAlignment=_zAlignment - In the implementation block
@property (assign,nonatomic) char readonly;                                       //@synthesize readonly=_readonly - In the implementation block
@property (assign,nonatomic) unsigned long long features; 
-(id)copy;
-(void)dealloc;
-(id)init;
-(void)setTarget:(SCNNode *)arg1 ;
-(SCNNode *)target;
-(CATransform3D)transform;
-(char)readonly;
-(id)hitTest:(SCD_Struct_SC166)arg1 ;
-(char)mouseDown:(SCD_Struct_SC166)arg1 ;
-(char)mouseMoved:(SCD_Struct_SC166)arg1 ;
-(char)mouseDragged:(SCD_Struct_SC166)arg1 ;
-(char)mouseUp:(SCD_Struct_SC166)arg1 ;
-(char)isDragging;
-(unsigned long long)features;
-(void)setFeatures:(unsigned long long)arg1 ;
-(void)_deleteOriginalData;
-(id)scene;
-(NSOrderedSet *)targets;
-(void)setTargets:(NSOrderedSet *)arg1 ;
-(void)setReadonly:(char)arg1 ;
-(void)updateManipulatorPosition:(C3DEngineContextRef)arg1 ;
-(SCNNode *)manipulatorNode;
-(void)editingSpaceChanged;
-(void)_setAuthoringEnvironment:(id)arg1 ;
-(void)setAlternateMode:(char)arg1 ;
-(void)lockLayout;
-(void)unlockLayout;
-(id)snapGuideIndexesOnAxis:(unsigned long long)arg1 ;
-(const SCD_Struct_SC165*)snapInfoAtIndex:(unsigned long long)arg1 axis:(unsigned long long)arg2 ;
-(SCNAuthoringEnvironment *)authoringEnvironment;
-(void)updateManipulatorNode;
-(void)setupNode;
-(void)updateManipulatorComponents;
-(long long)effectiveEditingSpace;
-(unsigned long long)_effectiveFeatures;
-(void)unhighlightSelectedNode;
-(void)_updateActionWithEvent:(SCD_Struct_SC166)arg1 ;
-(1)_snapPositionToAlign:(SCNVector3)arg1 original:(double)arg2 unit:(BOOL)arg3 axisMove:(BOOL*)arg4 rayStart:(long long*)arg5 ;
-(void)updateItemsPosition;
-(void)updateItemsRotation:;
-(void)updateItemsScale:(float)arg1 ;
-(void)clearSnapIndexes;
-(void)_updateCloneStateWithEvent:(SCD_Struct_SC166)arg1 ;
-(char)_applyWithEvent:(SCD_Struct_SC166)arg1 ;
-(void)_saveOriginalData;
-(void)validateClones;
-(id)setupClones;
-(void)removeClonesFromScene;
-(void)addClonesToScene;
-(void)_prepareSnapToAlignData:(unsigned short)arg1 ;
-(void)prepareSnapToAlignData;
-(void)prepareSnapToAlignDataIfNeeded;
-(long long)xAlignment;
-(void)setXAlignment:(long long)arg1 ;
-(long long)yAlignment;
-(void)setYAlignment:(long long)arg1 ;
-(long long)zAlignment;
-(void)setZAlignment:(long long)arg1 ;
@end
