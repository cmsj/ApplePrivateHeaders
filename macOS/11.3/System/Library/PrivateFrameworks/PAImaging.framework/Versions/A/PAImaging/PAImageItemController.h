/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PAImaging.framework/Versions/A/PAImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PAImaging/PAItemController.h>
#import <PAImaging/PADescriptionEditReceiver.h>
#import <PAImaging/PAUnadjustedCompositionProvider.h>

@protocol DGDescriptionCompositionProvider, OS_dispatch_group, PAAdjustmentFactory, NUImageProperties;
@class NSMutableArray, PADescriptionEditController, NSObject, NSMutableDictionary, PAImageItem, NSString;

@interface PAImageItemController : PAItemController <PADescriptionEditReceiver, PAUnadjustedCompositionProvider> {

	NSMutableArray* _renderDescriptionStack;
	PADescriptionEditController* _descriptionEditController;
	char _subscribedToDescriptionEditController;
	id<DGDescriptionCompositionProvider> _assetCompositionProvider;
	id<DGDescriptionCompositionProvider> _unadjustedCompositionProvider;
	unsigned short _originalVideoComplementVisibility;
	unsigned short _internalVideoComplementVisibility;
	NSObject*<OS_dispatch_group> _imagePropertiesGroup;
	NSMutableDictionary* _cachedContentEditingInputsByOriginalChoice;
	id<PAAdjustmentFactory> _adjustmentFactory;
	id<NUImageProperties> _imageProperties;

}

@property (assign) char hideVideoComplement; 
@property (retain) id<NUImageProperties> imageProperties;                  //@synthesize imageProperties=_imageProperties - In the implementation block
@property (nonatomic,readonly) PAImageItem * imageItem; 
@property (retain) id<PAAdjustmentFactory> adjustmentFactory;              //@synthesize adjustmentFactory=_adjustmentFactory - In the implementation block
@property (nonatomic,readonly) char isEditingOriginal; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)itemClass;
+(long long)_playbackForVariationFlavor:(id)arg1 variation:(unsigned short*)arg2 ;
+(id)notificationDeliveryQueue;
+(unsigned short)_videoComplementVisibilityForAsset:(id)arg1 ;
+(long long)videoComplementEnableStatusForVisibilityState:(unsigned short)arg1 asset:(id)arg2 ;
+(long long)videoComplementEnableStatusForAsset:(id)arg1 ;
+(char)shouldShowVideoComplementForAsset:(id)arg1 ;
-(id)init;
-(id<NUImageProperties>)imageProperties;
-(void)setImageProperties:(id<NUImageProperties>)arg1 ;
-(void)descriptionEditController:(id)arg1 compositionChanged:(id)arg2 key:(id)arg3 ;
-(void)descriptionEditController:(id)arg1 compositionBeginInteractive:(id)arg2 key:(id)arg3 ;
-(void)descriptionEditController:(id)arg1 compositionEndInteractive:(id)arg2 key:(id)arg3 ;
-(void)assetDidChange:(id)arg1 ;
-(void)unadjustedComposition:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)assetComposition;
-(id)compositionIfEditing;
-(long long)_shouldCommitStatus;
-(void)beginEditingWithContentEditingInput:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)resetEditingWithContentEditingInput:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)didEndEditing:(char)arg1 discard:(char)arg2 ;
-(void)_setCurrentContentEditingInput:(id)arg1 ;
-(id)descriptionEditController;
-(void)_setCurrentVideoComplementHideStateForAsset:(id)arg1 ;
-(PAImageItem *)imageItem;
-(char)isEditingOriginal;
-(void)didChangeVideoTrim:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)requestOriginalContentEditingInputWithChoice:(unsigned long long)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)rawContentEditingInput:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)nonRawContentEditingInput:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setCurrentContentEditingInput:(id)arg1 renderDescription:(id)arg2 ;
-(void)setCurrentContentEditingInput:(id)arg1 renderDescription:(id)arg2 ;
-(long long)rawPlusJPEGState;
-(id)snapshotForUndo;
-(void)restoreSnapshot:(id)arg1 ;
-(id)sourceImagePropertiesSync;
-(id)sourceImageProperties;
-(void)_didSetNewSource:(id)arg1 ;
-(void)beginEditing:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_beginEditing:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didResetEditing;
-(id)_renderDescriptionByStrippingEmptyOperations:(id)arg1 ;
-(void)commitEditingToAsset:(id)arg1 contentEditingInput:(id)arg2 saveTrimAsNewVideo:(char)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_commitTrimEditingToNewAsset:(id)arg1 contentEditingInput:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_commitEditingToAsset:(id)arg1 contentEditingInput:(id)arg2 renderDescription:(id)arg3 composition:(id)arg4 workQueue:(id)arg5 queue:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)_finishCommitNoAdjustmentsSwitchSource:(id)arg1 contentEditingInput:(id)arg2 originalChoice:(unsigned long long)arg3 renderDescription:(id)arg4 composition:(id)arg5 workQueue:(id)arg6 error:(id)arg7 queue:(id)arg8 completion:(/*^block*/id)arg9 ;
-(void)_finishCommitNoAdjustments:(id)arg1 contentEditingInput:(id)arg2 revert:(char)arg3 renderDescription:(id)arg4 composition:(id)arg5 workQueue:(id)arg6 error:(id)arg7 queue:(id)arg8 completion:(/*^block*/id)arg9 ;
-(void)_updateVideoComplementVisibility:(id)arg1 asset:(id)arg2 renderDescription:(id)arg3 hideVideoComplement:(char)arg4 ;
-(char)editWithDescriptionEditController:(/*^block*/id)arg1 ;
-(char)editWithDescriptionEditController:(/*^block*/id)arg1 error:(id*)arg2 ;
-(id)renderDescriptionIfEditing;
-(void)requestRenderDescription:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<PAAdjustmentFactory>)adjustmentFactory;
-(void)setAdjustmentFactory:(id<PAAdjustmentFactory>)arg1 ;
-(char)hideVideoComplement;
-(void)setHideVideoComplement:(char)arg1 ;
-(char)shouldShowVideoComplement;
-(char)_editingInputHasVideoComplement;
-(char)canEditVideoComplement;
@end
