/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Versions/A/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Rapport/Rapport-Structs.h>
@class RPFileTransferItem, NSObject;

@interface RPFileTransferLargeFileReceiveTask : NSObject {

	int _fileFD;
	CC_SHA256state_st _sha256Ctx;
	RPFileTransferItem* _fileItem;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _taskID;

}

@property (assign,nonatomic) int fileFD;                                      //@synthesize fileFD=_fileFD - In the implementation block
@property (nonatomic,retain) RPFileTransferItem * fileItem;                   //@synthesize fileItem=_fileItem - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) unsigned long long taskID;                       //@synthesize taskID=_taskID - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)taskID;
-(void)setTaskID:(unsigned long long)arg1 ;
-(int)fileFD;
-(void)setFileFD:(int)arg1 ;
-(RPFileTransferItem *)fileItem;
-(void)setFileItem:(RPFileTransferItem *)arg1 ;
@end

