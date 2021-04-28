/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, SMSystem_Daemon, NSString, NSMutableSet, NSMutableDictionary, NSMutableArray;

@interface SMCollectIncompatibleApps : NSObject {

	char _shouldMoveFiles;
	char _update;
	NSURL* _alternateQuarantineFolderLocation;
	NSURL* _alternateListRoot;
	SMSystem_Daemon* _system;
	NSURL* _incompatibleAppsFolderUsed;
	NSURL* _listPath;
	NSString* _listName;
	unsigned long long _domain;
	NSMutableSet* _foundFiles;
	NSMutableDictionary* _appGroups;
	NSMutableArray* _foundAppGroups;

}

@property (__weak) SMSystem_Daemon * system;                               //@synthesize system=_system - In the implementation block
@property (retain) NSURL * incompatibleAppsFolderUsed;                     //@synthesize incompatibleAppsFolderUsed=_incompatibleAppsFolderUsed - In the implementation block
@property (retain) NSURL * listPath;                                       //@synthesize listPath=_listPath - In the implementation block
@property (retain) NSString * listName;                                    //@synthesize listName=_listName - In the implementation block
@property (assign) unsigned long long domain;                              //@synthesize domain=_domain - In the implementation block
@property (assign) char shouldMoveFiles;                                   //@synthesize shouldMoveFiles=_shouldMoveFiles - In the implementation block
@property (retain) NSMutableSet * foundFiles;                              //@synthesize foundFiles=_foundFiles - In the implementation block
@property (retain) NSMutableDictionary * appGroups;                        //@synthesize appGroups=_appGroups - In the implementation block
@property (retain) NSMutableArray * foundAppGroups;                        //@synthesize foundAppGroups=_foundAppGroups - In the implementation block
@property (assign) char update;                                            //@synthesize update=_update - In the implementation block
@property (retain) NSURL * alternateQuarantineFolderLocation;              //@synthesize alternateQuarantineFolderLocation=_alternateQuarantineFolderLocation - In the implementation block
@property (retain) NSURL * alternateListRoot;                              //@synthesize alternateListRoot=_alternateListRoot - In the implementation block
-(unsigned long long)domain;
-(char)update;
-(void)setDomain:(unsigned long long)arg1 ;
-(SMSystem_Daemon *)system;
-(id)applicationData;
-(NSString *)listName;
-(void)setListName:(NSString *)arg1 ;
-(void)setUpdate:(char)arg1 ;
-(void)setSystem:(SMSystem_Daemon *)arg1 ;
-(char)collect;
-(id)initWithSystem:(id)arg1 inDomain:(unsigned long long)arg2 quarantine:(char)arg3 isUpdate:(char)arg4 ;
-(void)setAlternateQuarantineFolderLocation:(NSURL *)arg1 ;
-(void)setAlternateListRoot:(NSURL *)arg1 ;
-(NSMutableSet *)foundFiles;
-(char)isPathInIncompatibleApplicationsList:(id)arg1 ;
-(void)setListPath:(NSURL *)arg1 ;
-(void)setShouldMoveFiles:(char)arg1 ;
-(void)setFoundFiles:(NSMutableSet *)arg1 ;
-(void)setFoundAppGroups:(NSMutableArray *)arg1 ;
-(void)setAppGroups:(NSMutableDictionary *)arg1 ;
-(id)initWithList:(id)arg1 useSystem:(id)arg2 inDomain:(unsigned long long)arg3 quarantine:(char)arg4 isUpdate:(char)arg5 ;
-(id)initWithListNamed:(id)arg1 useSystem:(id)arg2 inDomain:(unsigned long long)arg3 quarantine:(char)arg4 isUpdate:(char)arg5 ;
-(NSMutableArray *)foundAppGroups;
-(NSMutableDictionary *)appGroups;
-(char)parseList;
-(char)shouldMoveFiles;
-(char)quarantineFiles;
-(NSURL *)incompatibleAppsFolderUsed;
-(NSURL *)listPath;
-(id)listPathForListNamed:(id)arg1 ;
-(id)loadIncompatibleAppList:(id)arg1 ;
-(char)isPathIncompatible:(id)arg1 dictionaryEntry:(id)arg2 ;
-(char)removeGlimmerBlockerProxy;
-(char)sourcePathExists:(id)arg1 ;
-(NSURL *)alternateListRoot;
-(NSURL *)alternateQuarantineFolderLocation;
-(id)findSafeQuarantinePath:(id)arg1 ;
-(void)setIncompatibleAppsFolderUsed:(NSURL *)arg1 ;
@end
