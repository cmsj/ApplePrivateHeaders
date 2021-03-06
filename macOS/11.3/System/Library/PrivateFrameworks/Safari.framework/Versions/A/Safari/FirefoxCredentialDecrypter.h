/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FirefoxCryptoKeyStorage;
@class NSString;

@interface FirefoxCredentialDecrypter : NSObject {

	id<FirefoxCryptoKeyStorage> _keyStore;
	NSString* _masterPassword;

}

@property (nonatomic,copy) NSString * masterPassword;                                                  //@synthesize masterPassword=_masterPassword - In the implementation block
@property (getter=isMasterPasswordCorrect,nonatomic,readonly) char masterPasswordCorrect; 
+(id)_AESDecryptedPrivateKeyFromEncryptedPrivateKey:(id)arg1 unpaddedIV:(id)arg2 entrySalt:(id)arg3 globalSalt:(id)arg4 masterPassword:(id)arg5 ;
+(id)_dataByDecryptingData:(id)arg1 rawKey:(id)arg2 initializationVector:(id)arg3 ;
-(id)_hmacForData:(id)arg1 key:(id)arg2 ;
-(void)setMasterPassword:(NSString *)arg1 ;
-(char)isMasterPasswordCorrect;
-(id)_stringByDecryptingCredentialData:(id)arg1 ;
-(id)_masterPasswordData;
-(id)_decryptedPrivateKeyFromEncryptedPrivateKey:(id)arg1 password:(id)arg2 globalSalt:(id)arg3 entrySalt:(id)arg4 ;
-(id)_extractDecryptedPrivateKeyFromEncryptedPrivateKeyPayload:(id)arg1 entrySalt:(id)arg2 unpaddedIV:(id)arg3 ;
-(void)_getRawKey:(id*)arg1 andInitializationVector:(id*)arg2 fromPassword:(id)arg3 globalSalt:(id)arg4 entrySalt:(id)arg5 ;
-(void)_getKeyId:(id*)arg1 initializationVector:(id*)arg2 cipherText:(id*)arg3 fromEncryptedCredentialData:(id)arg4 ;
-(void)_getEncryptedPrivateKeyData:(id*)arg1 cipherText:(id*)arg2 initializationVector:(id*)arg3 forEncryptedCredentialData:(id)arg4 ;
-(id)_rawKeyFromDecryptedPrivateKey:(id)arg1 ;
-(id)_hashOfPassword:(id)arg1 usingGlobalSalt:(id)arg2 ;
-(id)_combinedHashOfHashedPassword:(id)arg1 entrySalt:(id)arg2 ;
-(id)_k1KeyFromEntrySalt:(id)arg1 combinedHashedPassword:(id)arg2 ;
-(id)_entrySaltByPaddingEntrySalt:(id)arg1 ;
-(id)_temporaryKeyFromPaddedEntrySalt:(id)arg1 combinedHashedPassword:(id)arg2 ;
-(id)_k2KeyFromEntrySalt:(id)arg1 temporaryKey:(id)arg2 combinedHashedPassword:(id)arg3 ;
-(id)_kKeyFromK1Key:(id)arg1 k2Key:(id)arg2 ;
-(void)_getRawKey:(id*)arg1 andInitializationVector:(id*)arg2 fromKKey:(id)arg3 ;
-(id)initWithKeyStore:(id)arg1 ;
-(id)credentialByDecryptingFirefoxCredential:(id)arg1 ;
-(id)_test_init;
-(id)_test_hashOfPassword:(id)arg1 usingGlobalSalt:(id)arg2 ;
-(id)_test_entrySaltByPaddingEntrySalt:(id)arg1 ;
-(id)_test_combinedHashOfHashedPassword:(id)arg1 entrySalt:(id)arg2 ;
-(id)_test_k1KeyFromEntrySalt:(id)arg1 combinedHashedPassword:(id)arg2 ;
-(id)_test_temporaryKeyFromPaddedEntrySalt:(id)arg1 combinedHashedPassword:(id)arg2 ;
-(id)_test_k2KeyFromEntrySalt:(id)arg1 temporaryKey:(id)arg2 combinedHashedPassword:(id)arg3 ;
-(id)_test_kKeyFromK1Key:(id)arg1 k2Key:(id)arg2 ;
-(void)_test_getRawKey:(id*)arg1 andInitializationVector:(id*)arg2 fromKKey:(id)arg3 ;
-(void)_test_getRawKey:(id*)arg1 andInitializationVector:(id*)arg2 fromPassword:(id)arg3 globalSalt:(id)arg4 entrySalt:(id)arg5 ;
-(id)_test_dataByDecryptingData:(id)arg1 rawKey:(id)arg2 initializationVector:(id)arg3 ;
-(void)_test_getKeyId:(id*)arg1 initializationVector:(id*)arg2 cipherText:(id*)arg3 fromEncryptedCredentialData:(id)arg4 ;
-(id)_test_AESDecryptedPrivateKeyFromEncryptedPrivateKey:(id)arg1 unpaddedIV:(id)arg2 entrySalt:(id)arg3 globalSalt:(id)arg4 masterPassword:(id)arg5 ;
-(NSString *)masterPassword;
@end

