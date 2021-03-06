/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/Versions/A/DiskImages2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiskImages2/DiskImages2-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSUUID;

@interface BackendXPC : NSObject <NSSecureCoding, NSCoding> {

	unique_ptr<crypto::header, std::__1::default_delete<crypto::header>>* _cryptoHeader;
	shared_ptr<Backend>* _backend;

}

@property (assign,nonatomic) shared_ptr<Backend>* backend;              //@synthesize backend=_backend - In the implementation block
@property (nonatomic,readonly) NSUUID * instanceID; 
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)instanceID;
-(id)initWithBackend:(shared_ptr<Backend>*)arg1 ;
-(shared_ptr<Backend>*)backend;
-(void)setBackend:(shared_ptr<Backend>*)arg1 ;
-(unique_ptr<crypto::header, std::__1::default_delete<crypto::header>>*)getCryptoHeader;
-(char)checkIfEncryptedWithErrno:(int*)arg1 ;
@end

