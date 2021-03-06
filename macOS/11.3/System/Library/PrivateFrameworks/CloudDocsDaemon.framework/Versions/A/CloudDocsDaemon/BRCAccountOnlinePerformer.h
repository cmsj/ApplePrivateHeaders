/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BRCReachabilityDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, BRCThrottler;

@interface BRCAccountOnlinePerformer : NSObject <BRCReachabilityDelegate> {

	NSString* _accountID;
	NSObject*<OS_dispatch_queue> _queue;
	BRCThrottler* _throttler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)addPerformer:(id)arg1 ;
+(void)removePerformer:(id)arg1 ;
-(id)_key;
-(void)perform;
-(void)_close;
-(id)initWithAccountID:(id)arg1 ;
-(void)networkReachabilityChanged:(char)arg1 ;
-(void)resumeAndAutoClose;
@end

