/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData, BRCGenerationID;

@interface BRCPackageItem : NSObject {

	char _isDirty;
	NSString* _symlinkContent;
	NSData* _contentSignature;
	char _mode;
	int _type;
	long long _assetRank;
	unsigned long long _packageID;
	unsigned long long _fileID;
	BRCGenerationID* _generationID;
	NSString* _pathInPackage;
	long long _mtime;
	long long _size;
	NSData* _quarantineInfo;
	NSData* _xattrs;

}

@property (nonatomic,readonly) unsigned long long packageDocumentID;              //@synthesize packageID=_packageID - In the implementation block
@property (nonatomic,readonly) unsigned long long fileID;                         //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,readonly) BRCGenerationID * generationID;                    //@synthesize generationID=_generationID - In the implementation block
@property (nonatomic,readonly) NSString * pathInPackage;                          //@synthesize pathInPackage=_pathInPackage - In the implementation block
@property (nonatomic,readonly) int type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long assetRank;                               //@synthesize assetRank=_assetRank - In the implementation block
@property (nonatomic,readonly) char isFile; 
@property (nonatomic,readonly) char isSymLink; 
@property (nonatomic,readonly) char isDirectory; 
@property (nonatomic,readonly) long long mtime;                                   //@synthesize mtime=_mtime - In the implementation block
@property (nonatomic,readonly) long long size;                                    //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) char mode;                                         //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) NSData * contentSignature; 
@property (nonatomic,readonly) NSData * quarantineInfo;                           //@synthesize quarantineInfo=_quarantineInfo - In the implementation block
@property (nonatomic,readonly) NSString * symlinkContent; 
@property (nonatomic,readonly) NSData * xattrs;                                   //@synthesize xattrs=_xattrs - In the implementation block
+(char)dumpSession:(id)arg1 toContext:(id)arg2 db:(id)arg3 error:(id*)arg4 ;
+(long long)aggregatePackageSizeForPackageID:(unsigned)arg1 session:(id)arg2 ;
+(char)packageChangedAtRelativePath:(id)arg1 ;
+(long long)largestPackageItemSizeInDocumentID:(unsigned)arg1 session:(id)arg2 ;
+(id)packageItemsForItem:(id)arg1 order:(unsigned long long)arg2 ;
+(char)updateSignaturesForFilesInItem:(id)arg1 fromCKPackage:(id)arg2 error:(id*)arg3 ;
+(char)updateSnapshotAtPath:(id)arg1 error:(id*)arg2 ;
+(id)packageItemWithDocumentID:(unsigned)arg1 relativePath:(id)arg2 session:(id)arg3 ;
+(id)packageItemsForDocumentID:(unsigned)arg1 order:(unsigned long long)arg2 session:(id)arg3 ;
+(char)_deleteSnapshotAtPath:(id)arg1 error:(id*)arg2 ;
+(char)_rescanDirectoryInPackage:(id)arg1 error:(id*)arg2 ;
+(id)packageItemForRelpath:(id)arg1 ;
-(long long)size;
-(id)description;
-(int)type;
-(char)isDirectory;
-(long long)mtime;
-(char)mode;
-(BRCGenerationID *)generationID;
-(unsigned long long)fileID;
-(char)isFile;
-(char)isSymLink;
-(NSData *)contentSignature;
-(NSData *)quarantineInfo;
-(NSString *)symlinkContent;
-(NSData *)xattrs;
-(id)initWithPBItem:(id)arg1 forLocalItem:(id)arg2 ;
-(char)saveToDBWithSession:(id)arg1 ;
-(NSString *)pathInPackage;
-(id)initFromPQLResultSet:(id)arg1 session:(id)arg2 error:(id*)arg3 ;
-(id)initWithRelativePath:(id)arg1 markDirty:(char)arg2 ;
-(char)changedAtRelpath:(id)arg1 ;
-(char)setDirty:(char)arg1 session:(id)arg2 ;
-(long long)assetRank;
-(unsigned long long)packageDocumentID;
@end
