/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <QuartzCore/CAMetalLayer.h>
#import <libobjc.A.dylib/SCNSceneRenderer.h>
#import <libobjc.A.dylib/SCNTechniqueSupport.h>

@class SCNJitterer, SCNRenderer, SCNScene, SCNDisplayLink, SCNNode, SKScene, MTLRenderPassDescriptor, AVAudioEngine, AVAudioEnvironmentNode, NSString, SCNTechnique;

@interface SCNMetalLayer : CAMetalLayer <SCNSceneRenderer, SCNTechniqueSupport> {

	SCNJitterer* _jitterer;
	SCNRenderer* _renderer;
	SCNScene* _scene;
	SCNDisplayLink* _displayLink;
	long long _preferredFramePerSeconds;
	double _lastUpdate;
	double _lastRenderedTime;
	char _drawForJittering;
	char _rendersIntoMaterial;
	char _syncTimeWithCoreAnimation;

}

@property (nonatomic,retain) SCNScene * scene; 
@property (assign,nonatomic) unsigned long long antialiasingMode; 
@property (assign,nonatomic) char syncTimeWithCoreAnimation;                                                     //@synthesize syncTimeWithCoreAnimation=_syncTimeWithCoreAnimation - In the implementation block
@property (assign,nonatomic) double sceneTime; 
@property (assign,nonatomic,__weak) id<SCNSceneRendererDelegate> delegate; 
@property (getter=isPlaying) char playing; 
@property (assign,nonatomic) char loops; 
@property (nonatomic,retain) SCNNode * pointOfView; 
@property (assign,nonatomic) char autoenablesDefaultLighting; 
@property (assign,getter=isJitteringEnabled,nonatomic) char jitteringEnabled; 
@property (assign,getter=isTemporalAntialiasingEnabled,nonatomic) char temporalAntialiasingEnabled; 
@property (assign,nonatomic) char showsStatistics; 
@property (assign,nonatomic) unsigned long long debugOptions; 
@property (nonatomic,retain) SKScene * overlaySKScene; 
@property (nonatomic,readonly) unsigned long long renderingAPI; 
@property (nonatomic,readonly) void* context; 
@property (nonatomic,readonly) id<MTLRenderCommandEncoder> currentRenderCommandEncoder; 
@property (nonatomic,readonly) MTLRenderPassDescriptor * currentRenderPassDescriptor; 
@property (nonatomic,readonly) id<MTLDevice> device; 
@property (nonatomic,readonly) unsigned long long colorPixelFormat; 
@property (nonatomic,readonly) unsigned long long depthPixelFormat; 
@property (nonatomic,readonly) unsigned long long stencilPixelFormat; 
@property (nonatomic,readonly) id<MTLCommandQueue> commandQueue; 
@property (nonatomic,readonly) AVAudioEngine * audioEngine; 
@property (nonatomic,readonly) AVAudioEnvironmentNode * audioEnvironmentNode; 
@property (nonatomic,retain) SCNNode * audioListener; 
@property (nonatomic,readonly) CGRect currentViewport; 
@property (assign,nonatomic) double currentTime; 
@property (assign,nonatomic) char usesReverseZ; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) SCNTechnique * technique; 
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)_kvoKeysForwardedToRenderer;
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(id<SCNSceneRendererDelegate>)delegate;
-(void)setDelegate:(id<SCNSceneRendererDelegate>)arg1 ;
-(void)pause;
-(id<MTLDevice>)device;
-(id<MTLCommandQueue>)commandQueue;
-(void)stop;
-(void*)context;
-(id)layer;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(void)display;
-(void)stop:(id)arg1 ;
-(void)play;
-(void)setNeedsDisplay;
-(id)initWithLayer:(id)arg1 ;
-(char)canDrawConcurrently;
-(char)isPlaying;
-(double)currentTime;
-(void)setCurrentTime:(double)arg1 ;
-(void)setLoops:(char)arg1 ;
-(char)loops;
-(id)renderer;
-(void)setRenderer:(id)arg1 ;
-(void)commonInit;
-(id)contentLayer;
-(unsigned long long)colorPixelFormat;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(MTLRenderPassDescriptor *)currentRenderPassDescriptor;
-(long long)preferredFramesPerSecond;
-(SCNScene *)scene;
-(void)setScene:(SCNScene *)arg1 ;
-(id)displayLink;
-(void)pause:(id)arg1 ;
-(void)play:(id)arg1 ;
-(SCNTechnique *)technique;
-(void)setTechnique:(SCNTechnique *)arg1 ;
-(void)setPlaying:(char)arg1 ;
-(unsigned long long)stencilPixelFormat;
-(id)rendererOptions;
-(void)_sceneDidUpdate:(id)arg1 ;
-(void)_systemTimeAnimationStarted:(id)arg1 ;
-(CGLContextObject*)CGLContext;
-(char)_canJitter;
-(void)_cancelJitterRedisplay;
-(char)rendersIntoMaterial;
-(char)autoenablesDefaultLighting;
-(void)setAutoenablesDefaultLighting:(char)arg1 ;
-(SCNNode *)pointOfView;
-(char)isJitteringEnabled;
-(id)hitTest:(CGPoint)arg1 options:(id)arg2 ;
-(void)setPointOfView:(SCNNode *)arg1 ;
-(void)setJitteringEnabled:(char)arg1 ;
-(void)setRendersIntoMaterial:(char)arg1 ;
-(void)_jitterRedisplayWithContext:(CGLContextObject*)arg1 ;
-(char)showsStatistics;
-(char)_showsAuthoringEnvironment;
-(id)_authoringEnvironment;
-(id)hitTestWithSegmentFromPoint:(SCNVector3)arg1 toPoint:(SCNVector3)arg2 options:(id)arg3 ;
-(unsigned long long)renderingAPI;
-(char)_supportsJitteringSyncRedraw;
-(char)scn_inLiveResize;
-(void)SCN_displayLinkCallback:(double)arg1 ;
-(unsigned long long)debugOptions;
-(void)setDebugOptions:(unsigned long long)arg1 ;
-(id<MTLRenderCommandEncoder>)currentRenderCommandEncoder;
-(char)usesReverseZ;
-(void)setUsesReverseZ:(char)arg1 ;
-(void)setShowsStatistics:(char)arg1 ;
-(char)isTemporalAntialiasingEnabled;
-(void)setTemporalAntialiasingEnabled:(char)arg1 ;
-(CGRect)currentViewport;
-(id)pointOfCulling;
-(void)setPointOfCulling:(id)arg1 ;
-(double)sceneTime;
-(SCNVector4)_viewport;
-(char)prepareObject:(id)arg1 shouldAbortBlock:(/*^block*/id)arg2 ;
-(void)prepareObjects:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setSceneTime:(double)arg1 ;
-(SKScene *)overlaySKScene;
-(void)setOverlaySKScene:(SKScene *)arg1 ;
-(AVAudioEngine *)audioEngine;
-(AVAudioEnvironmentNode *)audioEnvironmentNode;
-(SCNNode *)audioListener;
-(void)setAudioListener:(SCNNode *)arg1 ;
-(void)_drawAtTime:(double)arg1 ;
-(char)_checkAndUpdateDisplayLinkStateIfNeeded;
-(void)set_showsAuthoringEnvironment:(char)arg1 ;
-(void)presentScene:(id)arg1 withTransition:(id)arg2 incomingPointOfView:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(char)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2 ;
-(id)nodesInsideFrustumWithPointOfView:(id)arg1 ;
-(SCNVector3)projectPoint:(SCNVector3)arg1 ;
-(SCNVector3)unprojectPoint:(SCNVector3)arg1 ;
-(unsigned long long)depthPixelFormat;
-(void)projectPoints:(SCNVector3*)arg1 count:(unsigned long long)arg2 ;
-(void)setAntialiasingMode:(unsigned long long)arg1 ;
-(unsigned long long)antialiasingMode;
-(id)scn_backingLayer;
-(char)_isGLLayerBacked;
-(void)pauseDisplayLink;
-(void)resumeDisplayLink;
-(char)syncTimeWithCoreAnimation;
-(void)setSyncTimeWithCoreAnimation:(char)arg1 ;
@end

