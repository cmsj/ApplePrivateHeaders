/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DADaemonSupport.framework/Versions/A/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DADREMXPCPerformerDelegate : NSObject {

	char _finished;
	NSString* _accountID;
	NSString* _delegateID;
	/*^block*/id _remXPCCompletion;

}

@property (nonatomic,retain) NSString * accountID;               //@synthesize accountID=_accountID - In the implementation block
@property (assign,nonatomic) char finished;                      //@synthesize finished=_finished - In the implementation block
@property (nonatomic,retain) NSString * delegateID;              //@synthesize delegateID=_delegateID - In the implementation block
@property (nonatomic,copy) id remXPCCompletion;                  //@synthesize remXPCCompletion=_remXPCCompletion - In the implementation block
-(void)setFinished:(char)arg1 ;
-(char)finished;
-(NSString *)accountID;
-(void)setAccountID:(NSString *)arg1 ;
-(id)initWithAccountID:(id)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)setDelegateID:(NSString *)arg1 ;
-(NSString *)delegateID;
-(id)remXPCCompletion;
-(void)setRemXPCCompletion:(id)arg1 ;
@end

