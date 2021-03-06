/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_transaction, OS_voucher, NSObject;
#import <Foundation/Foundation-Structs.h>
@class NSString, NSObject, BKSProcessAssertion;

@interface _NSActivityAssertion : NSObject {

	unsigned long long _options;
	NSString* _reason;
	NSObject*<OS_os_transaction> _transaction;
	unsigned _displaySleepAssertionID;
	unsigned _systemSleepAssertionID;
	NSObject*<OS_voucher> _voucher;
	NSObject*<OS_voucher> _previousVoucher;
	id<NSObject> _xpcBoost;
	BKSProcessAssertion* _processAssertion;
	/*^block*/id _expirationHandler;
	os_unfair_lock_s _lock;
	AB _ended;
	unsigned char _adoptPreviousVoucher;

}
+(id)_expiringAssertionManagementQueue;
+(id)_expiringActivities;
+(id)_expirationHandlerExecutionQueue;
+(void)_expireAllActivies;
+(id)_expiringTaskExecutionQueue;
+(void)_dumpExpiringActivitives;
+(void)_performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
+(void)_performExpiringActivityWithReason:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)debugDescription;
-(void)_fireExpirationHandler;
-(void)_end;
-(id)_initWithActivityOptions:(unsigned long long)arg1 reason:(id)arg2 expirationHandler:(/*^block*/id)arg3 ;
-(void)_reactivate;
@end

