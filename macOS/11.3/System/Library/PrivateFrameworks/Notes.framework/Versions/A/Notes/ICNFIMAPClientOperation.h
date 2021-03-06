/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class ICNFIMAPGateway, NSString, NSMutableString;

@interface ICNFIMAPClientOperation : NSOperation {

	ICNFIMAPGateway* _gateway;
	long long _completionState;

}

@property (copy,readonly) NSString * commandTypeString; 
@property (readonly) char alwaysAllowToComplete; 
@property (readonly) char completedSuccessfully; 
@property (readonly) char shouldSendAgainOnError; 
@property (readonly) long long minRequiredConnectionState; 
@property (readonly) long long maxAllowedConnectionState; 
@property (readonly) long long composition; 
@property (readonly) char isWaitingToStart; 
@property (copy,readonly) NSString * activityString; 
@property (copy,readonly) NSString * detailsString; 
@property (nonatomic,copy,readonly) NSString * shallowDescription; 
@property (nonatomic,copy,readonly) NSMutableString * simpleDescriptionString; 
@property (retain) ICNFIMAPGateway * gateway;                                               //@synthesize gateway=_gateway - In the implementation block
@property (assign) long long completionState;                                               //@synthesize completionState=_completionState - In the implementation block
+(id)newIMAPQuotedString:(id)arg1 ;
+(id)IMAPNeedsLiteralCharacterSet;
+(id)_IMAPNeedsQuoteCharacterSet;
+(id)newIMAPStringForMailboxName:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)main;
-(long long)composition;
-(void)increasePriority;
-(void)operationDidFinish;
-(ICNFIMAPGateway *)gateway;
-(NSString *)activityString;
-(void)setGateway:(ICNFIMAPGateway *)arg1 ;
-(char)completedSuccessfully;
-(NSString *)commandTypeString;
-(char)executeOnConnection:(id)arg1 ;
-(long long)minRequiredConnectionState;
-(long long)maxAllowedConnectionState;
-(long long)completionState;
-(NSMutableString *)simpleDescriptionString;
-(char)alwaysAllowToComplete;
-(char)shouldSendAgainOnError;
-(NSString *)detailsString;
-(void)cleanupAfterCompletion;
-(NSString *)shallowDescription;
-(void)setCompletionState:(long long)arg1 ;
-(char)isWaitingToStart;
@end

