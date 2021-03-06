/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/Versions/A/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSDictionary;

@interface _DPDeDiscoDonation : NSObject <NSSecureCoding> {

	NSString* _key;
	NSData* _share1;
	NSData* _share2;
	NSDictionary* _metadata;
	NSString* _serverAlgorithm;
	NSDictionary* _algorithmParameters;

}

@property (nonatomic,copy) NSString * key;                                  //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSData * share1;                                 //@synthesize share1=_share1 - In the implementation block
@property (nonatomic,copy) NSData * share2;                                 //@synthesize share2=_share2 - In the implementation block
@property (nonatomic,copy) NSDictionary * metadata;                         //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) NSString * serverAlgorithm;                      //@synthesize serverAlgorithm=_serverAlgorithm - In the implementation block
@property (nonatomic,copy) NSDictionary * algorithmParameters;              //@synthesize algorithmParameters=_algorithmParameters - In the implementation block
+(char)supportsSecureCoding;
+(id)requiredClasses;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSData *)share1;
-(NSData *)share2;
-(id)initWithKey:(id)arg1 share1:(id)arg2 share2:(id)arg3 metadata:(id)arg4 serverAlgorithm:(id)arg5 algorithmParameters:(id)arg6 ;
-(NSString *)serverAlgorithm;
-(NSDictionary *)algorithmParameters;
-(void)setShare1:(NSData *)arg1 ;
-(void)setShare2:(NSData *)arg1 ;
-(void)setServerAlgorithm:(NSString *)arg1 ;
-(void)setAlgorithmParameters:(NSDictionary *)arg1 ;
@end

