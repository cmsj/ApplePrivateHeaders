/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSUserNotificationCenterDelegate.h>
#import <libobjc.A.dylib/AMSUserNotificationStrategy.h>

@class NSUserNotificationCenter, NSString;

@interface AMSNSUserNotificationStrategy : NSObject <NSUserNotificationCenterDelegate, AMSUserNotificationStrategy> {

	NSUserNotificationCenter* _center;

}

@property (retain) NSUserNotificationCenter * center;               //@synthesize center=_center - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_centerForBundleId:(id)arg1 ;
+(id)_removeNotificationWithIdentifier:(id)arg1 centerBundleId:(id)arg2 logKey:(id)arg3 scheduledOnly:(char)arg4 ;
+(id)_activeNotificationsWithCenterBundleId:(id)arg1 ;
+(char)_badgeBundleId:(id)arg1 increment:(char)arg2 error:(id*)arg3 ;
+(id)_postNotification:(id)arg1 bag:(id)arg2 centerBundleId:(id)arg3 ;
+(id)_removeNotification:(id)arg1 centerBundleId:(id)arg2 ;
-(NSUserNotificationCenter *)center;
-(void)setCenter:(NSUserNotificationCenter *)arg1 ;
@end

