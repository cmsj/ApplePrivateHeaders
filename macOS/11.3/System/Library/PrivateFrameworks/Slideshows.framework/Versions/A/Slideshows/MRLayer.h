/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/Slideshows-Structs.h>
#import <libobjc.A.dylib/MRLoadable.h>
#import <libobjc.A.dylib/MRRenderable.h>

@class MCPlug, MCPlugSerial, MCPlugParallel, MCPlugHaven, NSString, MRLayerClock, NSMutableDictionary, NSMutableArray, NSDictionary, MRRenderer, MRAudioPlayer, MCTransitionTrigger;

@interface MRLayer : NSObject <MRLoadable, MRRenderable> {

	MRLayer* mSuperlayer;
	MCPlug* mPlug;
	MCPlugSerial* mPlugAsSerial;
	MCPlugParallel* mPlugAsParallel;
	MCPlugHaven* mPlugAsHaven;
	NSString* mUUID;
	NSString* mIDInSupercontainer;
	unsigned long long mIndex;
	CGSize mPixelSize;
	double mTimeStamp;
	double mTimeIn;
	MRLayerClock* mClock;
	SCD_Struct_MR30* mRenderingState;
	NSMutableDictionary* mAnimationTriggers;
	NSMutableDictionary* mMotions;
	NSMutableDictionary* mPersistentState;
	NSMutableArray* mLayerCommandQueue;
	NSDictionary* mParameters;
	MRRenderer* mRenderer;
	MRAudioPlayer* mAudioPlayer;
	id mParentHelper;
	char mIsPreactivated;
	char mIsActivated;
	char mIsPrecomputing;
	char mIsReadonly;
	char mDoAudio;
	char mIsSelected;
	char mIsDimmed;
	char mNeedsRendering;
	char mNeedsToResyncClockToPlug;
	char mNeedsToUpdateGeometry;
	char mNeedsToUpdateInitialState;
	char mNeedsToRequestRebuildAudio;
	char mNeedsToRequestRebuildVolume;
	char mNeedsToSynchronizeTime;
	char mLayerCommandQueueNeedsAttention;
	char mIsScheduledForDestruction;
	char _isAdhocLayer;
	NSString* _filterID;

}

