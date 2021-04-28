/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DeviceCheckInternal.framework/Versions/A/DeviceCheckInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DCAssetFetcherContext : NSObject {

	char _allowCatalogRefresh;
	char _ignoreCachedMetadata;

}

@property (assign,nonatomic) char allowCatalogRefresh;               //@synthesize allowCatalogRefresh=_allowCatalogRefresh - In the implementation block
@property (assign,nonatomic) char ignoreCachedMetadata;              //@synthesize ignoreCachedMetadata=_ignoreCachedMetadata - In the implementation block
-(id)description;
-(char)allowCatalogRefresh;
-(void)setAllowCatalogRefresh:(char)arg1 ;
-(char)ignoreCachedMetadata;
-(void)setIgnoreCachedMetadata:(char)arg1 ;
@end
