/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEVPNProtocolIPSec.h>

@class NSString, NEVPNIKEv2SecurityAssociationParameters, NSArray;

@interface NEVPNProtocolIKEv2 : NEVPNProtocolIPSec {

	char _useConfigurationAttributeInternalIPSubnet;
	char _disableMOBIKE;
	char _disableRedirect;
	char _enablePFS;
	char _enableRevocationCheck;
	char _strictRevocationCheck;
	char _enableFallback;
	char _wakeForRekey;
	char _opportunisticPFS;
	char _disableInitialContact;
	int _natKeepAliveOffloadEnable;
	int _natKeepAliveOffloadInterval;
	int _disableMOBIKERetryOnWake;
	long long _deadPeerDetectionRate;
	NSString* _serverCertificateIssuerCommonName;
	NSString* _serverCertificateCommonName;
	long long _certificateType;
	NEVPNIKEv2SecurityAssociationParameters* _IKESecurityAssociationParameters;
	NEVPNIKEv2SecurityAssociationParameters* _childSecurityAssociationParameters;
	long long _minimumTLSVersion;
	long long _maximumTLSVersion;
	unsigned long long _mtu;
	NSString* _pluginType;
	NSArray* _IKESecurityAssociationParametersArray;
	NSArray* _childSecurityAssociationParametersArray;
	NSString* _providerBundleIdentifier;
	long long _tunnelKind;

}

