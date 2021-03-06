/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Versions/A/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Rapport/Rapport-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/RPMessageable.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class CUBonjourAdvertiser, CUBonjourBrowser, CUCoalescer, CUBonjourDevice, NSMutableSet, RPConnection, NSObject, RPIdentity, NSMutableDictionary, CUTCPServer, CUWiFiManager, NSMutableArray, NSString, NSData, RPFileTransferProgress, NSURL;

@interface RPFileTransferSession : NSObject <NSSecureCoding, RPMessageable> {

	char _activateCalled;
	CUBonjourAdvertiser* _bonjourAdvertiser;
	CUBonjourBrowser* _bonjourBrowser;
	CUCoalescer* _bonjourCoalescer;
	CUBonjourDevice* _bonjourDevice;
	unsigned _cnxIDLast;
	NSMutableSet* _connections;
	RPConnection* _controlCnx;
	NSObject*<OS_dispatch_source> _controlRetryTimer;
	int _controlState;
	int _debugNotifyToken;
	char _finishPending;
	char _invalidateCalled;
	char _invalidateDone;
	char _lockedInterface;
	RPIdentity* _peerIdentity;
	char _peerInfraWiFiDisabled;
	NSMutableDictionary* _registeredEvents;
	NSMutableDictionary* _registeredRequests;
	RPIdentity* _selfIdentity;
	CUTCPServer* _tcpServer;
	LogCategory* _ucat;
	CUWiFiManager* _wifiManager;
	NSMutableSet* _addedItems;
	char _compressionEnabled;
	unsigned long long _fileIDLastReceive;
	unsigned long long _fileIDLastSend;
	NSMutableArray* _ioQueues;
	NSString* _receiveFileParentPath;
	unsigned long long _taskIDLast;
	NSMutableDictionary* _smallFilesReceiveTasks;
	NSMutableSet* _smallFilesSendTasks;
	NSMutableDictionary* _largeFileReceiveTasks;
	NSMutableSet* _largeFileSendTasks;
	unsigned _fileWritesOutstanding;
	char _prefCompress;
	unsigned _prefLargeFileBufferBytes;
	int _prefLargeFileMaxOutstanding;
	unsigned _prefLargeFileMaxTasks;
	unsigned _prefSmallFilesMaxBytes;
	unsigned _prefSmallFilesMaxTasks;
	unsigned long long _metricCompressedBytes;
	unsigned long long _metricUncompressedBytes;
	unsigned long long _metricCompressionErrors;
	unsigned long long _metricUncompressibleChunks;
	unsigned _metricDisconnects;
	unsigned long long _metricRetries;
	unsigned long long _metricLastFileCompletionTicks;
	unsigned long long _metricFileSizeBuckets[8];
	unsigned _metricLinkTypeCountAWDL;
	unsigned _metricLinkTypeCountOther;
	unsigned _metricLinkTypeCountUSB;
	unsigned long long _metricNotEnoughFiles;
	unsigned long long _metricPrematureSmallSets;
	unsigned long long _metricTCPRanDryCount;
	unsigned long long _metricTicksConnected;
	unsigned long long _metricTicksConnectStart;
	unsigned long long _metricTicksActivate;
	unsigned long long _metricTotalBytes;
	unsigned long long _metricTotalFiles;
	unsigned _metricTotalIOQueues;
	unsigned _flags;
	int _flowControlState;
	/*^block*/id _completionHandler;
	unsigned long long _debugFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _flowControlChangedHandler;
	NSString* _label;
	NSData* _peerPublicKey;
	RPFileTransferProgress* _progressCurrent;
	/*^block*/id _progressHandler;
	/*^block*/id _receivedItemHandler;
	/*^block*/id _receivedItemsHandler;
	NSData* _selfPublicKey;
	NSString* _targetID;
	NSURL* _temporaryDirectoryURL;
	NSData* _selfSecretKey;

}

