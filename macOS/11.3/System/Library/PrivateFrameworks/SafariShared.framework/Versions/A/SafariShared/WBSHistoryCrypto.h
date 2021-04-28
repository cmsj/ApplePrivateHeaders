/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface WBSHistoryCrypto : NSObject {

	NSData* _cachedCryptographicKey;
	NSData* _salt;

}

@property (nonatomic,readonly) NSData * salt;                          //@synthesize salt=_salt - In the implementation block
@property (nonatomic,readonly) NSData * cryptographicKey; 
-(id)init;
-(NSData *)salt;
-(id)decryptDictionary:(id)arg1 ;
-(id)initWithCryptographicKey:(id)arg1 salt:(id)arg2 ;
-(id)_createCryptographicKey;
-(id)_createOrLoadCryptographicKey;
-(NSData *)cryptographicKey;
-(id)encryptDictionary:(id)arg1 ;
@end
