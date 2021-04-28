/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVPlayer, NSNumber, NSString;

@interface AVHUDStringGenerator : NSObject {

	AVPlayer* _player;
	NSNumber* _audioSpatializationMode;
	NSString* _playerItemURL;
	NSString* _assetType;
	NSString* _sessionID;
	NSString* _configurationGroup;
	NSString* _trackFormatDescriptions;
	NSNumber* _displayResolutionHeight;
	NSNumber* _displayResolutionWidth;
	NSNumber* _refreshRate;
	NSString* _videoRange;
	NSNumber* _videoApproximateDisplaySizeHeight;
	NSNumber* _videoApproximateDisplaySizeWidth;
	NSNumber* _presentationSizeHeight;
	NSNumber* _presentationSizeWidth;
	NSNumber* _currentFrameRate;
	NSNumber* _nominalFrameRate;
	NSNumber* _networkBandiwdth;
	NSNumber* _averageVideoBitrate;
	NSNumber* _averageAudioBitrate;
	NSString* _assetTrackInfo;
	NSNumber* _peakIndicatedBitrate;
	NSNumber* _averageIndicatedBitrate;
	NSNumber* _variantIndex;
	NSNumber* _totalFrameDrops;
	NSNumber* _decoderFrameDrops;
	NSNumber* _imageQueueFrameDrops;
	NSNumber* _bufferedVideoPlayed;
	NSNumber* _bufferedVideoRemaining;
	NSString* _customPerfInfo;
	NSNumber* _totalStalls;
	long long _prevVariantIdx;
	long long _prevStallCount;
	long long _totalStallCount;
	char _spatialDiagnostics;
	char _captureCompleteURI;
	NSString* _formattedDisplayString;

}

@property (__weak) AVPlayer * player;                                           //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) char spatialDiagnostics;                           //@synthesize spatialDiagnostics=_spatialDiagnostics - In the implementation block
@property (assign,nonatomic) char captureCompleteURI;                           //@synthesize captureCompleteURI=_captureCompleteURI - In the implementation block
@property (assign,nonatomic) long long prevVariantIdx;                          //@synthesize prevVariantIdx=_prevVariantIdx - In the implementation block
@property (assign,nonatomic) long long prevStallCount;                          //@synthesize prevStallCount=_prevStallCount - In the implementation block
@property (assign,nonatomic) long long totalStallCount;                         //@synthesize totalStallCount=_totalStallCount - In the implementation block
@property (nonatomic,readonly) NSString * formattedDisplayString;               //@synthesize formattedDisplayString=_formattedDisplayString - In the implementation block
@property (nonatomic,readonly) NSNumber * displayResolutionHeight;              //@synthesize displayResolutionHeight=_displayResolutionHeight - In the implementation block
@property (nonatomic,readonly) NSNumber * displayResolutionWidth;               //@synthesize displayResolutionWidth=_displayResolutionWidth - In the implementation block
@property (nonatomic,readonly) NSNumber * audioSpatializationMode;              //@synthesize audioSpatializationMode=_audioSpatializationMode - In the implementation block
+(id)descriptionStringForVideoRangeOfFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
+(id)descriptionStringForBitRate:(double)arg1 ;
+(id)descriptionStringForFormatOfTrack:(id)arg1 ;
+(id)descriptionStringForTracksOfPlayerItem:(id)arg1 ;
-(void)dealloc;
-(void)update;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVPlayer *)player;
-(void)updateFromPlayer;
-(void)updateFromPlayerItem;
-(NSString *)formattedDisplayString;
-(char)spatialDiagnostics;
-(void)setSpatialDiagnostics:(char)arg1 ;
-(char)captureCompleteURI;
-(void)setCaptureCompleteURI:(char)arg1 ;
-(long long)prevVariantIdx;
-(void)setPrevVariantIdx:(long long)arg1 ;
-(long long)prevStallCount;
-(void)setPrevStallCount:(long long)arg1 ;
-(long long)totalStallCount;
-(void)setTotalStallCount:(long long)arg1 ;
-(NSNumber *)displayResolutionWidth;
-(NSNumber *)displayResolutionHeight;
-(NSNumber *)audioSpatializationMode;
@end
