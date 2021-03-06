/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVAssetExportSessionInternal, NSString, AVAsset, NSURL, NSError;

@interface AVAssetExportSession : NSObject {

	AVAssetExportSessionInternal* _exportSession;

}

@property (nonatomic,readonly) NSString * presetName; 
@property (nonatomic,retain,readonly) AVAsset * asset; 
@property (nonatomic,copy) NSString * outputFileType; 
@property (nonatomic,copy) NSURL * outputURL; 
@property (assign,nonatomic) char shouldOptimizeForNetworkUse; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) float progress; 
+(id)allExportPresets;
+(id)exportPresetsCompatibleWithAsset:(id)arg1 ;
+(void)determineCompatibilityOfExportPreset:(id)arg1 withAsset:(id)arg2 outputFileType:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)exportSessionWithAsset:(id)arg1 presetName:(id)arg2 ;
+(SCD_Struct_CM3)maximumDurationForPreset:(id)arg1 properties:(id)arg2 ;
+(long long)estimatedOutputFileLengthForPreset:(id)arg1 duration:(SCD_Struct_CM3)arg2 properties:(id)arg3 ;
+(id)keyPathsForValuesAffectingEstimatedOutputFileLength;
-(void)dealloc;
-(id)description;
-(id)init;
-(NSError *)error;
-(long long)status;
-(float)progress;
-(id)metadata;
-(void)setMetadata:(id)arg1 ;
-(void)setOutputURL:(NSURL *)arg1 ;
-(AVAsset *)asset;
-(id)supportedFileTypes;
-(NSURL *)outputURL;
-(void)setTimeRange:(SCD_Struct_CM5)arg1 ;
-(SCD_Struct_CM5)timeRange;
-(id)videoComposition;
-(void)setVideoComposition:(id)arg1 ;
-(id)customVideoCompositor;
-(id)audioMix;
-(void)setAudioMix:(id)arg1 ;
-(id)audioTimePitchAlgorithm;
-(void)setAudioTimePitchAlgorithm:(id)arg1 ;
-(char)maximizePowerEfficiency;
-(void)setMaximizePowerEfficiency:(char)arg1 ;
-(char)shouldOptimizeForNetworkUse;
-(void)setShouldOptimizeForNetworkUse:(char)arg1 ;
-(id)directoryForTemporaryFiles;
-(void)setDirectoryForTemporaryFiles:(id)arg1 ;
-(NSString *)outputFileType;
-(id)metadataItemFilter;
-(id)initWithAsset:(id)arg1 presetName:(id)arg2 ;
-(NSString *)presetName;
-(void)estimateMaximumDurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)estimateOutputFileLengthWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)determineCompatibleFileTypesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setOutputFileType:(NSString *)arg1 ;
-(void)AVExportSessionExportAsynchronouslyCompletionHandler;
-(void)exportAsynchronouslyWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cancelExport;
-(SCD_Struct_CM3)maxDuration;
-(void)setMinVideoFrameDuration:(SCD_Struct_CM3)arg1 ;
-(SCD_Struct_CM3)minVideoFrameDuration;
-(void)setVideoFrameRateConversionAlgorithm:(id)arg1 ;
-(id)videoFrameRateConversionAlgorithm;
-(void)setPreserveSyncFrames:(char)arg1 ;
-(char)preserveSyncFrames;
-(long long)estimatedOutputFileLength;
-(void)setMetadataItemFilter:(id)arg1 ;
-(long long)fileLengthLimit;
-(void)setFileLengthLimit:(long long)arg1 ;
-(char)canPerformMultiplePassesOverSourceMediaData;
-(void)setCanPerformMultiplePassesOverSourceMediaData:(char)arg1 ;
@end

