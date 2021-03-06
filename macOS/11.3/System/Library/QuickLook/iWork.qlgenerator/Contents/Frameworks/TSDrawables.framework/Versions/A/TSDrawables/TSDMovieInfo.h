/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSDrawables/TSDMediaInfo.h>
#import <libobjc.A.dylib/KNImplicitAmbientAnimating.h>
#import <TSDrawables/TSDMixing.h>
#import <TSDrawables/TSDCompatibilityAwareMediaContainer.h>
#import <TSDrawables/TSDPlayableInfo.h>

@class NSString, TSPData, NSURL, TSDMovieFingerprint, TSDMediaStyle;

@interface TSDMovieInfo : TSDMediaInfo <KNImplicitAmbientAnimating, TSDMixing, TSDCompatibilityAwareMediaContainer, TSDPlayableInfo> {

	TSPData* mMovieData;
	TSPData* mImportedAuxiliaryMovieData;
	NSString* mImportedAuxiliaryMovieDataOriginalFilename;
	char mAudioOnly;
	TSPData* mAudioOnlyImageData;
	double mStartTime;
	double mEndTime;
	double mPosterTime;
	long long mLoopOption;
	float mVolume;
	NSURL* mMovieRemoteURL;
	TSDMovieFingerprint* mFingerprint;
	TSPData* mPosterImageData;
	char mPosterImageGeneratedWithAlphaSupport;
	CGSize mNaturalSize;
	char mPlaysAcrossSlides;
	char mStreaming;
	char mNativeAudioRecording;
	TSDMediaStyle* mStyle;

}

