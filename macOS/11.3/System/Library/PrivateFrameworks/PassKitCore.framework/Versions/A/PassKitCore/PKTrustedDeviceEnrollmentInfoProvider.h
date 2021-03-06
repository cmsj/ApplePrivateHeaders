/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PKXPCService;

@interface PKTrustedDeviceEnrollmentInfoProvider : NSObject {

	PKXPCService* _remoteService;

}
-(id)init;
-(id)_remoteObjectProxy;
-(id)_remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_existingRemoteObjectProxy;
-(void)trustedDeviceEnrollmentInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)trustedDeviceEnrollmentSignatureForDevice:(unsigned long long)arg1 accountDSID:(id)arg2 sessionData:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

