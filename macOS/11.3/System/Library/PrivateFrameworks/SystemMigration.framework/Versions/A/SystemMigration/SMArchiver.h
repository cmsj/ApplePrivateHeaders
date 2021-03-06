/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface SMArchiver : NSObject {

	NSURL* sourcePath;
	NSURL* destinationPath;

}

@property (retain) NSURL * sourcePath; 
@property (retain) NSURL * destinationPath; 
-(NSURL *)sourcePath;
-(void)setSourcePath:(NSURL *)arg1 ;
-(char)archive;
-(char)unarchive;
-(NSURL *)destinationPath;
-(void)setDestinationPath:(NSURL *)arg1 ;
-(id)initWithSourcePath:(id)arg1 destinationPath:(id)arg2 ;
@end

