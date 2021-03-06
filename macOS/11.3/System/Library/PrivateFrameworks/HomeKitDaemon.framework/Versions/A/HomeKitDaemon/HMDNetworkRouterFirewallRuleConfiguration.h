/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDNetworkRouterFirewallRuleAccessoryIdentifier, NSDate, NSArray, NSDictionary, NSString;

@interface HMDNetworkRouterFirewallRuleConfiguration : HMFObject <HMFLogging> {

	char _fullAccessLAN;
	char _fullAccessWAN;
	HMDNetworkRouterFirewallRuleAccessoryIdentifier* _accessoryIdentifier;
	NSDate* _lastModifiedTime;
	NSArray* _lanRules;
	NSArray* _wanRules;

}

@property (nonatomic,readonly) HMDNetworkRouterFirewallRuleAccessoryIdentifier * accessoryIdentifier;              //@synthesize accessoryIdentifier=_accessoryIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * lastModifiedTime;                                                          //@synthesize lastModifiedTime=_lastModifiedTime - In the implementation block
@property (nonatomic,readonly) NSArray * lanRules;                                                                 //@synthesize lanRules=_lanRules - In the implementation block
@property (getter=hasFullAccessToLAN,nonatomic,readonly) char fullAccessLAN;                                       //@synthesize fullAccessLAN=_fullAccessLAN - In the implementation block
@property (nonatomic,readonly) NSArray * wanRules;                                                                 //@synthesize wanRules=_wanRules - In the implementation block
@property (getter=hasFullAccessToWAN,nonatomic,readonly) char fullAccessWAN;                                       //@synthesize fullAccessWAN=_fullAccessWAN - In the implementation block
@property (nonatomic,readonly) NSDictionary * prettyJSONDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(char)__decodeNetworkDeclarationsFromJSONDictionary:(id)arg1 networkDeclarations:(id*)arg2 ;
+(char)__decodeFullAccessFromNetworkDeclarations:(id)arg1 key:(id)arg2 fullAccess:(char*)arg3 ;
+(id)__decodeRulesFromNetworkDeclarations:(id)arg1 key:(id)arg2 class:(Class)arg3 required:(char)arg4 ;
-(HMDNetworkRouterFirewallRuleAccessoryIdentifier *)accessoryIdentifier;
-(id)attributeDescriptions;
-(NSDictionary *)prettyJSONDictionary;
-(char)hasFullAccessToLAN;
-(NSArray *)lanRules;
-(char)hasFullAccessToWAN;
-(NSArray *)wanRules;
-(id)initWithAccessoryIdentifier:(id)arg1 jsonDictionary:(id)arg2 ;
-(NSDate *)lastModifiedTime;
-(id)initWithAccessoryIdentifier:(id)arg1 lastModifiedTime:(id)arg2 fullAccessLAN:(char)arg3 lanRules:(id)arg4 fullAccessWAN:(char)arg5 wanRules:(id)arg6 ;
@end

