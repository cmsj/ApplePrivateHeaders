/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BRCPQLConnection, NSURL, NSString, NSArray;

@interface BRCBackupSession : NSObject {

	BRCPQLConnection* _db;
	NSURL* _homeDirectoryURL;
	NSString* _accountID;
	NSArray* _syncedRootURLs;

}
+(char)fileProviderString:(id)arg1 isEqualToFileProviderString:(id)arg2 ;
-(void)close;
-(void)dbBecameCorrupted;
-(char)_setupHomeDirectoryForUsername:(id)arg1 error:(id*)arg2 ;
-(char)_openDBWithHomeDirectoryURL:(id)arg1 error:(id*)arg2 ;
-(void)_updateAccountIDAndSyncedRootURLs;
-(char)_urlIsInSyncedLocation:(id)arg1 ;
-(id)_mobileDocumentsURL;
-(char)openWithUsername:(id)arg1 error:(id*)arg2 ;
-(char)urlIsInSyncedLocation:(id)arg1 ;
-(id)fileProviderStringsForDocumentURLs:(id)arg1 error:(id*)arg2 ;
@end
