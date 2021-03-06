/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/Versions/A/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFOperation.h>
#import <HMFoundation/HMFLogging.h>

@class CLLocationManager, HMFLocationAuthorization, NSString;

@interface __HMFLocationManagerOperation : HMFOperation <HMFLogging> {

	os_unfair_lock_s _lock;
	char _ready;
	CLLocationManager* _manager;
	HMFLocationAuthorization* _authorization;

}

@property (readonly) HMFLocationAuthorization * authorization;              //@synthesize authorization=_authorization - In the implementation block
@property (readonly) CLLocationManager * manager;                           //@synthesize manager=_manager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)logCategory;
-(void)dealloc;
-(CLLocationManager *)manager;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)main;
-(char)isReady;
-(HMFLocationAuthorization *)authorization;
-(id)initWithTimeout:(double)arg1 ;
-(id)initWithAuthorization:(id)arg1 ;
@end

