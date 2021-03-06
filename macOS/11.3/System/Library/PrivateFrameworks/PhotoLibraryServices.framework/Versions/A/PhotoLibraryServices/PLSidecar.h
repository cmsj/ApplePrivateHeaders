/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSNumber, NSDate, PLManagedAsset, NSURL;


@protocol PLSidecar <PLPTPTransferableSidecarFile>
@property (nonatomic,readonly) NSString * originalFilename; 
@property (nonatomic,readonly) NSNumber * index; 
@property (nonatomic,readonly) NSDate * captureDate; 
@property (nonatomic,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) NSString * filename; 
@property (nonatomic,readonly) NSString * uniformTypeIdentifier; 
@property (nonatomic,readonly) NSNumber * compressedSize; 
@property (nonatomic,readonly) PLManagedAsset * asset; 
@property (nonatomic,readonly) short indexValue; 
@property (nonatomic,readonly) unsigned long long compressedSizeValue; 
@property (nonatomic,readonly) NSURL * fileURL; 
@property (assign,nonatomic) long long ptpTrashedState; 
@required
-(NSURL *)fileURL;
-(NSNumber *)index;
-(NSString *)filename;
-(NSDate *)modificationDate;
-(PLManagedAsset *)asset;
-(NSNumber *)compressedSize;
-(NSString *)uniformTypeIdentifier;
-(NSString *)originalFilename;
-(short)indexValue;
-(NSDate *)captureDate;
-(long long)ptpTrashedState;
-(void)setPtpTrashedState:(long long)arg1;
-(unsigned long long)compressedSizeValue;

@end

