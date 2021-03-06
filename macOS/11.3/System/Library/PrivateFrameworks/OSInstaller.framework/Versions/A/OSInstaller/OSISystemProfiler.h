/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OSInstaller.framework/Versions/A/OSInstaller
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface OSISystemProfiler : NSObject {

	char _isSSD;
	unsigned long long _extractorSpeed;
	unsigned long long _deletionSpeed;
	double _migrationTime;
	NSDictionary* _userMachineDictionary;

}

@property (retain) NSDictionary * userMachineDictionary;              //@synthesize userMachineDictionary=_userMachineDictionary - In the implementation block
@property (assign) char isSSD;                                        //@synthesize isSSD=_isSSD - In the implementation block
@property (assign) unsigned long long extractorSpeed;                 //@synthesize extractorSpeed=_extractorSpeed - In the implementation block
@property (assign) unsigned long long deletionSpeed;                  //@synthesize deletionSpeed=_deletionSpeed - In the implementation block
@property (assign) double migrationTime;                              //@synthesize migrationTime=_migrationTime - In the implementation block
+(id)sharedProfiler;
-(void)setTarget:(id)arg1 ;
-(id)initWithOptions:(id)arg1 ;
-(id)modelName;
-(unsigned long long)extractorSpeed;
-(double)migrationTime;
-(unsigned long long)deletionSpeed;
-(void)setIsSSD:(char)arg1 ;
-(void)populateStats;
-(NSDictionary *)userMachineDictionary;
-(void)setUserMachineDictionary:(NSDictionary *)arg1 ;
-(char)isSSD;
-(void)setExtractorSpeed:(unsigned long long)arg1 ;
-(void)setDeletionSpeed:(unsigned long long)arg1 ;
-(void)setMigrationTime:(double)arg1 ;
-(void)dumpFinalStats;
@end

