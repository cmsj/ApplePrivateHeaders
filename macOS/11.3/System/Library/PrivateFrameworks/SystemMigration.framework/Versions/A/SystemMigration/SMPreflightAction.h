/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SMPreflightEngine, SMMacUser_Daemon, NSMutableDictionary;

@interface SMPreflightAction : NSObject {

	SMPreflightEngine* _engine;
	SMMacUser_Daemon* _user;
	NSMutableDictionary* _pathsToPreflight;

}

@property (retain) NSMutableDictionary * pathsToPreflight;              //@synthesize pathsToPreflight=_pathsToPreflight - In the implementation block
@property (__weak) SMPreflightEngine * engine;                          //@synthesize engine=_engine - In the implementation block
@property (retain) SMMacUser_Daemon * user;                             //@synthesize user=_user - In the implementation block
-(id)init;
-(SMMacUser_Daemon *)user;
-(void)setUser:(SMMacUser_Daemon *)arg1 ;
-(unsigned long long)totalSize;
-(char)process;
-(SMPreflightEngine *)engine;
-(void)setEngine:(SMPreflightEngine *)arg1 ;
-(void)addPathToPreflight:(id)arg1 size:(unsigned long long)arg2 ;
-(NSMutableDictionary *)pathsToPreflight;
-(void)setPathsToPreflight:(NSMutableDictionary *)arg1 ;
-(id)sandboxPathForPath:(id)arg1 ;
@end

