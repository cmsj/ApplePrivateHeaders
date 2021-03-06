/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/Versions/A/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFLogging.h>

@protocol HMFLogBackendSession;
@class NSUUID, HMFLogEventSessionVoucher, NSString;

@interface HMFLogEventSession : NSObject <HMFLogging> {

	unsigned long long _signpostId;
	NSUUID* _uuid;
	NSUUID* _rootUUID;
	id<HMFLogBackendSession> _backend;

}

@property (nonatomic,readonly) id<HMFLogBackendSession> backend;                 //@synthesize backend=_backend - In the implementation block
@property (nonatomic,readonly) HMFLogEventSessionVoucher * voucher; 
@property (nonatomic,readonly) unsigned long long signpostId;                    //@synthesize signpostId=_signpostId - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSUUID * rootUUID;                                //@synthesize rootUUID=_rootUUID - In the implementation block
@property (nonatomic,readonly) NSString * serviceName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(NSUUID *)uuid;
-(NSString *)serviceName;
-(HMFLogEventSessionVoucher *)voucher;
-(unsigned long long)signpostId;
-(id<HMFLogBackendSession>)backend;
-(void)submitEventWithName:(id)arg1 payload:(id)arg2 ;
-(NSUUID *)rootUUID;
-(id)initWithUUID:(id)arg1 rootUUID:(id)arg2 backend:(id)arg3 ;
@end

