/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExtensionFoundation.framework/Versions/A/ExtensionFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExtensionFoundation/ExtensionFoundation-Structs.h>
#import <Foundation/NSOperation.h>

@class NSURL, NSMutableDictionary, NSMutableArray, NSDictionary, NSArray;

@interface EXCacheBuilder : NSOperation {

	NSURL* _sourceURL;
	NSMutableDictionary* __combinedExtensionSDK;
	NSMutableDictionary* __combinedAppleInternalExtensionSDK;
	NSMutableArray* __extensions;
	NSMutableArray* __appleInternalExtensions;

}

@property (retain) NSMutableDictionary * _combinedExtensionSDK;                           //@synthesize _combinedExtensionSDK=__combinedExtensionSDK - In the implementation block
@property (retain) NSMutableDictionary * _combinedAppleInternalExtensionSDK;              //@synthesize _combinedAppleInternalExtensionSDK=__combinedAppleInternalExtensionSDK - In the implementation block
@property (retain) NSMutableArray * _extensions;                                          //@synthesize _extensions=__extensions - In the implementation block
@property (retain) NSMutableArray * _appleInternalExtensions;                             //@synthesize _appleInternalExtensions=__appleInternalExtensions - In the implementation block
@property (readonly) NSURL * sourceURL;                                                   //@synthesize sourceURL=_sourceURL - In the implementation block
@property (readonly) NSDictionary * combinedExtensionSDK; 
@property (readonly) NSDictionary * combinedAppleInternalExtensionSDK; 
@property (readonly) NSArray * extensionPaths; 
@property (readonly) NSArray * appleInternalExtensionPaths; 
+(id)rootURL;
+(id)frameworkPaths;
-(void)main;
-(NSMutableArray *)_extensions;
-(NSURL *)sourceURL;
-(char)isCatalystSupportURL:(id)arg1 ;
-(char)isAppleInternalURL:(id)arg1 ;
-(NSMutableDictionary *)_combinedExtensionSDK;
-(NSMutableDictionary *)_combinedAppleInternalExtensionSDK;
-(void)enumerateBundlesWithPathExtension:(id)arg1 atURL:(id)arg2 block:(/*^block*/id)arg3 ;
-(NSArray *)extensionPaths;
-(NSDictionary *)combinedExtensionSDK;
-(NSArray *)appleInternalExtensionPaths;
-(NSDictionary *)combinedAppleInternalExtensionSDK;
-(void)processExtensionSDKFromBundle:(CFBundleRef)arg1 ;
-(void)processExtensionsFromBundle:(CFBundleRef)arg1 ;
-(void)enumerateFrameworksBundlesWithFrameworkURL:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithSourceURL:(id)arg1 ;
-(char)writeCacheToURL:(id)arg1 options:(unsigned long long)arg2 ;
-(void)set_combinedExtensionSDK:(NSMutableDictionary *)arg1 ;
-(void)set_combinedAppleInternalExtensionSDK:(NSMutableDictionary *)arg1 ;
-(void)set_extensions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)_appleInternalExtensions;
-(void)set_appleInternalExtensions:(NSMutableArray *)arg1 ;
@end

