/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpeechObjects.framework/Versions/A/SpeechObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSPopUpButton.h>

@class NSDictionary, NSString, NSTextField, NSProgressIndicator, NSTimer, SODownloadDisplayManager;

@interface SOVoicePopUpButton : NSPopUpButton {

	NSDictionary* _fixedRateVoiceIdentifiers;
	NSString* _previouslyChosenVoiceIdentifier;
	NSString* _systemVoiceLocalizedText;
	long long _systemVoiceMenuItemTag;
	char _allowSystemVoiceChoice;
	char _showIndividualVoiceQualities;
	NSTextField* _downloadStatusTextField;
	NSProgressIndicator* _downloadStatusProgressIndicator;
	NSTimer* _downloadStatusUpdateTimer;
	SODownloadDisplayManager* _downloadDisplayManager;

}
+(void)forcePopupsToAdoptCachedMenuExceptPopUp:(id)arg1 ;
+(void)_forceAllVoicePopupsToUpdate;
+(char)shouldExcludeVoiceIdentifier:(id)arg1 ;
+(void)_startDelayedForceAllVoicePopupsToUpdate;
+(void)addRequiredVoiceIdentifier:(id)arg1 ;
+(void)removeRequiredVoiceIdentifier:(id)arg1 ;
+(void)buildSharedVoicesMenuShowingVOVoices:(char)arg1 ;
+(char)isSiriVoiceIdentifier:(id)arg1 ;
+(void)addExcludedVoiceIdentifier:(id)arg1 ;
+(id)displayNameForGender:(id)arg1 ;
+(char)isRequiredVoiceIdentifier:(id)arg1 ;
+(void)setFallbackVoiceIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(char)sendAction:(SEL)arg1 to:(id)arg2 ;
-(void)setAllowSystemVoiceChoice:(char)arg1 ;
-(void)buildPopUpButtonWithSelectVoiceIdentifier:(id)arg1 ;
-(id)selectedVoiceAttributes;
-(char)isSelectedVoiceAppropriateForCurrentLanguageWithUserConfirmation:(char)arg1 parentWindowForSheet:(id)arg2 ;
-(id)_previouslyChosenVoiceIdentifier;
-(void)_forceAllVoicePopupsToUpdate;
-(void)_handleSpeechDataInstallationNotification;
-(void)_setPreviouslyChosenVoiceIdentifier:(id)arg1 ;
-(void)_forcePopupsToAdoptCachedMenuExceptPopUp:(id)arg1 ;
-(void)_updateDownloadStatusFields;
-(id)_statusStringForActiveDownloads;
-(void)setSystemVoiceLocalizedText:(id)arg1 menuItemTag:(long long)arg2 ;
-(void)setShowIndividualVoiceQualities:(char)arg1 ;
-(void)addExcludedIdentifier:(id)arg1 ;
@end

