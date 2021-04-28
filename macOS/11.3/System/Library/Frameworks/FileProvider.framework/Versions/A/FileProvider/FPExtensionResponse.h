/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSFileProviderDomainVersion, NSString;

@interface FPExtensionResponse : NSObject <NSSecureCoding> {

	int _extensionPid;
	NSFileProviderDomainVersion* _domainVersion;
	long long _sequenceNumber;
	NSString* _callDescription;

}

@property (assign,nonatomic) NSFileProviderDomainVersion * domainVersion;              //@synthesize domainVersion=_domainVersion - In the implementation block
@property (assign,nonatomic) int extensionPid;                                         //@synthesize extensionPid=_extensionPid - In the implementation block
@property (assign,nonatomic) long long sequenceNumber;                                 //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,copy) NSString * callDescription;                                 //@synthesize callDescription=_callDescription - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)sequenceNumber;
-(void)setSequenceNumber:(long long)arg1 ;
-(NSFileProviderDomainVersion *)domainVersion;
-(void)setDomainVersion:(NSFileProviderDomainVersion *)arg1 ;
-(int)extensionPid;
-(void)setExtensionPid:(int)arg1 ;
-(NSString *)callDescription;
-(void)setCallDescription:(NSString *)arg1 ;
@end
