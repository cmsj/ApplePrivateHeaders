/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/CRKInternetDateFetching.h>

@class NSURLSession, NSMutableDictionary, NSString;

@interface CRKInternetDateProvider : NSObject <NSURLSessionDataDelegate, CRKInternetDateFetching> {

	NSURLSession* _session;
	NSMutableDictionary* _completionHandlerTable;

}

@property (nonatomic,retain) NSURLSession * session;                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * completionHandlerTable;              //@synthesize completionHandlerTable=_completionHandlerTable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSURLSession *)session;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)fetchInternetDateWithCompletion:(/*^block*/id)arg1 ;
-(void)storeCompletionHandler:(/*^block*/id)arg1 forTask:(id)arg2 ;
-(void)callAndRemoveCompletionHandlerWithDate:(id)arg1 error:(id)arg2 task:(id)arg3 ;
-(void)internetDateRequestDidReceiveTask:(id)arg1 ;
-(NSMutableDictionary *)completionHandlerTable;
-(void)setCompletionHandlerTable:(NSMutableDictionary *)arg1 ;
@end

