/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/__CFN_SocksHandshake.h>

@class NSMutableSet, NSMutableString;

@interface __CFN_SocksHandshakev5 : __CFN_SocksHandshake {

	char _done;
	unsigned long long _state;
	int _numberOfAuthVersionSupported;
	NSMutableSet* _authMethods;
	unsigned char _addressType;
	int _destinationLen;
	NSMutableString* _domainName;
	unsigned char ipaddr[16];
	int _portLen;
	unsigned short _destPort;
	int _usernameLen;
	NSMutableString* _username;
	int _passwordLen;
	NSMutableString* _password;

}
-(char)parse:(const char*)arg1 len:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)finish:(int)arg1 ;
@end

