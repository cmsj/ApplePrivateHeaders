/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Versions/A/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ASDLogFileOptions : NSObject <NSCopying> {

	NSString* _logDirectoryPath;
	NSString* _logFileBaseName;
	unsigned long long _maxLogFileSize;
	long long _maxNumberOfLogFiles;

}

@property (nonatomic,copy) NSString * logDirectoryPath;                      //@synthesize logDirectoryPath=_logDirectoryPath - In the implementation block
@property (nonatomic,copy) NSString * logFileBaseName;                       //@synthesize logFileBaseName=_logFileBaseName - In the implementation block
@property (assign,nonatomic) unsigned long long maxLogFileSize;              //@synthesize maxLogFileSize=_maxLogFileSize - In the implementation block
@property (assign,nonatomic) long long maxNumberOfLogFiles;                  //@synthesize maxNumberOfLogFiles=_maxNumberOfLogFiles - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)logDirectoryPath;
-(void)setLogDirectoryPath:(NSString *)arg1 ;
-(NSString *)logFileBaseName;
-(void)setLogFileBaseName:(NSString *)arg1 ;
-(unsigned long long)maxLogFileSize;
-(void)setMaxLogFileSize:(unsigned long long)arg1 ;
-(long long)maxNumberOfLogFiles;
-(void)setMaxNumberOfLogFiles:(long long)arg1 ;
@end

