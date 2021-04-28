/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PodcastServices.framework/Versions/A/PodcastServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastServices/PODContentChange.h>
#import <libobjc.A.dylib/PODSecureCoding.h>

@class PODShowArtworkChangeEntityData, NSString;

@interface PODShowArtworkChange : PODContentChange <PODSecureCoding>

@property (nonatomic,readonly) long long showSyncID; 
@property (nonatomic,readonly) PODShowArtworkChangeEntityData * entityData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)entityDataClass;
+(id)updateWithArtworkEntityData:(id)arg1 ;
-(PODShowArtworkChangeEntityData *)entityData;
-(long long)showSyncID;
@end
