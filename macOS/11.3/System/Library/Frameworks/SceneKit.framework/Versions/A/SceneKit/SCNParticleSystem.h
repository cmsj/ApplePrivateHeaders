/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SCNAnimatable.h>

@class NSArray, SCNOrderedDictionary, NSMutableDictionary, NSString, SCNGeometry, NSColor, NSDictionary;

@interface SCNParticleSystem : NSObject <NSCopying, NSSecureCoding, SCNAnimatable> {

	C3DParticleSystemRef _particleSystem;
	unsigned _isPresentationInstance : 1;
	SCNOrderedDictionary* _animations;
	NSMutableDictionary* _bindings;
	NSString* _name;
	double _emissionDuration;
	double _emissionDurationVariation;
	double _idleDuration;
	double _idleDurationVariation;
	double _birthRate;
	double _birthRateVariation;
	double _warmupDuration;
	SCNGeometry* _emitterShape;
	long long _birthLocation;
	long long _birthDirection;
	SCNVector3 _emittingDirection;
	SCNVector3 _orientationDirection;
	SCNVector3 _acceleration;
	double _spreadingAngle;
	char _loops;
	char _isLocal;
	char _affectedByGravity;
	char _affectedByPhysicsFields;
	char _physicsCollisionsEnabled;
	char _lightingEnabled;
	char _softParticlesEnabled;
	char _particleDiesOnCollision;
	char _blackPassEnabled;
	double _particleAngle;
	double _particleAngleVariation;
	double _particleVelocity;
	double _particleVelocityVariation;
	double _particleAngularVelocity;
	double _particleAngularVelocityVariation;
	double _particleLifeSpan;
	double _particleLifeSpanVariation;
	double _particleBounce;
	double _particleBounceVariation;
	double _particleFriction;
	double _particleFrictionVariation;
	double _particleCharge;
	double _particleChargeVariation;
	id _particleImage;
	NSColor* _particleColor;
	SCNVector4 _particleColorVariation;
	SCNParticleSystem* _systemSpawnedOnCollision;
	SCNParticleSystem* _systemSpawnedOnDying;
	SCNParticleSystem* _systemSpawnedOnLiving;
	double _particleSize;
	double _particleSizeVariation;
	double _particleIntensity;
	double _particleIntensityVariation;
	long long _seed;
	long long _blendMode;
	long long _renderingMode;
	long long _orientationMode;
	long long _imageSequenceAnimationMode;
	NSArray* _particleGeometries;
	NSArray* _colliderNodes;
	NSDictionary* _propertyControllers;
	long long _sortingMode;
	double _particleMass;
	double _particleMassVariation;
	double _dampingFactor;
	double _speedFactor;
	double _fixedTimeStep;
	double _stretchFactor;
	double _lightEmissionRadiusFactor;
	double _fresnelExponent;
	unsigned long long _imageSequenceColumnCount;
	unsigned long long _imageSequenceRowCount;
	double _imageSequenceInitialFrame;
	double _imageSequenceInitialFrameVariation;
	double _imageSequenceFrameRate;
	double _imageSequenceFrameRateVariation;
	NSString* _referenceName;

}

