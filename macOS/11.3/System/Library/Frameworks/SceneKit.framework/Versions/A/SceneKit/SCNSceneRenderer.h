/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SCNScene, SCNNode, SKScene, MTLRenderPassDescriptor, AVAudioEngine, AVAudioEnvironmentNode;


@protocol SCNSceneRenderer <NSObject>
@property (nonatomic,retain) SCNScene * scene; 
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
@required
-(id<SCNSceneRendererDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id<MTLDevice>)device;
-(id<MTLCommandQueue>)commandQueue;
-(void*)context;
-(char)isPlaying;
-(double)currentTime;
-(void)setCurrentTime:(double)arg1;
-(void)setLoops:(char)arg1;
-(char)loops;
-(unsigned long long)colorPixelFormat;
-(MTLRenderPassDescriptor *)currentRenderPassDescriptor;
-(SCNScene *)scene;
-(void)setScene:(id)arg1;
-(void)setPlaying:(char)arg1;
-(unsigned long long)stencilPixelFormat;
-(char)autoenablesDefaultLighting;
-(void)setAutoenablesDefaultLighting:(char)arg1;
-(SCNNode *)pointOfView;
-(char)isJitteringEnabled;
-(id)hitTest:(CGPoint)arg1 options:(id)arg2;
-(void)setPointOfView:(id)arg1;
-(void)setJitteringEnabled:(char)arg1;
-(char)showsStatistics;
-(unsigned long long)renderingAPI;
-(unsigned long long)debugOptions;
-(void)setDebugOptions:(unsigned long long)arg1;
-(id<MTLRenderCommandEncoder>)currentRenderCommandEncoder;
-(char)usesReverseZ;
-(void)setUsesReverseZ:(char)arg1;
-(void)setShowsStatistics:(char)arg1;
-(char)isTemporalAntialiasingEnabled;
-(void)setTemporalAntialiasingEnabled:(char)arg1;
-(CGRect)currentViewport;
-(double)sceneTime;
-(char)prepareObject:(id)arg1 shouldAbortBlock:(/*^block*/id)arg2;
-(void)prepareObjects:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)setSceneTime:(double)arg1;
-(SKScene *)overlaySKScene;
-(void)setOverlaySKScene:(id)arg1;
-(AVAudioEngine *)audioEngine;
-(AVAudioEnvironmentNode *)audioEnvironmentNode;
-(SCNNode *)audioListener;
-(void)setAudioListener:(id)arg1;
-(void)presentScene:(id)arg1 withTransition:(id)arg2 incomingPointOfView:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(char)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2;
-(id)nodesInsideFrustumWithPointOfView:(id)arg1;
-(SCNVector3*)projectPoint:(SCNVector3)arg1;
-(SCNVector3*)unprojectPoint:(SCNVector3)arg1;
-(unsigned long long)depthPixelFormat;

@end
