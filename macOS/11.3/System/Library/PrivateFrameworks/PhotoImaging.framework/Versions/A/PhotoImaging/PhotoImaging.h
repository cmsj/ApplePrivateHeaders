#import <PhotoImaging/PIPhotoEffectHDR.h>
#import <PhotoImaging/PIPhotoEffectBlackAndWhiteHDR.h>
#import <PhotoImaging/PIPhotoEffectNoirHDR.h>
#import <PhotoImaging/PIPhotoEffectChromeHDR.h>
#import <PhotoImaging/PIPhotoEffectFadeHDR.h>
#import <PhotoImaging/PIPhotoEffectInstantHDR.h>
#import <PhotoImaging/PIPhotoEffectMonoHDR.h>
#import <PhotoImaging/PIPhotoEffectProcessHDR.h>
#import <PhotoImaging/PIPhotoEffectTonalHDR.h>
#import <PhotoImaging/PIPhotoEffectTransferHDR.h>
#import <PhotoImaging/PIPhotoEffectStageMonoHDR.h>
#import <PhotoImaging/PIPhotoEffect3DHDR.h>
#import <PhotoImaging/PIPhotoEffect3DBlackAndWhiteHDR.h>
#import <PhotoImaging/PIPhotoEffect3DVividHDR.h>
#import <PhotoImaging/PIPhotoEffect3DVividWarmHDR.h>
#import <PhotoImaging/PIPhotoEffect3DVividCoolHDR.h>
#import <PhotoImaging/PIPhotoEffect3DDramaticHDR.h>
#import <PhotoImaging/PIPhotoEffect3DDramaticCoolHDR.h>
#import <PhotoImaging/PIPhotoEffect3DDramaticWarmHDR.h>
#import <PhotoImaging/PIPhotoEffect3DSilverplateHDR.h>
#import <PhotoImaging/PIPhotoEffect3DNoirHDR.h>
#import <PhotoImaging/PIReframeRules.h>
#import <PhotoImaging/PISemanticEnhanceAdjustmentController.h>
#import <PhotoImaging/PILocalContrastHDR.h>
#import <PhotoImaging/PISubjectCluster.h>
#import <PhotoImaging/PICompositionController.h>
#import <PhotoImaging/PICompositionSerializer.h>
#import <PhotoImaging/PICompositionSerializationResult.h>
#import <PhotoImaging/PICompositionSerializerMetadata.h>
#import <PhotoImaging/PIExpandedSubjectCalculatorConfiguration.h>
#import <PhotoImaging/PIExpandedSubjectCalculator.h>
#import <PhotoImaging/PILevelsFilterHDR.h>
#import <PhotoImaging/PIStillReframeRequest.h>
#import <PhotoImaging/_PIStillReframeResult.h>
#import <PhotoImaging/PIStillReframeJob.h>
#import <PhotoImaging/PIFalseColorHDRDebug.h>
#import <PhotoImaging/PIAutoCalculatorUtils.h>
#import <PhotoImaging/PIAutoLoopExportRequest.h>
#import <PhotoImaging/PIAutoLoopExportClient.h>
#import <PhotoImaging/PIAutoLoopAnalysisRequest.h>
#import <PhotoImaging/PIAutoLoopAnalysisClient.h>
#import <PhotoImaging/PILongExposureRegistrationRequest.h>
#import <PhotoImaging/PIZlibDataCompressionOptions.h>
#import <PhotoImaging/PIZlibDataDecompressionOptions.h>
#import <PhotoImaging/PIZlibDataCompression.h>
#import <PhotoImaging/PIAutoLoopAdjustmentController.h>
#import <PhotoImaging/PIVideoCrossfadeLoopNode.h>
#import <PhotoImaging/PILivePhotoKeyFrameAdjustmentController.h>
#import <PhotoImaging/PIVignetteAdjustmentController.h>
#import <PhotoImaging/PIAdjustmentController.h>
#import <PhotoImaging/PIReframeAutoCalculator.h>
#import <PhotoImaging/PIFaceObservationCache.h>
#import <PhotoImaging/PISourceSelectAdjustmentController.h>
#import <PhotoImaging/PIReframeKeyframe.h>
#import <PhotoImaging/PIReframeKeyframeSequence.h>
#import <PhotoImaging/PILongExposureFusionAutoCalculator.h>
#import <PhotoImaging/PIEffectAdjustmentController.h>
#import <PhotoImaging/PIRetouchCacheNode.h>
#import <PhotoImaging/PIRetouchSourceNode.h>
#import <PhotoImaging/PIRetouchSubsampleCacheNode.h>
#import <PhotoImaging/PIRetouchSubsampleSourceNode.h>
#import <PhotoImaging/PIRetouchCompositeNode.h>
#import <PhotoImaging/PIAutoLoopAutoCalculator.h>
#import <PhotoImaging/PIMakerNoteUtilities.h>
#import <PhotoImaging/PITempTintFilter.h>
#import <PhotoImaging/_PIAutoLoopAnalysisResult.h>
#import <PhotoImaging/PIAutoLoopAnalysisJob.h>
#import <PhotoImaging/_PIVideoStabilizeFlowControl.h>
#import <PhotoImaging/_PIVideoStabilizeResult.h>
#import <PhotoImaging/PIVideoStabilizeRenderJob.h>
#import <PhotoImaging/PIVideoStabilizeRequest.h>
#import <PhotoImaging/PIFaceBalanceAutoCalculator.h>
#import <PhotoImaging/PIWhiteBalanceAutoCalculator.h>
#import <PhotoImaging/_PIWhiteColorCalculator.h>
#import <PhotoImaging/PIDefinitionFilter.h>
#import <PhotoImaging/PIReframeResult.h>
#import <PhotoImaging/PISmartBlackAndWhiteAdjustmentController.h>
#import <PhotoImaging/PICompositionExportImagePrepareResult.h>
#import <PhotoImaging/PICompositionExportAuxiliaryResult.h>
#import <PhotoImaging/PICompositionExportResult.h>
#import <PhotoImaging/PICompositionExportDataResult.h>
#import <PhotoImaging/PICompositionExporterOptions.h>
#import <PhotoImaging/PICompositionExporterVideoOptions.h>
#import <PhotoImaging/PICompositionExporterImageOptions.h>
#import <PhotoImaging/PICompositionExporterAuxiliaryOptions.h>
#import <PhotoImaging/PICompositionExporter.h>
#import <PhotoImaging/GUBilateralConvolution.h>
#import <PhotoImaging/GUBWBilateralConvolution.h>
#import <PhotoImaging/PIBilateralFilter.h>
#import <PhotoImaging/PIPhotoEditAdjustmentsVersion.h>
#import <PhotoImaging/PINoiseReductionAdjustmentController.h>
#import <PhotoImaging/PISmartColorFilterHDR.h>
#import <PhotoImaging/PIAutoLoopCacheNode.h>
#import <PhotoImaging/PILongExposureCacheNode.h>
#import <PhotoImaging/PIVideoCrossfadeLoopAdjustmentController.h>
#import <PhotoImaging/PIPortraitAdjustmentController.h>
#import <PhotoImaging/PICompositionNoOpRemoval.h>
#import <PhotoImaging/PIOrientationAdjustmentController.h>
#import <PhotoImaging/PIDefinitionAdjustmentController.h>
#import <PhotoImaging/PIReframeSubject.h>
#import <PhotoImaging/PIHighKeyHDR.h>
#import <PhotoImaging/PIPerspectiveAutoCalculator.h>
#import <PhotoImaging/PIRawNoiseReductionAdjustmentController.h>
#import <PhotoImaging/PICropAdjustmentController.h>
#import <PhotoImaging/PIAutoLoopFrameNode.h>
#import <PhotoImaging/PIRawAdjustmentController.h>
#import <PhotoImaging/PISmartToneAdjustmentController.h>
#import <PhotoImaging/PIAutoLoopKernels.h>
#import <PhotoImaging/PIPhotoEditHelper.h>
#import <PhotoImaging/PIAdjustmentConstants.h>
#import <PhotoImaging/PIForwardFakeBoost.h>
#import <PhotoImaging/PIInverseFakeBoost.h>
#import <PhotoImaging/PICompositionSerializerConstants.h>
#import <PhotoImaging/PICurvesFilterHDR.h>
#import <PhotoImaging/PIAutoLoopStabVideoNode.h>
#import <PhotoImaging/PILongExposureAccumulator.h>
#import <PhotoImaging/_PILongExposureRegistrationResult.h>
#import <PhotoImaging/PILongExposureRegistrationJob.h>
#import <PhotoImaging/PIRAWTempTintSampler.h>
#import <PhotoImaging/PIRedEye.h>
#import <PhotoImaging/PIVideoPosterFrameAdjustmentController.h>
#import <PhotoImaging/PICompositionSerializerFormatVersion.h>
#import <PhotoImaging/PIVideoReframeTimedMetadata.h>
#import <PhotoImaging/PIVideoReframeMetadataExtractor.h>
#import <PhotoImaging/PICaptureDebugUtilities.h>
#import <PhotoImaging/PISlomoAdjustmentController.h>
#import <PhotoImaging/PIDebugAdjustmentController.h>
#import <PhotoImaging/PIRAWFaceBalance.h>
#import <PhotoImaging/PICurvesLUTFilter.h>
#import <PhotoImaging/PICurvesFilter.h>
#import <PhotoImaging/PIColorBalanceFilter.h>
#import <PhotoImaging/PIPhotosPipelineHDRFilters.h>
#import <PhotoImaging/PIHighResFusionAdjustmentController.h>
#import <PhotoImaging/PIGlobalSettings.h>
#import <PhotoImaging/PIAutoLoopExportJob.h>
#import <PhotoImaging/PIJSRenderPipeline.h>
#import <PhotoImaging/PIClusterPoint.h>
#import <PhotoImaging/PIApertureRedEyeAutoCalculator.h>
#import <PhotoImaging/PILocalLightMapPrepareHDR.h>
#import <PhotoImaging/PILocalLightFilterHDR.h>
#import <PhotoImaging/PIMsgImageBuffer.h>
#import <PhotoImaging/PISmartBlackAndWhiteAutoCalculator.h>
#import <PhotoImaging/PISmartBlackAndWhiteHDR.h>
#import <PhotoImaging/PITrimAdjustmentController.h>
#import <PhotoImaging/PIRedEyeAdjustmentController.h>
#import <PhotoImaging/PILevelsAutoCalculator.h>
#import <PhotoImaging/PILevelsLuminanceAutoCalculator.h>
#import <PhotoImaging/PILevelsRGBAutoCalculator.h>
#import <PhotoImaging/PICurveControlPoint.h>
#import <PhotoImaging/PISmartToneFilterHDR.h>
#import <PhotoImaging/PILongExposureFusion.h>
#import <PhotoImaging/PIModernPhotosPipeline.h>
#import <PhotoImaging/PILevelsFilter.h>
#import <PhotoImaging/PISchema.h>
#import <PhotoImaging/PICompositionFinalizer.h>
#import <PhotoImaging/PICompositionFinalizerResult.h>
#import <PhotoImaging/PIVideoStabilizeAdjustmentController.h>
#import <PhotoImaging/PICropAutoCalculator.h>
#import <PhotoImaging/PISmartColorAdjustmentController.h>
#import <PhotoImaging/PISelectiveColorFilter.h>
#import <PhotoImaging/PIVideoReframePipelineStateSetting.h>
#import <PhotoImaging/PIVideoReframeNode.h>
#import <PhotoImaging/PINeutralGrayWhiteBalanceFilter.h>
#import <PhotoImaging/PISmartToneAutoCalculator.h>
#import <PhotoImaging/PISmartColorAutoCalculator.h>
#import <PhotoImaging/PIRedEyeAutoCalculator.h>
#import <PhotoImaging/PIManualRedEyeAutoCalculator.h>
#import <PhotoImaging/PIRepairOffsetAutoCalculator.h>
#import <PhotoImaging/PISourceSampler.h>
#import <PhotoImaging/PIPhotoGrainHDR.h>
#import <PhotoImaging/PIImageIO.h>
#import <PhotoImaging/PIStillReframerConfiguration.h>
#import <PhotoImaging/PIStillReframer.h>
#import <PhotoImaging/PISharpenAdjustmentController.h>
#import <PhotoImaging/PIVideoReframer.h>
#import <PhotoImaging/PIVideoReframeDebugSubject.h>
#import <PhotoImaging/PIVideoReframeDebugSubjectV1.h>
#import <PhotoImaging/PIVideoReframerV1.h>
#import <PhotoImaging/PIVideoReframeDebugSubjectV2.h>
#import <PhotoImaging/PIVideoReframerV2.h>
#import <PhotoImaging/PIApertureRedEyeProcessorKernel.h>
#import <PhotoImaging/PIApertureRedEyeFilter.h>
#import <PhotoImaging/PIValuesAtCapture.h>
#import <PhotoImaging/PIPortraitAutoCalculator.h>
#import <PhotoImaging/PIDepthEffectApertureAutoCalculator.h>
#import <PhotoImaging/PIPipelineFilters.h>
#import <PhotoImaging/PIWhiteBalanceAdjustmentController.h>
#import <PhotoImaging/PIRepairUtilities.h>
#import <PhotoImaging/PIVideoReframeRequest.h>
#import <PhotoImaging/PIVideoReframeRenderJob.h>
#import <PhotoImaging/_PIVideoReframeResult.h>
#import <PhotoImaging/PIAutoLoopVideoNode.h>
#import <PhotoImaging/PIAutoLoopMirrorVideoNode.h>
#import <PhotoImaging/PIDepthAdjustmentController.h>
#import <PhotoImaging/PIVideoReframeAdjustmentController.h>
#import <PhotoImaging/PICurvesAutoCalculator.h>
#import <PhotoImaging/PICurvesLuminanceAutoCalculator.h>
#import <PhotoImaging/PICurvesRGBAutoCalculator.h>
