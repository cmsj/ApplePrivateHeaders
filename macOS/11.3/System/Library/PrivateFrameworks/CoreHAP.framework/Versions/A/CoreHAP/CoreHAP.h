#import <CoreHAP/HAPAuthSession.h>
#import <CoreHAP/HAPBLEPeripheralInfo.h>
#import <CoreHAP/HAPBLECharacteristicCache.h>
#import <CoreHAP/HAPBLEServiceCache.h>
#import <CoreHAP/HAPBLEAccessoryCache.h>
#import <CoreHAP/HAPBTLEControlPacket.h>
#import <CoreHAP/HAP2AccessoryServerCoordinator.h>
#import <CoreHAP/HAP2AccessoryServerControllerFactory.h>
#import <CoreHAP/HAP2AccessoryServerMetadata.h>
#import <CoreHAP/HAP2PropertyLock.h>
#import <CoreHAP/HAPDeviceID.h>
#import <CoreHAP/HAPDataValueTransformer.h>
#import <CoreHAP/HAPAccessoryServerIP.h>
#import <CoreHAP/HAPNotification.h>
#import <CoreHAP/HAP2ControllerReadRequest.h>
#import <CoreHAP/HAPBTLEResponse.h>
#import <CoreHAP/HAP2EncodingUtils.h>
#import <CoreHAP/HAPSecuritySessionEncryption.h>
#import <CoreHAP/HAP2AccessoryServerControllerOperation.h>
#import <CoreHAP/HAP2AccessoryServerPairingDriverMFiCertWorkItem.h>
#import <CoreHAP/HAPAccessoryConfiguration.h>
#import <CoreHAP/HAPAccessoryWiFiConfiguration.h>
#import <CoreHAP/HAPOperatingStateResponse.h>
#import <CoreHAP/HAPCharacteristicValueTransitionEndBehaviorWrapper.h>
#import <CoreHAP/HAPCharacteristicValueTransitionLinearStartConditionWrapper.h>
#import <CoreHAP/HAPAudioStreamCodecConfiguration.h>
#import <CoreHAP/HAPAudioStreamCodecParameters.h>
#import <CoreHAP/HAPSelectedAudioStreamConfiguration.h>
#import <CoreHAP/HAPSupportedAudioStreamConfigurations.h>
#import <CoreHAP/HAPPairingUtilities.h>
#import <CoreHAP/HAPValueTransformer.h>
#import <CoreHAP/HAP2AccessoryServerEncodingThread.h>
#import <CoreHAP/HAPTunneledAccessoryBTLE.h>
#import <CoreHAP/HAPComponent.h>
#import <CoreHAP/HAPBTLECentralManager.h>
#import <CoreHAP/HAPOperatingStateAbnormalReasonsWrapper.h>
#import <CoreHAP/HAPWiFiConfigurationOperationTypeWrapper.h>
#import <CoreHAP/HAPWiFiSecurityModeWrapper.h>
#import <CoreHAP/HAPFirmwareUpdateReadiness.h>
#import <CoreHAP/HAPFirmwareUpdateStatus.h>
#import <CoreHAP/HAPSupportedFirmwareUpdateConfiguration.h>
#import <CoreHAP/HAPSecuritySession.h>
#import <CoreHAP/HAPSecuritySessionDelegateAdditionalDerivedKeyTuple.h>
#import <CoreHAP/HAP2EncodedEnableNotificationResponse.h>
#import <CoreHAP/HAP2AccessoryServerAccessoryCache.h>
#import <CoreHAP/HAPBTLETransactionIdentifier.h>
#import <CoreHAP/HAP2AccessoryServerPairingFactoryHAP.h>
#import <CoreHAP/HAPWiFiConfigurationUpdateStatusWrapper.h>
#import <CoreHAP/HAP2AccessoryServerEncodingThreadBTLERequest.h>
#import <CoreHAP/HAP2AccessoryServerTransportRequest.h>
#import <CoreHAP/HAP2EncodedAttributeDatabaseResponseThread.h>
#import <CoreHAP/HAP2TLVAccessorySignatureReadRequest.h>
#import <CoreHAP/HAP2TLVAddOrRemovePairingResponse.h>
#import <CoreHAP/HAP2TLVAddPairingRequest.h>
#import <CoreHAP/HAP2TLVOldServiceList.h>
#import <CoreHAP/HAP2TLVParamAccessoryList.h>
#import <CoreHAP/HAP2TLVParamAccessorySignature.h>
#import <CoreHAP/HAP2TLVParamCharacteristicList.h>
#import <CoreHAP/HAP2TLVParamCharacteristicSignature.h>
#import <CoreHAP/HAP2TLVParamServiceList.h>
#import <CoreHAP/HAP2TLVParamServiceSignature.h>
#import <CoreHAP/HAP2TLVRemovePairingRequest.h>
#import <CoreHAP/HAP2EncodedCharacteristicRequestThread.h>
#import <CoreHAP/HAP2AccessoryServer.h>
#import <CoreHAP/HAP2AccessoryServerControllerTimedWriteOperation.h>
#import <CoreHAP/HAPService.h>
#import <CoreHAP/HAP2AccessoryServerPairingDriverWorkItem.h>
#import <CoreHAP/HAPKeychainItem.h>
#import <CoreHAP/HAPKeychainStoreRemovedAccessory.h>
#import <CoreHAP/HAPSystemKeychainStore.h>
#import <CoreHAP/HAP2AccessoryServerSecureTransportPairVerify.h>
#import <CoreHAP/HAPDataStreamHAPAccessoryPayload.h>
#import <CoreHAP/HAPDataStreamHAPControllerPayload.h>
#import <CoreHAP/HAPDataStreamTransportConfiguration.h>
#import <CoreHAP/HAPDataStreamTransportInterruptPayload.h>
#import <CoreHAP/HAPDataStreamTransportParameters.h>
#import <CoreHAP/HAPDataStreamTransportSetup.h>
#import <CoreHAP/HAPDataStreamTransportSetupResponse.h>
#import <CoreHAP/HAPDataStreamTransportSupportedConfiguration.h>
#import <CoreHAP/HAP2AccessoryServerControllerReadOperation.h>
#import <CoreHAP/ATVModel.h>
#import <CoreHAP/HAPBTLEReachabilityScanTuple.h>
#import <CoreHAP/HAPDiscoveredBTLEAccessoryServerTuple.h>
#import <CoreHAP/HAPRecentlySeenPairedBTLEPeripheralTuple.h>
#import <CoreHAP/HAPAccessoryServerBrowserBTLE.h>
#import <CoreHAP/HAP2AccessoryServerTransportBase.h>
#import <CoreHAP/HAP2AccessoryServerTransportBaseOperation.h>
#import <CoreHAP/HAP2AccessoryServerTransportBaseOperationOpen.h>
#import <CoreHAP/HAP2AccessoryServerTransportBaseOperationSendRequest.h>
#import <CoreHAP/HAP2AccessoryServerTransportBaseOperationClose.h>
#import <CoreHAP/HAPStagingNotReadyReasonsWrapper.h>
#import <CoreHAP/HAPUpdateNotReadyReasonsWrapper.h>
#import <CoreHAP/HAPBTLECharacteristicSignature.h>
#import <CoreHAP/HAPBTLEServiceSignature.h>
#import <CoreHAP/_HAPBTLEDiscoveryContext.h>
#import <CoreHAP/_HAPAccessoryServerBTLE200.h>
#import <CoreHAP/HAP2TLVErrorsWrapper.h>
#import <CoreHAP/HAP2TLVPairingMethodWrapper.h>
#import <CoreHAP/HAP2TLVPairingStateWrapper.h>
#import <CoreHAP/HAPJSONValueTransformer.h>
#import <CoreHAP/HAPDataStreamTransportCommandWrapper.h>
#import <CoreHAP/HAPDataStreamTransportCommandStatusWrapper.h>
#import <CoreHAP/HAPDataStreamTransportProtocolWrapper.h>
#import <CoreHAP/HAPSupportedDiagnosticsSnapshot.h>
#import <CoreHAP/HAPFieldWrapper.h>
#import <CoreHAP/HAPNumberWrapper.h>
#import <CoreHAP/HAPUint8Wrapper.h>
#import <CoreHAP/HAPUint16Wrapper.h>
#import <CoreHAP/HAPStringWrapper.h>
#import <CoreHAP/HAPDataWrapper.h>
#import <CoreHAP/HAPArrayWrapper.h>
#import <CoreHAP/HAPUUIDWrapper.h>
#import <CoreHAP/HAPTLVBase.h>
#import <CoreHAP/HAPNumberParser.h>
#import <CoreHAP/HAPTLVDescription.h>
#import <CoreHAP/HAPTLVNumberValueBase.h>
#import <CoreHAP/HAPTLVSignedNumberValue.h>
#import <CoreHAP/HAPTLVUnsignedNumberValue.h>
#import <CoreHAP/HAPTLVFloatNumberValue.h>
#import <CoreHAP/HAPAccessoryReachabilityProfile.h>
#import <CoreHAP/HAPAccessoryReachabilityClient.h>
#import <CoreHAP/HAP2AccessoryServerBrowser.h>
#import <CoreHAP/HAP2AccessoryServerBrowserOperation.h>
#import <CoreHAP/HAP2AccessoryServerBrowserCoordinatorInfo.h>
#import <CoreHAP/HAP2Cancelable.h>
#import <CoreHAP/HAP2CancelableObject.h>
#import <CoreHAP/HAP2EncodedEmptyResponseThread.h>
#import <CoreHAP/HAP2AsynchronousOperation.h>
#import <CoreHAP/HAPAccessoryServerBrowserIP.h>
#import <CoreHAP/HAP2AccessoryServerSecureTransportFactoryThread.h>
#import <CoreHAP/HAPCharacteristicValueTransitionTypesWrapper.h>
#import <CoreHAP/HAP2AccessoryServerSecureTransportBase.h>
#import <CoreHAP/HAP2AccessoryServerSecureTransportBaseDefaultEncryptedSession.h>
#import <CoreHAP/HAPRelayRequestMessage.h>
#import <CoreHAP/HAPRelayResponseMessage.h>
#import <CoreHAP/HAPAccessoryServerRelay.h>
#import <CoreHAP/HAPAccessoryServerHAP2Adapter.h>
#import <CoreHAP/HAP2CharacteristicTuple.h>
#import <CoreHAP/HAPCharacteristicValueActiveTransitionContext.h>
#import <CoreHAP/HAPCharacteristicValueLinearDerivedTransition.h>
#import <CoreHAP/HAPCharacteristicValueLinearDerivedTransitionPoint.h>
#import <CoreHAP/HAPCharacteristicValueLinearTransition.h>
#import <CoreHAP/HAPCharacteristicValueRange.h>
#import <CoreHAP/HAPCharacteristicValueTransition.h>
#import <CoreHAP/HAPCharacteristicValueTransitionControl.h>
#import <CoreHAP/HAPCharacteristicValueTransitionControlResponse.h>
#import <CoreHAP/HAPCharacteristicValueTransitionControllerContext.h>
#import <CoreHAP/HAPCharacteristicValueTransitionFetch.h>
#import <CoreHAP/HAPCharacteristicValueTransitionPoint.h>
#import <CoreHAP/HAPCharacteristicValueTransitionStart.h>
#import <CoreHAP/HAPCharacteristicValueTransitionState.h>
#import <CoreHAP/HAPSupportedCharacteristicValueTransition.h>
#import <CoreHAP/HAPSupportedCharacteristicValueTransitionConfiguration.h>
#import <CoreHAP/HAP2TLVThreadOperationTypeWrapper.h>
#import <CoreHAP/HAP2AccessoryServerDiscoveryBonjourLegacy.h>
#import <CoreHAP/HAP2AccessoryServerDiscoveryBonjour.h>
#import <CoreHAP/HAP2AccessoryServerDiscoveryBonjourBrowseResultTuple.h>
#import <CoreHAP/HAPRelayActivationClient.h>
#import <CoreHAP/HAP2TLVThreadControl.h>
#import <CoreHAP/HAP2TLVThreadNetworkCredentials.h>
#import <CoreHAP/HAPTLVParser.h>
#import <CoreHAP/HAPTLVCreator.h>
#import <CoreHAP/HAPFragmentationPacket.h>
#import <CoreHAP/HAPFragmentationStream.h>
#import <CoreHAP/HAP2EncodedCharacteristicEvent.h>
#import <CoreHAP/HAPBridgedAccessory.h>
#import <CoreHAP/HAPRelayAccessory.h>
#import <CoreHAP/HAP2SerializedOperationQueue.h>
#import <CoreHAP/HAPHTTPClient.h>
#import <CoreHAP/HAPAudioCodecBitRateWrapper.h>
#import <CoreHAP/HAPAudioCodecSampleRateWrapper.h>
#import <CoreHAP/HAPAudioCodecTypeWrapper.h>
#import <CoreHAP/HAP2CoAPClient.h>
#import <CoreHAP/HAP2EncodedAttributeDatabaseResponseCached.h>
#import <CoreHAP/HAP2AccessoryServerControllerAttributeRequestOperation.h>
#import <CoreHAP/HAPAccessoryServerBrowserHAP2Adapter.h>
#import <CoreHAP/HAPBTLERequest.h>
#import <CoreHAP/HAPDiagnosticsSnapshotFormatWrapper.h>
#import <CoreHAP/HAPOperatingStateWrapper.h>
#import <CoreHAP/HAPPairSetupSessionServerInfo.h>
#import <CoreHAP/HAPPairSetupSession.h>
#import <CoreHAP/HAPMetadataConstraints.h>
#import <CoreHAP/HAP2EncodedEmptyRequestThread.h>
#import <CoreHAP/HAPPowerManager.h>
#import <CoreHAP/HAP2EncodedRequestThread.h>
#import <CoreHAP/HAP2EncodedListPairingsResponseThread.h>
#import <CoreHAP/HAPAccessoryServer.h>
#import <CoreHAP/HAPMetadataUnit.h>
#import <CoreHAP/HAPMetadataProperty.h>
#import <CoreHAP/HAPMetadataCharacteristicValue.h>
#import <CoreHAP/HAPMetadataCharacteristic.h>
#import <CoreHAP/HAPMetadataService.h>
#import <CoreHAP/HAPMetadataTuple.h>
#import <CoreHAP/HAPMetadata.h>
#import <CoreHAP/CBConnectionsObserver.h>
#import <CoreHAP/HMFObjectCacheHAPCharacteristicMetadata.h>
#import <CoreHAP/HAPCharacteristicMetadata.h>
#import <CoreHAP/HAP2CoAPIO.h>
#import <CoreHAP/HAP2CoAPIOConsumerWeakHolder.h>
#import <CoreHAP/HAP2AsynchronousBlockOperation.h>
#import <CoreHAP/HAP2AccessoryServerCoordinatorThread.h>
#import <CoreHAP/HAP2Accessory.h>
#import <CoreHAP/HAP2TLVCharacteristicPropertiesWrapper.h>
#import <CoreHAP/HAP2TLVServicePropertiesWrapper.h>
#import <CoreHAP/HAP2AccessoryServerDiscoveryAccessoryInfo.h>
#import <CoreHAP/HAP2Lock.h>
#import <CoreHAP/HAPAccessoryServerBrowser.h>
#import <CoreHAP/HAP2AccessoryServerSecureTransportPairSetup.h>
#import <CoreHAP/HAP2AccessoryServerSecureTransportPairSetupPassThroughEncryptedSession.h>
#import <CoreHAP/HAP2EncodedResponseThread.h>
#import <CoreHAP/HAPDiagnosticsSnapshotAudioWrapper.h>
#import <CoreHAP/HAPDiagnosticsSnapshotOptionsWrapper.h>
#import <CoreHAP/HAPDiagnosticsSnapshotTypeWrapper.h>
#import <CoreHAP/HAP2AccessoryServerDefaultAccessoryFactory.h>
#import <CoreHAP/HAP2AccessoryServerController.h>
#import <CoreHAP/HAP2AccessoryServerPairingDriver.h>
#import <CoreHAP/HAP2AccessoryServerTransportFactoryThread.h>
#import <CoreHAP/HAP2EncodedCharacteristicResponse.h>
#import <CoreHAP/HAPAccessory.h>
#import <CoreHAP/HAPPairingIdentity.h>
#import <CoreHAP/HAP2AccessoryServerDiscoveryHAPAccessoryInfo.h>
#import <CoreHAP/HAP2CoAPIOThread.h>
#import <CoreHAP/HAP2CoAPIOConsumerInfo.h>
#import <CoreHAP/HAP2CoAPIOThreadQueueEntry.h>
#import <CoreHAP/HAPBLEPeripheral.h>
#import <CoreHAP/HAPAccessoryServerBrowserWiProxBTLE.h>
#import <CoreHAP/HAP2AccessoryServerPairingDriverAuthPromptWorkItem.h>
#import <CoreHAP/HAPBTLEControlOutputStream.h>
#import <CoreHAP/HAPBTLETuple.h>
#import <CoreHAP/HAP2LoggingObject.h>
#import <CoreHAP/HAPCharacteristicReadCompletionTuple.h>
#import <CoreHAP/HAPAddRemovePairingOperation.h>
#import <CoreHAP/_HAPAccessoryServerBTLE100.h>
#import <CoreHAP/HAPCharacteristic.h>
#import <CoreHAP/HAPCharacteristicEvent.h>
#import <CoreHAP/HAPWACAccessory.h>
#import <CoreHAP/HAPWACAccessoryBrowser.h>
#import <CoreHAP/HAPWiFiConfigurationControl.h>
#import <CoreHAP/HAPWiFiStationConfiguration.h>
#import <CoreHAP/HAP2AccessoryServerTransportCoAP.h>
#import <CoreHAP/HAPRelayStream.h>
#import <CoreHAP/HAPFirmwareUpdateStateWrapper.h>
#import <CoreHAP/HAPRelayPairingClient.h>
#import <CoreHAP/HAPAccessoryServerBrowserRelay.h>
#import <CoreHAP/HAP2AccessoryServerPairingDriverTransportControlWorkItem.h>
#import <CoreHAP/HAP2AccessoryServerPairingDriverSoftwareAuthWorkItem.h>
#import <CoreHAP/HAPCharacteristicEnableEventCompletionTuple.h>
#import <CoreHAP/HAPAccessoryServerBTLE.h>
#import <CoreHAP/HAP2AccessoryServerEncodingFactoryThread.h>
#import <CoreHAP/HAPAccessoryInfo.h>
#import <CoreHAP/HAPAccessoryProtocolInfo.h>
#import <CoreHAP/HAPProtocolMessages.h>
#import <CoreHAP/HAPCharacteristicWriteRequestTuple.h>
#import <CoreHAP/HAPCharacteristicResponseTuple.h>
#import <CoreHAP/HAPCharacteristicConfigurationRequestTuple.h>
#import <CoreHAP/HAP2AccessoryServerTransportBaseWithDelegate.h>
#import <CoreHAP/HAP2AccessoryServerPairingDriverPairSetupWorkItem.h>
#import <CoreHAP/HAP2AccessoryServerSecureTransportThreadPaired.h>
