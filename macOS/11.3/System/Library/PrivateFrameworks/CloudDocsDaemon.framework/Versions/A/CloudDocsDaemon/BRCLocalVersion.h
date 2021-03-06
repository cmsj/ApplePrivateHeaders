/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCVersion.h>

@class CKRecord, NSError;

@interface BRCLocalVersion : BRCVersion {

	CKRecord* _uploadedAssets;
	NSError* _uploadError;

}

@property (nonatomic,retain) CKRecord * uploadedAssets;              //@synthesize uploadedAssets=_uploadedAssets - In the implementation block
@property (nonatomic,retain) NSError * uploadError;                  //@synthesize uploadError=_uploadError - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithVersion:(id)arg1 ;
-(id)initFromResultSet:(id)arg1 pos:(int)arg2 ;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
-(void)setUploadError:(NSError *)arg1 ;
-(NSError *)uploadError;
-(id)descriptionWithContext:(id)arg1 ;
-(id)initForPackage:(char)arg1 ;
-(void)_clearSignatures:(unsigned long long)arg1 isPackage:(char)arg2 ;
-(id)initWithLocalVersion:(id)arg1 ;
-(void)updateLocationAndMetaFromFSAtPath:(id)arg1 updateFilename:(char)arg2 filenameOverride:(id)arg3 ;
-(id)isPackageObj;
-(id)sizeObj;
-(unsigned long long)diffAgainstLocalVersion:(id)arg1 ;
-(id)initWithServerVersion:(id)arg1 ;
-(char)shouldRecreateUploadJobGivenDiffs:(unsigned long long)arg1 ;
-(char)isMissingUploadsWithDiffs:(unsigned long long)arg1 ;
-(void)updateFromFSAtPath:(id)arg1 filenameOverride:(id)arg2 ;
-(CKRecord *)uploadedAssets;
-(void)setUploadedAssets:(CKRecord *)arg1 ;
@end

