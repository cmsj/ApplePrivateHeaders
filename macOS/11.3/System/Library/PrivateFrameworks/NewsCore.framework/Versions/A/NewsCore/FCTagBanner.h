/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NewsCore/NewsCore-Structs.h>
@class FCAssetHandle;

@interface FCTagBanner : NSObject {

	FCAssetHandle* _assetHandle;
	CGSize _size;
	FCEdgeInsets _insets;

}

@property (nonatomic,readonly) FCAssetHandle * assetHandle;              //@synthesize assetHandle=_assetHandle - In the implementation block
@property (nonatomic,readonly) CGSize size;                              //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) FCEdgeInsets insets;                      //@synthesize insets=_insets - In the implementation block
-(CGSize)size;
-(FCAssetHandle *)assetHandle;
-(FCEdgeInsets)insets;
-(id)initWithAssetHandle:(id)arg1 size:(CGSize)arg2 insets:(FCEdgeInsets)arg3 ;
@end

