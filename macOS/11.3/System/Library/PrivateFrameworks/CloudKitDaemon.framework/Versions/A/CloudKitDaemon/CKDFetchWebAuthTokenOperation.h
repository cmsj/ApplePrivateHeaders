/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSString;

@interface CKDFetchWebAuthTokenOperation : CKDDatabaseOperation {

	NSString* _webAuthToken;
	NSString* _APIToken;

}

@property (nonatomic,copy) NSString * webAuthToken;                                                               //@synthesize webAuthToken=_webAuthToken - In the implementation block
@property (nonatomic,copy) NSString * APIToken;                                                                   //@synthesize APIToken=_APIToken - In the implementation block
@property (nonatomic,retain) id<CKFetchWebAuthTokenOperationCallbacks> clientOperationCallbackProxy; 
-(int)operationType;
-(void)main;
-(id)activityCreate;
-(NSString *)APIToken;
-(void)setAPIToken:(NSString *)arg1 ;
-(void)setWebAuthToken:(NSString *)arg1 ;
-(NSString *)webAuthToken;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
@end
