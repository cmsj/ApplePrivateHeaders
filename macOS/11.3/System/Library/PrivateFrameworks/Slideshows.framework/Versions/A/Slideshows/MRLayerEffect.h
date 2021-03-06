/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/Slideshows-Structs.h>
#import <Slideshows/MRLayer.h>

@class MREffect, NSString, NSMutableDictionary, NSArray, MRSlideProvider, MCContainerEffect, NSDictionary;

@interface MRLayerEffect : MRLayer {

	MREffect* mEffect;
	NSString* mEffectID;
	NSMutableDictionary* mSlideProvidersForElementIDs;
	NSArray* mSlideProviders;
	NSMutableDictionary* mSlideShowTimeScripts;
	NSMutableDictionary* mTextsForElementIDs;
	MRSlideProvider* mMultiImageModelInput;
	unsigned mIndexOfFirstMultiImageInput;
	NSRange mMultiImageSlideRange;
	char mNeedsToUpdateEffect;
	char mNeedsToUpdateTiming;
	char mNeedsToUpdateSlides;
	char mNeedsToUpdateTexts;
	char mNeedsToUpdateEffectAttributes;
	char mNeedsToUpdateEffectLiveAttributes;
	char mSlidesAreReadonly;
	char mHasRequestedMoreSlides;
	NSString* _panoramaPanningSlideID;
	double _panoramaPanningPreviousDelta;
	char _panoramaPanningIsLandscape;
	char _ignoresNextTimeSynchronization;
	double _previouslyRenderedContainerTime;
	char _isInInteractiveMode;
	NSString* mTargetedElement;
	NSString* mEditedElement;
	MCContainerEffect* mContainer;

}

@property (setter=suspendAsynchronousOperations:) char asynchronousOperationsAreSuspended; 
@property (assign,nonatomic) char isInInteractiveMode;                                                  //@synthesize isInInteractiveMode=_isInInteractiveMode - In the implementation block
@property (readonly) NSDictionary * slideProvidersForElementIDs; 
@property (readonly) NSDictionary * textsForElementIDs; 
@property (nonatomic,copy) NSString * targetedElement; 
@property (nonatomic,copy) NSString * editedElement; 
@property (readonly) MREffect * effect; 
@property (readonly) MCContainerEffect * container; 
-(MCContainerEffect *)container;
-(void)cleanup;
-(void)unload;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)activate;
-(void)setDuration:(double)arg1 ;
-(char)isOpaque;
-(char)hasAudio;
-(MREffect *)effect;
-(char)_setStateValue:(id)arg1 forKey:(id)arg2 ;
-(id)_effectAttributes;
-(void)setPixelSize:(CGSize)arg1 ;
-(char)hasSlides;
-(char)isLoadedForTime:(double)arg1 ;
-(char)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)isAlphaFriendly;
-(void)beginMorphingToAspectRatio:(double)arg1 withDuration:(double)arg2 ;
-(void)endMorphing;
-(char)getStartTime:(double*)arg1 andDuration:(double*)arg2 forMovingToElementID:(id)arg3 backwards:(char)arg4 ;
-(char)hasMoreSlidesFromTime:(double)arg1 backwards:(char)arg2 startTime:(double*)arg3 duration:(double*)arg4 ;
-(double)interestingTimeForTime:(double)arg1 ;
-(double)interestingTimeForElement:(id)arg1 ;
-(void)getLazyDuration:(double*)arg1 lazyFactor:(double*)arg2 animationDuration:(double*)arg3 fromInterestingTime:(double)arg4 ;
-(CGSize)_maxSizeForTextElement:(id)arg1 ;
-(long long)_maxLinesForTextElement:(id)arg1 ;
-(char)isInInteractiveMode;
-(char)supportsDynamicExpansion;
-(NSDictionary *)slideProvidersForElementIDs;
-(NSDictionary *)textsForElementIDs;
-(NSString *)editedElement;
-(char)_hideTextWhileEditing;
-(CGSize)_rendererSize;
-(void)animateCenterOfSlide:(id)arg1 to:(CGPoint)arg2 withDuration:(double)arg3 andInitialSpeed:(CGSize)arg4 ;
-(void)animateScaleOfSlide:(id)arg1 to:(double)arg2 withDuration:(double)arg3 ;
-(void)animateRotationOfSlide:(id)arg1 to:(double)arg2 withDuration:(double)arg3 ;
-(void)animateCenterOfSlide:(id)arg1 to:(CGPoint)arg2 withDuration:(double)arg3 ;
-(double)pzrStart:(id)arg1 ;
-(double)pzrUpdate:(id)arg1 ;
-(double)pzrEnd:(id)arg1 ;
-(double)pzrCancel:(id)arg1 ;
-(char)asynchronousOperationsAreSuspended;
-(void)_stallRenderer;
-(void)suspendAsynchronousOperations:(char)arg1 ;
-(void)_requestRendering;
-(void)_unobservePlug;
-(id)initWithPlug:(id)arg1 andParameters:(id)arg2 inSuperlayer:(id)arg3 ;
-(void)_unobservePlugOnDepreactivate;
-(void)_observePlugOnPreactivate;
-(void)resumeOrPause:(char)arg1 ;
-(char)_isNative3D;
-(void)synchronizeTime;
-(void)_renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)hasSomethingToRender;
-(id)_retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)preactivate;
-(id)_dumpLayerWithOptions:(unsigned long long)arg1 ;
-(void)setIsInInteractiveMode:(char)arg1 ;
-(id)currentSlideInfoForElement:(id)arg1 ;
-(id)currentSlideInfos;
-(void)_observePlug;
-(void)_rebuildEffect;
-(void)_cleanupProviders;
-(void)_updateTiming;
-(void)_updateSlides;
-(void)_updateTexts;
-(void)_updateEffectAttributes;
-(char)getVerticesCoordinates:(CGPoint*)arg1 forElement:(id)arg2 ;
-(id)initWithEffectID:(id)arg1 andParameters:(id)arg2 ;
-(void)setTargetedElement:(NSString *)arg1 ;
-(void)setEditedElement:(NSString *)arg1 ;
-(void)setAssetPath:(id)arg1 ofSlide:(id)arg2 ;
-(void)setPlayerHint:(id)arg1 ofSlide:(id)arg2 ;
-(void)setTime:(double)arg1 ofSlide:(id)arg2 ;
-(void)setKenBurnsType:(int)arg1 ofSlide:(id)arg2 ;
-(void)setCenter:(CGPoint)arg1 ofSlide:(id)arg2 ;
-(void)setScale:(double)arg1 ofSlide:(id)arg2 ;
-(void)setRotation:(double)arg1 ofSlide:(id)arg2 ;
-(void)setMaxScale:(double)arg1 ofSlide:(id)arg2 ;
-(id)elementHitAtPoint:(CGPoint)arg1 localPoint:(CGPoint*)arg2 ;
-(void)_effectTriggeredStop;
-(void)_addAudioDucker:(id)arg1 ;
-(void)_removeAudioDucker:(id)arg1 ;
-(NSString *)targetedElement;
-(double)panoramaPanningStart:(id)arg1 ;
-(double)panoramaPanningUpdate:(id)arg1 ;
-(double)panoramaPanningEnd:(id)arg1 ;
-(double)panoramaPanningCancel:(id)arg1 ;
@end

