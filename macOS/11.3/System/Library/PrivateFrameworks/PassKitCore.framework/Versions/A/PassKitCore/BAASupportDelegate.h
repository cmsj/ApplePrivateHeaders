/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BAASupportDelegate <NSObject>
@required
+(char)isInternal;
+(int)generateSigKey:(unsigned)arg1 keyData:(id*)arg2 attestation:(id*)arg3 pubKey:(id*)arg4;
+(int)setSigKey:(unsigned)arg1 expirationDate:(unsigned long long)arg2 keyData:(id)arg3 certificates:(id)arg4;
+(int)getSigKeyExpDate:(unsigned)arg1 expirationDate:(unsigned long long*)arg2;
+(int)getSigKeyCertificates:(unsigned)arg1 certificates:(id*)arg2;
+(int)confirmSigKey:(unsigned)arg1 status:(int)arg2;
+(int)getBlessedUser:(unsigned*)arg1 keybagUUID:(unsigned char)arg2;

@end

