/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PKDeferredInstallManager : NSObject {

	NSString* _destinationPath;
	NSString* _rootPath;
	unsigned long long _options;
	NSString* _manifestPath;

}

@property (assign) unsigned long long options;              //@synthesize options=_options - In the implementation block
@property (readonly) NSString * rootPath; 
-(id)initWithDestinationPath:(id)arg1 systemContentManifestPath:(id)arg2 error:(id*)arg3 ;
-(char)addScriptAtPath:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
-(NSString *)rootPath;
-(id)initWithDestinationPath:(id)arg1 error:(id*)arg2 ;
-(char)prepareWithDeferredFileList:(id)arg1 error:(id*)arg2 ;
@end

