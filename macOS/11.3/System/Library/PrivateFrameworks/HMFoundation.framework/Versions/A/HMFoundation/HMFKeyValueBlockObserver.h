/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/Versions/A/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>

@class NSString;

@interface HMFKeyValueBlockObserver : HMFObject <HMFLogging> {

	os_unfair_lock_s _lock;
	char _valid;
	char _observing;
	/*^block*/id _handler;
	NSString* _keyPath;
	id _observedObject;
	unsigned long long _options;

}

@property (copy,readonly) NSString * keyPath;                       //@synthesize keyPath=_keyPath - In the implementation block
@property (__weak,readonly) id observedObject;                      //@synthesize observedObject=_observedObject - In the implementation block
@property (readonly) unsigned long long options;                    //@synthesize options=_options - In the implementation block
@property (copy) id handler;                                        //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(unsigned long long)options;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(NSString *)keyPath;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)observedObject;
-(id)logIdentifier;
-(id)initWithKeyPath:(id)arg1 object:(id)arg2 options:(unsigned long long)arg3 ;
-(char)__invalidate;
-(id)initWithKeyPath:(id)arg1 object:(id)arg2 ;
@end

