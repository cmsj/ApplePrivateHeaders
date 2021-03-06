/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSDate, NSArray;

@interface HMDHomeConfiguration : HMFObject {

	char _ownerUser;
	char _isResidentAvailable;
	char _isAutomaticThirdPartyAccessorySoftwareUpdateEnabled;
	char _primaryReportingDevice;
	char _isPrimaryResident;
	char _isCurrentDeviceResidentEnabled;
	char _networkProtectionEnabled;
	char _autoThirdPartyJetEnable;
	int _networkProtectionStatus;
	NSDate* _creationDate;
	NSDate* _firstHAPAccessoryAddedDate;
	unsigned long long _numAccessories;
	unsigned long long _numCertifiedAccessories;
	unsigned long long _numBridgedAccessories;
	unsigned long long _numNotCertifiedAccessories;
	unsigned long long _numHAPAccessories;
	unsigned long long _numAppleMediaAccessories;
	unsigned long long _numWholeHouseAudioAccessories;
	unsigned long long _numAppleAudioAccessories;
	unsigned long long _numAppleTVAccessories;
	unsigned long long _numCameraAccessories;
	unsigned long long _numTelevisionAccessories;
	unsigned long long _numTelevisionSetTopBoxAccessories;
	unsigned long long _numTelevisionStreamingStickAccessories;
	unsigned long long _numHAPSpeakerServiceAccessories;
	unsigned long long _numPrimaryHAPSpeakerServiceAccessories;
	unsigned long long _numConfiguredScenes;
	unsigned long long _numTargetControllerAccessories;
	unsigned long long _numCertifiedTargetControllerAccessories;
	unsigned long long _numBridgedTargetControllerAccessories;
	unsigned long long _numCertifiedBridgedTargetControllerAccessories;
	unsigned long long _numAccessoriesWiFiPPSKCredential;
	unsigned long long _numAccessoriesNetworkProtectionUnprotected;
	unsigned long long _numAccessoriesNetworkProtectionAutoFullAccess;
	unsigned long long _numAccessoriesNetworkProtectionAutoProtectedMainLAN;
	unsigned long long _numAccessoriesNetworkProtectionAutoProtectedHomeKitLAN;
	unsigned long long _numAccessoriesNetworkProtectionFullAccess;
	unsigned long long _numAccessoriesNetworkProtectionHomeKitOnly;
	unsigned long long _numHAPIPAccessories;
	unsigned long long _numHAPBTAccessories;
	unsigned long long _numHAPBatteryAccessories;
	unsigned long long _numCameraAccessoriesSupportRecording;
	unsigned long long _numCameraAccessoriesRecordingEnabled;
	unsigned long long _numCameraAccessoriesReachabilityNotificationEnabled;
	unsigned long long _numCameraAccessoriesWithActivityZonesEnabled;
	unsigned long long _numLightProfilesWithNaturalLightingSupported;
	unsigned long long _numLightProfilesWithNaturalLightingEnabled;
	unsigned long long _numLightProfilesWithNaturalLightingUsed;
	unsigned long long _numResidentsEnabled;
	unsigned long long _enabledResidentsDeviceCapabilities;
	unsigned long long _numServices;
	unsigned long long _numMediaSystems;
	unsigned long long _numTriggers;
	unsigned long long _numActiveTriggers;
	unsigned long long _numEventTriggers;
	unsigned long long _numTimerTriggers;
	unsigned long long _numShortcuts;
	unsigned long long _numTargetControllers;
	unsigned long long _numCertifiedTargetControllers;
	unsigned long long _numBridgedTargetControllers;
	unsigned long long _numCertifiedBridgedTargetControllers;
	unsigned long long _numHAPBatteryServiceAccessories;
	unsigned long long _numAdmins;
	unsigned long long _numUsers;
	unsigned long long _numTriggerOwnedConfiguredScenes;
	unsigned long long _numScenes;
	unsigned long long _numRooms;
	unsigned long long _numZones;
	unsigned long long _numAccessoryServiceGroups;
	long long _durationDaysSinceHomeCreationDate;
	long long _durationDaysSinceFirstHAPAccessoryAddedDate;
	unsigned long long _poeCount;
	unsigned long long _poe2Count;
	unsigned long long _homepodSynchLatency;
	unsigned long long _numThreadAccessories;
	unsigned long long _numThreadAccessoryMinCapable;
	unsigned long long _numThreadAccessorySleepCapable;
	unsigned long long _numThreadAccessoryFullCapable;
	unsigned long long _numThreadAccessoryRouterCapable;
	unsigned long long _numThreadAccessoryBorderRouterCapable;
	unsigned long long _numThreadBorderRouters;
	unsigned long long _numHAPIPAccessoriesSupportJet;
	unsigned long long _numHAPBLEAccessoriesSupportJet;
	unsigned long long _numHAPNoeAccessoriesSupportJet;
	NSArray* _multiUserSettings;
	NSArray* _eventTriggers;
	NSArray* _hapServicesListCertifieds;
	NSArray* _hapServicesLists;
	NSArray* _primaryHAPServicesListCertifieds;
	NSArray* _primaryHAPServicesLists;
	long long _currentMediaAccessoryFallbackMediaUserType;
	unsigned long long _numHomePods;
	unsigned long long _numBSPs;

}
@end

