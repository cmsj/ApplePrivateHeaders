/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPDataStorage.h>

@class NSString, TSUColor;

@interface TSPStreamDataStorage : NSObject <TSPDataStorage>

@property (nonatomic,readonly) char isReadable; 
@property (nonatomic,readonly) unsigned long long encodedLength; 
@property (nonatomic,readonly) NSString * documentResourceLocator; 
@property (nonatomic,readonly) NSString * packageLocator; 
@property (nonatomic,readonly) unsigned char packageIdentifier; 
@property (nonatomic,readonly) char isMissingData; 
@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,readonly) unsigned long long reservedLength; 
@property (nonatomic,readonly) char readOnly; 
@property (nonatomic,readonly) unsigned long long firstUnmaterializedIndex; 
@property (nonatomic,readonly) char needsDownload; 
@property (nonatomic,readonly) char canDownload; 
@property (assign,nonatomic) char gilligan_isRemote; 
@property (assign,nonatomic) long long uploadStatus; 
@property (nonatomic,readonly) id<TSPCryptoInfo> decryptionInfo; 
@property (nonatomic,readonly) unsigned CRC; 
@property (nonatomic,readonly) TSUColor * fallbackColor; 
@property (nonatomic,readonly) CGSize pixelSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)length;
-(unsigned long long)encodedLength;
-(char)readOnly;
-(char)isReadable;
-(unsigned char)packageIdentifier;
-(NSString *)packageLocator;
-(void)performIOChannelReadWithAccessor:(/*^block*/id)arg1 ;
-(id)NSDataWithOptions:(unsigned long long)arg1 ;
-(CGDataProviderRef)newCGDataProvider;
-(CGImageSourceRef)newCGImageSource;
-(NSString *)documentResourceLocator;
-(id)filenameForPreferredFilename:(id)arg1 ;
-(char)isInPackage:(id)arg1 ;
-(char)isMissingData;
-(id)newDataCopyReadChannelProviderWithDocumentURL:(id)arg1 encryptionInfo:(id)arg2 error:(id*)arg3 ;
-(id)AVAssetWithOptions:(id)arg1 usingResourceLoaderForData:(id)arg2 ;
-(id)AVAssetWithOptions:(id)arg1 forData:(id)arg2 ;
-(char)archiveInfoMessage:(DataInfo*)arg1 archiver:(id)arg2 packageWriter:(id)arg3 ;
-(id)writeData:(id)arg1 toPackageWriter:(id)arg2 infoMessage:(DataInfo*)arg3 preferredFilename:(id)arg4 shouldRemoveData:(char)arg5 error:(id*)arg6 ;
-(id)newDataCopyURLProviderWithDocumentURL:(id)arg1 encryptionInfo:(id)arg2 error:(id*)arg3 ;
-(id)newDataCopyInputStreamProviderWithDocumentURL:(id)arg1 encryptionInfo:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)reservedLength;
@end
