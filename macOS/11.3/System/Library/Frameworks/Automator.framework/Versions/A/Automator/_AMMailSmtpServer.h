/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScriptingBridge/SBObject.h>

@class NSString;

@interface _AMMailSmtpServer : SBObject

@property (copy,readonly) NSString * name; 
@property (copy) NSString * password; 
@property (readonly) int accountType; 
@property (assign) int authentication; 
@property (assign) char enabled; 
@property (copy) NSString * userName; 
@property (assign) long long port; 
@property (copy) NSString * serverName; 
@property (assign) char usesSsl; 
-(NSString *)name;
-(long long)port;
-(NSString *)password;
-(char)enabled;
-(void)setEnabled:(char)arg1 ;
-(void)setPort:(long long)arg1 ;
-(NSString *)userName;
-(void)setPassword:(NSString *)arg1 ;
-(void)setUserName:(NSString *)arg1 ;
-(NSString *)serverName;
-(void)setServerName:(NSString *)arg1 ;
-(int)accountType;
-(void)delete;
-(int)authentication;
-(void)setAuthentication:(int)arg1 ;
-(void)closeSaving:(int)arg1 savingIn:(id)arg2 ;
-(void)duplicateTo:(id)arg1 withProperties:(id)arg2 ;
-(void)moveTo:(id)arg1 ;
-(void)saveIn:(id)arg1 as:(int)arg2 ;
-(void)printWithProperties:(id)arg1 printDialog:(char)arg2 ;
-(char)usesSsl;
-(void)setUsesSsl:(char)arg1 ;
@end

