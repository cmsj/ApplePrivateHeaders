/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSProgressReporting.h>

@protocol OS_dispatch_queue, OS_os_log;
@class NSProgress, NSString, NSMutableArray, NSURL, NSArray, GEOApplicationAuditToken, NSMapTable, GEOPowerAssertion, NSObject, GEOReportedProgress;

@interface GEOResourceLoader : NSObject <NSProgressReporting> {

	NSString* _directory;
	NSString* _additionalDirectoryToConsider;
	NSMutableArray* _resourcesToLoad;
	/*^block*/id _completionHandler;
	unsigned long long _numberOfDownloadsInProgress;
	long long _numberOfCopiesInProgress;
	char _canceled;
	char _requiresWiFi;
	NSURL* _baseURL;
	NSArray* _alternateURLs;
	NSURL* _proxyURL;
	char _forceUpdateCheck;
	unsigned long long _maxConcurrentLoads;
	NSArray* _resourceInfos;
	NSMutableArray* _loadedResources;
	GEOApplicationAuditToken* _auditToken;
	char _allowResumingPartialDownloads;
	NSMapTable* _inProgressResourceDownloads;
	GEOPowerAssertion* _powerAssertion;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	GEOReportedProgress* _progress;
	NSURL* _authProxyURL;
	NSObject*<OS_os_log> _log;
	unsigned long long _signpostID;
	char _preferDirectNetworking;

}

@property (nonatomic,retain) GEOApplicationAuditToken * auditToken;              //@synthesize auditToken=_auditToken - In the implementation block
@property (assign,nonatomic) char requiresWiFi;                                  //@synthesize requiresWiFi=_requiresWiFi - In the implementation block
@property (assign,nonatomic) char preferDirectNetworking;                        //@synthesize preferDirectNetworking=_preferDirectNetworking - In the implementation block
@property (readonly) NSProgress * progress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)resourceLoadOperationClass;
-(id)init;
-(GEOApplicationAuditToken *)auditToken;
-(void)setAuditToken:(GEOApplicationAuditToken *)arg1 ;
-(void)cancel;
-(NSProgress *)progress;
-(void)_cleanup;
-(id)initWithTargetDirectory:(id)arg1 baseURL:(id)arg2 alternateURLs:(id)arg3 proxyURL:(id)arg4 resources:(id)arg5 forceUpdateCheck:(char)arg6 maximumConcurrentLoads:(unsigned long long)arg7 additionalDirectoryToConsider:(id)arg8 log:(id)arg9 signpostID:(unsigned long long)arg10 ;
-(void)setRequiresWiFi:(char)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(void)_loadResourcesFromDisk;
-(void)_loadNextResourceFromNetwork;
-(char)_establishHardLinkIfPossibleForResource:(id)arg1 toResource:(id)arg2 error:(id*)arg3 ;
-(char)_copyResource:(id)arg1 fromPath:(id)arg2 allowCreatingHardLink:(char)arg3 error:(id*)arg4 ;
-(void)_writeResourceToDisk:(id)arg1 withData:(id)arg2 checksum:(id)arg3 eTag:(id)arg4 completionHandler:(/*^block*/id)arg5 callbackQueue:(id)arg6 ;
-(char)requiresWiFi;
-(char)preferDirectNetworking;
-(void)setPreferDirectNetworking:(char)arg1 ;
@end
