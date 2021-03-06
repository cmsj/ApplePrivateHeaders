/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BulkSymbolication.framework/Versions/A/BulkSymbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSURLSessionDataTask, NSArray, NSObject, NSMutableDictionary, NSURLCredential;

@interface BKSJob : NSObject {

	unsigned char _state;
	char _needsSegmentInfo;
	char _shouldReadFromKeychain;
	/*^block*/id _odCredentialProvidingBlock;
	double _timeoutInSec;
	NSString* _groupName;
	/*^block*/id _completionBlock;
	NSURLSessionDataTask* _dataTask;
	NSArray* _symbolicationRequests;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSMutableDictionary* _perUUIDSymbolicationRequests;
	NSURLCredential* _odCredential;

}

@property (assign) unsigned char state;                                                         //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) id completionBlock;                                              //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,readonly) NSURLSessionDataTask * dataTask;                                 //@synthesize dataTask=_dataTask - In the implementation block
@property (nonatomic,readonly) NSArray * symbolicationRequests;                                 //@synthesize symbolicationRequests=_symbolicationRequests - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> syncQueue;                          //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * perUUIDSymbolicationRequests;              //@synthesize perUUIDSymbolicationRequests=_perUUIDSymbolicationRequests - In the implementation block
@property (nonatomic,retain) NSURLCredential * odCredential;                                    //@synthesize odCredential=_odCredential - In the implementation block
@property (assign,nonatomic) char needsSegmentInfo;                                             //@synthesize needsSegmentInfo=_needsSegmentInfo - In the implementation block
@property (nonatomic,readonly) char shouldReadFromKeychain;                                     //@synthesize shouldReadFromKeychain=_shouldReadFromKeychain - In the implementation block
@property (nonatomic,copy) id odCredentialProvidingBlock;                                       //@synthesize odCredentialProvidingBlock=_odCredentialProvidingBlock - In the implementation block
@property (nonatomic,readonly) double timeoutInSec;                                             //@synthesize timeoutInSec=_timeoutInSec - In the implementation block
@property (nonatomic,readonly) NSString * groupName;                                            //@synthesize groupName=_groupName - In the implementation block
+(id)_speedTracerProtectionSpace;
+(char)symbolicationEndPointIsReachableWithTimeout:(unsigned long long)arg1 errorOut:(id*)arg2 ;
-(void)resume;
-(unsigned char)state;
-(void)setState:(unsigned char)arg1 ;
-(void)cancel;
-(id)completionBlock;
-(NSString *)groupName;
-(void)addRequest:(id)arg1 ;
-(NSURLSessionDataTask *)dataTask;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(NSMutableDictionary *)perUUIDSymbolicationRequests;
-(id)_resultsForSymbolPayload:(id)arg1 uuidToSymbolOwnerDict:(id)arg2 ;
-(NSURLCredential *)odCredential;
-(void)_invokeCompletionBlockWithResultCollection:(id)arg1 error:(id)arg2 ;
-(id)_uuidToSymbolOwnerDict:(id)arg1 ;
-(char)needsSegmentInfo;
-(void)_processSymbolsPayload:(id)arg1 uuidToSymbolOwnerDict:(id)arg2 shouldSaveToKeychain:(char)arg3 hasCachedCredentials:(char)arg4 ;
-(id)_queryJSONObjectWithSymbolOwners:(id)arg1 error:(id*)arg2 ;
-(id)_mutableRequestWithJSONData:(id)arg1 ;
-(void)_handleFollowUpResponsePayload:(id)arg1 UUIDToSymbolOwner:(id)arg2 response:(id)arg3 shouldSaveToKeychain:(char)arg4 hasCachedCredentials:(char)arg5 error:(id)arg6 ;
-(id)_handleResponseCorrectness:(id)arg1 data:(id)arg2 hasCachedCredentials:(char)arg3 error:(id)arg4 ;
-(void)_generateResultsUsingInitialResponsePayloadDict:(id)arg1 shouldSaveToKeychain:(char)arg2 hasCachedCredentials:(char)arg3 ;
-(char)shouldReadFromKeychain;
-(id)odCredentialProvidingBlock;
-(void)setOdCredential:(NSURLCredential *)arg1 ;
-(id)_initialQueryJSONObjectWithError:(id*)arg1 ;
-(void)_handleInitialResponsePayload:(id)arg1 response:(id)arg2 shouldSaveToKeychain:(char)arg3 hasCachedCredentials:(char)arg4 error:(id)arg5 ;
-(id)_uuidInfoList;
-(id)_uuidToTEXTSegmentOffsetsList;
-(id)_uuidToTEXTSegmentOffsetListUsingSymbolOwners:(id)arg1 ;
-(id)_newBoundaryString;
-(double)timeoutInSec;
-(id)initWithGroupName:(id)arg1 timeoutInSec:(double)arg2 shouldReadFromKeychain:(char)arg3 resultCollectionCompletionBlock:(/*^block*/id)arg4 ;
-(void)setNeedsSegmentInfo:(char)arg1 ;
-(id)initWithGroupName:(id)arg1 timeoutInSec:(double)arg2 shouldReadFromKeychain:(char)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)addRequestForSymbolOwnerUUID:(id)arg1 offset:(unsigned long long)arg2 isTextExec:(char)arg3 ;
-(void)addRequestForSymbolOwnerUUID:(id)arg1 offsetIntoSymbolOwner:(unsigned long long)arg2 ;
-(void)addRequestForSymbolOwnerUUID:(id)arg1 segmentName:(id)arg2 offsetIntoSegment:(unsigned long long)arg3 ;
-(void)addRequestCollection:(id)arg1 ;
-(void)setOdCredentialProvidingBlock:(id)arg1 ;
-(NSArray *)symbolicationRequests;
@end

