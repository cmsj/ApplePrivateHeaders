/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemPolicy.framework/Versions/A/SystemPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSArray;

@interface SPMigrationScanner : NSObject {

	NSURL* _volumeRoot;
	NSArray* _allKextURLs;
	NSArray* _allBundleURLs;

}

@property (nonatomic,readonly) NSURL * volumeRoot;                   //@synthesize volumeRoot=_volumeRoot - In the implementation block
@property (nonatomic,readonly) NSArray * allKextURLs;                //@synthesize allKextURLs=_allKextURLs - In the implementation block
@property (nonatomic,readonly) NSArray * allBundleURLs;              //@synthesize allBundleURLs=_allBundleURLs - In the implementation block
-(id)initWithRoot:(id)arg1 ;
-(char)performMigrationScan;
-(NSArray *)allBundleURLs;
-(NSURL *)volumeRoot;
-(NSArray *)allKextURLs;
@end

