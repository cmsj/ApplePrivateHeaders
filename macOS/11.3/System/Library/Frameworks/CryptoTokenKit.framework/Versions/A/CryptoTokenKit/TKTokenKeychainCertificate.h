/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/Versions/A/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CryptoTokenKit/CryptoTokenKit-Structs.h>
#import <CryptoTokenKit/TKTokenKeychainItem.h>

@class NSData, NSNumber;

@interface TKTokenKeychainCertificate : TKTokenKeychainItem {

	NSData* _data;
	NSData* _subject;
	NSData* _issuer;
	NSData* _serialNumber;
	NSData* _subjectKeyID;
	NSData* _publicKeyHash;
	NSNumber* _certificateType;
	NSNumber* _certificateEncoding;

}

@property (retain) NSData * subject;                            //@synthesize subject=_subject - In the implementation block
@property (retain) NSData * issuer;                             //@synthesize issuer=_issuer - In the implementation block
@property (retain) NSData * serialNumber;                       //@synthesize serialNumber=_serialNumber - In the implementation block
@property (retain) NSData * subjectKeyID;                       //@synthesize subjectKeyID=_subjectKeyID - In the implementation block
@property (retain) NSData * publicKeyHash;                      //@synthesize publicKeyHash=_publicKeyHash - In the implementation block
@property (retain) NSNumber * certificateType;                  //@synthesize certificateType=_certificateType - In the implementation block
@property (retain) NSNumber * certificateEncoding;              //@synthesize certificateEncoding=_certificateEncoding - In the implementation block
@property (copy,readonly) NSData * data;                        //@synthesize data=_data - In the implementation block
-(id)encodedObjectID;
-(id)initWithItemInfo:(id)arg1 ;
-(NSData *)subjectKeyID;
-(NSNumber *)certificateEncoding;
-(void)setSubjectKeyID:(NSData *)arg1 ;
-(void)setCertificateEncoding:(NSNumber *)arg1 ;
-(NSData *)data;
-(id)keychainAttributes;
-(NSData *)serialNumber;
-(void)setSubject:(NSData *)arg1 ;
-(NSData *)subject;
-(void)setSerialNumber:(NSData *)arg1 ;
-(NSData *)publicKeyHash;
-(void)setPublicKeyHash:(NSData *)arg1 ;
-(void)setIssuer:(NSData *)arg1 ;
-(NSData *)issuer;
-(NSNumber *)certificateType;
-(void)setCertificateType:(NSNumber *)arg1 ;
-(id)initWithCertificate:(SecCertificateRef)arg1 objectID:(id)arg2 ;
@end

