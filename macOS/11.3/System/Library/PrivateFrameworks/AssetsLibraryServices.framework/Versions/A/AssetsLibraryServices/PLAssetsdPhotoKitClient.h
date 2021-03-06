/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/Versions/A/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>
#import <libobjc.A.dylib/PLAssetsdPhotoKitChangesRequestClient.h>

@interface PLAssetsdPhotoKitClient : PLAssetsdBaseClient <PLAssetsdPhotoKitChangesRequestClient>
+(char)inTransactionProxy;
+(char)sendChangesRequest:(id)arg1 usingProxyFactory:(id)arg2 error:(id*)arg3 ;
+(void)sendChangesRequest:(id)arg1 usingProxyFactory:(id)arg2 reply:(/*^block*/id)arg3 ;
+(void)setInTransactionProxy:(char)arg1 queue:(id)arg2 ;
-(id)clientName;
-(char)sendChangesRequest:(id)arg1 error:(id*)arg2 ;
-(id)getUUIDsForCloudIdentifiers:(id)arg1 error:(id*)arg2 ;
-(void)sendChangesRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

