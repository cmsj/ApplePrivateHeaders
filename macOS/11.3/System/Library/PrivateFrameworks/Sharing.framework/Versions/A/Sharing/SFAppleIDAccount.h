/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, SFAppleIDContactInfo, SFAppleIDIdentity, NSData, SFAppleIDValidationRecord;

@interface SFAppleIDAccount : NSObject <NSSecureCoding> {

	NSString* _altDSID;
	NSString* _appleID;
	NSString* _certificateToken;
	NSDate* _certificateTokenCreationDate;
	SFAppleIDContactInfo* _contactInfo;
	NSDate* _creationDate;
	SFAppleIDIdentity* _identity;
	NSData* _privateKeyPersistentReference;
	SFAppleIDValidationRecord* _validationRecord;

}

@property (nonatomic,retain) NSString * altDSID;                                        //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,readonly) NSString * appleID;                                      //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,retain) NSString * certificateToken;                               //@synthesize certificateToken=_certificateToken - In the implementation block
@property (nonatomic,retain) NSDate * certificateTokenCreationDate;                     //@synthesize certificateTokenCreationDate=_certificateTokenCreationDate - In the implementation block
@property (nonatomic,retain) SFAppleIDContactInfo * contactInfo;                        //@synthesize contactInfo=_contactInfo - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                                   //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) SFAppleIDIdentity * identity;                              //@synthesize identity=_identity - In the implementation block
@property (nonatomic,retain) NSData * privateKeyPersistentReference;                    //@synthesize privateKeyPersistentReference=_privateKeyPersistentReference - In the implementation block
@property (nonatomic,retain) SFAppleIDValidationRecord * validationRecord;              //@synthesize validationRecord=_validationRecord - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSDate *)creationDate;
-(SFAppleIDIdentity *)identity;
-(void)setIdentity:(SFAppleIDIdentity *)arg1 ;
-(NSString *)appleID;
-(char)isEqualToAccount:(id)arg1 ;
-(SFAppleIDContactInfo *)contactInfo;
-(void)setPrivateKeyPersistentReference:(NSData *)arg1 ;
-(id)initWithAppleID:(id)arg1 ;
-(SFAppleIDValidationRecord *)validationRecord;
-(NSString *)certificateToken;
-(void)setCertificateToken:(NSString *)arg1 ;
-(void)setCertificateTokenCreationDate:(NSDate *)arg1 ;
-(NSDate *)certificateTokenCreationDate;
-(NSData *)privateKeyPersistentReference;
-(void)setContactInfo:(SFAppleIDContactInfo *)arg1 ;
-(void)setValidationRecord:(SFAppleIDValidationRecord *)arg1 ;
@end

