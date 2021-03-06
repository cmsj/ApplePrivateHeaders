/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigrationNetworking.framework/Versions/A/SystemMigrationNetworking
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemMigrationNetworking/SMNAction.h>

@class NSString;

@interface SMNWirelessConnectAction : SMNAction {

	NSString* _wirelessSSID;
	NSString* _password;
	unsigned long long _timeout;
	unsigned long long _retryDelay;

}

@property (retain) NSString * wirelessSSID;                    //@synthesize wirelessSSID=_wirelessSSID - In the implementation block
@property (retain) NSString * password;                        //@synthesize password=_password - In the implementation block
@property (assign) unsigned long long timeout;                 //@synthesize timeout=_timeout - In the implementation block
@property (assign) unsigned long long retryDelay;              //@synthesize retryDelay=_retryDelay - In the implementation block
+(int)actionID;
+(id)actionWithPayload:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)password;
-(unsigned long long)timeout;
-(void)setPassword:(NSString *)arg1 ;
-(void)setTimeout:(unsigned long long)arg1 ;
-(char)success;
-(id)resultData;
-(unsigned long long)retryDelay;
-(void)setRetryDelay:(unsigned long long)arg1 ;
-(id)initWithSSID:(id)arg1 password:(id)arg2 ;
-(NSString *)wirelessSSID;
-(void)setWirelessSSID:(NSString *)arg1 ;
-(char)expectsAResult;
-(id)requestPayload;
-(char)returnsData;
-(char)setResultFromDict:(id)arg1 ;
-(id)setOfClassesToDecodeInTheResult;
-(id)initWithSSID:(id)arg1 password:(id)arg2 timeout:(unsigned long long)arg3 retryDelay:(unsigned long long)arg4 ;
@end

