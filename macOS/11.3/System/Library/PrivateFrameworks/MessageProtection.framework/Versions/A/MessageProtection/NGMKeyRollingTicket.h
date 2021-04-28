/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/Versions/A/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NGMFullPrekey, NGMPublicDeviceIdentity;

@interface NGMKeyRollingTicket : NSObject {

	NGMFullPrekey* _prekey;
	NGMPublicDeviceIdentity* _registrationInfo;

}

@property (nonatomic,readonly) NGMFullPrekey * prekey;                                  //@synthesize prekey=_prekey - In the implementation block
@property (nonatomic,readonly) NGMPublicDeviceIdentity * registrationInfo;              //@synthesize registrationInfo=_registrationInfo - In the implementation block
-(NGMPublicDeviceIdentity *)registrationInfo;
-(id)identityData;
-(id)publicDeviceIdentity;
-(id)prekeyData;
-(id)initTicketWithSigningKey:(id)arg1 error:(id*)arg2 ;
-(NGMFullPrekey *)prekey;
@end
