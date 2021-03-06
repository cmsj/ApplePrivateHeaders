/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/Versions/A/UIKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, BSServiceConnection;

@interface UISApplicationStateClient : NSObject <BSInvalidatable> {

	NSString* _bundleIdentifier;
	NSObject*<OS_dispatch_queue> _queue;
	char _queue_invalidated;
	BSServiceConnection* _queue_connection;

}

@property (nonatomic,copy) NSString * badgeValue; 
@property (assign,nonatomic) char usesBackgroundNetwork; 
@property (assign,nonatomic) double nextWakeIntervalSinceReferenceDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(NSString *)badgeValue;
-(void)setBadgeValue:(NSString *)arg1 ;
-(id)_remoteTarget;
-(void)setUsesBackgroundNetwork:(char)arg1 ;
-(char)usesBackgroundNetwork;
-(void)setMinimumBackgroundFetchInterval:(double)arg1 ;
-(double)nextWakeIntervalSinceReferenceDate;
-(void)setNextWakeIntervalSinceReferenceDate:(double)arg1 ;
@end

