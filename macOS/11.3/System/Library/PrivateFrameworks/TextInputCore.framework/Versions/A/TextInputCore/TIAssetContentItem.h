/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/Versions/A/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TIAsset, TIAssetAttributes, NSURL;

@interface TIAssetContentItem : NSObject {

	TIAsset* _asset;
	TIAssetAttributes* _attributes;
	NSURL* _url;

}

@property (nonatomic,readonly) TIAsset * asset;                             //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) TIAssetAttributes * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                 //@synthesize url=_url - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSURL *)url;
-(TIAssetAttributes *)attributes;
-(TIAsset *)asset;
-(id)initWithAsset:(id)arg1 attributes:(id)arg2 url:(id)arg3 ;
@end

