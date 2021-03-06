/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Notes/Notes-Structs.h>
@class NSString, NSMapTable;

@interface ICNFMCNetworkController : NSObject {

	SCDynamicStoreRef _store;
	CFStringRef _dnsKey;
	id _domainLock;
	NSString* _domainName;
	NSMapTable* _reachabilityReferencesForWatchedAccounts;

}

@property (copy,readonly) NSString * domainName; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedInstance;
+(long long)networkStatus;
+(id)encodeAddressForIDNA:(id)arg1 encodingHint:(unsigned long long)arg2 ;
+(char)domain:(id)arg1 isSubdomainOfDomain:(id)arg2 ;
+(id)applyIDNAToHostname:(id)arg1 encode:(char)arg2 ;
+(id)filteredIPAddressesFromHost:(id)arg1 ;
+(id)filteredDomainNamesFromHost:(id)arg1 ;
+(id)getHostUUIDString;
+(id)subnetForIPAddress:(id)arg1 ;
+(id)baseDomainsForDomains:(id)arg1 ;
+(char)hostnameIsFullyQualified:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)domainName;
-(void)stopWatchingReachabilityForAccount:(id)arg1 ;
-(void)startWatchingReachabilityForAccount:(id)arg1 ;
-(void)_postNetworkChangeNotification;
-(SCNetworkReachabilityRef)_newNetworkReachabilityReferenceForHostname:(id)arg1 ;
-(void)_queueNetworkChangeNotification;
-(void)_clearDomainName;
-(char)isHostReachable:(id)arg1 needToEstablishInternetConnection:(char*)arg2 ;
-(id)_watchedAccounts;
@end

