/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMTransferAgent.framework/Versions/A/IMTransferAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@class IDSService, NSMutableDictionary, NSString;

@interface IMTransferAgentIDSInterface : NSObject <IDSServiceDelegate> {

	IDSService* _idsService;
	NSMutableDictionary* _uniqueIDToTransferCompletionBlockMap;
	int _numTransfers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(char)arg4 error:(id)arg5 ;
-(char)_sendIDSMessage:(id)arg1 ;
-(void)_sendUploadRequest:(id)arg1 topic:(id)arg2 transferID:(id)arg3 sourceAppID:(id)arg4 allowReauthorize:(char)arg5 ;
-(void)decrementTransferCount;
-(void)incrementTransferCount;
-(void)_sendUploadResponse:(id)arg1 success:(char)arg2 error:(id)arg3 ownerID:(id)arg4 signature:(id)arg5 requestURLString:(id)arg6 transferID:(id)arg7 ;
-(void)_handleUploadRequest:(id)arg1 ;
-(void)_handleUploadResponse:(id)arg1 ;
-(char)isLocalDevicePresent;
-(void)remoteUploadFileRequest:(id)arg1 topic:(id)arg2 transferID:(id)arg3 sourceAppID:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(int)currentTransfers;
-(id)localCompanionDevice;
@end