@property (assign,nonatomic) double emissionDuration; 
@property (assign,nonatomic) double emissionDurationVariation; 
@property (assign,nonatomic) double idleDuration; 
@property (assign,nonatomic) double idleDurationVariation; 
@property (assign,nonatomic) char loops; 
@property (assign,nonatomic) double birthRate; 
@property (assign,nonatomic) double birthRateVariation; 
@property (assign,nonatomic) double warmupDuration; 
@property (nonatomic,retain) SCNGeometry * emitterShape; 
@property (assign,nonatomic) long long birthLocation; 
@property (assign,nonatomic) long long birthDirection; 
@property (assign,nonatomic) double spreadingAngle; 
@property (assign,nonatomic) SCNVector3 emittingDirection; 
@property (assign,nonatomic) SCNVector3 orientationDirection; 
@property (assign,nonatomic) SCNVector3 acceleration; 
@property (assign,getter=isLocal,nonatomic) char local; 
@property (assign,nonatomic) double particleAngle; 
@property (assign,nonatomic) double particleAngleVariation; 
@property (assign,nonatomic) double particleVelocity; 
@property (assign,nonatomic) double particleVelocityVariation; 
@property (assign,nonatomic) double particleAngularVelocity; 
@property (assign,nonatomic) double particleAngularVelocityVariation; 
@property (assign,nonatomic) double particleLifeSpan; 
@property (assign,nonatomic) double particleLifeSpanVariation; 
@property (nonatomic,retain) SCNParticleSystem * systemSpawnedOnDying; 
@property (nonatomic,retain) SCNParticleSystem * systemSpawnedOnCollision; 
@property (nonatomic,retain) SCNParticleSystem * systemSpawnedOnLiving; 
@property (nonatomic,retain) id particleImage; 
@property (assign,nonatomic) unsigned long long imageSequenceColumnCount; 
@property (assign,nonatomic) unsigned long long imageSequenceRowCount; 
@property (assign,nonatomic) double imageSequenceInitialFrame; 
@property (assign,nonatomic) double imageSequenceInitialFrameVariation; 
@property (assign,nonatomic) double imageSequenceFrameRate; 
@property (assign,nonatomic) double imageSequenceFrameRateVariation; 
@property (assign,nonatomic) long long imageSequenceAnimationMode; 
@property (nonatomic,retain) NSColor * particleColor; 
@property (assign,nonatomic) SCNVector4 particleColorVariation; 
@property (assign,nonatomic) double particleSize; 
@property (assign,nonatomic) double particleSizeVariation; 
@property (assign,nonatomic) double particleIntensity; 
@property (assign,nonatomic) double particleIntensityVariation; 
@property (assign,nonatomic) long long blendMode; 
@property (assign,getter=isBlackPassEnabled,nonatomic) char blackPassEnabled; 
@property (assign,nonatomic) long long orientationMode; 
@property (assign,nonatomic) long long sortingMode; 
@property (assign,getter=isLightingEnabled,nonatomic) char lightingEnabled; 
@property (assign,nonatomic) char affectedByGravity; 
@property (assign,nonatomic) char affectedByPhysicsFields; 
@property (assign,nonatomic) char particleDiesOnCollision; 
@property (nonatomic,copy) NSArray * colliderNodes; 
@property (assign,nonatomic) double particleMass; 
@property (assign,nonatomic) double particleMassVariation; 
@property (assign,nonatomic) double particleBounce; 
@property (assign,nonatomic) double particleBounceVariation; 
@property (assign,nonatomic) double particleFriction; 
@property (assign,nonatomic) double particleFrictionVariation; 
@property (assign,nonatomic) double particleCharge; 
@property (assign,nonatomic) double particleChargeVariation; 
@property (assign,nonatomic) double dampingFactor; 
@property (assign,nonatomic) double speedFactor; 
@property (assign,nonatomic) double stretchFactor; 
@property (assign,nonatomic) double fresnelExponent; 
@property (nonatomic,copy) NSDictionary * propertyControllers; 
@property (readonly) NSArray * animationKeys; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)particleSystem;
+(id)particleSystemNamed:(id)arg1 inDirectory:(id)arg2 ;
+(id)particleSystemWithParticleSystemRef:(C3DParticleSystemRef)arg1 ;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(id)arg1 ;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(void)reset;
-(long long)blendMode;
-(void)setBlendMode:(long long)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(id)presentationInstance;
-(id)animationForKey:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(void)setLoops:(char)arg1 ;
-(char)loops;
-(NSArray *)animationKeys;
-(void)removeAllAnimations;
-(long long)renderingMode;
-(long long)seed;
-(void)setLocal:(char)arg1 ;
-(char)isLocal;
-(short)typeOfProperty:(id)arg1 ;
-(id)scene;
-(void)setRenderingMode:(long long)arg1 ;
-(SCNVector3)acceleration;
-(void)setAcceleration:(SCNVector3)arg1 ;
-(void)setBirthRate:(double)arg1 ;
-(void)setEmitterShape:(SCNGeometry *)arg1 ;
-(void)setSeed:(long long)arg1 ;
-(void)setIsLocal:(char)arg1 ;
-(double)particleSize;
-(void)setParticleSize:(double)arg1 ;
-(C3DSceneRef)sceneRef;
-(void)_syncObjCModel;
-(void)_syncObjCAnimations;
-(C3DAnimationManagerRef)animationManager;
-(void)_syncEntityObjCModel;
-(void)addAnimation:(id)arg1 ;
-(void)pauseAnimationForKey:(id)arg1 ;
-(void)resumeAnimationForKey:(id)arg1 ;
-(const void*)__CFObject;
-(SCNGeometry *)emitterShape;
-(void)addAnimationPlayer:(id)arg1 forKey:(id)arg2 ;
-(id)_scnAnimationForKey:(id)arg1 ;
-(id)animationPlayerForKey:(id)arg1 ;
-(void)_pauseAnimation:(char)arg1 forKey:(id)arg2 pausedByNode:(char)arg3 ;
-(void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2 ;
-(C3DParticleSystemRef)particleSystemRef;
-(void)setParticleColor:(NSColor *)arg1 ;
-(id)particleImage;
-(void)setParticleImage:(id)arg1 ;
-(double)emissionDuration;
-(void)setEmissionDuration:(double)arg1 ;
-(double)emissionDurationVariation;
-(void)setEmissionDurationVariation:(double)arg1 ;
-(double)idleDuration;
-(void)setIdleDuration:(double)arg1 ;
-(double)idleDurationVariation;
-(void)setIdleDurationVariation:(double)arg1 ;
-(double)birthRate;
-(double)birthRateVariation;
-(void)setBirthRateVariation:(double)arg1 ;
-(double)warmupDuration;
-(void)setWarmupDuration:(double)arg1 ;
-(long long)birthLocation;
-(void)setBirthLocation:(long long)arg1 ;
-(long long)birthDirection;
-(void)setBirthDirection:(long long)arg1 ;
-(SCNVector3)emittingDirection;
-(void)setEmittingDirection:(SCNVector3)arg1 ;
-(SCNVector3)orientationDirection;
-(void)setOrientationDirection:(SCNVector3)arg1 ;
-(double)spreadingAngle;
-(void)setSpreadingAngle:(double)arg1 ;
-(char)affectedByGravity;
-(void)setAffectedByGravity:(char)arg1 ;
-(char)affectedByPhysicsFields;
-(void)setAffectedByPhysicsFields:(char)arg1 ;
-(char)physicsCollisionsEnabled;
-(void)setPhysicsCollisionsEnabled:(char)arg1 ;
-(char)isLightingEnabled;
-(void)setLightingEnabled:(char)arg1 ;
-(char)areSoftParticlesEnabled;
-(void)setSoftParticlesEnabled:(char)arg1 ;
-(char)particleDiesOnCollision;
-(void)setParticleDiesOnCollision:(char)arg1 ;
-(char)isBlackPassEnabled;
-(void)setBlackPassEnabled:(char)arg1 ;
-(double)particleAngle;
-(void)setParticleAngle:(double)arg1 ;
-(double)particleAngleVariation;
-(void)setParticleAngleVariation:(double)arg1 ;
-(double)particleVelocity;
-(void)setParticleVelocity:(double)arg1 ;
-(double)particleVelocityVariation;
-(void)setParticleVelocityVariation:(double)arg1 ;
-(double)particleAngularVelocity;
-(void)setParticleAngularVelocity:(double)arg1 ;
-(double)particleAngularVelocityVariation;
-(void)setParticleAngularVelocityVariation:(double)arg1 ;
-(double)particleLifeSpan;
-(void)setParticleLifeSpan:(double)arg1 ;
-(double)particleLifeSpanVariation;
-(void)setParticleLifeSpanVariation:(double)arg1 ;
-(double)particleBounce;
-(void)setParticleBounce:(double)arg1 ;
-(double)particleBounceVariation;
-(void)setParticleBounceVariation:(double)arg1 ;
-(double)particleFriction;
-(void)setParticleFriction:(double)arg1 ;
-(double)particleFrictionVariation;
-(void)setParticleFrictionVariation:(double)arg1 ;
-(double)particleCharge;
-(void)setParticleCharge:(double)arg1 ;
-(double)particleChargeVariation;
-(void)setParticleChargeVariation:(double)arg1 ;
-(NSColor *)particleColor;
-(SCNVector4)particleColorVariation;
-(void)setParticleColorVariation:(SCNVector4)arg1 ;
-(SCNParticleSystem *)systemSpawnedOnCollision;
-(void)setSystemSpawnedOnCollision:(SCNParticleSystem *)arg1 ;
-(SCNParticleSystem *)systemSpawnedOnDying;
-(void)setSystemSpawnedOnDying:(SCNParticleSystem *)arg1 ;
-(SCNParticleSystem *)systemSpawnedOnLiving;
-(void)setSystemSpawnedOnLiving:(SCNParticleSystem *)arg1 ;
-(double)particleSizeVariation;
-(void)setParticleSizeVariation:(double)arg1 ;
-(long long)orientationMode;
-(void)setOrientationMode:(long long)arg1 ;
-(long long)imageSequenceAnimationMode;
-(void)setImageSequenceAnimationMode:(long long)arg1 ;
-(id)particleGeometries;
-(void)setParticleGeometries:(id)arg1 ;
-(NSArray *)colliderNodes;
-(void)setColliderNodes:(NSArray *)arg1 ;
-(NSDictionary *)propertyControllers;
-(void)setPropertyControllers:(NSDictionary *)arg1 ;
-(long long)sortingMode;
-(void)setSortingMode:(long long)arg1 ;
-(double)particleMass;
-(void)setParticleMass:(double)arg1 ;
-(double)particleMassVariation;
-(void)setParticleMassVariation:(double)arg1 ;
-(double)dampingFactor;
-(void)setDampingFactor:(double)arg1 ;
-(double)speedFactor;
-(void)setSpeedFactor:(double)arg1 ;
-(double)fixedTimeStep;
-(void)setFixedTimeStep:(double)arg1 ;
-(double)stretchFactor;
-(void)setStretchFactor:(double)arg1 ;
-(unsigned long long)imageSequenceRowCount;
-(void)setImageSequenceRowCount:(unsigned long long)arg1 ;
-(unsigned long long)imageSequenceColumnCount;
-(void)setImageSequenceColumnCount:(unsigned long long)arg1 ;
-(double)imageSequenceInitialFrame;
-(void)setImageSequenceInitialFrame:(double)arg1 ;
-(double)imageSequenceInitialFrameVariation;
-(void)setImageSequenceInitialFrameVariation:(double)arg1 ;
-(double)imageSequenceFrameRate;
-(void)setImageSequenceFrameRate:(double)arg1 ;
-(double)imageSequenceFrameRateVariation;
-(void)setImageSequenceFrameRateVariation:(double)arg1 ;
-(id)referenceName;
-(void)setReferenceName:(id)arg1 ;
-(void)_copyAnimationsFrom:(id)arg1 ;
-(id)initWithParticleSystemRef:(C3DParticleSystemRef)arg1 ;
-(id)initPresentationSystemWithSystemRef:(C3DParticleSystemRef)arg1 ;
-(void)_updateParticleC3DImage:(id)arg1 ;
-(char)softParticlesEnabled;
-(char)lightingEnabled;
-(char)blackPassEnabled;
-(char)_isAReference;
-(void)_customEncodingOfSCNParticleSystem:(id)arg1 ;
-(void)_customDecodingOfSCNParticleSystem:(id)arg1 ;
-(void)setParticleIntensity:(double)arg1 ;
-(void)setParticleIntensityVariation:(double)arg1 ;
-(void)setFresnelExponent:(double)arg1 ;
-(void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2 ;
-(void)setSpeed:(double)arg1 forAnimationKey:(id)arg2 ;
-(char)isAnimationForKeyPaused:(id)arg1 ;
-(char)__removeAnimation:(id)arg1 forKey:(id)arg2 ;
-(id)_scnBindings;
-(void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4 ;
-(void)unbindAnimatablePath:(id)arg1 ;
-(void)removeAllBindings;
-(id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(char)isPausedOrPausedByInheritance;
-(void)_setParticleImagePath:(id)arg1 withResolvedPath:(id)arg2 ;
-(double)lightEmissionRadiusFactor;
-(void)setLightEmissionRadiusFactor:(double)arg1 ;
-(double)fresnelExponent;
-(double)particleIntensity;
-(double)particleIntensityVariation;
-(void)handleEvent:(long long)arg1 forProperties:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)addModifierForProperties:(id)arg1 atStage:(long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)removeModifiersOfStage:(long long)arg1 ;
-(void)removeAllModifiers;
@end
