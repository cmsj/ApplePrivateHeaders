/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPFileCoordinatorDelegate;
@class TSUExtendedAttributeCollection, TSPPackage, NSURL;

@interface TSPPackageConverter : NSObject {

	id<TSPFileCoordinatorDelegate> _fileCoordinatorDelegate;
	TSUExtendedAttributeCollection* _extendedAttributeCollection;
	char _isCancelled;
	TSPPackage* _package;
	NSURL* _URL;

}

@property (nonatomic,readonly) TSPPackage * package;                  //@synthesize package=_package - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                           //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) char isCancelled;                      //@synthesize isCancelled=_isCancelled - In the implementation block
@property (nonatomic,readonly) long long packageType; 
@property (nonatomic,readonly) char isValid; 
@property (nonatomic,readonly) char isPasswordProtected; 
+(id)newPackageConverterWithURL:(id)arg1 preserveExtendedAttributes:(char)arg2 error:(id*)arg3 ;
+(char)convertDocumentAtURL:(id)arg1 toPackageType:(long long)arg2 removeEntriesMatchingFilter:(id)arg3 error:(id*)arg4 ;
+(id)newPackageConverterWithURL:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(char)isValid;
-(NSURL *)URL;
-(TSPPackage *)package;
-(char)isCancelled;
-(char)isPasswordProtected;
-(long long)packageType;
-(char)checkPassword:(id)arg1 ;
-(char)writeToURL:(id)arg1 packageType:(long long)arg2 removeEntriesMatchingFilter:(id)arg3 error:(id*)arg4 ;
-(id)initWithURL:(id)arg1 package:(id)arg2 fileCoordinatorDelegate:(id)arg3 preserveExtendedAttributes:(char)arg4 error:(id*)arg5 ;
-(char)path:(id)arg1 matchesFilter:(id)arg2 ;
-(char)enumeratePackageEntriesWithZipArchive:(id)arg1 needsReadChannel:(char)arg2 accessor:(/*^block*/id)arg3 ;
-(unsigned long long)progressTotalUnitCountWithZipArchive:(id)arg1 ;
-(id)newWriteChannelAtPath:(id)arg1 lastModificationDate:(id)arg2 size:(unsigned long long)arg3 CRC:(unsigned)arg4 packageWriter:(id)arg5 error:(id*)arg6 ;
-(char)isDataPath:(id)arg1 ;
-(char)isObjectArchivePath:(id)arg1 ;
-(char)isDocumentPropertiesPath:(id)arg1 ;
-(char)hasEntriesMatchingFilter:(id)arg1 ;
@end

