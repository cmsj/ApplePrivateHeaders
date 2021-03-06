/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/Versions/A/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCListener;

@interface DEDConfiguration : NSObject {

	NSXPCListener* _anonymousListener;

}

@property (retain) NSXPCListener * anonymousListener;              //@synthesize anonymousListener=_anonymousListener - In the implementation block
+(id)sharedInstance;
-(id)identifier;
-(unsigned long long)connectionType;
-(NSXPCListener *)anonymousListener;
-(id)machServiceName;
-(id)errorDomain;
-(const char*)loggingSubsystem;
-(id)dedDirectory;
-(void)setAnonymousListener:(NSXPCListener *)arg1 ;
-(id)classClusterAPIVersion;
-(id)sharedAnonymousListener;
-(void)invalidateTestListeners;
@end