@property (nonatomic,copy) NSData * selfPublicKey;                                    //@synthesize selfPublicKey=_selfPublicKey - In the implementation block
@property (nonatomic,copy) NSData * selfSecretKey;                                    //@synthesize selfSecretKey=_selfSecretKey - In the implementation block
@property (nonatomic,copy) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) unsigned long long debugFlags;                           //@synthesize debugFlags=_debugFlags - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) unsigned flags;                                          //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) id flowControlChangedHandler;                              //@synthesize flowControlChangedHandler=_flowControlChangedHandler - In the implementation block
@property (nonatomic,readonly) int flowControlState;                                  //@synthesize flowControlState=_flowControlState - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSData * peerPublicKey;                                    //@synthesize peerPublicKey=_peerPublicKey - In the implementation block
@property (nonatomic,readonly) RPFileTransferProgress * progressCurrent;              //@synthesize progressCurrent=_progressCurrent - In the implementation block
@property (nonatomic,copy) id progressHandler;                                        //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id receivedItemHandler;                                    //@synthesize receivedItemHandler=_receivedItemHandler - In the implementation block
@property (nonatomic,copy) id receivedItemsHandler;                                   //@synthesize receivedItemsHandler=_receivedItemsHandler - In the implementation block
@property (nonatomic,copy) NSString * targetID;                                       //@synthesize targetID=_targetID - In the implementation block
@property (nonatomic,copy) NSURL * temporaryDirectoryURL;                             //@synthesize temporaryDirectoryURL=_temporaryDirectoryURL - In the implementation block
+(char)supportsSecureCoding;
-(unsigned)flags;
-(void)dealloc;
-(id)description;
-(id)init;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)addItem:(id)arg1 ;
-(void)finish;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)activate;
-(void)_invalidated;
-(void)setFlags:(unsigned)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)addItems:(id)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)registerRequestID:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(/*^block*/id)arg5 ;
-(void)setProgressHandler:(id)arg1 ;
-(id)progressHandler;
-(void)_updateIfNeededWithBlock:(/*^block*/id)arg1 ;
-(id)descriptionWithLevel:(int)arg1 ;
-(void)registerEventID:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)deregisterEventID:(id)arg1 ;
-(void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)deregisterRequestID:(id)arg1 ;
-(void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)_reportProgressType:(int)arg1 ;
-(id)flowControlChangedHandler;
-(int)flowControlState;
-(void)setFlowControlChangedHandler:(id)arg1 ;
-(void)setTargetID:(NSString *)arg1 ;
-(NSString *)targetID;
-(unsigned long long)debugFlags;
-(void)setDebugFlags:(unsigned long long)arg1 ;
-(void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_debugUpdate;
-(char)_activateAndReturnError:(id*)arg1 ;
-(void)_reportCompletion:(id)arg1 ;
-(void)_prefsChanged;
-(void)_debugSetup;
-(char)_activateTargetAndReturnError:(id*)arg1 ;
-(char)_activateSourceAndReturnError:(id*)arg1 ;
-(void)_completeItemDirect:(id)arg1 error:(id)arg2 ;
-(void)_updateWiFi;
-(void)_receivedPeerUpdate:(id)arg1 ;
-(void)_smallFilesReceiveRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_largeFileReceiveRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handleDevicesCoalesced;
-(void)_handleDeviceFound:(id)arg1 ;
-(void)_handleDeviceLost:(id)arg1 ;
-(void)_controlCnxStartIfNeeded;
-(void)_reportProgressControlState;
-(void)_controlCnxRetryIfNeeded;
-(void)_receivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3 ;
-(void)_receivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)_scheduleItems;
-(void)_handleIncomingConnectionStarted:(id)arg1 ;
-(void)_handleIncomingConnectionEnded:(id)arg1 ;
-(char)_prepareItem:(id)arg1 error:(id*)arg2 ;
-(void)_metricAddFileSize:(long long)arg1 ;
-(void)_smallFilesSendTaskRun:(id)arg1 ;
-(void)_largeFileSendTaskStart:(id)arg1 ;
-(id)_smallFilesSendTaskCreate;
-(id)_largeFileSendTaskCreate;
-(void)_processFinish;
-(id)_ioQueueDequeue;
-(id)_smallFilesSendTaskReadItem:(id)arg1 error:(id*)arg2 ;
-(void)_completeItem:(id)arg1 error:(id)arg2 ;
-(void)_smallFilesSendTaskEnd:(id)arg1 error:(id)arg2 ;
-(id)_encodeAndCompressObject:(id)arg1 originalSize:(unsigned long long*)arg2 error:(id*)arg3 ;
-(id)_readPath:(const char*)arg1 size:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)_ioQueueEnqueue:(id)arg1 ;
-(id)_decompressAndDecodeData:(id)arg1 originalSize:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)_smallFilesReceiveTaskRun:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(char)_smallFilesReceiveTaskFileItem:(id)arg1 error:(id*)arg2 ;
-(void)_smallFilesReceiveTaskComplete:(id)arg1 error:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(int)_openWriteFileItem:(id)arg1 size:(long long)arg2 error:(id*)arg3 ;
-(char)_writeFD:(int)arg1 buffer:(const char*)arg2 size:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)_processReceivedItems:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_largeFileSendTaskFailed:(id)arg1 error:(id)arg2 ;
-(int)_openReadPath:(const char*)arg1 error:(id*)arg2 ;
-(void)_largeFileSendTaskNext:(id)arg1 xid:(unsigned)arg2 ;
-(id)_readFD:(int)arg1 size:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)_largeFileSendTaskSend:(id)arg1 data:(id)arg2 end:(char)arg3 xid:(unsigned)arg4 ;
-(id)_compressData:(id)arg1 error:(id*)arg2 ;
-(void)_largeFileSendTaskResponse:(id)arg1 error:(id)arg2 end:(char)arg3 xid:(unsigned)arg4 ;
-(void)_largeFileSendTaskEnd:(id)arg1 error:(id)arg2 ;
-(id)_decompressData:(id)arg1 originalSize:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)_largeFileReceiveTaskInvalidate:(id)arg1 ;
-(void)_largeFileReceiveTaskRun:(id)arg1 data:(id)arg2 sendFlags:(unsigned)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)_largeFileReceiveTaskRespond:(id)arg1 error:(id)arg2 complete:(char)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)_processReceivedItem:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(int)_openWritePath:(id)arg1 size:(long long)arg2 error:(id*)arg3 ;
-(char)_readFD:(int)arg1 buffer:(char*)arg2 size:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)prepareTemplateAndReturnError:(id*)arg1 ;
-(NSData *)peerPublicKey;
-(void)setPeerPublicKey:(NSData *)arg1 ;
-(RPFileTransferProgress *)progressCurrent;
-(id)receivedItemHandler;
-(void)setReceivedItemHandler:(id)arg1 ;
-(id)receivedItemsHandler;
-(void)setReceivedItemsHandler:(id)arg1 ;
-(NSData *)selfPublicKey;
-(void)setSelfPublicKey:(NSData *)arg1 ;
-(NSURL *)temporaryDirectoryURL;
-(void)setTemporaryDirectoryURL:(NSURL *)arg1 ;
-(NSData *)selfSecretKey;
-(void)setSelfSecretKey:(NSData *)arg1 ;
@end

