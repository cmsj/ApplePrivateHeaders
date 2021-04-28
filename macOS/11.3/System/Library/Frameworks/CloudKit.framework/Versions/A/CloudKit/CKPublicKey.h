/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSDate;

@interface CKPublicKey : NSObject {

	NSData* _publicKey;
	long long _version;
	NSDate* _expiration;
	NSData* _certData;

}

@property (nonatomic,readonly) NSData * publicKey;               //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,readonly) long long version;                //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSDate * expiration;              //@synthesize expiration=_expiration - In the implementation block
@property (nonatomic,readonly) NSData * certData;                //@synthesize certData=_certData - In the implementation block
-(long long)version;
-(NSData *)publicKey;
-(NSDate *)expiration;
-(id)initWithPublicKey:(id)arg1 version:(long long)arg2 expiration:(id)arg3 certificateData:(id)arg4 ;
-(char)hasExpired;
-(NSData *)certData;
@end
