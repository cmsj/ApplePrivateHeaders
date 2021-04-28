/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCEventMetric.h>

@class BRCItemID;

@interface BRCFSEventToSyncUpEvent : BRCEventMetric {

	char _isPackage;
	unsigned _genID;
	unsigned long long _fileID;
	BRCItemID* _itemID;
	unsigned long long _mtime;
	unsigned long long _contentSize;
	unsigned long long _syncUpBatchSize;

}

@property (assign,nonatomic) unsigned long long fileID;                       //@synthesize fileID=_fileID - In the implementation block
@property (assign,nonatomic) unsigned genID;                                  //@synthesize genID=_genID - In the implementation block
@property (nonatomic,retain) BRCItemID * itemID;                              //@synthesize itemID=_itemID - In the implementation block
@property (assign,nonatomic) unsigned long long mtime;                        //@synthesize mtime=_mtime - In the implementation block
@property (assign,nonatomic) char isPackage;                                  //@synthesize isPackage=_isPackage - In the implementation block
@property (assign,nonatomic) unsigned long long syncUpBatchSize;              //@synthesize syncUpBatchSize=_syncUpBatchSize - In the implementation block
@property (assign,nonatomic) unsigned long long contentSize;                  //@synthesize contentSize=_contentSize - In the implementation block
-(BRCItemID *)itemID;
-(char)isPackage;
-(unsigned long long)mtime;
-(void)setContentSize:(unsigned long long)arg1 ;
-(unsigned long long)contentSize;
-(unsigned long long)fileID;
-(void)setItemID:(BRCItemID *)arg1 ;
-(void)setFileID:(unsigned long long)arg1 ;
-(id)associatedAppTelemetryEvent;
-(unsigned)genID;
-(void)setGenID:(unsigned)arg1 ;
-(id)subDescription;
-(id)additionalPayload;
-(void)setMtime:(unsigned long long)arg1 ;
-(void)setIsPackage:(char)arg1 ;
-(unsigned long long)syncUpBatchSize;
-(void)setSyncUpBatchSize:(unsigned long long)arg1 ;
@end
