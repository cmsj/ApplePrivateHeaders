/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class LSBundleRecord;

@interface _LSCoreTypesRecordProxy : NSProxy <NSSecureCoding> {

	LSBundleRecord* _realRecord;

}

@property (nonatomic,readonly) LSBundleRecord * _realRecord;              //@synthesize realRecord=_realRecord - In the implementation block
+(id)description;
+(char)supportsSecureCoding;
+(id)classFallbacksForKeyedArchiver;
+(Class)classForKeyedUnarchiver;
-(char)isEqual:(id)arg1 ;
-(char)isKindOfClass:(Class)arg1 ;
-(char)isMemberOfClass:(Class)arg1 ;
-(char)conformsToProtocol:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)URL;
-(id)bundleIdentifier;
-(char)developerType;
-(id)managedPersonas;
-(void)detach;
-(id)supportedIntents;
-(id)intentsRestrictedWhileLocked;
-(id)intentsRestrictedWhileProtectedDataUnavailable;
-(id)supportedIntentMediaCategories;
-(id)machOUUIDs;
-(id)dataContainerURL;
-(id)entitlements;
-(id)intentDefinitionURLs;
-(id)localizedName;
-(id)localizedNameWithPreferredLocalizations:(id)arg1 ;
-(id)applicationIdentifier;
-(unsigned)platform;
-(char)isProfileValidated;
-(char)isUPPValidated;
-(char)isFreeProfileValidated;
-(id)UIBackgroundModes;
-(id)executableURL;
-(id)SDKVersion;
-(id)serviceRecords;
-(LSBundleRecord *)_realRecord;
-(id)localizedShortName;
-(id)localizedShortNameWithPreferredLocalizations:(id)arg1 ;
-(id)localizedUsageDescriptionForFeature:(unsigned long long)arg1 ;
-(id)localizedUsageDescriptionForFeature:(unsigned long long)arg1 preferredLocalizations:(id)arg2 ;
-(id)signerOrganization;
-(id)accentColorName;
-(id)WKBackgroundModes;
-(char)supportsNowPlaying;
-(id)_loadRealRecord;
-(id)replacementObjectForCoder:(id)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(Class)classForKeyedArchiver;
-(id)replacementObjectForKeyedArchiver:(id)arg1 ;
@end
