/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/Versions/A/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol OS_xpc_object;
@class NSString, NSDictionary, NSObject;

@interface BSXPCBundle : NSObject <BSDescriptionProviding> {

	NSString* _bundleIdentifier;
	NSString* _bundlePath;
	NSString* _executablePath;
	NSDictionary* _infoDictionary;
	NSObject*<OS_xpc_object> _xpcBundle;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundlePath;                      //@synthesize bundlePath=_bundlePath - In the implementation block
@property (nonatomic,copy,readonly) NSString * executablePath;                  //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * infoDictionary;              //@synthesize infoDictionary=_infoDictionary - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> xpcBundle;              //@synthesize xpcBundle=_xpcBundle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mainBundle;
+(id)bundleWithPath:(id)arg1 ;
+(id)bundleWithXPCBundle:(id)arg1 ;
+(id)bundleForPID:(int)arg1 ;
+(id)bundleWithExecutablePath:(id)arg1 ;
-(NSString *)description;
-(NSString *)bundleIdentifier;
-(NSDictionary *)infoDictionary;
-(NSString *)bundlePath;
-(NSString *)executablePath;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(NSObject*<OS_xpc_object>)xpcBundle;
@end
