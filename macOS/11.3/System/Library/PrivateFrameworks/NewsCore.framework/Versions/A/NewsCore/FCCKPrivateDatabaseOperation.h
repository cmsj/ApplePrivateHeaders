/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@class FCCKPrivateDatabase;

@interface FCCKPrivateDatabaseOperation : FCOperation {

	char _skipPreflight;
	char _handleIdentityLoss;
	FCCKPrivateDatabase* _database;

}

@property (nonatomic,retain) FCCKPrivateDatabase * database;              //@synthesize database=_database - In the implementation block
@property (assign,nonatomic) char skipPreflight;                          //@synthesize skipPreflight=_skipPreflight - In the implementation block
@property (assign,nonatomic) char handleIdentityLoss;                     //@synthesize handleIdentityLoss=_handleIdentityLoss - In the implementation block
-(id)init;
-(void)setDatabase:(FCCKPrivateDatabase *)arg1 ;
-(FCCKPrivateDatabase *)database;
-(void)setSkipPreflight:(char)arg1 ;
-(char)skipPreflight;
-(unsigned long long)maxRetries;
-(char)validateOperation;
-(char)canRetryWithError:(id)arg1 retryAfter:(id*)arg2 ;
-(char)handleIdentityLoss;
-(void)runChildCKOperation:(id)arg1 destination:(long long)arg2 ;
-(void)setHandleIdentityLoss:(char)arg1 ;
@end

