/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/Versions/A/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DKEnterSandbox : NSObject
+(id)_bundleId;
+(id)_processName;
+(char*)_getHomeDirectory;
+(char*)_getTempDirectory;
+(char*)_getCacheDirectory;
+(char*)_getMainBundle;
+(char)defaultSandboxWithHelperAppPath:(const char*)arg1 ;
+(char)sandboxWithSeatbeltAbsolutePath:(const char*)arg1 helperAppPath:(const char*)arg2 ;
@end

