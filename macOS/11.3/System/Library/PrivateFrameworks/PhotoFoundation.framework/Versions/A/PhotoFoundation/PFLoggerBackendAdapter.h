/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/Versions/A/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <libobjc.A.dylib/PFLoggerBackend.h>

@protocol OS_os_transaction;
@class NSObject, NSString;

@interface PFLoggerBackendAdapter : NSObject <PFLoggerBackend> {

	AQ _pendingTransactionCount;
	NSObject*<OS_os_transaction> _transaction;
	char _runningUnderDebugger;

}

@property (assign) char runningUnderDebugger;                              //@synthesize runningUnderDebugger=_runningUnderDebugger - In the implementation block
@property (nonatomic,readonly) char allowsConcurrentAccess; 
@property (nonatomic,readonly) char formatsMessage; 
@property (nonatomic,readonly) char outputsToDebuggerConsole; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)backendsFromUserDefaultsWithLogLevel:(int)arg1 ;
+(id)pathWithoutParametersFromString:(id)arg1 ;
+(long long)fileSizeMaxBytesFromString:(id)arg1 ;
+(long long)allFileSizeMaxBytesFromString:(id)arg1 ;
+(long long)parseByteSizeValueForKey:(id)arg1 inString:(id)arg2 ;
-(id)init;
-(void)beginTransaction;
-(void)endTransaction;
-(char)allowsConcurrentAccess;
-(void)logFromCodeLocation:(SCD_Struct_PF6*)arg1 facility:(id)arg2 subsystem:(id)arg3 level:(int)arg4 message:(id)arg5 format:(id)arg6 args:(_va_list_tag*)arg7 ;
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)formatsMessage;
-(char)outputsToDebuggerConsole;
-(char)runningUnderDebugger;
-(void)setRunningUnderDebugger:(char)arg1 ;
@end

