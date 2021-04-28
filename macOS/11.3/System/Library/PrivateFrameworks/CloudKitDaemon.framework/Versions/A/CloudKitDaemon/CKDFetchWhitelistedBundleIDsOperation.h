/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray;

@interface CKDFetchWhitelistedBundleIDsOperation : CKDOperation {

	NSArray* _bundleIDs;

}

@property (nonatomic,copy) NSArray * bundleIDs;                                                                           //@synthesize bundleIDs=_bundleIDs - In the implementation block
@property (nonatomic,retain) id<CKFetchWhitelistedBundleIDsOperationCallbacks> clientOperationCallbackProxy; 
-(int)operationType;
-(void)main;
-(id)activityCreate;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(NSArray *)bundleIDs;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
@end
