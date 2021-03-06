/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/Versions/A/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSLocalPairingRecord.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface IDSLocalPairingPairedDeviceRecord : IDSLocalPairingRecord <NSSecureCoding> {

	NSUUID* _cbuuid;

}

@property (nonatomic,readonly) NSUUID * cbuuid;              //@synthesize cbuuid=_cbuuid - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)cbuuid;
-(id)publicIdentityClassA:(id*)arg1 ;
-(id)publicIdentityClassC:(id*)arg1 ;
-(id)publicIdentityClassD:(id*)arg1 ;
-(id)_publicIdenityForDataProtectionClass:(unsigned)arg1 error:(id*)arg2 ;
-(id)initWithCBUUID:(id)arg1 publicIdentityDataClassA:(id)arg2 classC:(id)arg3 classD:(id)arg4 ;
@end

