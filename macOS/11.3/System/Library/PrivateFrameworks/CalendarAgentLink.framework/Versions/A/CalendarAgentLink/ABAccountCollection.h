/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, ABAccount, NSArray;


@protocol ABAccountCollection <NSObject>
@property (copy,readonly) NSString * basePath; 
@property (readonly) ABAccount * defaultAccount; 
@property (copy,readonly) NSArray * allAccounts; 
@property (copy,readonly) NSArray * enabledAccounts; 
@property (copy,readonly) NSArray * persistentAccounts; 
@property (copy,readonly) NSArray * hiddenAccounts; 
@required
-(void)setTag:(id)arg1;
-(id)tag;
-(id)accountWithIdentifier:(id)arg1;
-(NSArray *)enabledAccounts;
-(NSArray *)persistentAccounts;
-(NSArray *)allAccounts;
-(ABAccount *)defaultAccount;
-(NSArray *)hiddenAccounts;
-(NSString *)basePath;

@end

