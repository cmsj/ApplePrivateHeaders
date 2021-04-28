/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEVPN.h>

@class NSArray;

@interface NEVPNApp : NEVPN {

	char _noRestriction;
	char _restrictDomains;
	NSArray* _appRules;
	NSArray* _excludedDomains;

}

@property (copy) NSArray * appRules;                     //@synthesize appRules=_appRules - In the implementation block
@property (assign) char noRestriction;                   //@synthesize noRestriction=_noRestriction - In the implementation block
@property (assign) char restrictDomains;                 //@synthesize restrictDomains=_restrictDomains - In the implementation block
@property (copy) NSArray * excludedDomains;              //@synthesize excludedDomains=_excludedDomains - In the implementation block
+(char)supportsSecureCoding;
-(char)checkValidityAndCollectErrors:(id)arg1 ;
-(char)noRestriction;
-(void)setNoRestriction:(char)arg1 ;
-(char)removeAppRuleByID:(id)arg1 ;
-(void)setRestrictDomains:(char)arg1 ;
-(void)setExcludedDomains:(NSArray *)arg1 ;
-(id)copyAppRuleIDs;
-(id)copyAppRuleByID:(id)arg1 ;
-(char)restrictDomains;
-(id)copyUniqueSigningIdentifiers;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)appRules;
-(void)setAppRules:(NSArray *)arg1 ;
-(char)installSigningIdentifiersWithFlowDivertControlSocket:(int)arg1 ;
-(void)updateAppRulesForUID:(unsigned)arg1 ;
-(id)copyLegacyDictionary;
-(NSArray *)excludedDomains;
-(id)copyAppRuleBySigningIdentifier:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initFromLegacyDictionary:(id)arg1 ;
@end
