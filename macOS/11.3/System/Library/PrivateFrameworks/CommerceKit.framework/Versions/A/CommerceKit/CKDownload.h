/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, CKDownloadStatus, CKStoreClient, NSURL, NSArray;

@interface CKDownload : NSObject <NSSecureCoding> {

	unsigned char _priority;
	char _decryptAsset;
	char _verifyAsset;
	NSString* _identifier;
	NSString* _itemIdentifier;
	NSString* _versionIdentifier;
	unsigned long long _primaryAssetSize;
	NSDictionary* _metadata;
	CKDownloadStatus* _status;
	NSString* _installedVersionIdentifier;
	CKStoreClient* _storeClient;
	NSURL* _cancelURL;
	NSArray* _assets;
	NSString* _downloadQueueIdentifier;

}

@property (readonly) CKStoreClient * storeClient;                      //@synthesize storeClient=_storeClient - In the implementation block
@property (readonly) NSURL * cancelURL;                                //@synthesize cancelURL=_cancelURL - In the implementation block
@property (readonly) NSArray * assets;                                 //@synthesize assets=_assets - In the implementation block
@property (copy) NSString * downloadQueueIdentifier;                   //@synthesize downloadQueueIdentifier=_downloadQueueIdentifier - In the implementation block
@property (retain) CKDownloadStatus * status;                          //@synthesize status=_status - In the implementation block
@property (readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSString * itemIdentifier;                        //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (readonly) NSString * versionIdentifier;                     //@synthesize versionIdentifier=_versionIdentifier - In the implementation block
@property (readonly) unsigned long long primaryAssetSize;              //@synthesize primaryAssetSize=_primaryAssetSize - In the implementation block
@property (readonly) NSDictionary * metadata;                          //@synthesize metadata=_metadata - In the implementation block
@property (copy) NSString * installedVersionIdentifier;                //@synthesize installedVersionIdentifier=_installedVersionIdentifier - In the implementation block
@property (assign) unsigned char priority;                             //@synthesize priority=_priority - In the implementation block
@property (assign) char decryptAsset;                                  //@synthesize decryptAsset=_decryptAsset - In the implementation block
@property (assign) char verifyAsset;                                   //@synthesize verifyAsset=_verifyAsset - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)itemIdentifier;
-(void)resume;
-(NSString *)identifier;
-(void)pause;
-(NSString *)versionIdentifier;
-(void)finish;
-(CKDownloadStatus *)status;
-(void)cancel;
-(void)setPriority:(unsigned char)arg1 ;
-(unsigned char)priority;
-(NSDictionary *)metadata;
-(void)setStatus:(CKDownloadStatus *)arg1 ;
-(NSArray *)assets;
-(CKStoreClient *)storeClient;
-(id)_initWithStoreClient:(id)arg1 purchaseResponseDictionary:(id)arg2 ;
-(NSString *)downloadQueueIdentifier;
-(void)setDownloadQueueIdentifier:(NSString *)arg1 ;
-(unsigned long long)primaryAssetSize;
-(NSURL *)cancelURL;
-(char)verifyAsset;
-(char)decryptAsset;
-(NSString *)installedVersionIdentifier;
-(void)setInstalledVersionIdentifier:(NSString *)arg1 ;
-(void)setDecryptAsset:(char)arg1 ;
-(void)setVerifyAsset:(char)arg1 ;
@end

