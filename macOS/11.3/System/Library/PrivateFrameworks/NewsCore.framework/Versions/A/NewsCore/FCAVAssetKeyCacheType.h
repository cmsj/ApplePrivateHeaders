/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSData;


@protocol FCAVAssetKeyCacheType
@property (nonatomic,copy,readonly) NSData * keyServerCertificate; 
@required
-(void)importAVAssetKey:(id)arg1;
-(id)assetKeyForURI:(id)arg1;
-(id)interestTokenForKeyURIs:(id)arg1;
-(void)saveAssetKeyData:(id)arg1 creationDate:(id)arg2 expirationDate:(id)arg3 forURI:(id)arg4;
-(void)removeAllAssetKeys;
-(void)saveKeyServerCertificate:(id)arg1;
-(void)clearKeyServerCertificate;
-(NSData *)keyServerCertificate;

@end

