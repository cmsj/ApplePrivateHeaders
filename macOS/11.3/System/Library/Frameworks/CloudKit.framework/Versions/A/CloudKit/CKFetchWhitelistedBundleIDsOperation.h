/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>
#import <libobjc.A.dylib/CKFetchWhitelistedBundleIDsOperationCallbacks.h>

@class NSArray;

@interface CKFetchWhitelistedBundleIDsOperation : CKOperation <CKFetchWhitelistedBundleIDsOperationCallbacks> {

	/*^block*/id _fetchWhitelistedBundleIDsCompletionBlock;
	NSArray* _bundleIDs;

}

@property (nonatomic,copy) NSArray * bundleIDs;                                                                             //@synthesize bundleIDs=_bundleIDs - In the implementation block
@property (nonatomic,readonly) id<CKFetchWhitelistedBundleIDsOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,copy) id fetchWhitelistedBundleIDsCompletionBlock;                                                     //@synthesize fetchWhitelistedBundleIDsCompletionBlock=_fetchWhitelistedBundleIDsCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
+(SEL)daemonCallbackCompletionSelector;
-(char)hasCKOperationCallbacksSet;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(id)fetchWhitelistedBundleIDsCompletionBlock;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(NSArray *)bundleIDs;
-(void)setFetchWhitelistedBundleIDsCompletionBlock:(id)arg1 ;
-(void)handleOperationDidCompleteWithBundleIDs:(id)arg1 metrics:(id)arg2 error:(id)arg3 ;
@end

