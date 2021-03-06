/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Versions/A/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSString, NSError;

@interface ML3DatabaseRecoveryOperation : NSOperation {

	NSString* _path;
	NSError* _error;

}

@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(NSString *)path;
-(void)main;
-(void)_recreateDatabaseWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithDatabaseFilePath:(id)arg1 ;
-(id)_createSQLiteErrorWithCode:(int)arg1 description:(id)arg2 ;
-(id)_lastCorruptionRestoreAttemptDate;
-(void)_updateLastCorruptionRestoreAttemptDate;
@end