@property (nonatomic,readonly) char canAddImplicitAmbientAnimations; 
@property (nonatomic,readonly) NSString * implicitAmbientAnimationEffectIdentifier; 
@property (nonatomic,readonly) char supportsImplicitAmbientAnimationsAfterStartingActionBuilds; 
@property (nonatomic,readonly) char shouldRemoveImplicitAmbientAnimationsAtEndOfNoneTransition; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TSPData * movieData; 
@property (nonatomic,retain) NSURL * movieRemoteURL; 
@property (nonatomic,retain) TSPData * importedAuxiliaryMovieData; 
@property (nonatomic,copy) NSString * importedAuxiliaryMovieDataOriginalFilename; 
@property (nonatomic,copy) TSDMovieFingerprint * fingerprint; 
@property (nonatomic,retain) TSPData * audioOnlyImageData; 
@property (assign,nonatomic) double posterTime; 
@property (nonatomic,retain) TSPData * posterImageData; 
@property (assign,nonatomic) char playsAcrossSlides; 
@property (assign,getter=isAudioOnly,nonatomic) char audioOnly; 
@property (assign,getter=isStreaming,nonatomic) char streaming; 
@property (assign,getter=isNativeAudioRecording,nonatomic) char nativeAudioRecording; 
@property (nonatomic,readonly) char supportsStartTimeAndEndTime; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double endTime; 
@property (nonatomic,readonly) char supportsLooping; 
@property (nonatomic,readonly) char supportsLoopingBackAndForth; 
@property (assign,nonatomic) long long loopOption; 
@property (assign,nonatomic) float volume; 
+(id)presetKinds;
+(double)defaultPosterTimeForDuration:(double)arg1 ;
-(char)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1 ;
-(char)canAddImplicitAmbientAnimations;
-(NSString *)implicitAmbientAnimationEffectIdentifier;
-(char)supportsImplicitAmbientAnimationsAfterStartingActionBuilds;
-(char)shouldRemoveImplicitAmbientAnimationsAtEndOfNoneTransition;
-(id)newImplicitAmbientBuildRendererWithAnimatedBuild:(id)arg1 buildChunk:(id)arg2 session:(id)arg3 animatedSlideView:(id)arg4 ;
-(unsigned)elementKind;
-(float)volume;
-(id)style;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(void)setStyle:(id)arg1 ;
-(void)setVolume:(float)arg1 ;
-(void)setEndTime:(double)arg1 ;
-(double)endTime;
-(TSDMovieFingerprint *)fingerprint;
-(char)isStreaming;
-(void)setStreaming:(char)arg1 ;
-(void)acceptVisitor:(id)arg1 ;
-(id)mediaFileType;
-(void)setFingerprint:(TSDMovieFingerprint *)arg1 ;
-(char)isAudioOnly;
-(char)needsDownload;
-(TSPData *)movieData;
-(void)setMovieData:(TSPData *)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(id)objectForProperty:(int)arg1 ;
-(Class)layoutClass;
-(void)setAudioOnly:(char)arg1 ;
-(double)posterTime;
-(Class)repClass;
-(float)floatValueForProperty:(int)arg1 ;
-(char)containsProperty:(int)arg1 ;
-(int)intValueForProperty:(int)arg1 ;
-(double)doubleValueForProperty:(int)arg1 ;
-(id)presetKind;
-(char)supportsAttachedComments;
-(char)supportsHyperlinks;
-(char)canChangeWrapType;
-(id)animationFilters;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 ;
-(Class)styleClass;
-(id)mediaDisplayName;
-(CGSize)rawDataSize;
-(void)p_setPropertiesFromLoadedAsset:(id)arg1 ;
-(NSURL *)movieRemoteURL;
-(id)makeAVAssetWithOptions:(id)arg1 ;
-(id)makeAVAsset;
-(id)generateEmptyPosterImageForContext:(id)arg1 ;
-(TSPData *)posterImageData;
-(long long)loopOption;
-(void)setMovieRemoteURL:(NSURL *)arg1 ;
-(TSPData *)importedAuxiliaryMovieData;
-(void)setImportedAuxiliaryMovieData:(TSPData *)arg1 ;
-(TSPData *)audioOnlyImageData;
-(void)setAudioOnlyImageData:(TSPData *)arg1 ;
-(void)setPosterTime:(double)arg1 ;
-(void)setLoopOption:(long long)arg1 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 movieData:(id)arg4 loadedAsset:(id)arg5 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 movieRemoteURL:(id)arg4 loadedAsset:(id)arg5 ;
-(void)setPosterImageData:(TSPData *)arg1 ;
-(id)synchronouslyGenerateDefaultPosterImageForContext:(id)arg1 ;
-(char)canResetMediaSize;
-(id)styleIdentifierTemplateForNewPreset;
-(void)takePropertiesFromReplacedMediaInfo:(id)arg1 ;
-(void)saveToArchive:(MovieArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const MovieArchive*)arg1 unarchiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(char)isAllowedInGroups;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(char)shouldShowInPrint;
-(char)allowsTitle;
-(char)allowsCaption;
-(id)typesToPromiseWhenCopyingSingleDrawable;
-(id)promisedDataForType:(id)arg1 ;
-(char)canCopyData;
-(id)mediaDataForDragging;
-(void)i_setPosterImageData:(id)arg1 ;
-(char)isNativeAudioRecording;
-(char)supportsLooping;
-(char)supportsLoopingBackAndForth;
-(char)playsAcrossSlides;
-(void)setPlaysAcrossSlides:(char)arg1 ;
-(id)p_makePosterImageDataWithAVAsset:(id)arg1 inContext:(id)arg2 time:(double)arg3 ;
-(char)supportsStartTimeAndEndTime;
-(NSString *)importedAuxiliaryMovieDataOriginalFilename;
-(void)setImportedAuxiliaryMovieDataOriginalFilename:(NSString *)arg1 ;
-(void)setNativeAudioRecording:(char)arg1 ;
-(char)supportsStyleInspecting;
-(char)canBeMediaPlaceholder;
-(char)canBeReplaced;
-(id)synchronouslyGenerateNewPosterImageForAsset:(id)arg1 time:(double)arg2 ;
-(id)promisedTSPDataForType:(id)arg1 ;
-(char)wantsStandardTypesInAdditionToTypesToPromiseWhenCopyingSingleDrawable;
-(char)willRenderContentViaImager;
@end

