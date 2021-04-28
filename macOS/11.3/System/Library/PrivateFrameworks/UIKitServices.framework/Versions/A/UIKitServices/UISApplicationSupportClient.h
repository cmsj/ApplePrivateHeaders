/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/Versions/A/UIKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_queue;
@class NSObject, BSServiceConnection, NSString;

@interface UISApplicationSupportClient : NSObject <BSInvalidatable> {

	NSObject*<OS_dispatch_queue> _queue;
	char _queue_invalidated;
	BSServiceConnection* _queue_connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(id)_remoteTarget;
-(void)destroyScenesWithPersistentIdentifiers:(id)arg1 animationType:(unsigned long long)arg2 destroySessions:(char)arg3 completion:(/*^block*/id)arg4 ;
-(id)applicationInitializationContextWithParameters:(id)arg1 ;
-(void)requestPasscodeUnlockUIWithCompletion:(/*^block*/id)arg1 ;
-(id)_applicationSupportServiceEndpoint;
@end
