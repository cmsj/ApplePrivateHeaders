/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PackageKit/PKNetEnabledProduct.h>

@class PKArchive, NSString;

@interface PKSecureNetEnabledProduct : PKNetEnabledProduct {

	PKArchive* _distArchive;
	NSString* _archivePath;
	NSString* _tempArchivePath;

}
+(id)productInfoFilename;
-(id)initByLoadingProductAtURL:(id)arg1 error:(id*)arg2 ;
-(char)didReceiveData:(id)arg1 fromDistributionURL:(id)arg2 error:(id*)arg3 ;
-(id)_distributionArchivePath;
-(char)_setDistributionArchiveFromPath:(id)arg1 ;
-(char)_isDistributionArchiveInProductOnDisk:(id)arg1 ;
-(id)_distributionArchiveWriteURL;
-(char)_populateWithDistributionArchiveReturningError:(id*)arg1 ;
-(void)dealloc;
-(char)commitReturningError:(id*)arg1 ;
-(id)productType;
-(id)_archiveForTrustEvaluation;
@end

