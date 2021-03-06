/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVMovieTrack.h>

@class AVMutableMovieTrackInternal, NSArray, AVMediaDataStorage, NSURL;

@interface AVMutableMovieTrack : AVMovieTrack {

	AVMutableMovieTrackInternal* _mutableMovieTrackInternal;

}

@property (nonatomic,readonly) NSArray * formatDescriptions; 
@property (nonatomic,copy) NSArray * metadata; 
@property (nonatomic,copy) AVMediaDataStorage * mediaDataStorage; 
@property (nonatomic,copy) NSURL * sampleReferenceBaseURL; 
@property (assign,getter=isEnabled,nonatomic) char enabled; 
@property (assign,nonatomic) long long alternateGroupID; 
@property (assign,getter=isModified,nonatomic) char modified; 
@property (nonatomic,readonly) char hasProtectedContent; 
@property (assign,nonatomic) int timescale; 
+(char)expectsPropertyRevisedNotifications;
+(id)trackWithTrackID:(int)arg1 forMovie:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(void)setEnabled:(char)arg1 ;
-(id)locale;
-(id)languageCode;
-(char)isEnabled;
-(long long)layer;
-(void)setLayer:(long long)arg1 ;
-(CGSize)dimensions;
-(NSArray *)metadata;
-(void)setMetadata:(NSArray *)arg1 ;
-(int)trackID;
-(void)setModified:(char)arg1 ;
-(void)setLanguageCode:(id)arg1 ;
-(char)isModified;
-(id)extendedLanguageTag;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setExtendedLanguageTag:(id)arg1 ;
-(float)preferredVolume;
-(CGAffineTransform)preferredTransform;
-(CGSize)naturalSize;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(char)hasProtectedContent;
-(NSArray *)formatDescriptions;
-(OpaqueFigAssetTrackRef)_figAssetTrack;
-(SCD_Struct_CM5)mediaPresentationTimeRange;
-(SCD_Struct_CM5)mediaDecodeTimeRange;
-(long long)alternateGroupID;
-(void)setNaturalSize:(CGSize)arg1 ;
-(void)insertEmptyTimeRange:(SCD_Struct_CM5)arg1 ;
-(void)removeTimeRange:(SCD_Struct_CM5)arg1 ;
-(void)scaleTimeRange:(SCD_Struct_CM5)arg1 toDuration:(SCD_Struct_CM3)arg2 ;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(void)setAlternateGroupID:(long long)arg1 ;
-(void)replaceFormatDescription:(opaqueCMFormatDescriptionRef)arg1 withFormatDescription:(opaqueCMFormatDescriptionRef)arg2 ;
-(void)addTrackAssociationToTrack:(id)arg1 type:(id)arg2 ;
-(void)removeTrackAssociationToTrack:(id)arg1 type:(id)arg2 ;
-(AVMediaDataStorage *)mediaDataStorage;
-(id)initWithTrackID:(int)arg1 forMovie:(id)arg2 ;
-(OpaqueFigMutableMovieRef)_figMutableMovie;
-(void)_addFigAssetTrackNotifications;
-(void)_removeFigAssetTrackNotifications;
-(id)_stringForProperty:(CFStringRef)arg1 ;
-(CGSize)_sizeForProperty:(CFStringRef)arg1 ;
-(void)_setString:(id)arg1 forProperty:(CFStringRef)arg2 ;
-(void)_setSize:(CGSize)arg1 forProperty:(CFStringRef)arg2 ;
-(NSURL *)sampleReferenceBaseURL;
-(void)_signalMetadataUpdated;
-(int)timescale;
-(CGSize)cleanApertureDimensions;
-(CGSize)productionApertureDimensions;
-(CGSize)encodedPixelsDimensions;
-(long long)preferredMediaChunkSize;
-(SCD_Struct_CM3)preferredMediaChunkDuration;
-(long long)preferredMediaChunkAlignment;
-(void)setSampleReferenceBaseURL:(NSURL *)arg1 ;
-(void)setMediaDataStorage:(AVMediaDataStorage *)arg1 ;
-(void)setTimescale:(int)arg1 ;
-(void)setCleanApertureDimensions:(CGSize)arg1 ;
-(void)setProductionApertureDimensions:(CGSize)arg1 ;
-(void)setEncodedPixelsDimensions:(CGSize)arg1 ;
-(void)setPreferredMediaChunkSize:(long long)arg1 ;
-(void)setPreferredMediaChunkDuration:(SCD_Struct_CM3)arg1 ;
-(void)setPreferredMediaChunkAlignment:(long long)arg1 ;
-(char)isCompatibleWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(char)insertTimeRange:(SCD_Struct_CM5)arg1 ofTrack:(id)arg2 atTime:(SCD_Struct_CM3)arg3 copySampleData:(char)arg4 error:(id*)arg5 ;
-(char)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 decodeTime:(SCD_Struct_CM3*)arg2 presentationTime:(SCD_Struct_CM3*)arg3 error:(id*)arg4 ;
-(char)insertMediaTimeRange:(SCD_Struct_CM5)arg1 intoTimeRange:(SCD_Struct_CM5)arg2 ;
-(char)appendMediaData:(id)arg1 dataOffset:(long long*)arg2 ;
@end

