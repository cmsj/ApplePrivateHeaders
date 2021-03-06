/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSString;

@interface PKAssertion : NSObject {

	os_unfair_lock_s _invalidationLock;
	char _invalidateWhenBackgrounded;
	NSString* _reason;
	unsigned long long _type;
	/*^block*/id _invalidationHandler;
	NSString* _identifier;

}

@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * reason;                          //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                    //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char invalidateWhenBackgrounded;              //@synthesize invalidateWhenBackgrounded=_invalidateWhenBackgrounded - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                         //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
+(void)acquireAssertionOfType:(unsigned long long)arg1 withReason:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)preheatConnection;
+(void)isAssertionValid:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(NSString *)reason;
-(unsigned long long)type;
-(NSString *)identifier;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)invalidationHandler;
-(void)setInvalidateWhenBackgrounded:(char)arg1 ;
-(id)initWithType:(unsigned long long)arg1 identifier:(id)arg2 reason:(id)arg3 ;
-(void)markAsInvalidatedAndNotify;
-(char)invalidateWhenBackgrounded;
@end

