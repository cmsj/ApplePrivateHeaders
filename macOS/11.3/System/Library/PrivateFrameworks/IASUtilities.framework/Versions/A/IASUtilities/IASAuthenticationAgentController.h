/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IASUtilities.framework/Versions/A/IASUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IASAuthenticationAgentController : NSObject
+(id)sharedController;
-(id)_getAgentConnectionForCurrentUser;
-(id)getSSOServiceTicketWithUI:(char)arg1 serviceID:(id)arg2 appID:(id)arg3 outUsername:(id*)arg4 outDAWToken:(id*)arg5 error:(id*)arg6 ;
@end

