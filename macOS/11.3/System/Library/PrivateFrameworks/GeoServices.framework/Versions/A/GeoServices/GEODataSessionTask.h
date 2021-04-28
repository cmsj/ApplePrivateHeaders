/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEODataSessionTaskDelegate.h>
#import <libobjc.A.dylib/GEODataSessionTask.h>
@class NSData, NSURL, NSError, NSString, GEOClientMetrics;


@protocol GEODataSessionTask <NSObject>
@property (nonatomic,readonly) NSData * receivedData; 
@property (nonatomic,copy,readonly) NSURL * downloadedFileURL; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) NSString * remoteAddressAndPort; 
@property (nonatomic,readonly) char protocolBufferHasPreamble; 
@property (nonatomic,readonly) unsigned long long outgoingPayloadSize; 
@property (nonatomic,readonly) unsigned long long incomingPayloadSize; 
@property (nonatomic,readonly) char failedDueToCancel; 
@property (nonatomic,readonly) id<GEORequestCounterTicket> requestCounterTicket; 
@property (nonatomic,readonly) GEOClientMetrics * clientMetrics; 
@property (nonatomic,readonly) id<NSObject> parsedResponse; 
@property (nonatomic,readonly) unsigned long long requestedMultipathServiceType; 
@property (nonatomic,readonly) char mptcpNegotiated; 
@property (nonatomic,readonly) char receivedRNFNotification; 
@required
-(NSError *)error;
-(void)start;
-(void)cancel;
-(NSURL *)downloadedFileURL;
-(NSData *)receivedData;
-(GEOClientMetrics *)clientMetrics;
-(id<GEORequestCounterTicket>)requestCounterTicket;
-(id<NSObject>)parsedResponse;
-(char)protocolBufferHasPreamble;
-(unsigned long long)incomingPayloadSize;
-(unsigned long long)outgoingPayloadSize;
-(NSString *)remoteAddressAndPort;
-(char)failedDueToCancel;
-(unsigned long long)requestedMultipathServiceType;
-(char)mptcpNegotiated;
-(char)receivedRNFNotification;

@end


@protocol GEODataSessionTaskDelegate, OS_dispatch_queue, OS_os_activity, GEODataSessionTask;
@class NSData, NSURL, NSError, NSString, GEOClientMetrics, GEODataSession, NSObject, GEODataURLSessionTask;

@interface GEODataSessionTask : NSObject <GEODataSessionTaskDelegate, GEODataSessionTask> {

	id<GEODataSessionTaskDelegate> _delegate;
	GEODataSession* _session;
	NSObject*<OS_dispatch_queue> _sessionIsolation;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_os_activity> _activity;
	id<GEODataSessionTask> _completedSubtask;
	GEODataURLSessionTask* _urlTask;
	SCD_Struct_GE87 _requestKind;
	double _startTime;
	double _endTime;
	char _didStart;
	char _willSendRequestDelegateCalled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * entityTag; 
@property (nonatomic,readonly) NSData * receivedData; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) unsigned long long incomingPayloadSize; 
@property (nonatomic,readonly) long long responseSource; 
@property (nonatomic,readonly) char protocolBufferHasPreamble; 
@property (nonatomic,readonly) NSURL * originalRequestURL; 
@property (nonatomic,readonly) double elapsedTime; 
@property (nonatomic,readonly) double loadTime; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sessionIsolation;                 //@synthesize sessionIsolation=_sessionIsolation - In the implementation block
@property (assign,nonatomic,__weak) id<GEODataSessionTaskDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) GEODataSession * session;                                 //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                    //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) GEODataURLSessionTask * urlTask;                                 //@synthesize urlTask=_urlTask - In the implementation block
@property (nonatomic,retain) id<GEODataSessionTask> completedSubtask;                         //@synthesize completedSubtask=_completedSubtask - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_activity> activity;                            //@synthesize activity=_activity - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE87 requestKind;                                   //@synthesize requestKind=_requestKind - In the implementation block
@property (assign) float priority; 
@property (nonatomic,copy,readonly) NSURL * downloadedFileURL; 
@property (nonatomic,readonly) NSString * remoteAddressAndPort; 
@property (nonatomic,readonly) unsigned long long outgoingPayloadSize; 
@property (nonatomic,readonly) char failedDueToCancel; 
@property (nonatomic,readonly) id<GEORequestCounterTicket> requestCounterTicket; 
@property (nonatomic,readonly) GEOClientMetrics * clientMetrics; 
@property (nonatomic,readonly) id<NSObject> parsedResponse; 
@property (nonatomic,readonly) unsigned long long requestedMultipathServiceType; 
@property (nonatomic,readonly) char mptcpNegotiated; 
@property (nonatomic,readonly) char receivedRNFNotification; 
-(NSString *)description;
-(NSString *)debugDescription;
-(id<GEODataSessionTaskDelegate>)delegate;
-(void)setDelegate:(id<GEODataSessionTaskDelegate>)arg1 ;
-(NSError *)error;
-(void)start;
-(void)cancel;
-(void)setPriority:(float)arg1 ;
-(float)priority;
-(GEODataSession *)session;
-(NSObject*<OS_os_activity>)activity;
-(void)setSession:(GEODataSession *)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(NSURL *)downloadedFileURL;
-(GEODataURLSessionTask *)urlTask;
-(id<GEODataSessionTask>)completedSubtask;
-(char)validateTileResponse:(char)arg1 error:(id*)arg2 ;
-(NSData *)receivedData;
-(NSURL *)originalRequestURL;
-(GEOClientMetrics *)clientMetrics;
-(id<GEORequestCounterTicket>)requestCounterTicket;
-(id)initWithSession:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 requestKind:(SCD_Struct_GE87)arg4 requestCounterTicket:(id)arg5 ;
-(void)setUrlTask:(GEODataURLSessionTask *)arg1 ;
-(NSObject*<OS_dispatch_queue>)sessionIsolation;
-(id<NSObject>)parsedResponse;
-(char)protocolBufferHasPreamble;
-(unsigned long long)incomingPayloadSize;
-(unsigned long long)outgoingPayloadSize;
-(NSString *)remoteAddressAndPort;
-(char)failedDueToCancel;
-(unsigned long long)requestedMultipathServiceType;
-(char)mptcpNegotiated;
-(char)receivedRNFNotification;
-(void)setCompletedSubtask:(id<GEODataSessionTask>)arg1 ;
-(SCD_Struct_GE87)requestKind;
-(void)_didCompleteSubtask:(id)arg1 ;
-(void)dataSession:(id)arg1 willSendRequest:(id)arg2 forTask:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)dataSession:(id)arg1 didCompleteTask:(id)arg2 ;
-(char)didValidateEntityTagForData:(id*)arg1 entityTag:(id*)arg2 ;
-(NSString *)entityTag;
-(char)validateTransportWithError:(id*)arg1 ;
-(char)getHeaderValue:(id*)arg1 forField:(id)arg2 ;
-(long long)responseSource;
-(double)elapsedTime;
-(double)loadTime;
-(double)loadTimeIncludingTask:(id)arg1 ;
@end
