/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/Versions/A/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSString, NSObject, NSURL, NSDictionary;

@interface PKBundle : NSObject {

	NSString* _supportPath;
	NSObject*<OS_xpc_object> __bundle;

}

@property (retain) NSObject*<OS_xpc_object> _bundle;              //@synthesize _bundle=__bundle - In the implementation block
@property (readonly) NSURL * url; 
@property (readonly) NSString * path; 
@property (readonly) NSDictionary * infoDictionary; 
@property (readonly) NSString * bundleIdentifier; 
@property (readonly) NSString * supportPath;                      //@synthesize supportPath=_supportPath - In the implementation block
@property (readonly) NSString * executablePath; 
@property (readonly) NSString * plugInsPath; 
-(id)initWithURL:(id)arg1 ;
-(NSString *)path;
-(NSString *)bundleIdentifier;
-(NSDictionary *)infoDictionary;
-(NSObject*<OS_xpc_object>)_bundle;
-(NSURL *)url;
-(id)initWithPath:(id)arg1 ;
-(NSString *)executablePath;
-(void)set_bundle:(NSObject*<OS_xpc_object>)arg1 ;
-(id)initWithXPCBundle:(id)arg1 ;
-(id)initWithExecutablePath:(id)arg1 ;
-(id)stringProperty:(int)arg1 ;
-(NSString *)supportPath;
-(id)bundleDirectory:(id)arg1 ;
-(id)initForMainBundle;
-(id)initWithExecutableURL:(id)arg1 ;
-(NSString *)plugInsPath;
@end

