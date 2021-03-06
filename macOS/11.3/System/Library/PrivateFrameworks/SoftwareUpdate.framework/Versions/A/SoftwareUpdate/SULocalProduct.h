/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdate/SUProduct.h>

@class NSString, NSDictionary, NSMutableSet, NSURL, SUProduct;

@interface SULocalProduct : SUProduct {

	NSString* _productPath;
	NSDictionary* _packageReferences;
	NSMutableSet* _mustCloseAppsToInstallProduct;
	NSURL* _altDistPackageURL;
	SUProduct* _remoteProduct;

}

@property (retain) SUProduct * remoteProduct;              //@synthesize remoteProduct=_remoteProduct - In the implementation block
-(id)packageReferenceForPackageIdentifier:(id)arg1 ;
-(char)hasInstallablePackages;
-(id)distributionEvaluationMetainfo;
-(SUProduct *)remoteProduct;
-(id)_localPackageReferenceFromDistribution:(id)arg1 ;
-(id)initWithProduct:(id)arg1 productPath:(id)arg2 error:(id*)arg3 ;
-(id)personalizedManifestsPath;
-(id)distributionEnvironment;
-(id)invalidPackageRefsInProductDirectory;
-(id)outdatedExtraPackageReferences;
-(char)isCompletelyDownloaded;
-(unsigned long long)sizeAlreadyDownloaded;
-(id)mustCloseAppsToInstallProduct;
-(id)systemImagePackage;
-(void)setRemoteProduct:(SUProduct *)arg1 ;
-(void)dealloc;
-(unsigned long long)installSize;
-(int)restartAction;
-(id)productPath;
-(id)distributionPath;
-(id)orderedPackageSpecifiersToInstall;
@end

