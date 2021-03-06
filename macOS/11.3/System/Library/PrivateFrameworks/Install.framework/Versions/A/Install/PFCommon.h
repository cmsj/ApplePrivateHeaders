/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Versions/A/Install
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Install/Install-Structs.h>
#import <libobjc.A.dylib/PFMeta.h>
#import <libobjc.A.dylib/PFFileEnumerator.h>

@class PFModule;

@interface PFCommon : NSObject <PFMeta, PFFileEnumerator> {

	PFModule* _module;

}
+(id)allPackageFileTypes;
+(char)fileTypeIsSupported:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)name;
-(id)identifier;
-(id)version;
-(id)location;
-(id)groups;
-(void)skipDescendents;
-(id)dependencies;
-(id)title;
-(id)information;
-(id)moduleType;
-(char)validateContents:(id*)arg1 ;
-(id)certificateIdentity;
-(id)packageFileTypes;
-(id)objectForKey:(id)arg1 localization:(id)arg2 ;
-(id)installPlan;
-(id)searchDefinitions;
-(id)digestOfType:(id)arg1 ;
-(id)taints;
-(char)initFileEnumerator;
-(BOMFSObjectRef)nextFile;
-(BOMFSObjectRef)fileAtPath:(const char*)arg1 ;
-(void)resetFileEnumerator;
-(void)releaseFileData;
-(id)catalogInfo;
-(char*)_resolvedFSPathForBomPath:(const char*)arg1 ;
@end

