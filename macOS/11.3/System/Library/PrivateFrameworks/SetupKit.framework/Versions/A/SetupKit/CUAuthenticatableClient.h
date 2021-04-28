/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SetupKit.framework/Versions/A/SetupKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol CUAuthenticatableClient <NSObject>
@property (nonatomic,copy) id authCompletionHandler; 
@property (nonatomic,copy) id authPromptForPasswordHandler; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue; 
@property (nonatomic,copy) NSString * password; 
@required
-(id)authPromptForPasswordHandler;
-(void)setAuthPromptForPasswordHandler:(/*^block*/id)arg1;
-(NSString *)password;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setPassword:(id)arg1;
-(void)setDispatchQueue:(id)arg1;
-(void)tryPassword:(id)arg1;
-(id)authCompletionHandler;
-(void)setAuthCompletionHandler:(/*^block*/id)arg1;

@end
