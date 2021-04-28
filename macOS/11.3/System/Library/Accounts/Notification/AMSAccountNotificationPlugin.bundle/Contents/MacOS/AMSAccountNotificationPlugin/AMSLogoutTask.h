/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Accounts/Notification/AMSAccountNotificationPlugin.bundle/Contents/MacOS/AMSAccountNotificationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSTask.h>

@class ACAccount;

@interface AMSLogoutTask : AMSTask {

	ACAccount* _account;

}

@property (readonly) ACAccount * account;              //@synthesize account=_account - In the implementation block
-(ACAccount *)account;
-(id)initWithAccount:(id)arg1 ;
-(id)logout;
@end
