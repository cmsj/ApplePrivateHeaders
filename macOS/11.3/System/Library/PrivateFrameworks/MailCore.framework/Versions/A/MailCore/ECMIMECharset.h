/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol ECMIMECharset <NSObject>
@property (readonly) unsigned long long encoding; 
@property (nonatomic,copy,readonly) NSString * charsetName; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,readonly) char canBeUsedForOutgoingMessages; 
@required
-(NSString *)displayName;
-(unsigned long long)encoding;
-(NSString *)charsetName;
-(char)canBeUsedForOutgoingMessages;

@end

