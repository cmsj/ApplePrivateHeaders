/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFInvalidating.h>

@protocol OS_dispatch_queue, AFAssertionCoordinatorDelegate;
@class NSObject, NSMutableDictionary, NSMutableSet, NSString;

@interface AFAssertionCoordinator : NSObject <AFInvalidating> {

	NSObject*<OS_dispatch_queue> _queue;
	id<AFAssertionCoordinatorDelegate> _delegate;
	Aq _numberOfAssertions;
	NSMutableDictionary* _assertionsByUUID;
	Aq _numberOfActiveAssertions;
	NSMutableSet* _activeAssertionUUIDs;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(NSString *)identifier;
-(void)_invalidate;
-(void)relinquishAssertionWithUUID:(id)arg1 context:(id)arg2 options:(unsigned long long)arg3 ;
-(void)relinquishAssertionWithUUID:(id)arg1 error:(id)arg2 options:(unsigned long long)arg3 ;
-(unsigned long long)numberOfActiveAssertions;
-(unsigned long long)numberOfPendingAndActiveAssertions;
-(void)_addAssertion:(id)arg1 ;
-(void)_deactivateAndRemoveAssertionWithUUID:(id)arg1 context:(id)arg2 error:(id)arg3 options:(unsigned long long)arg4 ;
-(void)_activateAssertionWithUUID:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 queue:(id)arg2 delegate:(id)arg3 ;
-(id)acquireRelinquishableAssertionWithContext:(id)arg1 relinquishmentHandler:(/*^block*/id)arg2 ;
-(void)relinquishAsertionsPassingTest:(/*^block*/id)arg1 context:(id)arg2 ;
-(void)relinquishAsertionsPassingTest:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)getPendingAndActiveAssertionsWithCompletion:(/*^block*/id)arg1 ;
-(void)getActiveAssertionsWithCompletion:(/*^block*/id)arg1 ;
-(void)barrier:(/*^block*/id)arg1 ;
@end
