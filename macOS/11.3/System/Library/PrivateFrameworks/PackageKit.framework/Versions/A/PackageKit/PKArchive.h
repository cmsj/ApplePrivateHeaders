/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDate, NSString, NSData;

@interface PKArchive : NSObject

@property (readonly) NSArray * archiveSignatures; 
@property (readonly) NSDate * archiveSignatureDate; 
@property (readonly) NSString * archivePath; 
@property (readonly) NSData * archiveDigestData; 
@property (readonly) NSString * archiveDigest; 
+(id)archiveWithPath:(id)arg1 options:(id)arg2 ;
+(id)_allArchiveClasses;
+(id)archiveWithPath:(id)arg1 ;
-(id)initForReadingFromPath:(id)arg1 options:(id)arg2 ;
-(char)extractItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(char)_extractFile:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(NSData *)archiveDigestData;
-(id)computedArchiveDigestWithAlgorithm:(id)arg1 ;
-(id)initForReadingFromPath:(id)arg1 ;
-(id)description;
-(char)fileExistsAtPath:(id)arg1 ;
-(id)enumeratorAtPath:(id)arg1 ;
-(char)closeArchive;
-(id)dataForPath:(id)arg1 ;
-(NSString *)archivePath;
-(NSArray *)archiveSignatures;
-(NSDate *)archiveSignatureDate;
-(NSString *)archiveDigest;
-(char)verifyReturningError:(id*)arg1 ;
-(id)fileAttributesAtPath:(id)arg1 ;
@end

