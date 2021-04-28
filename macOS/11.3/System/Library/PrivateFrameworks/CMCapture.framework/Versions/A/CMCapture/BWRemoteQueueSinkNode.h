/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWSinkNode.h>

@protocol BWRemoteQueueSinkNodeDelegate;
@class NSDictionary;

@interface BWRemoteQueueSinkNode : BWSinkNode {

	char _mediaTypeIsVideo;
	char _mediaTypeIsPointCloud;
	localQueueOpaqueRef _localQueue;
	unsigned _numberOfMediaBuffersLocallyEnqueued;
	unsigned _numberOfMediaBuffersLocallyDequeued;
	id<BWRemoteQueueSinkNodeDelegate> _delegate;
	int _clientVideoRetainedBufferCount;
	char _discardsLateSampleBuffers;
	char _attachPanoramaMetadata;
	char _sentDiagnosticMetadataForPanorama;
	char _disableFlatDictionaryVDOMetadata;
	OpaqueFigFlatDictionaryKeySpecRef _makerNoteKeySpec;
	NSDictionary* _videoColorInfoOverride;
	char _pixelBufferAttachmentModificationAllowed;
	char _cameraSupportsFlash;
	char _removeCameraIntrinsicMatrixAttachment;
	opaqueCMFormatDescriptionRef _cachedFormatDescription;
	SCD_Struct_Fi8 _lastPTS;
	char _panoramaRequiresLTMLocking;

}

@property (assign,nonatomic) id<BWRemoteQueueSinkNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id<BWRemoteQueueSinkNodeDelegate>)delegate;
-(void)setDelegate:(id<BWRemoteQueueSinkNodeDelegate>)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)setCameraSupportsFlash:(char)arg1 ;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(id)initWithMediaType:(unsigned)arg1 clientAuditToken:(SCD_Struct_Fi26)arg2 sinkID:(id)arg3 ;
-(void)registerSurfacesFromSourcePool:(id)arg1 ;
-(void)setVideoColorInfoOverride:(id)arg1 ;
-(void)setDiscardsLateSampleBuffers:(char)arg1 ;
-(void)setClientVideoRetainedBufferCount:(int)arg1 ;
-(void)setAttachPanoramaMetadata:(char)arg1 ;
-(void)setRemoveCameraIntrinsicMatrixAttachment:(char)arg1 ;
-(void)setPanoramaRequiresLTMLocking:(char)arg1 ;
-(int)_finishRenderingSampleBufferUsingTheLocalQueue:(opaqueCMSampleBufferRef)arg1 ;
-(int)clientVideoRetainedBufferCount;
-(char)discardsLateSampleBuffers;
-(char)attachPanoramaMetadata;
-(char)panoramaRequiresLTMLocking;
-(id)videoColorInfoOverride;
-(void)setPixelBufferAttachmentModificationAllowed:(char)arg1 ;
-(char)pixelBufferAttachmentModificationAllowed;
-(char)cameraSupportsFlash;
-(char)removeCameraIntrinsicMatrixAttachment;
-(char)_includeDiagnosticMetadataIfDevicePropertiesLockedForPanorama:(opaqueCMSampleBufferRef)arg1 panoramaRequiresLTMLocking:(char)arg2 ;
@end
