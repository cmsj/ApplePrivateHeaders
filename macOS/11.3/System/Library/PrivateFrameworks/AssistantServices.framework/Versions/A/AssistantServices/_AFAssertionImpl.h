/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFAssertion.h>

@class NSUUID, AFAssertionContext, AFTwoArgumentSafetyBlock, NSString;

@interface _AFAssertionImpl : NSObject <AFAssertion> {

	AFTwoArgumentSafetyBlock* _relinquishmentHandler;
	NSUUID* _uuid;
	AFAssertionContext* _context;

}

@property (nonatomic,readonly) NSUUID * uuid;                             //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) AFAssertionContext * context;              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSUUID *)uuid;
-(AFAssertionContext *)context;
-(id)initWithUUID:(id)arg1 context:(id)arg2 relinquishmentHandler:(/*^block*/id)arg3 ;
-(void)invokeRelinquishmentHandlerWithContext:(id)arg1 error:(id)arg2 ;
@end

