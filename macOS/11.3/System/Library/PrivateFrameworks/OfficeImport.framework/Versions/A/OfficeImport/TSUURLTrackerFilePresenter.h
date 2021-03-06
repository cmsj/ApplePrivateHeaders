/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@protocol OS_dispatch_queue, TSUURLTrackerDelegate;
@class NSURL, NSOperationQueue, NSSet, NSObject, NSData, NSError, NSString;

@interface TSUURLTrackerFilePresenter : NSObject <NSFilePresenter> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	char _hasStarted;
	NSURL* _URLIfAvailable;
	NSData* _bookmarkDataIfAvailable;
	NSError* _latestError;
	id<TSUURLTrackerDelegate> _delegate;
	NSOperationQueue* _presentedItemOperationQueue;

}

@property (readonly) NSData * bookmarkData; 
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue;              //@synthesize presentedItemOperationQueue=_presentedItemOperationQueue - In the implementation block
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(void)pause;
-(void)stop;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(void)relinquishPresentedItemToWriter:(/*^block*/id)arg1 ;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)presentedItemDidMoveToURL:(id)arg1 ;
-(void)presentedItemDidChangeUbiquityAttributes:(id)arg1 ;
-(id)_description;
-(id)_bookmarkData;
-(id)initWithURL:(id)arg1 bookmarkData:(id)arg2 delegate:(id)arg3 ;
-(id)URLAndReturnError:(id*)arg1 ;
-(NSData *)bookmarkData;
-(void)startOrResume;
-(id)_URLAndReturnError:(id*)arg1 ;
-(id)_bookmarkDataAndReturnError:(id*)arg1 ;
-(id)bookmarkDataAndReturnError:(id*)arg1 ;
@end

