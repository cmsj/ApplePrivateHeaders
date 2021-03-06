/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVFigObjectInspector.h>
#import <AVFCore/AVAsynchronousKeyValueLoading.h>

@class AVWeakReference, AVDispatchOnce, NSArray, NSString, NSLocale, NSDictionary;

@interface AVAssetTrackInspector : AVFigObjectInspector <AVAsynchronousKeyValueLoading> {

	AVWeakReference* _weakReference;
	AVDispatchOnce* _synthesizeMediaCharacteristicsOnce;
	NSArray* _cachedMediaCharacteristics;

}

@property (nonatomic,readonly) int trackID; 
@property (getter=_figMediaType,nonatomic,readonly) unsigned figMediaType; 
@property (getter=_figTrackReader,nonatomic,readonly) OpaqueFigTrackReaderRef figTrackReader; 
@property (getter=_figAssetTrack,nonatomic,readonly) OpaqueFigAssetTrackRef figAssetTrack; 
@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) NSArray * formatDescriptions; 
@property (getter=isPlayable,nonatomic,readonly) char playable; 
@property (getter=isDecodable,nonatomic,readonly) char decodable; 
@property (getter=isEnabled,nonatomic,readonly) char enabled; 
@property (getter=isSelfContained,nonatomic,readonly) char selfContained; 
@property (nonatomic,readonly) long long totalSampleDataLength; 
@property (nonatomic,readonly) SCD_Struct_CM5 timeRange; 
@property (nonatomic,readonly) SCD_Struct_CM5 mediaPresentationTimeRange; 
@property (nonatomic,readonly) SCD_Struct_CM5 mediaDecodeTimeRange; 
@property (nonatomic,readonly) SCD_Struct_CM3 latentBaseDecodeTimeStampOfFirstTrackFragment; 
@property (nonatomic,readonly) char requiresFrameReordering; 
@property (nonatomic,readonly) int naturalTimeScale; 
@property (nonatomic,readonly) float estimatedDataRate; 
@property (nonatomic,readonly) float peakDataRate; 
@property (nonatomic,readonly) NSString * languageCode; 
@property (nonatomic,readonly) NSArray * mediaCharacteristics; 
@property (nonatomic,readonly) NSString * extendedLanguageTag; 
@property (nonatomic,readonly) NSLocale * locale; 
@property (nonatomic,readonly) CGSize naturalSize; 
@property (nonatomic,readonly) CGAffineTransform preferredTransform; 
@property (nonatomic,readonly) long long layer; 
@property (nonatomic,readonly) float preferredVolume; 
@property (nonatomic,readonly) char hasAudioSampleDependencies; 
@property (nonatomic,readonly) NSDictionary * loudnessInfo; 
@property (nonatomic,readonly) float nominalFrameRate; 
@property (nonatomic,readonly) SCD_Struct_CM3 minSampleDuration; 
@property (nonatomic,copy,readonly) NSArray * segments; 
@property (nonatomic,readonly) NSArray * commonMetadata; 
@property (nonatomic,readonly) NSArray * availableMetadataFormats; 
@property (nonatomic,readonly) long long alternateGroupID; 
@property (nonatomic,readonly) long long defaultAlternateGroupID; 
@property (nonatomic,readonly) long long provisionalAlternateGroupID; 
@property (getter=isExcludedFromAutoselectionInTrackGroup,nonatomic,readonly) char excludedFromAutoselectionInTrackGroup; 
@property (nonatomic,readonly) CGSize dimensions; 
@property (getter=_trackReferences,nonatomic,readonly) NSDictionary * trackReferences; 
@property (nonatomic,readonly) char hasProtectedContent; 
@property (nonatomic,readonly) char hasAudibleBooksContent; 
@property (nonatomic,readonly) char isAudibleBooksContentAuthorized; 
@property (nonatomic,readonly) int playabilityValidationResult; 
@property (nonatomic,readonly) char segmentsExcludeAudioPrimingAndRemainderDurations; 
@property (nonatomic,readonly) SCD_Struct_CM5 gaplessSourceTimeRange; 
@property (nonatomic,copy,readonly) NSArray * segmentsAsPresented; 
@property (nonatomic,readonly) char canProvideSampleCursors; 
+(id)assetTrackInspectorWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(NSLocale *)locale;
-(NSString *)languageCode;
-(char)isEnabled;
-(long long)layer;
-(id)_weakReference;
-(NSArray *)segments;
-(CGSize)dimensions;
-(NSString *)mediaType;
-(int)trackID;
-(SCD_Struct_CM5)timeRange;
-(NSString *)extendedLanguageTag;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(float)preferredVolume;
-(CGAffineTransform)preferredTransform;
-(CGSize)naturalSize;
-(int)naturalTimeScale;
-(NSArray *)commonMetadata;
-(NSArray *)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 ;
-(id)_initWithAsset:(id)arg1 trackIndex:(long long)arg2 ;
-(char)hasProtectedContent;
-(char)isPlayable;
-(NSArray *)formatDescriptions;
-(OpaqueFigAssetTrackRef)_figAssetTrack;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(OpaqueFigTrackReaderRef)_figTrackReader;
-(char)isDecodable;
-(int)playabilityValidationResult;
-(char)isSelfContained;
-(long long)totalSampleDataLength;
-(NSArray *)mediaCharacteristics;
-(SCD_Struct_CM5)mediaPresentationTimeRange;
-(SCD_Struct_CM5)mediaDecodeTimeRange;
-(SCD_Struct_CM3)latentBaseDecodeTimeStampOfFirstTrackFragment;
-(char)requiresFrameReordering;
-(char)hasAudioSampleDependencies;
-(float)estimatedDataRate;
-(float)peakDataRate;
-(NSDictionary *)loudnessInfo;
-(float)nominalFrameRate;
-(SCD_Struct_CM3)minSampleDuration;
-(id)segmentForTrackTime:(SCD_Struct_CM3)arg1 ;
-(char)segmentsExcludeAudioPrimingAndRemainderDurations;
-(SCD_Struct_CM5)gaplessSourceTimeRange;
-(NSArray *)segmentsAsPresented;
-(SCD_Struct_CM3)samplePresentationTimeForTrackTime:(SCD_Struct_CM3)arg1 ;
-(long long)alternateGroupID;
-(long long)defaultAlternateGroupID;
-(long long)provisionalAlternateGroupID;
-(char)isExcludedFromAutoselectionInTrackGroup;
-(id)_trackReferences;
-(char)hasAudibleBooksContent;
-(char)isAudibleBooksContentAuthorized;
-(char)canProvideSampleCursors;
-(id)makeSampleCursorWithPresentationTimeStamp:(SCD_Struct_CM3)arg1 ;
-(id)makeSampleCursorAtFirstSampleInDecodeOrder;
-(id)makeSampleCursorAtLastSampleInDecodeOrder;
-(id)makeSearchCursorWithPredicate:(id)arg1 atPresentationTimeStamp:(SCD_Struct_CM3)arg2 ;
-(unsigned)_figMediaType;
-(OpaqueFigSampleCursorServiceRef)_getFigSampleCursorServiceReportingTimeAccuracy:(char*)arg1 ;
@end

