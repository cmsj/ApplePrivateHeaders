/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemMigration/SMGroup.h>

@class SMDBEntry;

@interface SMGroup_Daemon : SMGroup {

	SMDBEntry* _backing;

}

@property (retain) SMDBEntry * backing;              //@synthesize backing=_backing - In the implementation block
+(char)remoteGroupShouldOverwriteLocal:(id)arg1 ;
-(id)name;
-(id)groupID;
-(unsigned)gid;
-(id)users;
-(id)groupMembers;
-(id)generatedUID;
-(SMDBEntry *)backing;
-(id)entriesForKey:(id)arg1 ;
-(id)_getEntry:(id)arg1 atIndex:(int)arg2 ;
-(void)setBacking:(SMDBEntry *)arg1 ;
-(id)_initWithEntry:(id)arg1 fromSystem:(id)arg2 ;
-(id)groupMembership;
-(id)nestedGroups;
@end
