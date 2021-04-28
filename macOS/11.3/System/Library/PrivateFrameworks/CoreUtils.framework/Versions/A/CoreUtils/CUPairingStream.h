/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUtils/CoreUtils-Structs.h>
@class NSString;

@interface CUPairingStream : NSObject {

	CryptoAEADPrivateRef _decryptAEAD;
	unsigned char _decryptNonce[12];
	CryptoAEADPrivateRef _encryptAEAD;
	unsigned char _encryptNonce[12];
	unsigned long long _authTagLength;
	NSString* _name;

}

@property (assign,nonatomic) unsigned long long authTagLength;              //@synthesize authTagLength=_authTagLength - In the implementation block
@property (nonatomic,copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)_cleanup;
-(unsigned long long)authTagLength;
-(void)setAuthTagLength:(unsigned long long)arg1 ;
-(char)prepareWithName:(id)arg1 isClient:(char)arg2 pskData:(id)arg3 error:(id*)arg4 ;
-(id)encryptData:(id)arg1 aadData:(id)arg2 error:(id*)arg3 ;
-(id)encryptData:(id)arg1 aadBytes:(const void*)arg2 aadLength:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)decryptData:(id)arg1 aadData:(id)arg2 error:(id*)arg3 ;
-(id)decryptData:(id)arg1 aadBytes:(const void*)arg2 aadLength:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)encryptInputBytes:(const void*)arg1 inputLength:(unsigned long long)arg2 inputAADBytes:(const void*)arg3 inputAADLength:(unsigned long long)arg4 outputBytes:(void*)arg5 outputAuthTagBytes:(void*)arg6 outputAuthTagLength:(unsigned long long)arg7 error:(id*)arg8 ;
-(char)decryptInputBytes:(const void*)arg1 inputLength:(unsigned long long)arg2 inputAADBytes:(const void*)arg3 inputAADLength:(unsigned long long)arg4 inputAuthTagPtr:(const void*)arg5 inputAuthTagLength:(unsigned long long)arg6 outputBytes:(void*)arg7 error:(id*)arg8 ;
@end