@property (assign) char wakeForRekey;                                                                           //@synthesize wakeForRekey=_wakeForRekey - In the implementation block
@property (readonly) NSString * pluginType;                                                                     //@synthesize pluginType=_pluginType - In the implementation block
@property (retain) NSArray * IKESecurityAssociationParametersArray;                                             //@synthesize IKESecurityAssociationParametersArray=_IKESecurityAssociationParametersArray - In the implementation block
@property (retain) NSArray * childSecurityAssociationParametersArray;                                           //@synthesize childSecurityAssociationParametersArray=_childSecurityAssociationParametersArray - In the implementation block
@property (copy) NSString * providerBundleIdentifier;                                                           //@synthesize providerBundleIdentifier=_providerBundleIdentifier - In the implementation block
@property (assign) int natKeepAliveOffloadEnable;                                                               //@synthesize natKeepAliveOffloadEnable=_natKeepAliveOffloadEnable - In the implementation block
@property (assign) int natKeepAliveOffloadInterval;                                                             //@synthesize natKeepAliveOffloadInterval=_natKeepAliveOffloadInterval - In the implementation block
@property (assign) int disableMOBIKERetryOnWake;                                                                //@synthesize disableMOBIKERetryOnWake=_disableMOBIKERetryOnWake - In the implementation block
@property (assign) char opportunisticPFS;                                                                       //@synthesize opportunisticPFS=_opportunisticPFS - In the implementation block
@property (assign) long long tunnelKind;                                                                        //@synthesize tunnelKind=_tunnelKind - In the implementation block
@property (assign) char disableInitialContact;                                                                  //@synthesize disableInitialContact=_disableInitialContact - In the implementation block
@property (assign) long long deadPeerDetectionRate;                                                             //@synthesize deadPeerDetectionRate=_deadPeerDetectionRate - In the implementation block
@property (copy) NSString * serverCertificateIssuerCommonName;                                                  //@synthesize serverCertificateIssuerCommonName=_serverCertificateIssuerCommonName - In the implementation block
@property (copy) NSString * serverCertificateCommonName;                                                        //@synthesize serverCertificateCommonName=_serverCertificateCommonName - In the implementation block
@property (assign) long long certificateType;                                                                   //@synthesize certificateType=_certificateType - In the implementation block
@property (assign) char useConfigurationAttributeInternalIPSubnet;                                              //@synthesize useConfigurationAttributeInternalIPSubnet=_useConfigurationAttributeInternalIPSubnet - In the implementation block
@property (readonly) NEVPNIKEv2SecurityAssociationParameters * IKESecurityAssociationParameters;                //@synthesize IKESecurityAssociationParameters=_IKESecurityAssociationParameters - In the implementation block
@property (readonly) NEVPNIKEv2SecurityAssociationParameters * childSecurityAssociationParameters;              //@synthesize childSecurityAssociationParameters=_childSecurityAssociationParameters - In the implementation block
@property (assign) char disableMOBIKE;                                                                          //@synthesize disableMOBIKE=_disableMOBIKE - In the implementation block
@property (assign) char disableRedirect;                                                                        //@synthesize disableRedirect=_disableRedirect - In the implementation block
@property (assign) char enablePFS;                                                                              //@synthesize enablePFS=_enablePFS - In the implementation block
@property (assign) char enableRevocationCheck;                                                                  //@synthesize enableRevocationCheck=_enableRevocationCheck - In the implementation block
@property (assign) char strictRevocationCheck;                                                                  //@synthesize strictRevocationCheck=_strictRevocationCheck - In the implementation block
@property (assign) long long minimumTLSVersion;                                                                 //@synthesize minimumTLSVersion=_minimumTLSVersion - In the implementation block
@property (assign) long long maximumTLSVersion;                                                                 //@synthesize maximumTLSVersion=_maximumTLSVersion - In the implementation block
@property (assign) char enableFallback;                                                                         //@synthesize enableFallback=_enableFallback - In the implementation block
@property (assign) unsigned long long mtu;                                                                      //@synthesize mtu=_mtu - In the implementation block
+(char)supportsSecureCoding;
-(char)checkValidityAndCollectErrors:(id)arg1 ;
-(NEVPNIKEv2SecurityAssociationParameters *)IKESecurityAssociationParameters;
-(NEVPNIKEv2SecurityAssociationParameters *)childSecurityAssociationParameters;
-(id)initWithPluginType:(id)arg1 ;
-(void)setEnableFallback:(char)arg1 ;
-(void)setWakeForRekey:(char)arg1 ;
-(void)setDeadPeerDetectionRate:(long long)arg1 ;
-(void)setServerCertificateIssuerCommonName:(NSString *)arg1 ;
-(void)setServerCertificateCommonName:(NSString *)arg1 ;
-(void)setUseConfigurationAttributeInternalIPSubnet:(char)arg1 ;
-(void)setDisableMOBIKE:(char)arg1 ;
-(void)setDisableRedirect:(char)arg1 ;
-(void)setEnablePFS:(char)arg1 ;
-(void)setEnableRevocationCheck:(char)arg1 ;
-(void)setStrictRevocationCheck:(char)arg1 ;
-(void)setMinimumTLSVersion:(long long)arg1 ;
-(void)setMaximumTLSVersion:(long long)arg1 ;
-(char)opportunisticPFS;
-(void)setOpportunisticPFS:(char)arg1 ;
-(int)disableMOBIKERetryOnWake;
-(long long)deadPeerDetectionRate;
-(char)disableRedirect;
-(char)wakeForRekey;
-(NSArray *)IKESecurityAssociationParametersArray;
-(char)enablePFS;
-(NSArray *)childSecurityAssociationParametersArray;
-(long long)minimumTLSVersion;
-(long long)maximumTLSVersion;
-(char)disableMOBIKE;
-(char)strictRevocationCheck;
-(NSString *)serverCertificateCommonName;
-(NSString *)serverCertificateIssuerCommonName;
-(char)disableInitialContact;
-(char)useConfigurationAttributeInternalIPSubnet;
-(void)setIKESecurityAssociationParametersArray:(NSArray *)arg1 ;
-(void)setChildSecurityAssociationParametersArray:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)clone;
-(void)setPluginType:(NSString *)arg1 ;
-(unsigned long long)mtu;
-(void)setMtu:(unsigned long long)arg1 ;
-(NSString *)providerBundleIdentifier;
-(long long)certificateType;
-(void)setCertificateType:(long long)arg1 ;
-(char)enableRevocationCheck;
-(NSString *)pluginType;
-(id)copyLegacyDictionary;
-(long long)tunnelKind;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setTunnelKind:(long long)arg1 ;
-(int)natKeepAliveOffloadEnable;
-(void)setNatKeepAliveOffloadEnable:(int)arg1 ;
-(void)setNatKeepAliveOffloadInterval:(int)arg1 ;
-(int)natKeepAliveOffloadInterval;
-(void)setDisableMOBIKERetryOnWake:(int)arg1 ;
-(void)setDisableInitialContact:(char)arg1 ;
-(char)enableFallback;
-(void)setProviderBundleIdentifier:(NSString *)arg1 ;
@end

