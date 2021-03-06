/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/Versions/A/FileProviderDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <FileProviderDaemon/FileProviderDaemon-Structs.h>
@class PQLConnection, NSURL, NSObject;

@interface FPDAccessControlStore : NSObject {

	PQLConnection* _dbConnection;
	NSURL* _databaseBaseURL;
	char _dbIsOpen;
	NSObject*<OS_dispatch_queue> _syncQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;              //@synthesize syncQueue=_syncQueue - In the implementation block
+(id)sharedStore;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)openDatabase;
-(id)initWithDatabaseBaseURL:(id)arg1 ;
-(void)validateDatabase:(id)arg1 ;
-(void)performWithDBConnection:(/*^block*/id)arg1 ;
-(void)reopenDatabaseAfterUnlock;
-(id)keyForBundleIdentifier:(id)arg1 generateIfNotFound:(char)arg2 keyGenBlock:(/*^block*/id)arg3 ;
-(id)bookmarkForItemID:(id)arg1 consumerIdentifier:(id)arg2 ;
-(id)verifyBookmark:(id)arg1 auditToken:(SCD_Struct_FP0)arg2 consumerIdentifier:(id)arg3 ;
-(id)parseUnverifiedBookmark:(id)arg1 ;
-(char)lookupLRUSignature:(id)arg1 ;
-(void)addLRUSignature:(id)arg1 ;
@end

