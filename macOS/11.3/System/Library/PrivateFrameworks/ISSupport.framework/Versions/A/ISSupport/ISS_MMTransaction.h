/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ISSupport.framework/Versions/A/ISSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSLock;

@interface ISS_MMTransaction : NSObject {

	id _request;
	id _parent_request;
	id _delegate;
	id _result;
	char _started;
	char _finished;
	char _aborted;
	char _use_synchronous;
	char _is_upload;
	char _force;
	char _watched;
	char _data;
	char _result_required;
	id _pre_handler_obj;
	SEL _pre_handler_sel;
	id _post_handler_obj;
	SEL _post_handler_sel;
	id _response_handler;
	id _listener;
	id _listeningRunLoop;
	NSString* _identifier;
	id _context;
	id _notes;
	id _uri;
	id _method;
	id _primary_state;
	id _my_private_ivars;
	int _numRetries;
	NSLock* _retryLock;
	NSLock* _delegateCallbackLock;
	char _didMakeDelegateCallback;

}
+(void)initialize;
+(id)_transactionWithRequest:(id)arg1 synchronousFlag:(char)arg2 delegate:(id)arg3 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)init;
-(id)identifier;
-(id)_delegate;
-(id)_listener;
-(id)result;
-(id)_result;
-(id)_error;
-(id)transactionID;
-(void)handlePortMessage:(id)arg1 ;
-(void)_setError:(id)arg1 ;
-(id)method;
-(char)isFinished;
-(id)context;
-(id)uri;
-(void)setContext:(id)arg1 ;
-(int)_errorCode;
-(id)_request;
-(id)_responseData;
-(id)_creationDate;
-(char)_isSynchronous;
-(void)abort;
-(id)_errorDomain;
-(id)_notes;
-(long long)contentLength;
-(id)_requestData;
-(void)retry;
-(id)_parentRequest;
-(id)_lastModifiedDate;
-(id)resultData;
-(void)_setUri:(id)arg1 ;
-(char)isSuccessful;
-(id)_responseHeaders;
-(int)errorType;
-(id)_requestHeaders;
-(int)httpStatusCode;
-(void)_setRequest:(id)arg1 ;
-(void)_setResult:(id)arg1 ;
-(int)transactionState;
-(void)_dispatch;
-(char)_receivedSuccessResponse;
-(void)_setRawDataAccess:(char)arg1 ;
-(void)_setPostHandler:(SEL)arg1 andTargetObject:(id)arg2 ;
-(void)_setResultRequired:(char)arg1 ;
-(void)_setPreHandler:(SEL)arg1 andTargetObject:(id)arg2 ;
-(void)_setNotes:(id)arg1 ;
-(void)_setTransactionFinished:(char)arg1 ;
-(void)_scheduleDelegateCallback;
-(void)_logFailure;
-(id)_initTransactionWithRequest:(id)arg1 synchronousFlag:(char)arg2 delegate:(id)arg3 ;
-(void)_setForceSuccess:(char)arg1 ;
-(void)_setTransactionStarted:(char)arg1 ;
-(id)_performPreHandler;
-(char)_transactionFinished;
-(char)_transactionAborted;
-(char)_isBeingWatched;
-(void)_detachListener;
-(char)_statusCodeSuccessful;
-(id)_performPostHandler;
-(void)_setTransactionAborted:(char)arg1 ;
-(void)_addToWatchList;
-(void)_attachListener;
-(char)_transactionStarted;
-(char)_forceSuccess;
-(char)_doForceSuccessForStatusCode:(int)arg1 ;
-(id)_headerWithName:(id)arg1 ;
-(long long)bytesTransferred;
-(void)_setMethod:(id)arg1 ;
-(id)_serverSideDate;
-(void)_setParentRequest:(id)arg1 ;
@end
