/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSNumber;

@interface LSApplicationRestrictionsManager : NSObject {

	NSSet* _removedSystemApplicationIdentifiers;

}

@property (getter=isWhitelistEnabled,readonly) char whitelistEnabled; 
@property (getter=isOpenInRestrictionInEffect,readonly) char openInRestrictionInEffect; 
@property (getter=isAdTrackingEnabled,readonly) char adTrackingEnabled; 
@property (getter=isLimitAdTrackingForced,readonly) char limitAdTrackingForced; 
@property (getter=isSystemAppDeletionEnabled,readonly) char systemAppDeletionEnabled; 
@property (readonly) NSNumber * maximumRating; 
@property (readonly) NSSet * restrictedBundleIDs; 
@property (readonly) NSSet * blacklistedBundleIDs; 
@property (readonly) NSSet * whitelistedBundleIDs; 
@property (nonatomic,copy) NSSet * removedSystemApplicationIdentifiers;                              //@synthesize removedSystemApplicationIdentifiers=_removedSystemApplicationIdentifiers - In the implementation block
+(id)sharedInstance;
+(id)activeRestrictionIdentifiers;
-(char)setApplication:(id)arg1 removed:(char)arg2 ;
-(char)isRatingAllowed:(id)arg1 ;
-(char)isApplicationRestricted:(id)arg1 ;
-(char)isAppExtensionRestricted:(id)arg1 ;
-(char)isApplicationRestricted:(id)arg1 checkFeatureRestrictions:(char)arg2 ;
-(char)isApplicationRestricted:(id)arg1 checkFlags:(unsigned long long)arg2 ;
-(NSNumber *)maximumRating;
-(char)cleanRemovedSystemApplicationsList;
-(void)setRemovedSystemApplicationIdentifiers:(NSSet *)arg1 ;
-(NSSet *)removedSystemApplicationIdentifiers;
-(NSSet *)restrictedBundleIDs;
-(char)isOpenInRestrictionInEffect;
-(char)isWhitelistEnabled;
-(NSSet *)blacklistedBundleIDs;
-(NSSet *)whitelistedBundleIDs;
-(void)effectiveSettingsChanged;
-(id)allowedOpenInAppBundleIDsAfterApplyingFilterToAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingAccountIsManaged:(char)arg3 ;
-(void)beginListeningForChanges;
-(char)isAdTrackingEnabled;
-(char)isLimitAdTrackingForced;
-(char)isSystemAppDeletionEnabled;
@end

