/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Versions/A/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TransparencyTrustedKeyStore;

@interface TransparencyLogEntryVerifier : NSObject {

	TransparencyTrustedKeyStore* _trustedKeyStore;

}

@property (retain) TransparencyTrustedKeyStore * trustedKeyStore;              //@synthesize trustedKeyStore=_trustedKeyStore - In the implementation block
-(TransparencyTrustedKeyStore *)trustedKeyStore;
-(id)initWithTrustedKeyStore:(id)arg1 ;
-(void)setTrustedKeyStore:(TransparencyTrustedKeyStore *)arg1 ;
-(unsigned long long)verifyLogEntryWithLogLeaf:(id)arg1 position:(unsigned long long)arg2 hashesToRoot:(id)arg3 signedLogHead:(id)arg4 error:(id*)arg5 ;
-(char)verifyInclusionOfLogLeaf:(id)arg1 position:(unsigned long long)arg2 treeSize:(unsigned long long)arg3 treeHead:(id)arg4 hashPath:(id)arg5 error:(id*)arg6 ;
@end

