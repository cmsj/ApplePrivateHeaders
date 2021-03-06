#import <SafariSharedUI/WBSWebExtensionsControllerSelectorForwarder.h>
#import <SafariSharedUI/WBSWebExtensionAPINamespaceObjC.h>
#import <SafariSharedUI/WBSWebExtensionsController.h>
#import <SafariSharedUI/WBSPhishingConfigurationOverride.h>
#import <SafariSharedUI/WBSPhishingConfigurationDomain.h>
#import <SafariSharedUI/WBSPhishingConfigurationImageClassifierIdentifier.h>
#import <SafariSharedUI/WBSPhishingConfiguration.h>
#import <SafariSharedUI/WBSWebExtensionAPIContextMenusObjC.h>
#import <SafariSharedUI/WBSUISafariSandboxBrokerConnection.h>
#import <SafariSharedUI/WBSWebExtensionAPIWebNavigationEventListener.h>
#import <SafariSharedUI/WBSWebExtensionAPIWebNavigationEventObjC.h>
#import <SafariSharedUI/WBSBundleWebExtensionBrowsingContext.h>
#import <SafariSharedUI/WBSBundleWebExtension.h>
#import <SafariSharedUI/WBSBookmarkFolderTouchIconProvider.h>
#import <SafariSharedUI/WBSBookmarkFolderTouchIconProviderRequestInfo.h>
#import <SafariSharedUI/WBSBookmarkFolderTouchIconProviderInfo.h>
#import <SafariSharedUI/WBSCacheRetainReleasePolicy.h>
#import <SafariSharedUI/WBSFaviconRequest.h>
#import <SafariSharedUI/WBSTranslationConsentAlertHelper.h>
#import <SafariSharedUI/WBSFaviconRequestsController.h>
#import <SafariSharedUI/WBSWebExtensionAPINotificationsObjC.h>
#import <SafariSharedUI/WBSWebExtensionAPIPermissionsObjC.h>
#import <SafariSharedUI/WBSFaviconResponse.h>
#import <SafariSharedUI/WBSWebExtensionAPIActionObjC.h>
#import <SafariSharedUI/WBSPhishingClassifierResults.h>
#import <SafariSharedUI/WBSWebExtensionInjectedContentData.h>
#import <SafariSharedUI/WBSWebExtensionContextMenuItemInfo.h>
#import <SafariSharedUI/_WBSFaviconRecord.h>
#import <SafariSharedUI/WBSFaviconProvider.h>
#import <SafariSharedUI/WBSFaviconProviderDatabaseController.h>
#import <SafariSharedUI/WBSFaviconProviderIconInfo.h>
#import <SafariSharedUI/WBSFaviconProviderPersistenceController.h>
#import <SafariSharedUI/WBSWebExtensionPendingWebsiteRequest.h>
#import <SafariSharedUI/WBSWebExtensionAPIPortObjC.h>
#import <SafariSharedUI/WBSFaviconProviderRecordCache.h>
#import <SafariSharedUI/WBSWebExtensionAPIWebNavigationObjC.h>
#import <SafariSharedUI/WBSFaviconProviderPrivateCache.h>
#import <SafariSharedUI/WBSWebExtensionSQLiteStore.h>
#import <SafariSharedUI/WBSTranslationAvailability.h>
#import <SafariSharedUI/WBSFaviconProviderUtilities.h>
#import <SafariSharedUI/WBSLeadImageCache.h>
#import <SafariSharedUI/WBSLeadImageCacheResponse.h>
#import <SafariSharedUI/WBSLeadImageCacheRequest.h>
#import <SafariSharedUI/WBSLeadImageSaver.h>
#import <SafariSharedUI/WBSParsecABGroupIdentifierUserDefaultsStore.h>
#import <SafariSharedUI/WBSOnDiskDataCache.h>
#import <SafariSharedUI/WBSSiteMetadataFetchOperation.h>
#import <SafariSharedUI/WBSSiteMetadataImageCache.h>
#import <SafariSharedUI/WBSStartPageBackgroundImageDescription.h>
#import <SafariSharedUI/WBSStartPageBackgroundImagesDataSource.h>
#import <SafariSharedUI/WBSSiteMetadataImageCacheSettingsSQLiteStore.h>
#import <SafariSharedUI/WBSSiteMetadataManager.h>
#import <SafariSharedUI/_WBSSiteMetadataToken.h>
#import <SafariSharedUI/_WBSSiteMetadataRequestInfo.h>
#import <SafariSharedUI/WBSSiteMetadataRequest.h>
#import <SafariSharedUI/WBSSiteMetadataResponse.h>
#import <SafariSharedUI/WBSSVGImageRenderingFetchOperation.h>
#import <SafariSharedUI/WBSSVGImageRenderingProvider.h>
#import <SafariSharedUI/WBSSVGImageRenderingRequest.h>
#import <SafariSharedUI/WBSWebExtensionAPIExtensionObjC.h>
#import <SafariSharedUI/WBSSVGImageRenderingResponse.h>
#import <SafariSharedUI/WBSPrivacyReportData.h>
#import <SafariSharedUI/WBSSafariExtension.h>
#import <SafariSharedUI/WBSWebExtensionAlarmMetadata.h>
#import <SafariSharedUI/WBSWebExtensionAlarmState.h>
#import <SafariSharedUI/WBSParsecABGroupManager.h>
#import <SafariSharedUI/WBSSVGImageRenderingWebProcessPlugInPageController.h>
#import <SafariSharedUI/WBSWebExtensionToolbarItem.h>
#import <SafariSharedUI/WBSTouchIconCache.h>
#import <SafariSharedUI/WBSTouchIconCacheSettingsEntry.h>
#import <SafariSharedUI/WBSWebExtensionURLSchemeHandler.h>
#import <SafariSharedUI/WBSUISafariSandboxBroker.h>
#import <SafariSharedUI/WBSWebExtensionAPIEventObjC.h>
#import <SafariSharedUI/WBSLocalePair.h>
#import <SafariSharedUI/WBSTouchIconCacheSettingsSQLiteStore.h>
#import <SafariSharedUI/WBSWebExtensionAPILocalizationObjC.h>
#import <SafariSharedUI/WBSWebExtensionCommand.h>
#import <SafariSharedUI/WBSLocalAssetController.h>
#import <SafariSharedUI/WBSPhishingURLClassifierHistoryAdapter.h>
#import <SafariSharedUI/WBSTouchIconFetchOperation.h>
#import <SafariSharedUI/WBSBundleWebExtensionsController.h>
#import <SafariSharedUI/WBSTouchIconFetchOperationResult.h>
#import <SafariSharedUI/WBSTouchIconRequest.h>
#import <SafariSharedUI/WBSWebExtensionAPIAlarmsObjC.h>
#import <SafariSharedUI/WBSTouchIconResponse.h>
#import <SafariSharedUI/WBSTouchIconWebProcessPlugInPageController.h>
#import <SafariSharedUI/WBSTemplateIconCache.h>
#import <SafariSharedUI/WBSCachedFont.h>
#import <SafariSharedUI/WBSTemplateIconMonogramGenerator.h>
#import <SafariSharedUI/WBSTemplateIconMonogramConfiguration.h>
#import <SafariSharedUI/WBSTemplateIconRequest.h>
#import <SafariSharedUI/WBSTranslationContextSnapshot.h>
#import <SafariSharedUI/WBSTemplateIconResponse.h>
#import <SafariSharedUI/WBSWebProcessPlugIn.h>
#import <SafariSharedUI/WBSWebProcessPlugInPageController.h>
#import <SafariSharedUI/WBSWebViewMetadataFetchOperation.h>
#import <SafariSharedUI/WBSPhishingUpdateConfiguration.h>
#import <SafariSharedUI/WBSAppLink.h>
#import <SafariSharedUI/WBSPhishingAssetController.h>
#import <SafariSharedUI/WBSPhishingClassifierControllerConfigurationTransformer.h>
#import <SafariSharedUI/WBSFluidProgressController.h>
#import <SafariSharedUI/WBSFluidProgressAnimation.h>
#import <SafariSharedUI/WBSFluidProgressState.h>
#import <SafariSharedUI/WBSContextFeedbackManager.h>
#import <SafariSharedUI/WBSContextResultGrouper.h>
#import <SafariSharedUI/WBSWebExtensionAPITabsObjC.h>
#import <SafariSharedUI/WBSForYouCloudTabsDataSource.h>
#import <SafariSharedUI/WBSForYouDataSourceWeightManager.h>
#import <SafariSharedUI/WBSForYouLinkRecommendation.h>
#import <SafariSharedUI/WBSWebExtensionAPICookiesObjC.h>
#import <SafariSharedUI/WBSForYouPerSitePreferenceManager.h>
#import <SafariSharedUI/WBSWebExtensionAPIStorageAreaObjC.h>
#import <SafariSharedUI/WBSForYouRecommendationMediator.h>
#import <SafariSharedUI/WBSForYouRecommendationMediatorDataSource.h>
#import <SafariSharedUI/WBSForYouTopic.h>
#import <SafariSharedUI/WBSExtensionsController.h>
#import <SafariSharedUI/WBSForYouTopicManager.h>
#import <SafariSharedUI/WBSFoundInRecommendationManager.h>
#import <SafariSharedUI/WBSSiriIntelligenceDonorHistoryData.h>
#import <SafariSharedUI/WBSSiriIntelligenceDonorBookmarkData.h>
#import <SafariSharedUI/WBSSiriIntelligenceDonor.h>
#import <SafariSharedUI/WBSWebExtensionWebNavigationURLPredicate.h>
#import <SafariSharedUI/WBSWebExtensionWebNavigationURLFilter.h>
#import <SafariSharedUI/WBSSiriIntelligenceHistorySearch.h>
#import <SafariSharedUI/WBSWebExtensionData.h>
#import <SafariSharedUI/WBSWebExtensionAPIStorageObjC.h>
#import <SafariSharedUI/WBSWebExtensionLocalization.h>
#import <SafariSharedUI/_WBSParsecSubscriptionInfoKeyValueStringParser.h>
#import <SafariSharedUI/WBSParsecSubscriptionInfo.h>
#import <SafariSharedUI/WBSPhishingURLClassifierWithFallback.h>
#import <SafariSharedUI/WBSParsecAuxiliaryInfo.h>
#import <SafariSharedUI/WBSParsecSearchSimpleResult.h>
#import <SafariSharedUI/WBSWebExtensionAPIWebRequestEventListener.h>
#import <SafariSharedUI/WBSWebExtensionAPIWebRequestEventObjC.h>
#import <SafariSharedUI/WBSWebExtensionAPIWindowsObjC.h>
#import <SafariSharedUI/WBSCompletionListRankingObserver.h>
#import <SafariSharedUI/_WBSSearchFoundationFeedbackGenerator.h>
#import <SafariSharedUI/WBSWebExtensionNewTabOverridePreferencesManager.h>
#import <SafariSharedUI/WBSParsecSearchUtilities.h>
#import <SafariSharedUI/WBSParsecSearchResponse.h>
#import <SafariSharedUI/WBSKnownTrackerFilter.h>
#import <SafariSharedUI/WBSWebExtensionAPICommandsObjC.h>
#import <SafariSharedUI/WBSParsecSearchResultCache.h>
#import <SafariSharedUI/WBSParsecResultSetPattern.h>
#import <SafariSharedUI/WBSParsecSportsScoreSummary.h>
#import <SafariSharedUI/WBSWebExtensionAPIWindowsEventListener.h>
#import <SafariSharedUI/WBSWebExtensionAPIWindowsEventObjC.h>
#import <SafariSharedUI/WBSParsecDSession.h>
#import <SafariSharedUI/WBSWebExtensionWebRequestFilter.h>
#import <SafariSharedUI/WBSParsecLegacySearchResult.h>
#import <SafariSharedUI/WBSParsecSearchResult.h>
#import <SafariSharedUI/WBSPhishingClassifierController.h>
#import <SafariSharedUI/WBSParsecFlightFetcher.h>
#import <SafariSharedUI/WBSParsecHiddenResultInfo.h>
#import <SafariSharedUI/WBSParsecSearchSportsAttributionExtraCompletionItem.h>
#import <SafariSharedUI/WBSParsecPunchout.h>
#import <SafariSharedUI/WBSParsecSearchMoviesResult.h>
#import <SafariSharedUI/WBSParsecDFeedbackDispatcher.h>
#import <SafariSharedUI/WBSStartPageBackgroundManager.h>
#import <SafariSharedUI/WBSTrackingCapableFirstParty.h>
#import <SafariSharedUI/WBSTrackedFirstParty.h>
#import <SafariSharedUI/WBSTrackingCapableThirdParty.h>
#import <SafariSharedUI/WBSKnownTrackingThirdParty.h>
#import <SafariSharedUI/WBSSearchProvider.h>
#import <SafariSharedUI/WBSParsecFormattedText.h>
#import <SafariSharedUI/WBSParsecSubscriptionManager.h>
#import <SafariSharedUI/WBSParsecSearchMapsResultFeedbackSender.h>
#import <SafariSharedUI/WBSPhishingURLClassifierCrowdsourcedFeedbackAllowListAdapter.h>
#import <SafariSharedUI/WBSWebExtensionMatchPattern.h>
#import <SafariSharedUI/WBSParsecSportsImage.h>
#import <SafariSharedUI/WBSParsecSearchMapsResult.h>
#import <SafariSharedUI/WBSParsecSearchSportsResult.h>
#import <SafariSharedUI/WBSParsecSearchGenericResult.h>
#import <SafariSharedUI/WBSWebExtensionUtilities.h>
#import <SafariSharedUI/WBSPhishingImageClassifierModel.h>
#import <SafariSharedUI/WBSParsecSearchCompletionResultSet.h>
#import <SafariSharedUI/WBSParsecSearchFlightsResult.h>
#import <SafariSharedUI/WBSWebExtensionContextMenuItemEntry.h>
#import <SafariSharedUI/WBSWebExtensionContextMenuItemManager.h>
#import <SafariSharedUI/WBSSFSearchResultAdapter.h>
#import <SafariSharedUI/WBSTranslationErrorController.h>
#import <SafariSharedUI/WBSParsecRichText.h>
#import <SafariSharedUI/WBSWebExtensionAPIObject.h>
#import <SafariSharedUI/WBSSearchSuggestionsFetcher.h>
#import <SafariSharedUI/WBSTranslationScrollInteractionAnalyticsHelper.h>
#import <SafariSharedUI/WBSParsecActionButton.h>
#import <SafariSharedUI/WBSWebExtensionWebProcessPlugInPageController.h>
#import <SafariSharedUI/WBSWebExtensionPortInfo.h>
#import <SafariSharedUI/WBSParsecImageRepresentation.h>
#import <SafariSharedUI/WBSWebExtensionAPIWebRequestObjC.h>
#import <SafariSharedUI/WBSForYouRecentParsecResultsManager.h>
#import <SafariSharedUI/WBSWebExtensionContextMenuItem.h>
#import <SafariSharedUI/WBSImageFetchingURLSessionTaskManager.h>
#import <SafariSharedUI/WBSImageUtilities.h>
#import <SafariSharedUI/WBSSiteIconKeyColorExtractor.h>
#import <SafariSharedUI/WBSMetadataExtractor.h>
#import <SafariSharedUI/WBSWebExtensionContextMenuContext.h>
#import <SafariSharedUI/WBSPhishingURLClassifierConfigurationOverrideAdapter.h>
#import <SafariSharedUI/WBSPhishingURLClassifierCache.h>
#import <SafariSharedUI/WBSURLSpoofingMitigator.h>
#import <SafariSharedUI/WBSTranslationDataCollectionManager.h>
#import <SafariSharedUI/WBSWebExtensionAPIRuntimeObjC.h>
#import <SafariSharedUI/WBSTranslationInformation.h>
#import <SafariSharedUI/WBSExtensionMessageReplySender.h>
#import <SafariSharedUI/WBSTranslationURLParser.h>
#import <SafariSharedUI/WBSTranslationWebpageContentExtractor.h>
#import <SafariSharedUI/WBSTranslationContext.h>
#import <SafariSharedUI/WBSTranslationDiagnosticData.h>
#import <SafariSharedUI/WBSMobileAssetController.h>
#import <SafariSharedUI/WBSTranslationConsentAlertLearnMoreWindowControllerMac.h>
