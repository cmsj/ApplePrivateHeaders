/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/Versions/A/VoiceShortcutClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceShortcutClient/VoiceShortcutClient-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface VCAccessSpecifier : NSObject <NSCopying> {

	NSString* _associatedAppBundleIdentifier;
	NSString* _bundleIdentifier;
	long long _entitlements;

}

@property (nonatomic,readonly) long long entitlements;                                     //@synthesize entitlements=_entitlements - In the implementation block
@property (nonatomic,copy,readonly) NSString * associatedAppBundleIdentifier;              //@synthesize associatedAppBundleIdentifier=_associatedAppBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                           //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(void)initialize;
+(id)accessSpecifierUnrestricted;
+(id)accessSpecifierWithNoAccess;
+(id)accessSpecifierUnrestrictedWithAssociatedAppBundleIdentifier:(id)arg1 bundleIdentifier:(id)arg2 ;
+(id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)arg1 bundleIdentifier:(id)arg2 ;
+(id)accessSpecifierWithNoAccessForBundleIdentifier:(id)arg1 ;
+(id)accessSpecifierForCurrentProcess;
+(id)accessSpecifierForCurrentConnection;
+(id)accessSpecifierForXPCConnection:(id)arg1 ;
+(id)accessSpecifierForAuditToken:(SCD_Struct_VC3)arg1 ;
+(id)accessSpecifierForTask:(SecTaskRef)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSString *)bundleIdentifier;
-(long long)entitlements;
-(NSString *)associatedAppBundleIdentifier;
-(char)isSpringBoard;
-(id)initWithBundleIdentifier:(id)arg1 associatedAppBundleIdentifier:(id)arg2 entitlements:(long long)arg3 ;
-(char)hasEntitlements:(long long)arg1 ;
-(char)allowConnection;
-(char)allowUnrestrictedAccess;
-(char)allowWriteAccessToVoiceShortcuts;
-(char)allowReadAccessToSingleStepShortcutsWithBundleIdentifier:(id)arg1 ;
-(char)allowWriteAccessToSuggestionsWithBundleIdentifier:(id)arg1 ;
-(char)allowReadAccessToSuggestionsWithBundleIdentifier:(id)arg1 ;
-(char)allowWriteAccessForTriggers;
-(char)allowReadAccessForTriggers;
-(char)allowReadAccessToShortcutsLibrary;
-(char)allowReadAccessToPodcastsDatabase;
-(char)allowBackgroundShortcutRunning;
-(char)allowHomeResidentShortcutRunning;
-(char)allowWriteAccessForSleepWorkflows;
-(char)allowReadAccessForSleepWorkflows;
-(char)allowReadAccessForDonations;
-(char)isSettingsApp;
-(char)isRemovalService;
-(char)allowIntentsExtensionDiscovery;
@end

