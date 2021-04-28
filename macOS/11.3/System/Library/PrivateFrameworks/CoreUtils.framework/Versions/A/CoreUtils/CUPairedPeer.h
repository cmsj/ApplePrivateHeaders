/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSData, NSUUID, NSString, NSDate;

@interface CUPairedPeer : NSObject <NSSecureCoding> {

	NSDictionary* _acl;
	NSData* _altIRK;
	NSUUID* _identifier;
	NSDictionary* _info;
	NSString* _label;
	NSString* _model;
	NSString* _name;
	NSData* _publicKey;
	NSDate* _dateModified;
	NSString* _identifierStr;

}

@property (nonatomic,copy) NSDate * dateModified;                 //@synthesize dateModified=_dateModified - In the implementation block
@property (nonatomic,copy) NSString * identifierStr;              //@synthesize identifierStr=_identifierStr - In the implementation block
@property (nonatomic,copy) NSDictionary * acl;                    //@synthesize acl=_acl - In the implementation block
@property (nonatomic,copy) NSData * altIRK;                       //@synthesize altIRK=_altIRK - In the implementation block
@property (nonatomic,copy) NSUUID * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDictionary * info;                   //@synthesize info=_info - In the implementation block
@property (nonatomic,copy) NSString * label;                      //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * model;                      //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSData * publicKey;                    //@synthesize publicKey=_publicKey - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)identifier;
-(NSDictionary *)info;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)setInfo:(NSDictionary *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSData *)publicKey;
-(NSString *)model;
-(void)setModel:(NSString *)arg1 ;
-(void)setIdentifierStr:(NSString *)arg1 ;
-(NSString *)identifierStr;
-(void)setPublicKey:(NSData *)arg1 ;
-(NSDate *)dateModified;
-(id)detailedDescription;
-(void)setAltIRK:(NSData *)arg1 ;
-(NSData *)altIRK;
-(NSDictionary *)acl;
-(void)setAcl:(NSDictionary *)arg1 ;
-(void)setDateModified:(NSDate *)arg1 ;
@end
