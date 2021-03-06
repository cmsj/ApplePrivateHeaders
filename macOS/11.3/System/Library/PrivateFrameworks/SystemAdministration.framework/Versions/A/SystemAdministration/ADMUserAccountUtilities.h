/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemAdministration.framework/Versions/A/SystemAdministration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SystemAdministration/SystemAdministration-Structs.h>
@interface ADMUserAccountUtilities : NSObject
+(long long)numberForKey:(CFStringRef)arg1 fromCFDict:(CFDictionaryRef)arg2 ;
+(id)humanSizeForSize:(unsigned long long)arg1 ;
+(id)listOfProcessOwners;
+(void)killProcessesForUserID:(unsigned)arg1 ;
+(int)changeKeychainPassword:(id)arg1 oldPassword:(id)arg2 ;
+(id)changePasswordForUser:(id)arg1 oldPassword:(id)arg2 newPassword:(id)arg3 cdpCompletionHandler:(/*^block*/id)arg4 ;
+(id)changePasswordForUser:(id)arg1 oldPassword:(id)arg2 newPassword:(id)arg3 ;
+(id)passwordErrorStringForODError:(long long)arg1 ;
@end

