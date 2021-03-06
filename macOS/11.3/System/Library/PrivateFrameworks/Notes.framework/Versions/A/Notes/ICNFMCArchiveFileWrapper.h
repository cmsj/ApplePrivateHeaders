/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFileWrapper.h>

@class NSFileWrapper, NSData;

@interface ICNFMCArchiveFileWrapper : NSFileWrapper {

	NSFileWrapper* _realFileWrapper;
	NSData* _archiveData;
	long long _archiveType;

}

@property (nonatomic,retain) NSData * archiveData;                           //@synthesize archiveData=_archiveData - In the implementation block
@property (assign,nonatomic) long long archiveType;                          //@synthesize archiveType=_archiveType - In the implementation block
@property (nonatomic,readonly) NSFileWrapper * realFileWrapper; 
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isRegularFile;
-(char)isDirectory;
-(char)isSymbolicLink;
-(id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initRegularFileWithContents:(id)arg1 ;
-(NSData *)archiveData;
-(id)preferredFilename;
-(id)fileWrappers;
-(void)removeFileWrapper:(id)arg1 ;
-(id)addFileWrapper:(id)arg1 ;
-(char)writeToURL:(id)arg1 options:(unsigned long long)arg2 originalContentsURL:(id)arg3 error:(id*)arg4 ;
-(id)keyForFileWrapper:(id)arg1 ;
-(id)serializedRepresentation;
-(id)initWithSerializedRepresentation:(id)arg1 ;
-(id)initDirectoryWithFileWrappers:(id)arg1 ;
-(id)initSymbolicLinkWithDestinationURL:(id)arg1 ;
-(id)addRegularFileWithContents:(id)arg1 preferredFilename:(id)arg2 ;
-(id)initWithData:(id)arg1 archiveType:(long long)arg2 ;
-(void)getCompressedData:(id*)arg1 archiveType:(long long*)arg2 ;
-(long long)archiveType;
-(void)setArchiveType:(long long)arg1 ;
-(void)setArchiveData:(NSData *)arg1 ;
-(unsigned long long)approximateSize;
-(NSFileWrapper *)realFileWrapper;
-(void)_archiveFileWrapperCommonInit;
-(id)initWithURL:(id)arg1 options:(unsigned long long)arg2 compressionLevel:(long long)arg3 error:(id*)arg4 ;
@end

