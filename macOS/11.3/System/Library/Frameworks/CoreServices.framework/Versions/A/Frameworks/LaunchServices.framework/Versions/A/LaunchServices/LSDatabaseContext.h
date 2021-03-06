/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface LSDatabaseContext : NSObject

@property (getter=isAccessing,readonly) char accessing; 
@property (readonly) NSData * currentPersistentIdentifier; 
+(id)new;
+(id)sharedDatabaseContext;
-(id)init;
-(id)_init;
-(char)startAccessingReturningError:(id*)arg1 ;
-(char)startAccessingWithOptions:(unsigned long long)arg1 error:(id*)arg2 ;
-(char)startAccessingWithUserID:(unsigned)arg1 error:(id*)arg2 ;
-(char)startAccessingWithUserID:(unsigned)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)stopAccessing;
-(char)isAccessing;
-(NSData *)currentPersistentIdentifier;
-(id)addDatabaseChangeObserver4WebKit:(/*^block*/id)arg1 ;
-(void)removeDatabaseChangeObserver4WebKit:(id)arg1 ;
-(void)observeDatabaseChange4WebKit:(id)arg1 ;
-(void)accessUsingBlock:(/*^block*/id)arg1 ;
-(void)accessWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)accessWithUserID:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)accessWithUserID:(unsigned)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
@end

