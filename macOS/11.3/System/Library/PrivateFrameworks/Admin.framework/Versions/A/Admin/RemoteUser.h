/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Admin.framework/Versions/A/Admin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Admin/User.h>

@interface RemoteUser : User
+(id)remoteUsersAtAddress:(id)arg1 name:(id)arg2 password:(id)arg3 port:(long long)arg4 ;
-(char)isLocal;
-(char)isAdministrator;
-(id)initWithInfo:(id)arg1 node:(id)arg2 attributes:(id)arg3 ;
@end

