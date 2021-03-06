/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PHAdjustmentData, NSURL, NSNumber, NSData;

@interface PHContentEditingOutput : NSObject <NSSecureCoding> {

	PHAdjustmentData* _adjustmentData;
	long long _baseVersion;
	char _isSubstandardRender;
	char _loopingLivePhoto;
	char _isAsyncAdjustment;
	NSURL* _renderedContentURL;
	NSNumber* _originalResourceChoice;
	long long _fullSizeRenderWidth;
	long long _fullSizeRenderHeight;
	NSData* _penultimateRenderedJPEGData;
	NSURL* _penultimateRenderedVideoContentURL;
	NSURL* _renderedVideoPosterURL;
	NSURL* _renderedVideoComplementContentURL;
	NSURL* _penultimateRenderedVideoComplementContentURL;
	NSURL* _editorBundleURL;
	long long _mediaType;
	NSURL* _renderedPreviewContentURL;
	NSNumber* _playbackVariation;
	NSNumber* _videoDuration;
	NSNumber* _reframeVariation;

}

@property (assign) long long baseVersion; 
@property (nonatomic,retain) NSNumber * originalResourceChoice;                     //@synthesize originalResourceChoice=_originalResourceChoice - In the implementation block
@property (assign,nonatomic) char isSubstandardRender;                              //@synthesize isSubstandardRender=_isSubstandardRender - In the implementation block
@property (assign,nonatomic) long long fullSizeRenderWidth;                         //@synthesize fullSizeRenderWidth=_fullSizeRenderWidth - In the implementation block
@property (assign,nonatomic) long long fullSizeRenderHeight;                        //@synthesize fullSizeRenderHeight=_fullSizeRenderHeight - In the implementation block
@property (copy) NSURL * renderedContentURL;                                        //@synthesize renderedContentURL=_renderedContentURL - In the implementation block
@property (retain) NSData * penultimateRenderedJPEGData;                            //@synthesize penultimateRenderedJPEGData=_penultimateRenderedJPEGData - In the implementation block
@property (copy) NSURL * penultimateRenderedVideoContentURL;                        //@synthesize penultimateRenderedVideoContentURL=_penultimateRenderedVideoContentURL - In the implementation block
@property (copy) NSURL * renderedVideoPosterURL;                                    //@synthesize renderedVideoPosterURL=_renderedVideoPosterURL - In the implementation block
@property (copy) NSURL * renderedVideoComplementContentURL;                         //@synthesize renderedVideoComplementContentURL=_renderedVideoComplementContentURL - In the implementation block
@property (copy) NSURL * penultimateRenderedVideoComplementContentURL;              //@synthesize penultimateRenderedVideoComplementContentURL=_penultimateRenderedVideoComplementContentURL - In the implementation block
@property (retain) NSURL * editorBundleURL;                                         //@synthesize editorBundleURL=_editorBundleURL - In the implementation block
@property (readonly) long long mediaType;                                           //@synthesize mediaType=_mediaType - In the implementation block
@property (getter=isLoopingLivePhoto,readonly) char loopingLivePhoto;               //@synthesize loopingLivePhoto=_loopingLivePhoto - In the implementation block
@property (nonatomic,retain) NSURL * renderedPreviewContentURL;                     //@synthesize renderedPreviewContentURL=_renderedPreviewContentURL - In the implementation block
@property (assign,nonatomic) char isAsyncAdjustment;                                //@synthesize isAsyncAdjustment=_isAsyncAdjustment - In the implementation block
@property (nonatomic,retain) NSNumber * playbackVariation;                          //@synthesize playbackVariation=_playbackVariation - In the implementation block
@property (nonatomic,retain) NSNumber * videoDuration;                              //@synthesize videoDuration=_videoDuration - In the implementation block
@property (nonatomic,retain) NSNumber * reframeVariation;                           //@synthesize reframeVariation=_reframeVariation - In the implementation block
@property (retain) PHAdjustmentData * adjustmentData; 
+(char)supportsSecureCoding;
+(id)renderURLWithExtensionForMediaType:(long long)arg1 ;
+(id)renderURLWithExtensionForMediaType:(long long)arg1 useHEICImage:(char)arg2 ;
+(unsigned long long)maximumAdjustmentDataLength;
+(id)outputForFlippingFullSizeRenderWithContentEditingInput:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)mediaType;
-(long long)baseVersion;
-(void)setBaseVersion:(long long)arg1 ;
-(PHAdjustmentData *)adjustmentData;
-(void)setReframeVariation:(NSNumber *)arg1 ;
-(void)setOriginalResourceChoice:(NSNumber *)arg1 ;
-(NSNumber *)originalResourceChoice;
-(NSNumber *)videoDuration;
-(void)setVideoDuration:(NSNumber *)arg1 ;
-(NSNumber *)reframeVariation;
-(NSNumber *)playbackVariation;
-(id)initWithContentEditingInput:(id)arg1 ;
-(id)initWithContentEditingInput:(id)arg1 withOptions:(id)arg2 ;
-(id)initWithPlaceholderForCreatedAsset:(id)arg1 ;
-(id)initWithAdjustmentBaseVersion:(long long)arg1 mediaType:(long long)arg2 ;
-(id)renderURLWithExtensionForMediaType:(long long)arg1 ;
-(void)clearRenderedContentURL;
-(void)setAdjustmentData:(PHAdjustmentData *)arg1 ;
-(void)setRenderedJPEGData:(id)arg1 ;
-(id)assetAdjustmentsWithEditorBundleID:(id)arg1 ;
-(char)isOnlyChangingOriginalChoice;
-(void)_setupRequiredRenderedContentURLsWithEditingInput:(id)arg1 options:(id)arg2 ;
-(NSURL *)renderedContentURL;
-(void)setRenderedContentURL:(NSURL *)arg1 ;
-(char)isSubstandardRender;
-(void)setIsSubstandardRender:(char)arg1 ;
-(long long)fullSizeRenderWidth;
-(void)setFullSizeRenderWidth:(long long)arg1 ;
-(long long)fullSizeRenderHeight;
-(void)setFullSizeRenderHeight:(long long)arg1 ;
-(NSData *)penultimateRenderedJPEGData;
-(void)setPenultimateRenderedJPEGData:(NSData *)arg1 ;
-(NSURL *)penultimateRenderedVideoContentURL;
-(void)setPenultimateRenderedVideoContentURL:(NSURL *)arg1 ;
-(NSURL *)renderedVideoPosterURL;
-(void)setRenderedVideoPosterURL:(NSURL *)arg1 ;
-(NSURL *)renderedVideoComplementContentURL;
-(void)setRenderedVideoComplementContentURL:(NSURL *)arg1 ;
-(NSURL *)penultimateRenderedVideoComplementContentURL;
-(void)setPenultimateRenderedVideoComplementContentURL:(NSURL *)arg1 ;
-(NSURL *)editorBundleURL;
-(void)setEditorBundleURL:(NSURL *)arg1 ;
-(char)isLoopingLivePhoto;
-(NSURL *)renderedPreviewContentURL;
-(void)setRenderedPreviewContentURL:(NSURL *)arg1 ;
-(char)isAsyncAdjustment;
-(void)setIsAsyncAdjustment:(char)arg1 ;
-(void)setPlaybackVariation:(NSNumber *)arg1 ;
@end

