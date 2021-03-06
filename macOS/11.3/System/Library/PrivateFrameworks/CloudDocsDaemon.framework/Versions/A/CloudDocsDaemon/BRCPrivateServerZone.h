/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCServerZone.h>

@class BRCZonePurgeOperation, NSError, BRCPrivateClientZone;

@interface BRCPrivateServerZone : BRCServerZone {

	BRCZonePurgeOperation* _deleteAllContentsOperation;
	NSError* _deleteAllContentsOperationLastError;

}

@property (nonatomic,readonly) char isSharedZone; 
@property (nonatomic,readonly) char isPrivateZone; 
@property (nonatomic,readonly) BRCZonePurgeOperation * deleteAllContentsOperation; 
@property (nonatomic,readonly) NSError * deleteAllContentsOperationLastError; 
@property (nonatomic,readonly) BRCPrivateClientZone * clientZone; 
-(char)isSharedZone;
-(BRCPrivateClientZone *)clientZone;
-(char)isPrivateZone;
-(char)validateItemsLoggingToFile:(_sFILE*)arg1 db:(id)arg2 ;
-(char)validateStructureLoggingToFile:(_sFILE*)arg1 db:(id)arg2 ;
-(void)deleteAllContentsOnServerWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)asPrivateZone;
-(BRCZonePurgeOperation *)deleteAllContentsOperation;
-(NSError *)deleteAllContentsOperationLastError;
-(void)_checkResultSetIsEmpty:(id)arg1 logToFile:(_sFILE*)arg2 reason:(id)arg3 result:(char*)arg4 ;
-(id)itemByParentID:(id)arg1 andName:(id)arg2 ;
@end

