/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IASUtilities.framework/Versions/A/IASUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IASAuthenticationManager : NSObject {

	/*function pointer*/void* _ssoGetServiceTicketFunc;
	/*function pointer*/void* _ssoPostLoginFunc;
	/*function pointer*/void* _ssoVerifyServiceTicket;

}

@property (assign) /*function pointer*/void* ssoGetServiceTicketFunc;              //@synthesize ssoGetServiceTicketFunc=_ssoGetServiceTicketFunc - In the implementation block
@property (assign) /*function pointer*/void* ssoPostLoginFunc;                     //@synthesize ssoPostLoginFunc=_ssoPostLoginFunc - In the implementation block
@property (assign) /*function pointer*/void* ssoVerifyServiceTicket;               //@synthesize ssoVerifyServiceTicket=_ssoVerifyServiceTicket - In the implementation block
+(id)sharedManager;
+(id)usernameAndTicketBlobWithSSOData:(id)arg1 withUsername:(id)arg2 ;
+(char)ssoFrameworkAvailable;
-(id)_locateSSOFramework;
-(void)setSsoGetServiceTicketFunc:(/*function pointer*/void*)arg1 ;
-(/*function pointer*/void*)ssoGetServiceTicketFunc;
-(void)setSsoPostLoginFunc:(/*function pointer*/void*)arg1 ;
-(/*function pointer*/void*)ssoPostLoginFunc;
-(void)setSsoVerifyServiceTicket:(/*function pointer*/void*)arg1 ;
-(/*function pointer*/void*)ssoVerifyServiceTicket;
-(id)getSSOServiceTicketWithUI:(char)arg1 username:(id)arg2 password:(id)arg3 serviceID:(id)arg4 outUsername:(id*)arg5 error:(id*)arg6 ;
-(char)_loadSSOFramework;
-(char)_authenticateWithKeytabIfSet;
-(id)getSSOServiceTicketAsOnConsoleUserWithUI:(char)arg1 serviceID:(id)arg2 appID:(id)arg3 outUsername:(id*)arg4 outDAWToken:(id*)arg5 error:(id*)arg6 ;
-(id)getSSOServiceTicketAsOnConsoleUserWithUI:(char)arg1 serviceID:(id)arg2 outUsername:(id*)arg3 error:(id*)arg4 ;
-(id)getSSOServiceTicketForUser:(id)arg1 password:(id)arg2 serviceID:(id)arg3 outUsername:(id*)arg4 error:(id*)arg5 ;
-(id)getSSOServiceTicketWithUI:(char)arg1 username:(id)arg2 password:(id)arg3 serviceID:(id)arg4 appID:(id)arg5 outUsername:(id*)arg6 outDAWToken:(id*)arg7 error:(id*)arg8 ;
-(id)getSSOServiceTicketWithUI:(char)arg1 serviceID:(id)arg2 outUsername:(id*)arg3 error:(id*)arg4 ;
@end
