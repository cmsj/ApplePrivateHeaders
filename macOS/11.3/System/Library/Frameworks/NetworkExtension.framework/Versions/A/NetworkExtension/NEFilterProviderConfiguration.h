/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString, NSData;

@interface NEFilterProviderConfiguration : NSObject <NEConfigurationValidating, NSSecureCoding, NSCopying> {

	char _filterBrowsers;
	char _filterSockets;
	char _filterPackets;
	char _controlProviderInitialized;
	NSDictionary* _vendorConfiguration;
	NSString* _serverAddress;
	NSString* _username;
	NSString* _organization;
	NSData* _passwordReference;
	NSData* _identityReference;
	NSString* _filterDataProviderBundleIdentifier;
	NSString* _filterPacketProviderBundleIdentifier;
	NSString* _pluginType;
	NSString* _dataProviderDesignatedRequirement;
	NSString* _packetProviderDesignatedRequirement;
	NSString* _keychainAccessGroup;

}

@property (copy) NSString * pluginType;                                        //@synthesize pluginType=_pluginType - In the implementation block
@property (copy) NSString * dataProviderDesignatedRequirement;                 //@synthesize dataProviderDesignatedRequirement=_dataProviderDesignatedRequirement - In the implementation block
@property (copy) NSString * packetProviderDesignatedRequirement;               //@synthesize packetProviderDesignatedRequirement=_packetProviderDesignatedRequirement - In the implementation block
@property (assign) char controlProviderInitialized;                            //@synthesize controlProviderInitialized=_controlProviderInitialized - In the implementation block
@property (copy) NSString * keychainAccessGroup;                               //@synthesize keychainAccessGroup=_keychainAccessGroup - In the implementation block
@property (assign) char filterBrowsers;                                        //@synthesize filterBrowsers=_filterBrowsers - In the implementation block
@property (assign) char filterSockets;                                         //@synthesize filterSockets=_filterSockets - In the implementation block
@property (assign) char filterPackets;                                         //@synthesize filterPackets=_filterPackets - In the implementation block
@property (copy) NSDictionary * vendorConfiguration;                           //@synthesize vendorConfiguration=_vendorConfiguration - In the implementation block
@property (copy) NSString * serverAddress;                                     //@synthesize serverAddress=_serverAddress - In the implementation block
@property (copy) NSString * username;                                          //@synthesize username=_username - In the implementation block
@property (copy) NSString * organization;                                      //@synthesize organization=_organization - In the implementation block
@property (copy) NSData * passwordReference;                                   //@synthesize passwordReference=_passwordReference - In the implementation block
@property (copy) NSData * identityReference;                                   //@synthesize identityReference=_identityReference - In the implementation block
@property (copy) NSString * filterDataProviderBundleIdentifier;                //@synthesize filterDataProviderBundleIdentifier=_filterDataProviderBundleIdentifier - In the implementation block
@property (copy) NSString * filterPacketProviderBundleIdentifier;              //@synthesize filterPacketProviderBundleIdentifier=_filterPacketProviderBundleIdentifier - In the implementation block
+(char)supportsSecureCoding;
-(char)checkValidityAndCollectErrors:(id)arg1 ;
-(void)setPasswordReference:(NSData *)arg1 ;
-(void)setVendorConfiguration:(NSDictionary *)arg1 ;
-(void)setDataProviderDesignatedRequirement:(NSString *)arg1 ;
-(void)setFilterDataProviderBundleIdentifier:(NSString *)arg1 ;
-(void)setPacketProviderDesignatedRequirement:(NSString *)arg1 ;
-(void)setFilterPacketProviderBundleIdentifier:(NSString *)arg1 ;
-(void)setFilterSockets:(char)arg1 ;
-(void)setFilterPackets:(char)arg1 ;
-(void)setIdentityReference:(NSData *)arg1 ;
-(NSData *)identityReference;
-(char)controlProviderInitialized;
-(NSDictionary *)vendorConfiguration;
-(NSData *)passwordReference;
-(void)setControlProviderInitialized:(char)arg1 ;
-(char)filterBrowsers;
-(void)setFilterBrowsers:(char)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPluginType:(NSString *)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)serverAddress;
-(NSString *)organization;
-(void)setOrganization:(NSString *)arg1 ;
-(NSString *)keychainAccessGroup;
-(void)setKeychainAccessGroup:(NSString *)arg1 ;
-(void)setServerAddress:(NSString *)arg1 ;
-(NSString *)pluginType;
-(NSString *)filterDataProviderBundleIdentifier;
-(NSString *)filterPacketProviderBundleIdentifier;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(char)filterSockets;
-(NSString *)dataProviderDesignatedRequirement;
-(NSString *)packetProviderDesignatedRequirement;
-(char)filterPackets;
@end

