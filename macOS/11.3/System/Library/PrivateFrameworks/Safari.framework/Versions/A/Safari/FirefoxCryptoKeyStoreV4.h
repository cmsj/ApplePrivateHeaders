/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FirefoxCryptoKeyStorage.h>

@protocol OS_dispatch_queue;
@class NSObject, WBSSQLiteDatabase, NSData, NSString;

@interface FirefoxCryptoKeyStoreV4 : NSObject <FirefoxCryptoKeyStorage> {

	NSObject*<OS_dispatch_queue> _databaseQueue;
	WBSSQLiteDatabase* _database;
	char _isOpen;
	NSData* _globalSalt;
	NSData* _passwordCheckEntrySalt;
	NSData* _passwordCheckPayload;
	NSData* _encryptedPrivateKey;
	NSData* _passwordCheckIV;

}

@property (nonatomic,readonly) char canOpen; 
@property (nonatomic,readonly) char storesRawPrivateKey; 
@property (nonatomic,readonly) char isKeyStorageUsingFirefox75AndAbove; 
@property (nonatomic,copy,readonly) NSData * globalSaltData; 
@property (nonatomic,copy,readonly) NSData * passwordCheckEntrySalt; 
@property (nonatomic,copy,readonly) NSData * passwordCheckPayload; 
@property (nonatomic,copy,readonly) NSData * passwordCheckIV;                        //@synthesize passwordCheckIV=_passwordCheckIV - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)decodedFirefoxASN1StructureWithPasswordCheckData:(id)arg1 ;
+(id)_decodedNewFirefoxASN1StructureWithPasswordCheckData:(id)arg1 ;
+(id)_decodedOldFirefoxASN1StructureWithPasswordCheckData:(id)arg1 ;
-(void)dealloc;
-(void)_openDatabaseIfNeeded;
-(id)initWithStoreURL:(id)arg1 ;
-(char)canOpen;
-(char)isKeyStorageUsingFirefox75AndAbove;
-(NSData *)globalSaltData;
-(NSData *)passwordCheckEntrySalt;
-(NSData *)passwordCheckPayload;
-(NSData *)passwordCheckIV;
-(id)encryptedPrivateKeyDataWithID:(id)arg1 ;
-(char)storesRawPrivateKey;
-(void)_retrievePasswordCheckEntrySaltAndPayload;
@end

