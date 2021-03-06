/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLResourceGenerator : NSObject
+(id)fileAndTableBackedThumbnailManagerRecipesForLibraryID:(id)arg1 ;
+(id)generateAndStoreMissingExpectedLocalResourcesForAsset:(id)arg1 versions:(id)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 reason:(id)arg5 completion:(/*^block*/id)arg6 ;
+(id)expectedLocalResourceRecipesForAsset:(id)arg1 versions:(id)arg2 ;
+(id)locallyUnavailableRecipesFromRecipes:(id)arg1 versions:(id)arg2 asset:(id)arg3 ;
+(void)_continueGeneratingResourcesForAsset:(id)arg1 versions:(id)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 remainingRecipes:(id)arg5 storedRecipes:(id)arg6 attemptedRecipes:(id)arg7 errorsEncountered:(id)arg8 progress:(id)arg9 reason:(id)arg10 completion:(/*^block*/id)arg11 ;
+(id)expectedLocalResourceRecipesForAssetWithLibraryID:(id)arg1 versions:(id)arg2 assetHasAdjustments:(char)arg3 assetIsRAWOrRawPlugJPEGWithRawOnTop:(char)arg4 assetWidth:(long long)arg5 assetHeight:(long long)arg6 assetKind:(short)arg7 assetkindSubtype:(short)arg8 ;
@end

