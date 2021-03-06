/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>
#import <libobjc.A.dylib/BRCDownloadTracking.h>
#import <libobjc.A.dylib/BRCReachabilityDelegate.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class BRCAccountSession, BRCXPCClient, NSURL, BRCDirectoryItem, BRCTreeEnumerator, NSMutableSet, NSSet, NSMutableArray, NSError, NSString;

@interface BRCFileProvidingRequestOperation : _BRCFrameworkOperation <BRCDownloadTracking, BRCReachabilityDelegate, BRCOperationSubclass> {

	BRCAccountSession* _session;
	BRCXPCClient* _client;
	NSURL* _url;
	BRCDirectoryItem* _directoryItem;
	BRCTreeEnumerator* _treeEnumerator;
	NSMutableSet* _trackedDocIDs;
	NSSet* _docIDsToCancel;
	NSMutableArray* _callbacks;
	NSError* _lastDownloadError;
	char _isStillEnumeratingDirectory;
	char _isFinished;
	char _isMonitoringReachability;
	NSMutableSet* _appLibrariesMonitored;
	char _isRecursive;
	char _isForBackup;
	char _wantsCurrentVersion;

}

@property (assign,nonatomic) char isRecursive;                      //@synthesize isRecursive=_isRecursive - In the implementation block
@property (assign,nonatomic) char isForBackup;                      //@synthesize isForBackup=_isForBackup - In the implementation block
@property (assign,nonatomic) char wantsCurrentVersion;              //@synthesize wantsCurrentVersion=_wantsCurrentVersion - In the implementation block
@property (nonatomic,readonly) NSSet * trackedDocIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)main;
-(void)addCompletionCallback:(/*^block*/id)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(char)wantsCurrentVersion;
-(void)setWantsCurrentVersion:(char)arg1 ;
-(char)shouldRetryForError:(id)arg1 ;
-(void)downloadTrackedForItemWithDocID:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)networkReachabilityChanged:(char)arg1 ;
-(id)initWithDirectoryItem:(id)arg1 ;
-(id)initWithName:(id)arg1 session:(id)arg2 readingOptions:(unsigned long long)arg3 ;
-(void)_detachAllTrackedDocID:(id)arg1 error:(id)arg2 ;
-(void)_finishAfterWaitingForDocumentsWithID:(id)arg1 error:(id)arg2 ;
-(char)isForBackup;
-(void)_provideDocument:(id)arg1 ;
-(char)isRecursive;
-(void)_provideDirectoryRecursively:(id)arg1 ;
-(void)_provideURL;
-(void)_provideItem;
-(NSSet *)trackedDocIDs;
-(id)initWithURL:(id)arg1 readingOptions:(unsigned long long)arg2 client:(id)arg3 session:(id)arg4 ;
-(void)setIsRecursive:(char)arg1 ;
-(void)setIsForBackup:(char)arg1 ;
@end

