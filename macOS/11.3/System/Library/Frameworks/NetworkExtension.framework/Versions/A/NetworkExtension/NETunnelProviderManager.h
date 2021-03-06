/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEVPNManager.h>

@class NSArray;

@interface NETunnelProviderManager : NEVPNManager {

	NSArray* _safariDomains;
	NSArray* _mailDomains;
	NSArray* _calendarDomains;
	NSArray* _contactsDomains;
	NSArray* _appRules;
	NSArray* _excludedDomains;
	NSArray* _associatedDomains;

}

@property (readonly) long long routingMethod; 
@property (copy) NSArray * safariDomains;                  //@synthesize safariDomains=_safariDomains - In the implementation block
@property (copy) NSArray * mailDomains;                    //@synthesize mailDomains=_mailDomains - In the implementation block
@property (copy) NSArray * calendarDomains;                //@synthesize calendarDomains=_calendarDomains - In the implementation block
@property (copy) NSArray * contactsDomains;                //@synthesize contactsDomains=_contactsDomains - In the implementation block
@property (copy) NSArray * appRules;                       //@synthesize appRules=_appRules - In the implementation block
@property (copy) NSArray * excludedDomains;                //@synthesize excludedDomains=_excludedDomains - In the implementation block
@property (copy) NSArray * associatedDomains;              //@synthesize associatedDomains=_associatedDomains - In the implementation block
+(id)copyDesignatedRequirementForProvider:(id*)arg1 extensionPoint:(id)arg2 appPermission:(long long*)arg3 ;
+(void)loadAllFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
+(long long)extensionPointToAppPermission:(id)arg1 ;
+(id)forPerAppVPN;
-(char)isProtocolTypeValid:(long long)arg1 ;
-(void)loadFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithSessionType:(int)arg1 tunnelType:(long long)arg2 ;
-(void)setExcludedDomains:(NSArray *)arg1 ;
-(void)setMailDomains:(NSArray *)arg1 ;
-(void)setCalendarDomains:(NSArray *)arg1 ;
-(void)setContactsDomains:(NSArray *)arg1 ;
-(long long)routingMethod;
-(NSArray *)mailDomains;
-(NSArray *)calendarDomains;
-(NSArray *)contactsDomains;
-(NSArray *)safariDomains;
-(void)setSafariDomains:(NSArray *)arg1 ;
-(void)loadAppRules;
-(id)copyAppRules;
-(void)additionalSetup;
-(id)init;
-(NSArray *)associatedDomains;
-(void)setAssociatedDomains:(NSArray *)arg1 ;
-(NSArray *)appRules;
-(void)setAppRules:(NSArray *)arg1 ;
-(NSArray *)excludedDomains;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
@end

