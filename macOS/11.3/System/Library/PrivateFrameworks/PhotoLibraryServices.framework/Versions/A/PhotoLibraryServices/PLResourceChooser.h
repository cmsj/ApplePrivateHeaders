/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLResourceChooser : NSObject
+(id)fileReservationForLargeDisplayableImageFileForAsset:(id)arg1 format:(id)arg2 allowMetadataSnapshot:(char)arg3 forceLarge:(char)arg4 outFilePath:(id*)arg5 outImageType:(long long*)arg6 ;
+(unsigned long long)cloudResourceTypeForAsset:(id)arg1 format:(id)arg2 filePath:(id*)arg3 imageType:(long long*)arg4 ;
+(id)_chooseFileReservationForLargeDisplayableImageFileForAsset:(id)arg1 format:(id)arg2 forceLarge:(char)arg3 allowMetadataSnapshot:(char)arg4 outFilePath:(id*)arg5 outImageType:(long long*)arg6 ;
+(id)fileReservationForImageFileForAsset:(id)arg1 format:(id)arg2 outFilePath:(id*)arg3 outImageType:(long long*)arg4 ;
+(id)_originalItemFromAllItems:(id)arg1 ;
+(id)_penultimateItemFromAllItems:(id)arg1 ;
+(id)_filteredArrayUsingPredicate:(id)arg1 originalItems:(id)arg2 nonMatchingItems:(id*)arg3 ;
+(id)_itemMatchingFormat:(id)arg1 allItems:(id)arg2 acceptableSortedAlternatives:(id*)arg3 ;
+(void)_chooseCloudResourceTypeForFormat:(id)arg1 asset:(id)arg2 optimalCPLResourceType:(unsigned long long*)arg3 localCPLResourceType:(unsigned long long*)arg4 localCPLResourceFilePath:(id*)arg5 fileReservation:(id*)arg6 ;
+(long long)_fileResourceTypeForCloudResourceType:(unsigned long long)arg1 hasAdjustments:(char)arg2 requiresUnadjustedVersion:(char)arg3 ;
-(id)init;
@end
