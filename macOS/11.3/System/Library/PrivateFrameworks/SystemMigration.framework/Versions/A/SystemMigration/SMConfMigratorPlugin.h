/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SMSystem_FileManagerProtocol;
@class SMMigrationRequest, NSObject;

@interface SMConfMigratorPlugin : NSObject {

	SMMigrationRequest* _migrationRequest;
	NSObject*<SMSystem_FileManagerProtocol> _sourceFilesystem;
	NSObject*<SMSystem_FileManagerProtocol> _targetFilesystem;

}

@property (__weak) SMMigrationRequest * migrationRequest;                                 //@synthesize migrationRequest=_migrationRequest - In the implementation block
@property (__weak) NSObject*<SMSystem_FileManagerProtocol> sourceFilesystem;              //@synthesize sourceFilesystem=_sourceFilesystem - In the implementation block
@property (__weak) NSObject*<SMSystem_FileManagerProtocol> targetFilesystem;              //@synthesize targetFilesystem=_targetFilesystem - In the implementation block
-(void)run;
-(id)initWithRequest:(id)arg1 ;
-(SMMigrationRequest *)migrationRequest;
-(double)estimateTime;
-(void)setMigrationRequest:(SMMigrationRequest *)arg1 ;
-(void)setSourceFilesystem:(NSObject*<SMSystem_FileManagerProtocol>)arg1 ;
-(void)setTargetFilesystem:(NSObject*<SMSystem_FileManagerProtocol>)arg1 ;
-(NSObject*<SMSystem_FileManagerProtocol>)sourceFilesystem;
-(NSObject*<SMSystem_FileManagerProtocol>)targetFilesystem;
@end

