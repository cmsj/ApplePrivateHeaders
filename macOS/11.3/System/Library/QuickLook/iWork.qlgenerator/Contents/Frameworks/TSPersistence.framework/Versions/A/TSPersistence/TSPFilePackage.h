/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPPackage.h>

@class TSUZipArchive, TSUTemporaryDirectory;

@interface TSPFilePackage : TSPPackage {

	TSUZipArchive* _componentZipArchive;
	TSUTemporaryDirectory* _componentZipArchiveTemporaryDirectory;

}
+(char)isValidOrEmptyPackageOrTangierEditingFormatAtURL:(id)arg1 hasNativeUTI:(char)arg2 ;
+(char)isValidPackageAtURL:(id)arg1 ;
+(char)isValidTangierEditingFormatAtURL:(id)arg1 ;
+(id)zipArchiveURLFromPackageURL:(id)arg1 ;
+(unsigned long long)zipArchiveOptions;
+(char)isValidPackageAtZipArchive:(id)arg1 ;
+(char)isValidTangierEditingFormatAtZipArchive:(id)arg1 ;
-(long long)packageType;
-(id)componentZipArchive;
-(void)prepareForDocumentReplacementWithSuccess:(char)arg1 forSafeSave:(char)arg2 originalURL:(id)arg3 ;
-(char)hasDataAtRelativePath:(id)arg1 ;
-(id)newDataStorageAtRelativePath:(id)arg1 decryptionInfo:(id)arg2 packageURL:(id)arg3 lastModificationDate:(out id*)arg4 ;
-(id)packageEntryInfoAtRelativePath:(id)arg1 error:(id*)arg2 ;
-(id)newRawDataReadChannelAtRelativePath:(id)arg1 ;
-(id)newDocumentPropertiesWithURL:(id)arg1 zipProvider:(/*^block*/id)arg2 error:(id*)arg3 ;
-(char)didReloadZipArchive:(id)arg1 packageURL:(id)arg2 error:(id*)arg3 ;
@end

