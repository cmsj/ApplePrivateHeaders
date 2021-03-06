#import <Slideshows/OMSlideshowManager.h>
#import <Slideshows/OMFakeDocumentController.h>
#import <Slideshows/OMSlideshowTheme.h>
#import <Slideshows/OMSlideshowTransition.h>
#import <Slideshows/OMSlideshowViewController.h>
#import <Slideshows/OMMarimbaViewController.h>
#import <Slideshows/OMSlideshow.h>
#import <Slideshows/OMSlideshowExportOperationProgressHandlerCaller.h>
#import <Slideshows/OMSlideshowKeyedUnarchiver.h>
#import <Slideshows/OMSynopsisPath.h>
#import <Slideshows/OMSlideshowMediaAttributes.h>
#import <Slideshows/OMSlideshowMediaItem.h>
#import <Slideshows/MPAction.h>
#import <Slideshows/MPConditionalAction.h>
#import <Slideshows/MPAnimationTrigger.h>
#import <Slideshows/MPActionTrigger.h>
#import <Slideshows/MPStateOperation.h>
#import <Slideshows/MPGenericAction.h>
#import <Slideshows/MPTransitionAction.h>
#import <Slideshows/MPActionGroup.h>
#import <Slideshows/MPAnimatedSet.h>
#import <Slideshows/MPAnimationKeyframe.h>
#import <Slideshows/MPAnimationKeyframe1D.h>
#import <Slideshows/MPAnimationKeyframe2D.h>
#import <Slideshows/MPVector.h>
#import <Slideshows/MPAnimationKeyframeVector.h>
#import <Slideshows/MPAnimationKeyframeFunction.h>
#import <Slideshows/MPAnimationManager.h>
#import <Slideshows/MPAnimationPath.h>
#import <Slideshows/MPAnimationPathCombo.h>
#import <Slideshows/MPAnimationPathKeyframed.h>
#import <Slideshows/MPAssetManager.h>
#import <Slideshows/MPPlaylistInternal.h>
#import <Slideshows/MPAudioPlaylist.h>
#import <Slideshows/MPAuthoringController.h>
#import <Slideshows/MRTextureSource.h>
#import <Slideshows/MPAuthoringUtilities.h>
#import <Slideshows/MPCluster.h>
#import <Slideshows/MPClusterController.h>
#import <Slideshows/MPClusterSlide.h>
#import <Slideshows/MPCropController.h>
#import <Slideshows/MPDesktopAssetManager.h>
#import <Slideshows/MPDocumentInternal.h>
#import <Slideshows/MPDocumentKeyedUnarchiver.h>
#import <Slideshows/MPDocument.h>
#import <Slideshows/MPEffect.h>
#import <Slideshows/MPEffectContainer.h>
#import <Slideshows/MPEffectManager.h>
#import <Slideshows/MPFileValidationManager.h>
#import <Slideshows/MPFilterInternal.h>
#import <Slideshows/MPFilter.h>
#import <Slideshows/MPFilterManager.h>
#import <Slideshows/MPFrameInternal.h>
#import <Slideshows/MPFrame.h>
#import <Slideshows/MPFrameManager.h>
#import <Slideshows/MPLayer.h>
#import <Slideshows/MPLayerEffect.h>
#import <Slideshows/MPLayerGroupInternal.h>
#import <Slideshows/MPLayerGroup.h>
#import <Slideshows/MPLayerInternal.h>
#import <Slideshows/MPLayerSerializer.h>
#import <Slideshows/MPNavigatorInternal.h>
#import <Slideshows/MPNavigator.h>
#import <Slideshows/MPSlide.h>
#import <Slideshows/MPSongInternal.h>
#import <Slideshows/MPSong.h>
#import <Slideshows/MPSongManager.h>
#import <Slideshows/MPStyleManager.h>
#import <Slideshows/MPTextInternal.h>
#import <Slideshows/MPText.h>
#import <Slideshows/MPTransition.h>
#import <Slideshows/MPTransitionManager.h>
#import <Slideshows/MRMesh.h>
#import <Slideshows/MPUtilities.h>
#import <Slideshows/MPWeighterConstraint.h>
#import <Slideshows/MPWeighter.h>
#import <Slideshows/MRAnimationManager.h>
#import <Slideshows/MRContextState.h>
#import <Slideshows/MRContext.h>
#import <Slideshows/MRContextVertexAttributes.h>
#import <Slideshows/MRShaderArguments.h>
#import <Slideshows/MRCroppingSprite.h>
#import <Slideshows/MRCroppingSpriteVBO.h>
#import <Slideshows/MREffect.h>
#import <Slideshows/MREffectPList.h>
#import <Slideshows/MREffectBackgroundImage.h>
#import <Slideshows/MREffectGlobe.h>
#import <Slideshows/MREffectGradient.h>
#import <Slideshows/MREffectHangingPictures.h>
#import <Slideshows/MREffectHangingPicturesBackgroundLights.h>
#import <Slideshows/MREffectHangingPicturesBackgroundStars.h>
#import <Slideshows/MREffectHangingPicturesTitle.h>
#import <Slideshows/MREffectJustASlide.h>
#import <Slideshows/MREffectJustATitle.h>
#import <Slideshows/MREffectManager.h>
#import <Slideshows/MREffectPinMap.h>
#import <Slideshows/MREffectMapSlides.h>
#import <Slideshows/MREffectMapTitle.h>
#import <Slideshows/MREffectMapZoom.h>
#import <Slideshows/MREffectModern.h>
#import <Slideshows/MREffectOrigami.h>
#import <Slideshows/MREffectOrigamiTiming.h>
#import <Slideshows/MREffectOrigamiTitle.h>
#import <Slideshows/MREffectPhotoEdges.h>
#import <Slideshows/MRReflectionsLayout.h>
#import <Slideshows/MREffectReflections.h>
#import <Slideshows/MRReflectionsRenderable.h>
#import <Slideshows/MREffectReflectionsBackground.h>
#import <Slideshows/MREffectReflectionsSubtitle.h>
#import <Slideshows/MREffectReflectionsTitle.h>
#import <Slideshows/MREffectScrapbook_Old.h>
#import <Slideshows/MREffectScrapbookTitle.h>
#import <Slideshows/MREffectShatterTitle.h>
#import <Slideshows/MREffectSlidingPanels.h>
#import <Slideshows/MREffectSnapshot.h>
#import <Slideshows/MREffectSnapshotTitle.h>
#import <Slideshows/MREffectTableTop.h>
#import <Slideshows/MREffectTableTopTitle.h>
#import <Slideshows/MREffectVignettingOverlay.h>
#import <Slideshows/MREffectWatercolorBackground.h>
#import <Slideshows/MREffectWatercolorPanel.h>
#import <Slideshows/MREffectWatercolorTitle.h>
#import <Slideshows/MREffectFlipupBackground.h>
#import <Slideshows/MRFrame.h>
#import <Slideshows/MRFrameInsetBorder.h>
#import <Slideshows/MRFrameLineStroke.h>
#import <Slideshows/MRFrameManager.h>
#import <Slideshows/MRImage.h>
#import <Slideshows/MRImageManager.h>
#import <Slideshows/MRImageProvider.h>
#import <Slideshows/MRLayer.h>
#import <Slideshows/MRLayerCommand.h>
#import <Slideshows/MRSlideFocusState.h>
#import <Slideshows/MRLayerEffect.h>
#import <Slideshows/MRSlideInfo.h>
#import <Slideshows/MRLayerNavigator.h>
#import <Slideshows/MRTransitionChanges.h>
#import <Slideshows/MRLayerParallelizer.h>
#import <Slideshows/MRMarimbaLayer.h>
#import <Slideshows/MRMarimbaLayoutManager.h>
#import <Slideshows/MRMarimbaTextView.h>
#import <Slideshows/MRPatchworkPatch.h>
#import <Slideshows/MRPatchwork.h>
#import <Slideshows/MROrigamiAnimationPath.h>
#import <Slideshows/MRParallelPlugger.h>
#import <Slideshows/MRAnimationPathPhysics.h>
#import <Slideshows/MRAnimationPathScalar.h>
#import <Slideshows/MRAnimationContext.h>
#import <Slideshows/MRRendererInternal.h>
#import <Slideshows/MRRenderer.h>
#import <Slideshows/MRHitZoneForVisualFeedback.h>
#import <Slideshows/MRShaderManager.h>
#import <Slideshows/MRShader.h>
#import <Slideshows/MRUniform.h>
#import <Slideshows/MRSlideProvider.h>
#import <Slideshows/MRSphere.h>
#import <Slideshows/MRTextRenderer.h>
#import <Slideshows/MRTexture.h>
#import <Slideshows/MRTiledSprite.h>
#import <Slideshows/MRTransition.h>
#import <Slideshows/MRTransitionCIFilter.h>
#import <Slideshows/MRTransitionPhaseInOut.h>
#import <Slideshows/MRTransitionAccordion.h>
#import <Slideshows/MRTransitionCrossWipe.h>
#import <Slideshows/MRTransitionDroplet.h>
#import <Slideshows/MRTransitionFadeThruColor.h>
#import <Slideshows/MRTransitionManager.h>
#import <Slideshows/MRTransitionOrigamiFlip.h>
#import <Slideshows/MRTransitionOrigamiFold.h>
#import <Slideshows/MRTransitionPageFlip.h>
#import <Slideshows/MRTransitionRotate.h>
#import <Slideshows/MRTransitionShatter3D.h>
#import <Slideshows/MRTransitionShortMapZoom.h>
#import <Slideshows/MRTransitionSimple3D.h>
#import <Slideshows/MRTransitionSourceUnder.h>
#import <Slideshows/MRTransitionTileFlip.h>
#import <Slideshows/MRTransitionWipe.h>
#import <Slideshows/MRTrivialAssetManager.h>
#import <Slideshows/MRUtilities.h>
#import <Slideshows/MRAnimationTrigger.h>
#import <Slideshows/MURandom.h>
#import <Slideshows/MCAction.h>
#import <Slideshows/MCActionGroup.h>
#import <Slideshows/MCConditionalAction.h>
#import <Slideshows/MCActionForEachPlug.h>
#import <Slideshows/MCTransitionTrigger.h>
#import <Slideshows/MCAnimationTrigger.h>
#import <Slideshows/MCActionTrigger.h>
#import <Slideshows/MCStateOperation.h>
#import <Slideshows/MCStateOperationScalarSet.h>
#import <Slideshows/MCStateOperationStringSet.h>
#import <Slideshows/MCStateOperationExpression.h>
#import <Slideshows/MCMotionTrigger.h>
#import <Slideshows/MCMotionTriggerScalar.h>
#import <Slideshows/MCMotionTriggerExpression.h>
#import <Slideshows/MCGenericAction.h>
#import <Slideshows/MCAnimationKeyframe.h>
#import <Slideshows/MCAnimationKeyframe1D.h>
#import <Slideshows/MCAnimationKeyframeFunction.h>
#import <Slideshows/MCAnimationKeyframe2D.h>
#import <Slideshows/MCAnimationKeyframeVector.h>
#import <Slideshows/MCAnimationPath.h>
#import <Slideshows/MCAnimationPathCombo.h>
#import <Slideshows/MCAnimationPathExpression.h>
#import <Slideshows/MCAnimationPathKeyframed.h>
#import <Slideshows/MCAnimationPathPhysics.h>
#import <Slideshows/MCAsset.h>
#import <Slideshows/MCAssetAudio.h>
#import <Slideshows/MCAssetVideo.h>
#import <Slideshows/MCAudioPlaylist.h>
#import <Slideshows/MCContainer.h>
#import <Slideshows/MCContainerEffect.h>
#import <Slideshows/MCContainerNavigator.h>
#import <Slideshows/MCContainerParallelizer.h>
#import <Slideshows/MCContainerSerializer.h>
#import <Slideshows/MCFilter.h>
#import <Slideshows/MCMontage.h>
#import <Slideshows/MCObjectBase.h>
#import <Slideshows/MCObjectLight.h>
#import <Slideshows/MCObject.h>
#import <Slideshows/MCPlug.h>
#import <Slideshows/MCPlugSlide.h>
#import <Slideshows/MCPlugProxy.h>
#import <Slideshows/MCPlugHaven.h>
#import <Slideshows/MCPlugParallel.h>
#import <Slideshows/MRMarimbaView.h>
#import <Slideshows/MRMarimbaLayerView.h>
#import <Slideshows/MCPlugSerial.h>
#import <Slideshows/MCSlide.h>
#import <Slideshows/MCSlideAsset.h>
#import <Slideshows/MCSong.h>
#import <Slideshows/MCText.h>
#import <Slideshows/MEExporter.h>
#import <Slideshows/MEExporterManager.h>
#import <Slideshows/MELoader.h>
#import <Slideshows/MEPlugin.h>
#import <Slideshows/MEPluginHTML5.h>
#import <Slideshows/MEJSONExporter.h>
#import <Slideshows/MCTextConversion.h>
#import <Slideshows/MUMathExpressionBase.h>
#import <Slideshows/MUMathExpressionDoubleBased.h>
#import <Slideshows/MUMathExpressionFloatBased.h>
#import <Slideshows/MERenderer.h>
#import <Slideshows/MEPluginPDF.h>
#import <Slideshows/MRGesture.h>
#import <Slideshows/MRHitBlob.h>
#import <Slideshows/MRFlipupRenderable.h>
#import <Slideshows/MREffectFlipup.h>
#import <Slideshows/MRSnapshotter.h>
#import <Slideshows/MPFaceDetector.h>
#import <Slideshows/MREffectCoverCascadeSlideStory.h>
#import <Slideshows/MREffectCoverCascadeEvent.h>
#import <Slideshows/MREffectCoverCascade.h>
#import <Slideshows/MRShiftingTilesRenderable.h>
#import <Slideshows/MRShiftingTilesIteration.h>
#import <Slideshows/MRShiftingTilesTimingInfo.h>
#import <Slideshows/MREffectShiftingTiles.h>
#import <Slideshows/MEImageExporter.h>
#import <Slideshows/MRPictureFrameImage.h>
#import <Slideshows/MRPictureFrameRenderable.h>
#import <Slideshows/MRPictureFrameInfo.h>
#import <Slideshows/MREffectPictureFrames.h>
#import <Slideshows/MRTransitionReverseCube.h>
#import <Slideshows/MREffectFilmStrip.h>
#import <Slideshows/MREffectShowroom.h>
#import <Slideshows/MREffectShowroomBackground.h>
#import <Slideshows/MRAudioPlayer.h>
#import <Slideshows/MRAudioDucker.h>
#import <Slideshows/MRAudioItem.h>
#import <Slideshows/METimeVol.h>
#import <Slideshows/MEAudioSupport.h>
#import <Slideshows/MREffectJustAButton.h>
#import <Slideshows/MREffectCalendar.h>
#import <Slideshows/MREffectMagazine.h>
#import <Slideshows/MRPortfolioFrameImage.h>
#import <Slideshows/MREffectPortfolio.h>
#import <Slideshows/MRTransitionFlatPageFlip.h>
#import <Slideshows/MREffectFramedSlide.h>
#import <Slideshows/MREffectFramedText.h>
#import <Slideshows/MREffectMap.h>
#import <Slideshows/MREffectDateline.h>
#import <Slideshows/MRFloatingTimeInfo.h>
#import <Slideshows/MRFloatingRenderable.h>
#import <Slideshows/MREffectFloating.h>
#import <Slideshows/MRScrapbookImage.h>
#import <Slideshows/MRScrapbookLayout.h>
#import <Slideshows/MREffectScrapbook.h>
#import <Slideshows/MURetainingKey.h>
#import <Slideshows/MUPoolObject.h>
#import <Slideshows/MREffectFramedMap.h>
#import <Slideshows/MRGestureRecognizer.h>
#import <Slideshows/MRTapGestureRecognizer.h>
#import <Slideshows/MRPanZoomRotationGestureRecognizer.h>
#import <Slideshows/Cube.h>
#import <Slideshows/MRTransitionRevolutionsFlip.h>
#import <Slideshows/MRLayerClock.h>
#import <Slideshows/MRAction.h>
#import <Slideshows/MRMotion.h>
#import <Slideshows/MRGesturePanZoomRotation.h>
#import <Slideshows/MRMCBlockAction.h>
#import <Slideshows/MREffectShadedColors.h>
#import <Slideshows/MRTouch.h>
#import <Slideshows/MRTouchSet.h>
#import <Slideshows/MREffectCAML.h>
#import <Slideshows/MRCAMLUtilities.h>
#import <Slideshows/MRCAMLBezierData.h>
#import <Slideshows/MRCAMLLayer.h>
#import <Slideshows/MRCAMLTextLayer.h>
#import <Slideshows/MRCAMLAnimation.h>
#import <Slideshows/MRCAMLKeyframe.h>
#import <Slideshows/DDXMLDocument.h>
#import <Slideshows/DDXMLElement.h>
#import <Slideshows/DDXMLNode.h>
#import <Slideshows/MRMapRenderer.h>
#import <Slideshows/MREffectStretchableSlide.h>
#import <Slideshows/MREffectJustAText.h>
#import <Slideshows/MRRenderArguments.h>
#import <Slideshows/MUBezierPath.h>
#import <Slideshows/MUBezierCurve.h>
#import <Slideshows/MUBezierContour.h>
#import <Slideshows/MUBezierIntersection.h>
#import <Slideshows/MUBezierEdge.h>
#import <Slideshows/MUBezierEdgeIntersection.h>
#import <Slideshows/MREffectDotProgress.h>
#import <Slideshows/MRHyperGridIteration.h>
#import <Slideshows/MREffectHyperGrid.h>
#import <Slideshows/MRTransitionRevolutionsFlip2.h>
#import <Slideshows/MRAssetMaster.h>
#import <Slideshows/MRAssetPlayer.h>
#import <Slideshows/MRAssetPlayerStillImage.h>
#import <Slideshows/MRAssetPlayerMovie.h>
#import <Slideshows/MRAssetPlayerMovieForExport.h>
#import <Slideshows/MRAssetPlayerOptions.h>
#import <Slideshows/MREffectShatter.h>
#import <Slideshows/MRTransitionShatter.h>
#import <Slideshows/MREffectShatterText.h>
#import <Slideshows/MEAVComposition.h>
#import <Slideshows/MEAudioExporter.h>
#import <Slideshows/MEPluginVideoAVFoundation.h>
#import <Slideshows/MEPluginVideoImageSequence.h>
#import <Slideshows/MRTransitionHyperGridWipe.h>
