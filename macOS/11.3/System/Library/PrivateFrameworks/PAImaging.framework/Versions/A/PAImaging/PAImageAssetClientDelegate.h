/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PAImaging.framework/Versions/A/PAImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PAImageAssetClientDelegate <NSObject>
@optional
-(void)assetClientWillLoadMasterImage:(id)arg1;
-(void)assetClient:(id)arg1 failedToLoadMasterImage:(id)arg2;
-(void)assetClientDidLoadMasterImage:(id)arg1;
-(void)assetClientDidLoadThumbnailImage:(id)arg1;
-(void)assetClient:(id)arg1 willUpdateImage:(id)arg2 region:(id)arg3;
-(void)assetClient:(id)arg1 didUpdateImage:(id)arg2 region:(id)arg3;
-(void)assetClient:(id)arg1 didUpdateImageSize:(CGSize)arg2 orientation:(long long)arg3 updateNumber:(unsigned long long)arg4;
-(void)assetClient:(id)arg1 didUpdateImage:(id)arg2 type:(id)arg3 region:(id)arg4 updateNumber:(unsigned long long)arg5 isCurrent:(char)arg6;
-(void)assetClient:(id)arg1 didPrepareRenderForUpdate:(unsigned long long)arg2 isCurrent:(char)arg3;
-(void)assetClient:(id)arg1 failedToLoadType:(id)arg2;
-(void)assetClient:(id)arg1 didUpdateComposition:(id)arg2;

@end
