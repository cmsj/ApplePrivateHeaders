/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPPackageConverter.h>

@interface TSPDirectoryPackageConverter : TSPPackageConverter
-(char)isValid;
-(char)enumeratePackageEntriesWithZipArchive:(id)arg1 needsReadChannel:(char)arg2 accessor:(/*^block*/id)arg3 ;
-(unsigned long long)progressTotalUnitCountWithZipArchive:(id)arg1 ;
-(char)performAccessor:(/*^block*/id)arg1 filePathCharacterIndex:(unsigned long long)arg2 fileURL:(id)arg3 needsReadChannel:(char)arg4 zipArchive:(id)arg5 error:(id*)arg6 ;
@end

