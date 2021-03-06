/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSUtility.framework/Versions/A/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/TSUZipArchive.h>

@class TSUZipArchive, TSUZipEntry;

@interface TSUContainedZipArchive : TSUZipArchive {

	TSUZipArchive* _zipArchive;
	TSUZipEntry* _entry;

}
+(id)zipArchiveFromEntry:(id)arg1 zipArchive:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)isValid;
-(id)newArchiveReadChannel;
-(unsigned long long)archiveLength;
-(id)initWithEntry:(id)arg1 zipArchive:(id)arg2 options:(unsigned long long)arg3 ;
-(id)readChannelForEntry:(id)arg1 validateCRC:(char)arg2 ;
-(id)streamReadChannelForEntry:(id)arg1 validateCRC:(char)arg2 ;
@end