@property (nonatomic,readonly) char _isNative3D; 
@property (readonly) MRLayerClock * clock; 
@property (readonly) SCD_Struct_MR30* renderingState; 
@property (readonly) NSDictionary * persistentState; 
@property (readonly) NSDictionary * animationTriggers; 
@property (readonly) NSMutableDictionary * motions; 
@property (retain) id parentHelper; 
@property (nonatomic,readonly) char supportsDynamicExpansion; 
@property (nonatomic,copy) NSString * idInSupercontainer; 
@property (nonatomic,readonly) unsigned long long index; 
@property (retain) MCTransitionTrigger * nextTransition; 
@property (retain) MCTransitionTrigger * previousTransition; 
@property (assign,nonatomic) double opacity; 
@property (assign,nonatomic) char isTriggered; 
@property (readonly) MRLayer * superlayer; 
@property (readonly) MCPlug * plug; 
@property (readonly) MCPlugSerial * plugAsSerial; 
@property (readonly) MCPlugParallel * plugAsParallel; 
@property (readonly) MCPlugHaven * plugAsHaven; 
@property (readonly) NSString * uuid; 
@property (readonly) NSDictionary * parameters; 
@property (assign,nonatomic) CGSize pixelSize; 
@property (assign,nonatomic) double timeIn; 
@property (assign,nonatomic) double duration; 
@property (nonatomic,readonly) char isPreactivated; 
@property (nonatomic,readonly) char isActivated; 
@property (assign,nonatomic) char isSelected; 
@property (assign,nonatomic) char isDimmed; 
@property (nonatomic,readonly) double timeStamp; 
@property (nonatomic,readonly) char isScheduledForDestruction; 
@property (nonatomic,readonly) char hasAudio; 
@property (assign,nonatomic) char needsToSynchronizeTime; 
@property (assign,nonatomic) char needsToUpdateGeometry; 
@property (assign,nonatomic) long long zIndex; 
@property (nonatomic,retain) NSString * filterID;                           //@synthesize filterID=_filterID - In the implementation block
@property (assign,nonatomic) double phaseInDuration; 
@property (assign,nonatomic) double phaseOutDuration; 
@property (readonly) char isAdhocLayer;                                     //@synthesize isAdhocLayer=_isAdhocLayer - In the implementation block
@property (nonatomic,readonly) char isNative3D; 
@property (nonatomic,readonly) char isOpaque; 
@property (nonatomic,readonly) char isAlphaFriendly; 
@property (nonatomic,readonly) char isInfinite; 
+(id)layerWithPlug:(id)arg1 andParameters:(id)arg2 inSuperlayer:(id)arg3 ;
-(void)dealloc;
-(NSString *)uuid;
-(void)cleanup;
-(unsigned long long)index;
-(void)unload;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)duration;
-(void)activate;
-(void)setDuration:(double)arg1 ;
-(id)initWithParameters:(id)arg1 ;
-(NSDictionary *)parameters;
-(char)isOpaque;
-(void)setOpacity:(double)arg1 ;
-(void)deactivate;
-(MRLayer *)superlayer;
-(char)isSelected;
-(char)isInfinite;
-(double)opacity;
-(void)setZIndex:(long long)arg1 ;
-(long long)zIndex;
-(double)timeStamp;
-(id)_currentState;
-(CGSize)pixelSize;
-(id)actions;
-(char)isActivated;
-(char)hasAudio;
-(MRLayerClock *)clock;
-(NSString *)filterID;
-(void)cancelLoading;
-(char)isDimmed;
-(void)setIsSelected:(char)arg1 ;
-(void)setIsDimmed:(char)arg1 ;
-(char)_setStateValue:(id)arg1 forKey:(id)arg2 ;
-(MCPlug *)plug;
-(void)setTimeIn:(double)arg1 ;
-(void)setPhaseInDuration:(double)arg1 ;
-(void)setPhaseOutDuration:(double)arg1 ;
-(char)isTriggered;
-(void)setIsTriggered:(char)arg1 ;
-(double)phaseInDuration;
-(double)phaseOutDuration;
-(NSString *)idInSupercontainer;
-(void)setFilterID:(NSString *)arg1 ;
-(double)timeIn;
-(void)updateGeometry;
-(void)setPixelSize:(CGSize)arg1 ;
-(char)hasSlides;
-(char)isLoadedForTime:(double)arg1 ;
-(void)loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 now:(char)arg4 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)isNative3D;
-(char)isAlphaFriendly;
-(void)beginMorphingToAspectRatio:(double)arg1 withDuration:(double)arg2 ;
-(void)endMorphing;
-(char)getStartTime:(double*)arg1 andDuration:(double*)arg2 forMovingToElementID:(id)arg3 backwards:(char)arg4 ;
-(char)hasMoreSlidesFromTime:(double)arg1 backwards:(char)arg2 startTime:(double*)arg3 duration:(double*)arg4 ;
-(double)interestingTimeForTime:(double)arg1 ;
-(double)interestingTimeForElement:(id)arg1 ;
-(void)getLazyDuration:(double*)arg1 lazyFactor:(double*)arg2 animationDuration:(double*)arg3 fromInterestingTime:(double)arg4 ;
-(char)isInInteractiveMode;
-(char)supportsDynamicExpansion;
-(void)_unobservePlug;
-(void)depreactivate:(char)arg1 ;
-(void)setNeedsUpdateForPluggerOfSublayer:(id)arg1 ;
-(void)stampTime;
-(id)initWithPlug:(id)arg1 andParameters:(id)arg2 inSuperlayer:(id)arg3 ;
-(void)_unobservePlugOnDepreactivate;
-(void)_observePlugOnPreactivate;
-(void)_sendAction:(id)arg1 withStates:(id)arg2 async:(char)arg3 yesterday:(char)arg4 ;
-(void)resumeOrPause:(char)arg1 ;
-(char)_isNative3D;
-(void)_rebuildAudio;
-(void)synchronizeTime;
-(void)_renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)hasSomethingToRender;
-(void)_updateStateWithContext:(id)arg1 ;
-(id)__retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)_retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)isFlatAndSquare;
-(void)_setScissorRectOnContext:(id)arg1 saveTo:(int*)arg2 ;
-(void)_applyState:(id)arg1 ;
-(NSDictionary *)persistentState;
-(SCD_Struct_MR30*)renderingState;
-(MCPlugParallel *)plugAsParallel;
-(void)_setPlug:(id)arg1 andSuperlayer:(id)arg2 ;
-(void)animateOpacityTo:(double)arg1 withDuration:(double)arg2 ;
-(void)preactivate;
-(char)shouldBePreactivatedAtTime:(double)arg1 ;
-(char)shouldBeActivatedAtTime:(double)arg1 ;
-(void)scheduleForDestruction;
-(CGPoint)convertLocalPoint:(CGPoint)arg1 ;
-(CGPoint)convertGlobalPoint:(CGPoint)arg1 ;
-(double)doAnimationTrigger:(id)arg1 ;
-(double)_serial_gotoNextWithObject:(id)arg1 ;
-(double)_serial_gotoPreviousWithObject:(id)arg1 ;
-(MCTransitionTrigger *)nextTransition;
-(void)setNextTransition:(MCTransitionTrigger *)arg1 ;
-(MCTransitionTrigger *)previousTransition;
-(void)setPreviousTransition:(MCTransitionTrigger *)arg1 ;
-(double)doActionTrigger:(id)arg1 ;
-(double)doStateOperation:(id)arg1 ;
-(double)doMotionTrigger:(id)arg1 ;
-(double)doGenericAction:(id)arg1 ;
-(id)_dumpLayerWithOptions:(unsigned long long)arg1 ;
-(char)enterSlideFocusModeWithState:(id)arg1 ;
-(char)willFocusOnNextSlideWithState:(id)arg1 animate:(char)arg2 ;
-(void)didFocusOnNextSlideWithState:(id)arg1 ;
-(char)willFocusOnPreviousSlideWithState:(id)arg1 animate:(char)arg2 ;
-(void)didFocusOnPreviousSlideWithState:(id)arg1 ;
-(void)exitSlideFocusModeWithState:(id)arg1 ;
-(void)setIsInInteractiveMode:(char)arg1 ;
-(id)currentSlideInfoForElement:(id)arg1 ;
-(id)currentSlideInfos;
-(MCPlugSerial *)plugAsSerial;
-(MCPlugHaven *)plugAsHaven;
-(char)isPreactivated;
-(char)isScheduledForDestruction;
-(NSDictionary *)animationTriggers;
-(NSMutableDictionary *)motions;
-(id)parentHelper;
-(void)setParentHelper:(id)arg1 ;
-(void)setIdInSupercontainer:(NSString *)arg1 ;
-(char)needsToSynchronizeTime;
-(void)setNeedsToSynchronizeTime:(char)arg1 ;
-(char)needsToUpdateGeometry;
-(void)setNeedsToUpdateGeometry:(char)arg1 ;
-(char)isAdhocLayer;
-(void)_queueLayerCommand:(int)arg1 object:(id)arg2 ;
-(void)_observePlug;
-(void)_setNeedsToRequestRebuildAudio:(char)arg1 ;
@end

