/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PackageKit/PackageKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSDictionary, PKArchive, PKPackageInfo, NSArray, NSString;

@interface PKPackage : NSObject <NSCoding, NSCopying> {

	NSURL* _url;
	NSDictionary* _options;
	PKArchive* _archive;
	PKPackageInfo* _packageInfo;
	NSDictionary* _componentMap;
	NSArray* _firmwareBundleComponents;
	char _populatedSubpaths;

}

@property (readonly) PKPackageInfo * packageInfo; 
@property (readonly) NSString * packageIdentifier; 
@property (readonly) NSString * packageVersion; 
@property (readonly) NSString * scriptsSubpath; 
@property (readonly) PKArchive * archive; 
@property (readonly) NSURL * fileURL; 
+(id)packageWithPath:(id)arg1 options:(id)arg2 ;
+(id)packageWithURL:(id)arg1 options:(id)arg2 ;
+(id)_allPackageClasses;
+(char)canInitWithURL:(id)arg1 ;
+(id)packageWithPath:(id)arg1 ;
+(id)packageWithURL:(id)arg1 ;
-(id)_scriptsDirectory;
-(id)BOMData;
-(id)payloadExtractorWithDestination:(id)arg1 externalRoot:(id)arg2 error:(id*)arg3 ;
-(id)_staticObsoleteFiles;
-(id)_staticObsoleteDirectories;
-(id)_staticObsoleteFilesOrRecursiveDirectories;
-(NSString *)scriptsSubpath;
-(void)_populateComponentSubpaths;
-(void)_addBinarySubpath:(id)arg1 toSubpathsDictionary:(id)arg2 fileAttributes:(id)arg3 ;
-(id)binarySubpathsForComponent:(id)arg1 forArch:(int)arg2 forSubArch:(int)arg3 ;
-(void)enumerateBundleComponentsUsingBlock:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)fileURL;
-(id)components;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(PKArchive *)archive;
-(id)directoryEnumerator;
-(NSString *)packageIdentifier;
-(id)firmwareComponentsOfType:(long long)arg1 ;
-(char)extractFilesForBundleComponent:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(id)componentForIdentifier:(id)arg1 ;
-(NSString *)packageVersion;
-(PKPackageInfo *)packageInfo;
-(id)scriptsExtractorWithDestination:(id)arg1 error:(id*)arg2 ;
-(id)firmwareComponents;
-(id)_componentMap;
-(id)subpathsForComponent:(id)arg1 ;
@end
