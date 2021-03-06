/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/Versions/A/FileProviderDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, FPDProviderDescriptor, NSSet, NSURL, FPDServer, FPDExtensionManager, NSMutableDictionary, NSArray, NSString, FPDExtension, NSDictionary;

@interface FPDProvider : NSObject {

	NSObject*<OS_dispatch_queue> _domainQueue;
	char _invalidated;
	NSObject*<OS_dispatch_queue> _presentersQueue;
	FPDProviderDescriptor* _descriptor;
	NSSet* _blacklistedProcessNames;
	NSURL* _supportURL;
	NSURL* _domainsPlistURL;
	NSURL* _providerPlistURL;
	FPDServer* _server;
	FPDExtensionManager* _manager;
	NSMutableDictionary* _domainsByID;
	NSArray* _requestedExtendedAttributes;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSArray * requestedExtendedAttributes;                       //@synthesize requestedExtendedAttributes=_requestedExtendedAttributes - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> presentersQueue;              //@synthesize presentersQueue=_presentersQueue - In the implementation block
@property (nonatomic,readonly) FPDProviderDescriptor * descriptor;                        //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * purposeIdentifier; 
@property (nonatomic,readonly) NSString * bundleVersion; 
@property (nonatomic,readonly) NSArray * extensionStorageURLs; 
@property (nonatomic,readonly) char supportsEnumeration; 
@property (nonatomic,readonly) char invalidated;                                          //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,readonly) char supportsFPFS; 
@property (nonatomic,readonly) char isAppExtensionReachable; 
@property (nonatomic,readonly) FPDExtension * asAppExtensionBackedProvider; 
@property (nonatomic,copy) NSSet * blacklistedProcessNames;                               //@synthesize blacklistedProcessNames=_blacklistedProcessNames - In the implementation block
@property (nonatomic,readonly) NSURL * supportURL;                                        //@synthesize supportURL=_supportURL - In the implementation block
@property (nonatomic,readonly) NSURL * domainsPlistURL;                                   //@synthesize domainsPlistURL=_domainsPlistURL - In the implementation block
@property (nonatomic,readonly) NSURL * providerPlistURL;                                  //@synthesize providerPlistURL=_providerPlistURL - In the implementation block
@property (nonatomic,readonly) FPDServer * server;                                        //@synthesize server=_server - In the implementation block
@property (nonatomic,readonly) FPDExtensionManager * manager;                             //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) NSDictionary * relevantDomainsByID; 
@property (nonatomic,readonly) NSDictionary * nsDomainsByID; 
@property (nonatomic,readonly) NSMutableDictionary * domainsByID;                         //@synthesize domainsByID=_domainsByID - In the implementation block
@property (nonatomic,readonly) NSArray * providedItemsURLs; 
+(id)fpfsDomainXattrForURL:(id)arg1 ;
+(id)onDiskProvidersForServer:(id)arg1 ;
+(void)_garbageCollectFoldersWithNoRelatedDomain:(id)arg1 supportDir:(id)arg2 ;
-(id)description;
-(void)invalidate;
-(NSString *)identifier;
-(FPDServer *)server;
-(NSString *)bundleVersion;
-(FPDExtensionManager *)manager;
-(FPDProviderDescriptor *)descriptor;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)purposeIdentifier;
-(char)invalidated;
-(char)supportsEnumeration;
-(id)domainForIdentifier:(id)arg1 ;
-(NSURL *)supportURL;
-(void)startWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithDescriptor:(id)arg1 server:(id)arg2 ;
-(NSArray *)extensionStorageURLs;
-(char)supportsFPFS;
-(void)importDomainsFromDiskAndUpdatePList:(char)arg1 ;
-(NSDictionary *)relevantDomainsByID;
-(NSMutableDictionary *)domainsByID;
-(char)isAppExtensionReachable;
-(FPDExtension *)asAppExtensionBackedProvider;
-(void)setEjectable:(char)arg1 forDomainIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setRequestedExtendedAttributes:(NSArray *)arg1 ;
-(NSArray *)requestedExtendedAttributes;
-(id)domainForURL:(id)arg1 ;
-(id)providerDomainForNSDomain:(id)arg1 ;
-(void)reloadDomain:(id)arg1 unableToStartup:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSSet *)blacklistedProcessNames;
-(NSArray *)providedItemsURLs;
-(void)_startOrClearDomain:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)_supportsFPFS;
-(void)_writeDomainProperties;
-(void)_writeDomainPropertiesIfChangedFrom:(id)arg1 ;
-(NSURL *)domainsPlistURL;
-(NSURL *)providerPlistURL;
-(id)defaultNSDomain;
-(id)newDomainFromNSDomain:(id)arg1 ;
-(id)_recreateDefaultDomainIfNeeded;
-(void)addDomain:(id)arg1 byImportingDirectoryAtURL:(id)arg2 unableToStartup:(char)arg3 reloadDomain:(char)arg4 request:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_createSymlinkForDomain:(id)arg1 ;
-(void)setEnabled:(char)arg1 forDomainIdentifier:(id)arg2 request:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)dumpValue:(id)arg1 forKey:(id)arg2 to:(id)arg3 ;
-(void)writeDomainProperties;
-(void)addDomain:(id)arg1 byImportingDirectoryAtURL:(id)arg2 request:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)removeAllDomainsForRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeDomain:(id)arg1 mode:(unsigned long long)arg2 request:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSDictionary *)nsDomainsByID;
-(void)enableAllDomainsIfNoUserElection;
-(void)dumpStateTo:(id)arg1 providerFilter:(id)arg2 limitNumberOfItems:(char)arg3 ;
-(NSObject*<OS_dispatch_queue>)presentersQueue;
-(void)setBlacklistedProcessNames:(NSSet *)arg1 ;
@end

