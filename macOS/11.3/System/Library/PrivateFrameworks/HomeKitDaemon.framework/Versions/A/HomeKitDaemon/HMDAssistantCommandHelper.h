/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSUUID, HMDHome, NSObject, HMFMessageDispatcher, NSMutableArray, NSArray, NSString;

@interface HMDAssistantCommandHelper : HMFObject <HMFMessageReceiver, HMFLogging> {

	char _executingActionSet;
	/*^block*/id _responseHandler;
	/*^block*/id _mediaResponseHandler;
	NSUUID* _messageId;
	HMDHome* _home;
	NSObject*<OS_dispatch_queue> _queue;
	HMFMessageDispatcher* _msgDispatcher;
	NSUUID* _uuid;
	NSMutableArray* _responses;
	unsigned long long _numErrors;
	NSArray* _requests;
	NSArray* _mediaRequests;
	NSMutableArray* _mediaResponses;

}

@property (nonatomic,copy) id responseHandler;                                                //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,copy) id mediaResponseHandler;                                           //@synthesize mediaResponseHandler=_mediaResponseHandler - In the implementation block
@property (nonatomic,retain) NSUUID * messageId;                                              //@synthesize messageId=_messageId - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                           //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                            //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSMutableArray * responses;                                      //@synthesize responses=_responses - In the implementation block
@property (assign,nonatomic) unsigned long long numErrors;                                    //@synthesize numErrors=_numErrors - In the implementation block
@property (assign,nonatomic) char executingActionSet;                                         //@synthesize executingActionSet=_executingActionSet - In the implementation block
@property (nonatomic,retain) NSArray * requests;                                              //@synthesize requests=_requests - In the implementation block
@property (nonatomic,retain) NSArray * mediaRequests;                                         //@synthesize mediaRequests=_mediaRequests - In the implementation block
@property (nonatomic,retain) NSMutableArray * mediaResponses;                                 //@synthesize mediaResponses=_mediaResponses - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMDHome *)home;
-(NSArray *)requests;
-(void)_register;
-(void)setRequests:(NSArray *)arg1 ;
-(id)responseHandler;
-(NSMutableArray *)responses;
-(void)setHome:(HMDHome *)arg1 ;
-(NSUUID *)messageId;
-(void)setMessageId:(NSUUID *)arg1 ;
-(void)setResponses:(NSMutableArray *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)addActionSetRequest:(id)arg1 actionSet:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addMediaWriteRequests:(id)arg1 withRequestProperty:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addReadRequests:(id)arg1 home:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addWriteRequests:(id)arg1 home:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeResponses:(id)arg1 ;
-(id)initWithQueue:(id)arg1 msgDispatcher:(id)arg2 ;
-(void)timeoutAndReportResults;
-(void)reportOperationStartedForAccessory:(id)arg1 ;
-(void)handleAccessoryCharacteristicsChangedNotification:(id)arg1 ;
-(NSArray *)mediaRequests;
-(void)_reportResponsesForMediaRequests;
-(void)_reportResponses;
-(id)mediaResponseHandler;
-(void)setMediaResponseHandler:(id)arg1 ;
-(NSMutableArray *)mediaResponses;
-(char)executingActionSet;
-(unsigned long long)numErrors;
-(void)setNumErrors:(unsigned long long)arg1 ;
-(void)_reportOperationStartedForAccessory:(id)arg1 ;
-(void)__handleAccessoryCharacteristicsChanged:(id)arg1 ;
-(void)setMediaRequests:(NSArray *)arg1 ;
-(void)setMediaResponses:(NSMutableArray *)arg1 ;
-(void)setExecutingActionSet:(char)arg1 ;
@end

