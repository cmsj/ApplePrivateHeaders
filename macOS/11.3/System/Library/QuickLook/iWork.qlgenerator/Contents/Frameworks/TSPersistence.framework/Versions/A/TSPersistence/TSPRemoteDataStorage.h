/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPFileDataStorage.h>
#import <TSPersistence/TSPDataStorageDownloadable.h>

@protocol OS_dispatch_queue, TSPDataStorage, TSPRemoteDataStorageDelegate;
@class SFUCryptoKey, NSObject, TSPTemporaryDataStorage, NSMutableIndexSet, NSDate, NSURL, NSIndexSet;

@interface TSPRemoteDataStorage : TSPFileDataStorage <TSPDataStorageDownloadable> {

	SFUCryptoKey* _encryptionKey;
	NSObject*<OS_dispatch_queue> _accessQueue;
	TSPTemporaryDataStorage* _temporaryMaterializedDataStorage;
	unsigned long long _changeCount;
	NSMutableIndexSet* _unmaterializedRanges;
	id<TSPDataStorage> _packageDataStorage;
	long long _uploadStatus;
	NSDate* _modificationDate;
	char _canDownload;
	id<TSPRemoteDataStorageDelegate> _delegate;
	NSURL* _remoteURL;
	long long _downloadPriority;

}

@property (assign,nonatomic,__weak) id<TSPRemoteDataStorageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSURL * remoteURL;                                           //@synthesize remoteURL=_remoteURL - In the implementation block
@property (nonatomic,readonly) char isMaterialized; 
@property (nonatomic,readonly) NSIndexSet * unmaterializedRanges; 
@property (nonatomic,readonly) unsigned long long firstUnmaterializedIndex; 
@property (nonatomic,readonly) unsigned long long materializedLength; 
@property (nonatomic,readonly) long long downloadPriority;                                  //@synthesize downloadPriority=_downloadPriority - In the implementation block
@property (assign,nonatomic) long long uploadStatus; 
@property (nonatomic,readonly) NSDate * modificationDate; 
+(id)notificationQueue;
+(id)ioQueue;
-(unsigned long long)length;
-(id<TSPRemoteDataStorageDelegate>)delegate;
-(void)setDelegate:(id<TSPRemoteDataStorageDelegate>)arg1 ;
-(unsigned long long)encodedLength;
-(NSDate *)modificationDate;
-(char)isReadable;
-(char)needsDownload;
-(NSURL *)remoteURL;
-(long long)uploadStatus;
-(void)performIOChannelReadWithAccessor:(/*^block*/id)arg1 ;
-(void)performReadWithAccessor:(/*^block*/id)arg1 ;
-(char)linkOrCopyToURL:(id)arg1 encryptionInfo:(id)arg2 canLink:(char)arg3 ;
-(id)decryptionInfo;
-(id)writeData:(id)arg1 toPackageWriter:(id)arg2 infoMessage:(DataInfo*)arg3 preferredFilename:(id)arg4 shouldRemoveData:(char)arg5 error:(id*)arg6 ;
-(unsigned long long)reservedLength;
-(unsigned long long)firstUnmaterializedIndex;
-(char)canDownload;
-(void)setUploadStatus:(long long)arg1 ;
-(id)initWithRemoteURL:(id)arg1 length:(unsigned long long)arg2 encryptionKey:(id)arg3 canDownload:(char)arg4 downloadPriority:(long long)arg5 uploadStatus:(long long)arg6 modificationDate:(id)arg7 ;
-(char)migrateToTemporaryDataStorageIfNeeded;
-(char)isPartialDataInPackage:(id)arg1 ;
-(void)didSaveWithChangeCount:(unsigned long long)arg1 packageDataStorage:(id)arg2 ;
-(id)initWithRemoteURL:(id)arg1 unmaterializedRanges:(id)arg2 encryptionKey:(id)arg3 canDownload:(char)arg4 downloadPriority:(long long)arg5 uploadStatus:(long long)arg6 modificationDate:(id)arg7 packageDataStorage:(id)arg8 ;
-(char)isMaterialized;
-(void)didReceiveRemoteDataAtURL:(id)arg1 canMove:(char)arg2 decryptionInfo:(id)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)didAddDownloadObserverWithData:(id)arg1 ;
-(unsigned long long)materializedLength;
-(void)didReceivePartialRemoteData:(id)arg1 decryptionKey:(id)arg2 range:(NSRange)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)didReceiveRemoteData:(id)arg1 decryptionInfo:(id)arg2 completionQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)didReceiveRemoteDataWithReadChannel:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(char)p_isMaterialized;
-(unsigned long long)p_materializedLength;
-(void)p_notifyDownloadObserversWithStatus:(long long)arg1 error:(id)arg2 ;
-(void)didReceiveRemoteDataWithDecryptionInfo:(id)arg1 noEncryptionHandler:(/*^block*/id)arg2 createReadChannelForCryptoTranscodeBlock:(/*^block*/id)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)p_migrateToTemporaryDataStorageWithEncryptionInfo:(id)arg1 updateInternalDataStorages:(char)arg2 ;
-(char)p_copyPartiallyMaterializedDataToURL:(id)arg1 encryptionInfo:(id)arg2 ;
-(NSIndexSet *)unmaterializedRanges;
-(long long)downloadPriority;
@end

