/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PodcastServices.framework/Versions/A/PodcastServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastServices/PODContentChange.h>
#import <libobjc.A.dylib/PODSecureCoding.h>

@class PODPlaylistChangeEntityData, NSString;

@interface PODPlaylistChange : PODContentChange <PODSecureCoding>

@property (nonatomic,readonly) long long playlistSyncID; 
@property (nonatomic,readonly) PODPlaylistChangeEntityData * entityData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)entityDataClass;
+(id)insertWithPlaylistEntityData:(id)arg1 ;
+(id)updateWithPlaylistEntityData:(id)arg1 ;
+(id)deleteWithPlaylistSyncID:(long long)arg1 ;
-(PODPlaylistChangeEntityData *)entityData;
-(long long)playlistSyncID;
@end

