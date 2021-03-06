/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigrationNetworking.framework/Versions/A/SystemMigrationNetworking
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemMigrationNetworking/SMNAction.h>

@class NSArray;

@interface SMNWindowsPathInfoAction : SMNAction {

	char _sizeDirectories;
	NSArray* _paths;

}

@property (retain) NSArray * paths;                   //@synthesize paths=_paths - In the implementation block
@property (assign) char sizeDirectories;              //@synthesize sizeDirectories=_sizeDirectories - In the implementation block
+(int)actionID;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSArray *)paths;
-(void)setPaths:(NSArray *)arg1 ;
-(id)initWithPaths:(id)arg1 ;
-(char)expectsAResult;
-(void)setSizeDirectories:(char)arg1 ;
-(id)requestPayload;
-(char)sizeDirectories;
@end

