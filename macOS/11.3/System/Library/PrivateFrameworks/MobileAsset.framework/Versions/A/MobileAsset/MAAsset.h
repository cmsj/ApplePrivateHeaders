/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/Versions/A/MobileAsset
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface MAAsset : NSObject {

	NSDictionary* _attributes;
	NSString* _assetType;
	NSString* _assetId;
	long long _state;
	NSString* _purpose;

}

@property (nonatomic,readonly) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) NSString * assetType;                   //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,readonly) NSString * assetId;                     //@synthesize assetId=_assetId - In the implementation block
@property (readonly) long long state;                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSString * purpose;                     //@synthesize purpose=_purpose - In the implementation block
+(id)getLoadResultFromMessage:(id)arg1 ;
+(void)cancelCatalogDownload:(id)arg1 withPurpose:(id)arg2 then:(/*^block*/id)arg3 ;
+(id)loadSync:(id)arg1 error:(id*)arg2 ;
+(id)loadSync:(id)arg1 withPurpose:(id)arg2 error:(id*)arg3 ;
+(id)loadSync:(id)arg1 allowingDifferences:(id)arg2 error:(id*)arg3 ;
+(void)cancelCatalogDownload:(id)arg1 then:(/*^block*/id)arg2 ;
+(id)loadSync:(id)arg1 allowingDifferences:(id)arg2 withPurpose:(id)arg3 error:(id*)arg4 ;
+(void)startCatalogDownload:(id)arg1 options:(id)arg2 then:(/*^block*/id)arg3 ;
+(void)startCatalogDownload:(id)arg1 then:(/*^block*/id)arg2 ;
+(void)startCatalogDownload:(id)arg1 options:(id)arg2 completionWithError:(/*^block*/id)arg3 ;
-(id)getLocalFilePath;
-(void)startDownloadWithExtractor:(/*^block*/id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startDownloadWithExtractor:(/*^block*/id)arg1 options:(id)arg2 completionWithError:(/*^block*/id)arg3 ;
-(void)invokeClientDownloadCompletion:(long long)arg1 asset:(id)arg2 completionBlockWithError:(/*^block*/id)arg3 ;
-(void)commonAssetDownload:(id)arg1 options:(id)arg2 then:(/*^block*/id)arg3 ;
-(id)createExtractor;
-(void)invokeClientDownloadCompletionAlreadyOnQueue:(long long)arg1 asset:(id)arg2 completionBlockWithError:(/*^block*/id)arg3 ;
-(long long)calculateTimeout;
-(char)wasPreinstalled;
-(char)wasInCatalog;
-(void)startDownloadWithExtractor:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)overrideGarbageCollectionThreshold:(unsigned long long)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)state;
-(NSDictionary *)attributes;
-(char)nonUserInitiatedDownloadsAllowed;
-(void)cancelDownload:(/*^block*/id)arg1 ;
-(void)attachProgressCallBack:(/*^block*/id)arg1 ;
-(void)startDownload:(id)arg1 then:(/*^block*/id)arg2 ;
-(id)getLocalFileUrl;
-(id)initWithAttributes:(id)arg1 ;
-(void)purge:(/*^block*/id)arg1 ;
-(BOOL)spaceCheck:(long long*)arg1 ;
-(NSString *)assetType;
-(NSString *)purpose;
-(void)logAsset;
-(id)getLocalUrl;
-(long long)cancelDownloadSync;
-(long long)purgeSync;
-(id)assetServerUrl;
-(void)startDownload:(/*^block*/id)arg1 ;
-(id)assetProperty:(id)arg1 ;
-(char)wasDownloadable;
-(NSString *)assetId;
-(BOOL)refreshState;
-(char)wasLocal;
-(char)wasPurgeable;
-(void)configDownload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)purgeWithError:(/*^block*/id)arg1 ;
-(void)startDownload:(id)arg1 completionWithError:(/*^block*/id)arg2 ;
-(id)absoluteAssetId;
-(long long)configDownloadSync:(id)arg1 ;
-(id)hashToString:(id)arg1 ;
@end
