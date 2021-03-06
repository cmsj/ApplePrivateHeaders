/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/Versions/A/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CryptoTokenKit/CryptoTokenKit-Structs.h>
@class TKClientTokenSession, NSDictionary, NSData, NSString;

@interface TKClientTokenAdvertisedItem : NSObject {

	id _secRef;
	TKClientTokenSession* _session;
	NSDictionary* _keychainAttributes;

}

@property (nonatomic,readonly) TKClientTokenSession * session;                 //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) unsigned long long keyUsage; 
@property (nonatomic,readonly) NSDictionary * keychainAttributes;              //@synthesize keychainAttributes=_keychainAttributes - In the implementation block
@property (nonatomic,readonly) NSData * objectID; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) id keychainClass; 
@property (nonatomic,readonly) SecKeyRef keyRef; 
@property (nonatomic,readonly) SecCertificateRef certificateRef; 
@property (nonatomic,readonly) SecIdentityRef identityRef; 
-(id)initWithSession:(id)arg1 keychainAttributes:(id)arg2 secRef:(id)arg3 ;
-(id)keychainClass;
-(NSString *)localizedName;
-(NSDictionary *)keychainAttributes;
-(NSData *)objectID;
-(SecCertificateRef)certificateRef;
-(SecKeyRef)keyRef;
-(unsigned long long)keyUsage;
-(SecIdentityRef)identityRef;
-(TKClientTokenSession *)session;
@end

