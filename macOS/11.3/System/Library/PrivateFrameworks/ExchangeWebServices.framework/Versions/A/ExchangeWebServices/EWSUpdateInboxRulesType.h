/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class NSString, NSArray;

@interface EWSUpdateInboxRulesType : EWSBaseRequestType {

	char _RemoveOutlookRuleBlob;
	NSString* _MailboxSmtpAddress;
	NSArray* _Operations;

}

@property (nonatomic,retain) NSString * MailboxSmtpAddress;              //@synthesize MailboxSmtpAddress=_MailboxSmtpAddress - In the implementation block
@property (assign,nonatomic) char RemoveOutlookRuleBlob;                 //@synthesize RemoveOutlookRuleBlob=_RemoveOutlookRuleBlob - In the implementation block
@property (nonatomic,retain) NSArray * Operations;                       //@synthesize Operations=_Operations - In the implementation block
+(id)definition;
-(void)setOperations:(NSArray *)arg1 ;
-(NSString *)MailboxSmtpAddress;
-(void)setMailboxSmtpAddress:(NSString *)arg1 ;
-(char)RemoveOutlookRuleBlob;
-(void)setRemoveOutlookRuleBlob:(char)arg1 ;
-(NSArray *)Operations;
@end

