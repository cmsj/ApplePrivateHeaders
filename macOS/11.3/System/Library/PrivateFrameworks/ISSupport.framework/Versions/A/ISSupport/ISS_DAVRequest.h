/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ISSupport.framework/Versions/A/ISSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ISSupport/ISSupport-Structs.h>
#import <ISSupport/ISS_AYOperation.h>

@class ISS_DAVSession, NSString, NSMutableSet, NSMutableDictionary, NSDictionary, NSData, NSSet;

@interface ISS_DAVRequest : ISS_AYOperation {

	CFHTTPMessageRef _requestMessage;
	CFHTTPMessageRef _responseMessage;
	CFReadStreamRef _readStream;
	CFReadStreamRef _bodyStream;
	SCD_Struct_IS4* _clientContext;
	ISS_DAVSession* _session;
	NSString* _method;
	NSString* _uri;
	NSMutableSet* _bodyReaders;
	NSMutableSet* _acceptingReaders;
	NSMutableDictionary* _requestHeaders;
	NSDictionary* _headers;
	NSString* _httpStatus;
	unsigned _httpStatusCode;
	NSMutableDictionary* _attemptDictionary;
	NSData* _requestBodyData;
	long long _contentLength;
	long long _readLength;
	long long _requestLength;
	long long _putLength;
	id _delegate;
	void* _davReserved;
	char _includeMethodHeader;
	NSString* _contentType;
	NSString* _queryString;
	char _redirected;
	NSData* _responseData;
	int _attemptNum;
	char _doRetry;
	char _checkedForBadHost;
	NSString* _newHost;
	NSSet* _successCodes;

}
+(void)initialize;
+(id)propPatchRequestWithSession:(id)arg1 path:(id)arg2 patchProperties:(id)arg3 deleteProperties:(id)arg4 ;
+(id)requestWithURL:(id)arg1 method:(id)arg2 ;
+(id)requestWithSession:(id)arg1 method:(id)arg2 path:(id)arg3 ;
+(id)requestWithSession:(id)arg1 method:(id)arg2 URI:(id)arg3 ;
+(id)multiStatusRequestWithURL:(id)arg1 method:(id)arg2 ;
+(id)multiStatusRequestWithSession:(id)arg1 method:(id)arg2 path:(id)arg3 ;
+(id)multiStatusRequestWithURL:(id)arg1 method:(id)arg2 responseClass:(Class)arg3 ;
+(id)multiStatusRequestWithSession:(id)arg1 method:(id)arg2 path:(id)arg3 responseClass:(Class)arg4 ;
+(id)propFindRequestWithURL:(id)arg1 withDepth:(id)arg2 lookingForProps:(id)arg3 ;
+(id)propFindRequestWithSession:(id)arg1 withDepth:(id)arg2 path:(id)arg3 lookingForProps:(id)arg4 ;
+(id)propPatchRequestWithURL:(id)arg1 patchProperties:(id)arg2 deleteProperties:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)password;
-(id)url;
-(id)method;
-(void)dispatch;
-(id)uri;
-(id)contentType;
-(void)setContentType:(id)arg1 ;
-(id)session;
-(id)errors;
-(id)_responseData;
-(id)username;
-(id)queryString;
-(void)setQueryString:(id)arg1 ;
-(id)responses;
-(id)httpStatus;
-(id)responseHeaders;
-(long long)operationProgress;
-(long long)operationTotal;
-(void)abortOperation;
-(id)requestHeaders;
-(void)endOperationWithError:(id)arg1 ;
-(int)httpStatusCode;
-(long long)responseContentLength;
-(long long)readLength;
-(void)setUsername:(id)arg1 andPassword:(id)arg2 ;
-(id)initWithSession:(id)arg1 method:(id)arg2 path:(id)arg3 ;
-(void)setRequestBodyWithData:(id)arg1 ;
-(void)addResponseBodyReader:(id)arg1 ;
-(void)setRequestLength:(long long)arg1 ;
-(void)setHeader:(id)arg1 withValue:(id)arg2 ;
-(void)_forceSuccessForStatusCodes:(id)arg1 ;
-(char)requestRedirected;
-(id)requestBodyData;
-(id)_responseBodyFromReader;
-(char)_doForceSuccessForStatusCode:(int)arg1 ;
-(long long)putLength;
-(int)_attemptNum;
-(CFHTTPMessageRef)lastResponseMessage;
-(CFHTTPMessageRef)lastRequestMessage;
-(id)_newHost;
-(int)attemptForHTTPCode:(int)arg1 ;
-(char)doIncludeMethodHeader;
-(CFReadStreamRef)newStreamWithRequestMessage:(CFHTTPMessageRef)arg1 ;
-(id)initWithURL:(id)arg1 method:(id)arg2 ;
-(id)initWithSession:(id)arg1 method:(id)arg2 URI:(id)arg3 ;
-(void)resetReaders;
-(void)initBeforeDispatch;
-(char)_initHTTPRequest;
-(id)initWithSession:(id)arg1 method:(id)arg2 andEscapedURI:(id)arg3 ;
-(void)setDoIncludeMethodHeader:(char)arg1 ;
-(void)setRequestBodyWithString:(id)arg1 encoding:(unsigned long long)arg2 ;
-(void)grantRequestWithLockToken:(id)arg1 ;
-(void)grantRequestWithLockTokens:(id)arg1 ;
-(void)_setHttpStatusCode:(int)arg1 ;
-(void)_setNewHost:(id)arg1 ;
-(long long)requestLength;
-(id)acceptingReaders;
-(char)_computeHeaders;
-(void)_setDoRetry:(char)arg1 ;
-(char)_shouldRevertToOriginalHost;
-(char)_didCheckForBadHost;
-(void)_setDidCheckForBadHost:(char)arg1 ;
-(void)logResponseInfo;
-(void)logRequestInfo;
-(char)_doRetryAfterError:(id)arg1 ;
-(unsigned char)_bodyStreamOpen:(SCD_Struct_IS6*)arg1 openComplete:(char*)arg2 ;
-(long long)_bodyStreamRead:(char*)arg1 bufferLength:(long long)arg2 error:(SCD_Struct_IS6*)arg3 atEOF:(char*)arg4 ;
-(unsigned char)_bodyStreamCanRead;
-(void)_readStreamEvent:(unsigned long long)arg1 ;
-(char)isRunLoopBased;
-(void)_setResponseData:(id)arg1 ;
-(id)initPropFindWithURL:(id)arg1 withDepth:(id)arg2 lookingForProps:(id)arg3 ;
-(id)initPropFindWithSession:(id)arg1 withDepth:(id)arg2 path:(id)arg3 lookingForProps:(id)arg4 ;
-(id)initMultiStatusRequestWithURL:(id)arg1 method:(id)arg2 ;
-(id)initMultiStatusRequestWithSession:(id)arg1 method:(id)arg2 path:(id)arg3 ;
-(id)initMultiStatusRequestWithURL:(id)arg1 method:(id)arg2 responseClass:(Class)arg3 ;
-(id)initMultiStatusRequestWithSession:(id)arg1 method:(id)arg2 path:(id)arg3 responseClass:(Class)arg4 ;
-(void)_initReaderWithClass:(Class)arg1 ;
-(void)_initForPropFindWithDepth:(id)arg1 lookingForProps:(id)arg2 ;
-(id)initPropPatchWithURL:(id)arg1 patchProperties:(id)arg2 deleteProperties:(id)arg3 ;
-(id)initPropPatchWithSession:(id)arg1 path:(id)arg2 patchProperties:(id)arg3 deleteProperties:(id)arg4 ;
-(void)_initForPropPatchWithPatchDict:(id)arg1 deleteProperties:(id)arg2 ;
@end

