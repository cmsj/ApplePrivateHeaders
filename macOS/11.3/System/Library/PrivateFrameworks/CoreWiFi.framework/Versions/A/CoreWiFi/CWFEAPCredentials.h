/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CWFEAPCredentials : NSObject <NSCopying, NSSecureCoding> {

	void* _TLSIdentityHandle;
	NSString* _username;
	NSString* _password;

}

@property (nonatomic,copy) NSString * username;                        //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                        //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) SecIdentityRef TLSIdentity; 
@property (nonatomic,copy) const void* TLSIdentityHandle; 
+(char)supportsSecureCoding;
-(char)isEqualToEAPCredentials:(id)arg1 ;
-(const void*)TLSIdentityHandle;
-(void)setTLSIdentityHandle:(const void*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(void)setTLSIdentity:(SecIdentityRef)arg1 ;
-(SecIdentityRef)TLSIdentity;
@end

