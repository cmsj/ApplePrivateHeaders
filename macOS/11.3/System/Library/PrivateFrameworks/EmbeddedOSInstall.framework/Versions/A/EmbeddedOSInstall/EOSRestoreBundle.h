/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedOSInstall.framework/Versions/A/EmbeddedOSInstall
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/EOSRestoreBundleComparableProtocol.h>

@class NSURL, PKBundleComponentVersion, NSArray, NSString;

@interface EOSRestoreBundle : NSObject <NSSecureCoding, EOSRestoreBundleComparableProtocol> {

	NSURL* _restoreBundleURL;
	PKBundleComponentVersion* _bundleComponentVersion;
	NSArray* _supportedDevices;
	NSArray* _buildVariants;
	NSString* _buildVersion;

}

@property (retain) NSURL * restoreBundleURL;                                       //@synthesize restoreBundleURL=_restoreBundleURL - In the implementation block
@property (retain) PKBundleComponentVersion * bundleComponentVersion;              //@synthesize bundleComponentVersion=_bundleComponentVersion - In the implementation block
@property (retain) NSArray * supportedDevices;                                     //@synthesize supportedDevices=_supportedDevices - In the implementation block
@property (retain) NSArray * buildVariants;                                        //@synthesize buildVariants=_buildVariants - In the implementation block
@property (retain) NSString * buildVersion;                                        //@synthesize buildVersion=_buildVersion - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)buildVersion;
-(void)setBuildVersion:(NSString *)arg1 ;
-(id)initWithRestoreBundleURL:(id)arg1 ;
-(NSArray *)supportedDevices;
-(NSArray *)buildVariants;
-(PKBundleComponentVersion *)bundleComponentVersion;
-(void)setSupportedDevices:(NSArray *)arg1 ;
-(void)setBundleComponentVersion:(PKBundleComponentVersion *)arg1 ;
-(NSURL *)restoreBundleURL;
-(id)initWithRestoreBundleURL:(id)arg1 bundleComponentVersion:(id)arg2 ;
-(char)_populateDeviceTypesAndVariants;
-(void)setBuildVariants:(NSArray *)arg1 ;
-(char)isEqualToRestoreBundle:(id)arg1 ;
-(void)setRestoreBundleURL:(NSURL *)arg1 ;
@end
