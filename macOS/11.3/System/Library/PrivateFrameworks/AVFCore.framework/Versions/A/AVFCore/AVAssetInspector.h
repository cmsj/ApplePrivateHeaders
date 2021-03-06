/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVFigObjectInspector.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary, AVMetadataItem, NSString, NSData;

@interface AVAssetInspector : AVFigObjectInspector <NSCopying>

@property (nonatomic,readonly) SCD_Struct_CM3 duration; 
@property (nonatomic,readonly) float preferredRate; 
@property (nonatomic,readonly) float preferredVolume; 
@property (nonatomic,readonly) float preferredSoundCheckVolumeNormalization; 
@property (nonatomic,readonly) CGAffineTransform preferredTransform; 
@property (nonatomic,readonly) SCD_Struct_CM3 minimumTimeOffsetFromLive; 
@property (nonatomic,readonly) CGSize naturalSize; 
@property (nonatomic,readonly) int naturalTimeScale; 
@property (nonatomic,readonly) char providesPreciseDurationAndTiming; 
@property (nonatomic,readonly) long long trackCount; 
@property (nonatomic,readonly) NSArray * trackIDs; 
@property (nonatomic,readonly) NSArray * alternateTrackGroups; 
@property (nonatomic,readonly) NSDictionary * trackReferences; 
@property (getter=_mediaSelectionGroupDictionaries,nonatomic,readonly) NSArray * mediaSelectionGroupDictionaries; 
@property (nonatomic,readonly) AVMetadataItem * creationDate; 
@property (nonatomic,readonly) NSString * lyrics; 
@property (nonatomic,readonly) NSArray * commonMetadata; 
@property (nonatomic,readonly) NSArray * availableMetadataFormats; 
@property (getter=isPlayable,nonatomic,readonly) char playable; 
@property (getter=isExportable,nonatomic,readonly) char exportable; 
@property (getter=isReadable,nonatomic,readonly) char readable; 
@property (getter=isComposable,nonatomic,readonly) char composable; 
@property (getter=isCompatibleWithAirPlayVideo,nonatomic,readonly) char compatibleWithAirPlayVideo; 
@property (nonatomic,readonly) NSData * SHA1Digest; 
@property (nonatomic,readonly) char canContainFragments; 
@property (nonatomic,readonly) char containsFragments; 
@property (nonatomic,readonly) SCD_Struct_CM3 overallDurationHint; 
@property (nonatomic,readonly) long long firstFragmentSequenceNumber; 
@property (nonatomic,readonly) long long fragmentCount; 
@property (nonatomic,readonly) id propertyListForProxy; 
@property (nonatomic,readonly) NSString * identifyingTagClass; 
@property (nonatomic,readonly) NSString * identifyingTag; 
@property (nonatomic,readonly) CGSize maximumVideoResolution; 
@property (nonatomic,readonly) NSArray * availableVideoDynamicRanges; 
@property (getter=_instanceIdentifier,nonatomic,readonly) NSString * instanceIdentifier; 
@property (nonatomic,readonly) char supportsAnalysisReporting; 
@property (getter=_assetAnalysisMessages,nonatomic,readonly) NSArray * assetAnalysisMessages; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_CM3)duration;
-(AVMetadataItem *)creationDate;
-(char)isReadable;
-(float)preferredRate;
-(float)preferredVolume;
-(float)preferredSoundCheckVolumeNormalization;
-(CGAffineTransform)preferredTransform;
-(CGSize)maximumVideoResolution;
-(NSArray *)availableVideoDynamicRanges;
-(SCD_Struct_CM3)minimumTimeOffsetFromLive;
-(CGSize)naturalSize;
-(int)naturalTimeScale;
-(char)providesPreciseDurationAndTiming;
-(NSArray *)alternateTrackGroups;
-(NSArray *)trackIDs;
-(id)_mediaSelectionGroupDictionaries;
-(NSDictionary *)trackReferences;
-(NSString *)lyrics;
-(NSArray *)commonMetadata;
-(NSArray *)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(long long)trackCount;
-(char)hasProtectedContent;
-(char)isPlayable;
-(char)isExportable;
-(char)isComposable;
-(char)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)arg1 ;
-(char)isCompatibleWithAirPlayVideo;
-(char)canContainFragments;
-(char)containsFragments;
-(SCD_Struct_CM3)overallDurationHint;
-(char)supportsAnalysisReporting;
-(id)_assetAnalysisMessages;
-(long long)firstFragmentSequenceNumber;
-(long long)fragmentCount;
-(NSString *)identifyingTagClass;
-(NSString *)identifyingTag;
-(id)_instanceIdentifier;
-(NSData *)SHA1Digest;
-(id)propertyListForProxy;
-(id)makePropertyListForProxyWithOptions:(id)arg1 ;
@end

