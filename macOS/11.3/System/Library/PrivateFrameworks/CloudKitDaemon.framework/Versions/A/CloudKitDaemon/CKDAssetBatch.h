/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, CKDAssetZone, NSData, NSDictionary, CKDAssetTokenRequest, NSArray;

@interface CKDAssetBatch : NSObject {

	char _isFailed;
	char _useMMCSEncryptionV2;
	NSMutableArray* _assetRecords;
	CKDAssetZone* _assetZone;
	NSData* _authPutRequest;
	NSData* _authPutResponse;
	NSDictionary* _authPutResponseHeaders;
	CKDAssetTokenRequest* _assetTokenRequest;

}

@property (nonatomic,retain) NSMutableArray * assetRecords;                                    //@synthesize assetRecords=_assetRecords - In the implementation block
@property (nonatomic,retain) CKDAssetZone * assetZone;                                         //@synthesize assetZone=_assetZone - In the implementation block
@property (nonatomic,retain) NSData * authPutRequest;                                          //@synthesize authPutRequest=_authPutRequest - In the implementation block
@property (nonatomic,retain) NSData * authPutResponse;                                         //@synthesize authPutResponse=_authPutResponse - In the implementation block
@property (nonatomic,retain) NSDictionary * authPutResponseHeaders;                            //@synthesize authPutResponseHeaders=_authPutResponseHeaders - In the implementation block
@property (assign,nonatomic) char isFailed;                                                    //@synthesize isFailed=_isFailed - In the implementation block
@property (assign,nonatomic,__weak) CKDAssetTokenRequest * assetTokenRequest;                  //@synthesize assetTokenRequest=_assetTokenRequest - In the implementation block
@property (readonly) unsigned sizeUpperBound; 
@property (readonly) unsigned size; 
@property (nonatomic,readonly) NSArray * allMMCSItems; 
@property (nonatomic,readonly) NSArray * allMMCSSectionItems; 
@property (nonatomic,readonly) NSArray * allRereferenceMMCSItems; 
@property (assign,nonatomic) char useMMCSEncryptionV2;                                         //@synthesize useMMCSEncryptionV2=_useMMCSEncryptionV2 - In the implementation block
@property (nonatomic,readonly) NSArray * allRegularAndSectionAndRereferenceItems; 
-(unsigned)size;
-(id)description;
-(char)isFailed;
-(id)CKPropertiesDescription;
-(char)useMMCSEncryptionV2;
-(void)setUseMMCSEncryptionV2:(char)arg1 ;
-(NSMutableArray *)assetRecords;
-(unsigned)sizeUpperBound;
-(NSArray *)allMMCSItems;
-(NSArray *)allRereferenceMMCSItems;
-(NSArray *)allMMCSSectionItems;
-(id)allMMCSAndSectionItems;
-(NSArray *)allRegularAndSectionAndRereferenceItems;
-(id)firstMMCSItemError;
-(char)isEmptyOfRereferencesAssets;
-(CKDAssetTokenRequest *)assetTokenRequest;
-(void)setAssetTokenRequest:(CKDAssetTokenRequest *)arg1 ;
-(id)initWithAssetZone:(id)arg1 ;
-(void)addAssetRecord:(id)arg1 ;
-(CKDAssetZone *)assetZone;
-(char)isEmptyOfAssets;
-(void)setIsFailed:(char)arg1 ;
-(NSData *)authPutRequest;
-(void)setAuthPutRequest:(NSData *)arg1 ;
-(char)isRereferenceAssetBatch;
-(NSData *)authPutResponse;
-(void)setAuthPutResponse:(NSData *)arg1 ;
-(void)setAuthPutResponseHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)authPutResponseHeaders;
-(void)setAssetRecords:(NSMutableArray *)arg1 ;
-(char)isPackageSectionBatch;
-(void)failIfNotDoneAllRegularAndSectionAndRereferenceItemsWithError:(id)arg1 ;
-(void)setAssetZone:(CKDAssetZone *)arg1 ;
@end

