/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Versions/A/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class KTApplicationPublicKeyStore, NSString;

@interface KTPatInclusionProofVerifier : NSObject {

	KTApplicationPublicKeyStore* _keyStore;
	NSString* _application;

}

@property (readonly) KTApplicationPublicKeyStore * keyStore;              //@synthesize keyStore=_keyStore - In the implementation block
@property (retain) NSString * application;                                //@synthesize application=_application - In the implementation block
-(NSString *)application;
-(void)setApplication:(NSString *)arg1 ;
-(KTApplicationPublicKeyStore *)keyStore;
-(id)initWithKeyStore:(id)arg1 application:(id)arg2 ;
-(unsigned long long)verifyPatInclusionProofWithPerAppLogEntry:(id)arg1 topLevelTreeEntry:(id)arg2 error:(id*)arg3 ;
@end

