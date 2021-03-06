/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSUtility.framework/Versions/A/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSPMutableCryptoInfo.h>

@class NSData, NSString, NSArray;

@interface SFUCryptoKey : NSObject <TSPMutableCryptoInfo> {

	unsigned mIterationCount;
	char* mKey;
	unsigned long long mKeyLength;
	NSData* mSaltData;
	NSString* _passphrase;

}

@property (nonatomic,readonly) SFUCryptoKey * cryptoKey; 
@property (nonatomic,readonly) unsigned long long preferredBlockSize; 
@property (nonatomic,readonly) NSArray * blockInfos; 
@property (nonatomic,readonly) char hasDecodedLength; 
@property (nonatomic,readonly) unsigned long long decodedLength; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * passphrase;                              //@synthesize passphrase=_passphrase - In the implementation block
-(void)reset;
-(SFUCryptoKey *)cryptoKey;
-(unsigned long long)decodedLength;
-(unsigned long long)preferredBlockSize;
-(NSArray *)blockInfos;
-(id)mutableCryptoInfoCopy;
-(char)hasDecodedLength;
-(void)addBlockInfo:(id)arg1 ;
-(void)incrementDecodedLengthBy:(unsigned long long)arg1 ;
-(void)dealloc;
-(int)keyType;
-(const char*)keyData;
-(NSString *)passphrase;
-(id)initAes128KeyFromPassphrase:(const char*)arg1 length:(unsigned)arg2 iterationCount:(unsigned)arg3 saltData:(id)arg4 ;
-(unsigned)iterationCount;
-(id)saltData;
-(id)initAes128KeyFromPassphrase:(id)arg1 iterationCount:(unsigned)arg2 ;
-(id)initAes128KeyFromPassphrase:(id)arg1 withIterationCountAndSaltDataFromCryptoKey:(id)arg2 ;
-(id)initAes128KeyFromPassphrase:(const char*)arg1 length:(unsigned)arg2 iterationCount:(unsigned)arg3 ;
-(id)initAes128KeyFromPassphrase:(id)arg1 iterationCount:(unsigned)arg2 saltData:(id)arg3 ;
-(id)initAes128Key:(const char*)arg1 length:(unsigned)arg2 iterationCount:(unsigned)arg3 ;
-(unsigned long long)keyLength;
@end

