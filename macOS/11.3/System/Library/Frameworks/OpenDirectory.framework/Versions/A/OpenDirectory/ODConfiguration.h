/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/OpenDirectory.framework/Versions/A/OpenDirectory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ODSession, NSString, NSArray, ODMappings, NSDictionary;

@interface ODConfiguration : NSObject {

	ODSession* session;
	NSString* nodeName;
	NSString* comment;
	NSArray* defaultModuleEntries;
	NSArray* authenticationModuleEntries;
	NSArray* discoveryModuleEntries;
	NSArray* generalModuleEntries;
	ODMappings* defaultMappings;
	NSString* templateName;
	NSArray* virtualSubnodes;
	char hideRegistration;
	NSString* preferredDestinationHostName;
	unsigned short preferredDestinationHostPort;
	NSString* trustAccount;
	NSString* trustType;
	NSString* trustKerberosPrincipal;
	NSString* trustMetaAccount;
	char trustUsesMutualAuthentication;
	char trustUsesKerberosKeytab;
	char trustUsesSystemKeychain;
	long long packetSigning;
	long long packetEncryption;
	char manInTheMiddleProtection;
	long long queryTimeoutInSeconds;
	long long connectionSetupTimeoutInSeconds;
	long long connectionIdleTimeoutInSeconds;

}

@property (copy) NSString * trustAccount; 
@property (copy) NSString * trustMetaAccount; 
@property (copy) NSString * trustKerberosPrincipal; 
@property (copy) NSString * trustType; 
@property (assign) char trustUsesMutualAuthentication; 
@property (assign) char trustUsesKerberosKeytab; 
@property (assign) char trustUsesSystemKeychain; 
@property (copy,readonly) NSDictionary * configuration; 
@property (retain) ODSession * session; 
@property (copy) NSString * nodeName; 
@property (copy) NSString * comment; 
@property (retain) ODMappings * defaultMappings; 
@property (copy) NSString * templateName; 
@property (copy) NSArray * virtualSubnodes; 
@property (assign) char hideRegistration; 
@property (copy) NSString * preferredDestinationHostName; 
@property (assign) unsigned short preferredDestinationHostPort; 
@property (assign) long long packetSigning; 
@property (assign) long long packetEncryption; 
@property (assign) char manInTheMiddleProtection; 
@property (assign) long long queryTimeoutInSeconds; 
@property (assign) long long connectionSetupTimeoutInSeconds; 
@property (assign) long long connectionIdleTimeoutInSeconds; 
@property (copy) NSArray * defaultModuleEntries; 
@property (copy) NSArray * authenticationModuleEntries; 
@property (copy) NSArray * discoveryModuleEntries; 
@property (copy) NSArray * generalModuleEntries; 
+(id)configurationWithDictionary:(id)arg1 session:(id)arg2 ;
+(id)suggestedTrustAccount:(id)arg1 ;
+(id)suggestedTrustPassword:(unsigned long long)arg1 ;
+(id)configuration;
-(void)setDefaultMappings:(ODMappings *)arg1 ;
-(void)setVirtualSubnodes:(NSArray *)arg1 ;
-(void)setHideRegistration:(char)arg1 ;
-(void)setTrustAccount:(NSString *)arg1 ;
-(void)setTrustType:(NSString *)arg1 ;
-(void)setTrustMetaAccount:(NSString *)arg1 ;
-(void)setTrustKerberosPrincipal:(NSString *)arg1 ;
-(void)setTrustUsesKerberosKeytab:(char)arg1 ;
-(void)setTrustUsesMutualAuthentication:(char)arg1 ;
-(void)setTrustUsesSystemKeychain:(char)arg1 ;
-(void)setPreferredDestinationHostName:(NSString *)arg1 ;
-(void)setPreferredDestinationHostPort:(unsigned short)arg1 ;
-(void)setPacketSigning:(long long)arg1 ;
-(void)setPacketEncryption:(long long)arg1 ;
-(void)setManInTheMiddleProtection:(char)arg1 ;
-(void)setQueryTimeoutInSeconds:(long long)arg1 ;
-(void)setConnectionSetupTimeoutInSeconds:(long long)arg1 ;
-(void)setConnectionIdleTimeoutInSeconds:(long long)arg1 ;
-(void)setDefaultModuleEntries:(NSArray *)arg1 ;
-(void)setAuthenticationModuleEntries:(NSArray *)arg1 ;
-(void)setDiscoveryModuleEntries:(NSArray *)arg1 ;
-(void)setGeneralModuleEntries:(NSArray *)arg1 ;
-(void)packageModules:(id)arg1 intoConfiguration:(id)arg2 forCategory:(id)arg3 ;
-(char)saveUsingAuthorization:(id)arg1 error:(id*)arg2 ;
-(char)addTrustType:(id)arg1 trustAccount:(id)arg2 trustPassword:(id)arg3 username:(id)arg4 password:(id)arg5 joinExisting:(char)arg6 error:(id*)arg7 ;
-(char)removeTrustUsingUsername:(id)arg1 password:(id)arg2 deleteTrustAccount:(char)arg3 error:(id*)arg4 ;
-(ODMappings *)defaultMappings;
-(NSArray *)virtualSubnodes;
-(char)hideRegistration;
-(NSString *)preferredDestinationHostName;
-(unsigned short)preferredDestinationHostPort;
-(NSString *)trustAccount;
-(NSString *)trustType;
-(NSString *)trustKerberosPrincipal;
-(NSString *)trustMetaAccount;
-(char)trustUsesMutualAuthentication;
-(char)trustUsesKerberosKeytab;
-(char)trustUsesSystemKeychain;
-(long long)packetSigning;
-(long long)packetEncryption;
-(char)manInTheMiddleProtection;
-(long long)queryTimeoutInSeconds;
-(long long)connectionSetupTimeoutInSeconds;
-(long long)connectionIdleTimeoutInSeconds;
-(NSArray *)defaultModuleEntries;
-(NSArray *)authenticationModuleEntries;
-(NSArray *)discoveryModuleEntries;
-(NSArray *)generalModuleEntries;
-(void)dealloc;
-(id)init;
-(NSDictionary *)configuration;
-(ODSession *)session;
-(void)setSession:(ODSession *)arg1 ;
-(void)setComment:(NSString *)arg1 ;
-(NSString *)comment;
-(id)initWithSession:(id)arg1 ;
-(NSString *)templateName;
-(void)setTemplateName:(NSString *)arg1 ;
-(NSString *)nodeName;
-(void)setNodeName:(NSString *)arg1 ;
@end

