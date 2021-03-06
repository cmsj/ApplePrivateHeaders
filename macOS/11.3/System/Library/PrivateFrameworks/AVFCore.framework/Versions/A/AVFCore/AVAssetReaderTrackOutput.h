/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetReaderOutput.h>

@class AVAssetReaderTrackOutputInternal, AVAssetTrack, NSDictionary, NSString;

@interface AVAssetReaderTrackOutput : AVAssetReaderOutput {

	AVAssetReaderTrackOutputInternal* _trackOutputInternal;

}

@property (getter=_isAttachedToAdaptor,nonatomic,readonly) char attachedToAdaptor; 
@property (nonatomic,readonly) AVAssetTrack * track; 
@property (nonatomic,readonly) NSDictionary * outputSettings; 
@property (nonatomic,copy) NSString * audioTimePitchAlgorithm; 
+(id)assetReaderTrackOutputWithTrack:(id)arg1 outputSettings:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(id)mediaType;
-(id)_asset;
-(char)appliesPreferredTrackTransform;
-(void)setAppliesPreferredTrackTransform:(char)arg1 ;
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
-(char)_isAttachedToAdaptor;
-(void)_setAttachedAdaptor:(id)arg1 ;
-(NSString *)audioTimePitchAlgorithm;
-(void)setAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(char)_trimsSampleDurations;
-(char)_enableTrackExtractionReturningError:(id*)arg1 ;
-(id)_figAssetReaderExtractionOptions;
-(AVAssetTrack *)track;
-(NSDictionary *)outputSettings;
-(id)initWithTrack:(id)arg1 outputSettings:(id)arg2 ;
-(id)_formatDescriptions;
-(unsigned)_getUniformMediaSubtypeIfExists;
-(id)_attachedAdaptor;
-(opaqueCMSampleBufferRef)_copyNextSampleBufferForAdaptor;
@end

