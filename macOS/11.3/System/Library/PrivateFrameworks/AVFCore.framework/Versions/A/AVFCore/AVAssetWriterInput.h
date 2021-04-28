/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVWeakObservable.h>
#import <AVFCore/AVKeyPathDependencyHost.h>

@class AVAssetWriterInputInternal, AVAssetWriterInputHelper, NSDictionary, AVOutputSettings, AVWeakReference, NSString, NSArray;

@interface AVAssetWriterInput : NSObject <AVWeakObservable, AVKeyPathDependencyHost> {

	AVAssetWriterInputInternal* _internal;

}

@property (readonly) long long numberOfAppendFailures; 
@property (getter=_markAsFinishedCalled,readonly) char markAsFinishedCalled; 
@property (setter=_setHelper:,getter=_helper,nonatomic,retain) AVAssetWriterInputHelper * helper; 
@property (setter=_setSourcePixelBufferAttributes:,getter=_sourcePixelBufferAttributes,nonatomic,copy) NSDictionary * sourcePixelBufferAttributes; 
@property (getter=_pixelBufferPool,nonatomic,readonly) CVPixelBufferPoolRef pixelBufferPool; 
@property (getter=_outputSettingsObject,nonatomic,readonly) AVOutputSettings * outputSettingsObject; 
@property (getter=_status,nonatomic,readonly) long long status; 
@property (getter=_isAttachedToAdaptor,nonatomic,readonly) char attachedToAdaptor; 
@property (setter=_setWeakReferenceToAssetWriter:,getter=_weakReferenceToAssetWriter,nonatomic,retain) AVWeakReference * weakReferenceToAssetWriter; 
@property (assign,setter=_setAlternateGroupID:,getter=_alternateGroupID,nonatomic) short alternateGroupID; 
@property (assign,setter=_setProvisionalAlternateGroupID:,getter=_provisionalAlternateGroupID,nonatomic) short provisionalAlternateGroupID; 
@property (getter=_trackReferences,nonatomic,readonly) NSDictionary * trackReferences; 
@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) NSDictionary * outputSettings; 
@property (nonatomic,readonly) const opaqueCMFormatDescriptionRef sourceFormatHint; 
@property (nonatomic,copy) NSArray * metadata; 
@property (getter=isReadyForMoreMediaData,nonatomic,readonly) char readyForMoreMediaData; 
@property (assign,nonatomic) char expectsMediaDataInRealTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2 ;
+(id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(opaqueCMFormatDescriptionRef)arg3 ;
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(id)languageCode;
-(CGAffineTransform)transform;
-(long long)_status;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)_helper;
-(long long)layer;
-(void)setLayer:(long long)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(NSString *)mediaType;
-(NSArray *)metadata;
-(void)setMetadata:(NSArray *)arg1 ;
-(CVPixelBufferPoolRef)_pixelBufferPool;
-(void)setLanguageCode:(id)arg1 ;
-(void)declareKeyPathDependenciesWithRegistry:(id)arg1 ;
-(void)addCallbackToCancelDuringDeallocation:(id)arg1 ;
-(id)extendedLanguageTag;
-(void)setExtendedLanguageTag:(id)arg1 ;
-(float)preferredVolume;
-(CGSize)naturalSize;
-(id)_trackReferences;
-(id)availableTrackAssociationTypes;
-(char)_isAttachedToAdaptor;
-(const opaqueCMFormatDescriptionRef)sourceFormatHint;
-(void)_setAttachedAdaptor:(id)arg1 ;
-(long long)_appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(void)_tellAssetWriterToTransitionToFailedStatusWithError:(id)arg1 ;
-(void)setNaturalSize:(CGSize)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(id)sampleReferenceBaseURL;
-(long long)preferredMediaChunkSize;
-(SCD_Struct_CM3)preferredMediaChunkDuration;
-(long long)preferredMediaChunkAlignment;
-(void)setSampleReferenceBaseURL:(id)arg1 ;
-(void)setPreferredMediaChunkSize:(long long)arg1 ;
-(void)setPreferredMediaChunkDuration:(SCD_Struct_CM3)arg1 ;
-(void)setPreferredMediaChunkAlignment:(long long)arg1 ;
-(char)maximizePowerEfficiency;
-(void)setMaximizePowerEfficiency:(char)arg1 ;
-(NSDictionary *)outputSettings;
-(id)_attachedAdaptor;
-(id)_outputSettingsObject;
-(void)_setWeakReferenceToAssetWriter:(id)arg1 ;
-(void)setMarksOutputTrackAsEnabled:(char)arg1 ;
-(void)_setAlternateGroupID:(short)arg1 ;
-(void)_setProvisionalAlternateGroupID:(short)arg1 ;
-(short)_alternateGroupID;
-(char)expectsMediaDataInRealTime;
-(char)_prepareForWritingWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 mediaFileType:(id)arg2 error:(id*)arg3 ;
-(int)outputTrackID;
-(void)_didStartInitialSession;
-(void)_prepareToEndSession;
-(char)_prepareToFinishWritingReturningError:(id*)arg1 ;
-(void)_transitionToTerminalStatus:(long long)arg1 ;
-(id)_weakReferenceToAssetWriter;
-(char)marksOutputTrackAsEnabled;
-(int)mediaTimeScale;
-(void)setMediaTimeScale:(int)arg1 ;
-(void)setExpectsMediaDataInRealTime:(char)arg1 ;
-(char)performsMultiPassEncodingIfSupported;
-(void)setPerformsMultiPassEncodingIfSupported:(char)arg1 ;
-(id)mediaDataLocation;
-(void)setMediaDataLocation:(id)arg1 ;
-(id)_sourcePixelBufferAttributes;
-(short)_provisionalAlternateGroupID;
-(long long)numberOfAppendFailures;
-(id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 ;
-(id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(opaqueCMFormatDescriptionRef)arg3 ;
-(void)_setHelper:(id)arg1 ;
-(char)isReadyForMoreMediaData;
-(char)canPerformMultiplePasses;
-(id)currentPassDescription;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)stopRequestingMediaData;
-(void)markAsFinished;
-(void)markCurrentPassAsFinished;
-(char)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(id)associatedInputsWithTrackAssociationType:(id)arg1 ;
-(char)writesMediaDataToBeginningOfFile;
-(void)setWritesMediaDataToBeginningOfFile:(char)arg1 ;
-(void)_setSourcePixelBufferAttributes:(id)arg1 ;
-(void)respondToEachPassDescriptionOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(char)_appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_CM3)arg2 ;
-(long long)_appendCaption:(id)arg1 error:(id*)arg2 ;
-(long long)_appendCaptionGroup:(id)arg1 error:(id*)arg2 ;
-(char)_markAsFinishedCalled;
@end
