/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class SASmsSms;

@interface SAUIShowSmsMessage : SAUISnippet

@property (assign,nonatomic) char showAsDraft; 
@property (nonatomic,retain) SASmsSms * sms; 
+(id)showSmsMessage;
+(id)showSmsMessageWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SASmsSms *)sms;
-(id)encodedClassName;
-(char)showAsDraft;
-(void)setShowAsDraft:(char)arg1 ;
-(void)setSms:(SASmsSms *)arg1 ;
@end

