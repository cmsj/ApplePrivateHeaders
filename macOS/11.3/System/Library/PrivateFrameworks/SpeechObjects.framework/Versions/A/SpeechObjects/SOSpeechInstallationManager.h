/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpeechObjects.framework/Versions/A/SpeechObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpeechObjects/SpeechObjects-Structs.h>
@class CustomizeVoicesWindowController, SOCustomizeSRLanguagesWindowController;

@interface SOSpeechInstallationManager : NSObject {

	id _delegate;
	CustomizeVoicesWindowController* _voiceSelectionWindowController;
	SOCustomizeSRLanguagesWindowController* _srLanguagesSelectionWindowController;
	CFMessagePortRef _serverPortRef;

}

@property (retain,readonly) CustomizeVoicesWindowController * voiceSelectionWindowController; 
@property (retain,readonly) SOCustomizeSRLanguagesWindowController * srLanguagesSelectionWindowController; 
@property (__weak) id delegate;                                                                                         //@synthesize delegate=_delegate - In the implementation block
+(id)sharedManager;
-(void)finalize;
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)activeInstallations;
-(char)isRunningOnACPower;
-(id)installationLogEntryForTag:(id)arg1 ;
-(char)doesLanguageDataNeedToBeDownloadedForLocaleIdentifier:(id)arg1 ;
-(void)cancelAllInstallations;
-(void)showProgressWindow;
-(char)startInstallingDownloadableSpeechItems:(id)arg1 userInteractionMode:(unsigned)arg2 ;
-(id)downloadableVoices;
-(void)showVoiceSelectionSheetForWindow:(id)arg1 showIndividualVoiceQualities:(char)arg2 voiceIdentifiersNotToBeRemoved:(id)arg3 ;
-(id)activeVoiceInstallations;
-(id)downloadableVoiceUpgradeForVoice:(id)arg1 fromDownloadableVoices:(id)arg2 ;
-(char)isAutoDownloadProhibitedForDownloadableVoiceObject:(id)arg1 ;
-(char)startInstallingDownloadableVoices:(id)arg1 useRootNames:(char)arg2 userInteractionMode:(unsigned)arg3 initiator:(id)arg4 ;
-(void)startRemovingDownloadedSpeechItems:(id)arg1 initiator:(id)arg2 immediately:(char)arg3 ;
-(id)bundleForRemovableVoice:(id)arg1 passingBackTagName:(id*)arg2 ;
-(void)markDownloadableVoiceObject:(id)arg1 withAutoDownloadProhibitFlag:(char)arg2 ;
-(id)downloadableSRLanguageItems;
-(id)downloadableSpeechItemUpgradeForExistingSpeechItem:(id)arg1 fromDownloadableItems:(id)arg2 ;
-(char)startInstallingDownloadableSpeechItems:(id)arg1 userInteractionMode:(unsigned)arg2 initiator:(id)arg3 ;
-(id)bundleForRemovableLanguage:(id)arg1 passingBackTagName:(id*)arg2 ;
-(void)showSRLanguagesSelectionSheetForWindow:(id)arg1 networkSupportedLocaleIdentifiers:(id)arg2 requiredLocaleIdentifier:(id)arg3 supportDownloads:(char)arg4 showOnlyNetworkSupportedItems:(char)arg5 ;
-(CFMessagePortRef)_createLocalPort;
-(id)_sendMessage:(int)arg1 withData:(void*)arg2 withReply:(char)arg3 ;
-(id)downloadableVoiceUpgradeForVoiceIdentifier:(id)arg1 desirability:(long long)arg2 fromDownloadableVoices:(id)arg3 ;
-(char)_clientHasRightsToCustomVoices;
-(CustomizeVoicesWindowController *)voiceSelectionWindowController;
-(id)highestQualityVoiceIdentifierForRootVoiceIdentifier:(id)arg1 startDownloading:(char)arg2 requireACPower:(char)arg3 initiator:(id)arg4 ;
-(id)_voiceIdentifierForRootVoiceIdentifier:(id)arg1 startDownloading:(char)arg2 requireACPower:(char)arg3 initiator:(id)arg4 highestQuality:(char)arg5 ;
-(char)_startDownloadingHighestQualityIfNecessaryForVoiceIdentifier:(id)arg1 requireACPower:(char)arg2 initiator:(id)arg3 ;
-(id)_overriddenVoiceIdentifierDictionary;
-(double)percentageOfBatteryCharge;
-(char)areBackgroundDownloadsAllowed;
-(id)installationLogEntryForTag:(id)arg1 preferenceDomain:(id)arg2 ;
-(void)cancelPurgingOfSpeechBundleIdentifiers:(id)arg1 initiator:(id)arg2 ;
-(SOCustomizeSRLanguagesWindowController *)srLanguagesSelectionWindowController;
-(char)_serverIsRunning;
-(char)_createServerPortIfNeeded;
-(char)startInstallingDownloadableVoices:(id)arg1 useRootNames:(char)arg2 userInteractionMode:(unsigned)arg3 ;
-(void)startRemovingDownloadedSpeechBundleIdentifiers:(id)arg1 initiator:(id)arg2 immediately:(char)arg3 ;
-(void)startRemovingDownloadedSpeechItems:(id)arg1 ;
-(id)onDiskVersionForBundlePath:(id)arg1 ;
-(id)highestQualityVoiceIdentifierForRootVoiceIdentifier:(id)arg1 startDownloading:(char)arg2 ;
-(id)lowestQualityVoiceIdentifierForRootVoiceIdentifier:(id)arg1 startDownloading:(char)arg2 requireACPower:(char)arg3 initiator:(id)arg4 ;
-(void)cancelPurgingByInitiator:(id)arg1 ;
-(void)resetAllVoiceDownloadAttemptsForInitiator:(id)arg1 ;
@end

