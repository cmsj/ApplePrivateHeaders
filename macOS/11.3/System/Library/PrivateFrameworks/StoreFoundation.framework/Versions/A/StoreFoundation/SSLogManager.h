/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SSLogManager : NSObject
+(id)sharedManager;
+(id)dateFormatter;
+(id)dateFormatterForFilename;
+(char)useSyslog;
-(void)logLevel:(unsigned long long)arg1 inFunction:(const char*)arg2 inFile:(const char*)arg3 atLine:(unsigned long long)arg4 withFormat:(id)arg5 ;
-(void)manageAppStoreLogOrder:(id)arg1 ;
-(void)manageAppStoreLogs:(id)arg1 withPath:(id)arg2 ;
-(void)_markStart;
-(void)_sendStringToOSLog:(id)arg1 withLevel:(long long)arg2 ;
-(void)logLevel:(unsigned long long)arg1 inFunction:(const char*)arg2 inFile:(const char*)arg3 atLine:(unsigned long long)arg4 withString:(id)arg5 ;
-(id)_createLogFileWithName:(id)arg1 andExtension:(id)arg2 ;
-(void)_sendAuxiliaryFileToASL:(id)arg1 withName:(id)arg2 ;
-(void)logLevel:(unsigned long long)arg1 inFunction:(const char*)arg2 inFile:(const char*)arg3 atLine:(unsigned long long)arg4 forData:(id)arg5 toFilename:(id)arg6 ;
-(void)logLevel:(unsigned long long)arg1 inFunction:(const char*)arg2 inFile:(const char*)arg3 atLine:(unsigned long long)arg4 forPlist:(id)arg5 toFilename:(id)arg6 ;
-(void)logLevel:(unsigned long long)arg1 inFunction:(const char*)arg2 inFile:(const char*)arg3 atLine:(unsigned long long)arg4 forRequest:(id)arg5 toFilename:(id)arg6 ;
-(void)logLevel:(unsigned long long)arg1 inFunction:(const char*)arg2 inFile:(const char*)arg3 atLine:(unsigned long long)arg4 forResponse:(id)arg5 toFilename:(id)arg6 ;
-(void)_markEnd;
@end

