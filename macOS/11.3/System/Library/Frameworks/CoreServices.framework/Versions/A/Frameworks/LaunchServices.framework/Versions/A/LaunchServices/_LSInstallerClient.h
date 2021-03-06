/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LaunchServices/LaunchServices-Structs.h>
#import <libobjc.A.dylib/LSInstallationServiceCallbackProtocol.h>

@protocol OS_dispatch_group;
@class NSString, NSXPCConnection, NSURL, NSDictionary, NSObject;

@interface _LSInstallerClient : NSObject <LSInstallationServiceCallbackProtocol> {

	char _uninstaller;
	unsigned long long _operationType;
	NSString* _operationTypeString;
	NSXPCConnection* _connection;
	/*^block*/id _progressBlock;
	NSString* _bundleID;
	NSURL* _bundleURL;
	NSDictionary* _options;
	NSObject*<OS_dispatch_group> _callbackDeliveryGroup;
	os_unfair_lock_s _lock;
	char _allCallbacksDeleviered;

}

@property (nonatomic,retain) NSXPCConnection * connection;                       //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) id progressBlock;                                     //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                                //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSURL * bundleURL;                                  //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,retain) NSDictionary * options;                             //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) unsigned long long operationType;                   //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,readonly) NSString * operationTypeString; 
@property (assign,getter=isUninstaller,nonatomic) char uninstaller;              //@synthesize uninstaller=_uninstaller - In the implementation block
@property (readonly) char allCallbacksDeleviered;                                //@synthesize allCallbacksDeleviered=_allCallbacksDeleviered - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)installerWithBundleID:(id)arg1 options:(id)arg2 callbackBlock:(/*^block*/id)arg3 ;
+(id)unInstallerWithBundleID:(id)arg1 options:(id)arg2 callbackBlock:(/*^block*/id)arg3 ;
+(id)installerWithBundleID:(id)arg1 bundleURL:(id)arg2 options:(id)arg3 callbackBlock:(/*^block*/id)arg4 ;
-(id)init;
-(NSXPCConnection *)connection;
-(void)updateCallbackWithData:(id)arg1 ;
-(void)callbackDeliveryComplete;
-(void)setBundleURL:(NSURL *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)setProgressBlock:(id)arg1 ;
-(void)setUninstaller:(char)arg1 ;
-(char)allCallbacksDeleviered;
-(id)progressBlock;
-(unsigned long long)operationType;
-(void)_beginOperation;
-(void)_waitForAllCallbackMessagesToExecute;
-(void)_invalidate;
-(NSString *)operationTypeString;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(char)isUninstaller;
-(NSString *)bundleID;
-(NSURL *)bundleURL;
-(NSDictionary *)options;
-(void)setOperationType:(unsigned long long)arg1 ;
@end

